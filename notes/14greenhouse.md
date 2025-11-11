 
## 🧑‍🏫Modeling Transflower’s Greenhouse Layout in Two Dimensions

### 🌍 Scene Setting

> “Alright team, imagine we’re walking together across **Transflower Farms at Tambade Mala**.
> The farm is beautifully organized — not in a line, but in **rows and columns** of greenhouses spread across the land.”

Let’s say the farm has a layout of **2 rows** and **5 columns**, making a total of **10 greenhouses**.

```
+------------+------------+------------+------------+------------+
| Greenhouse | Greenhouse | Greenhouse | Greenhouse | Greenhouse |
|   (1,1)    |   (1,2)    |   (1,3)    |   (1,4)    |   (1,5)    |
+------------+------------+------------+------------+------------+
| Greenhouse | Greenhouse | Greenhouse | Greenhouse | Greenhouse |
|   (2,1)    |   (2,2)    |   (2,3)    |   (2,4)    |   (2,5)    |
+------------+------------+------------+------------+------------+
```

Each greenhouse in this **grid** monitors its local climate — temperature, humidity, light, CO₂, and soil moisture — using its **Climate Control System**.

### 🧩 Step 1: Real-world Observation → C Structure Representation

Each greenhouse has sensors that give us multiple data points.
So, in programming terms, each greenhouse will be represented as a **structure**:

```c
typedef struct {
    float temperature;     // in °C
    float humidity;        // in %
    float lightIntensity;  // in Lux
    float co2;             // in ppm
    float soilMoisture;    // in %
} ClimateControl;
```

### 🧩 Step 2: Representing the Farm Layout (2D Array)

> “Now, instead of a single array of 10 greenhouses, we’ll create a **2D array** — a digital twin of our real farm layout.”

```c
#define ROWS 2
#define COLS 5

ClimateControl farm[ROWS][COLS];
```

Here:

* Each **row** represents one strip of greenhouses on the farm.
* Each **column** represents a greenhouse in that strip.

So `farm[0][0]` means Greenhouse at position (Row 1, Column 1).
`farm[1][4]` means Greenhouse at position (Row 2, Column 5).

### ⚙️ Step 3: Simulating Sensor Data

We’ll assign random but realistic readings to each greenhouse’s sensors:

```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
    float temperature;
    float humidity;
    float lightIntensity;
    float co2;
    float soilMoisture;
} ClimateControl;

#define ROWS 2
#define COLS 5

int main() {
    ClimateControl farm[ROWS][COLS];
    srand(time(NULL));

    // Initialize random sensor values for each greenhouse
    for(int r = 0; r < ROWS; r++) {
        for(int c = 0; c < COLS; c++) {
            farm[r][c].temperature   = (rand() % 1500) / 10.0;  // 0–150°C
            farm[r][c].humidity      = (rand() % 101);          // 0–100%
            farm[r][c].lightIntensity= (rand() % 10000);        // 0–9999 Lux
            farm[r][c].co2           = (rand() % 2000) + 300;   // 300–2300 ppm
            farm[r][c].soilMoisture  = (rand() % 101);          // 0–100%
        }
    }

    // Display the data in a tabular 2D layout
    printf("Transflower Farm Climate Data (Tambade Mala)\n");
    printf("------------------------------------------------------\n");

    for(int r = 0; r < ROWS; r++) {
        for(int c = 0; c < COLS; c++) {
            printf("[R%dC%d] T=%.1f°C H=%.1f%% L=%d Lux CO₂=%.0fppm SM=%.1f%%\t",
                   r+1, c+1,
                   farm[r][c].temperature,
                   farm[r][c].humidity,
                   (int)farm[r][c].lightIntensity,
                   farm[r][c].co2,
                   farm[r][c].soilMoisture);
        }
        printf("\n\n");
    }

    return 0;
}
```

### 🖥️ Sample Output

```
Transflower Farm Climate Data (Tambade Mala)
------------------------------------------------------
[R1C1] T=28.4°C H=70.0% L=4201 Lux CO₂=1600ppm SM=45.0%    [R1C2] T=27.2°C H=68.0% L=5100 Lux CO₂=1550ppm SM=47.0%
[R1C3] T=29.1°C H=71.0% L=4950 Lux CO₂=1500ppm SM=49.0%    [R1C4] T=26.8°C H=69.0% L=4855 Lux CO₂=1580ppm SM=51.0%
[R1C5] T=30.2°C H=72.0% L=4700 Lux CO₂=1650ppm SM=52.0%

[R2C1] T=25.9°C H=65.0% L=5201 Lux CO₂=1490ppm SM=44.0%    [R2C2] T=26.1°C H=66.0% L=5300 Lux CO₂=1600ppm SM=46.0%
[R2C3] T=24.5°C H=60.0% L=5102 Lux CO₂=1450ppm SM=48.0%    [R2C4] T=27.7°C H=67.0% L=5555 Lux CO₂=1520ppm SM=50.0%
[R2C5] T=25.3°C H=63.0% L=5001 Lux CO₂=1505ppm SM=49.0%
```

## 🌾 Problem Statement

### **Transflower Farm Climate Monitoring System (2D Layout Edition)**

**Background:**
Transflower Learning Pvt. Ltd. operates 10 smart greenhouses arranged in **2 rows and 5 columns** at **Tambade Mala**.
Each greenhouse monitors environmental conditions using **ClimateControl sensors** for temperature, humidity, light intensity, CO₂, and soil moisture.

**Objective:**
Design a C program that digitally represents this 2D greenhouse layout and simulates real-time sensor data.

### **Functional Requirements:**

1. Define a structure `ClimateControl` with the following members:

   * `float temperature`
   * `float humidity`
   * `float lightIntensity`
   * `float co2`
   * `float soilMoisture`

2. Represent the greenhouse layout as a **2D array**:

   ```c
   ClimateControl farm[ROWS][COLS];
   ```

3. Initialize each greenhouse with **random but realistic** climate values.

4. Display the simulated sensor data in a **2D grid format**, mirroring the real layout.

5. Compute and display:

   * Average temperature of the entire farm.
   * Identify the greenhouse (Row, Column) with the **maximum CO₂** concentration.

### **Expected Output Example:**

```
Transflower Farm Climate Data (Tambade Mala)
------------------------------------------------------
[R1C1] T=28.4°C H=70.0% L=4201 Lux CO₂=1600ppm SM=45.0%   [R1C2] T=27.2°C H=68.0% L=5100 Lux CO₂=1550ppm SM=47.0%
[R1C3] T=29.1°C H=71.0% L=4950 Lux CO₂=1500ppm SM=49.0%   [R1C4] T=26.8°C H=69.0% L=4855 Lux CO₂=1580ppm SM=51.0%
[R1C5] T=30.2°C H=72.0% L=4700 Lux CO₂=1650ppm SM=52.0%

[R2C1] T=25.9°C H=65.0% L=5201 Lux CO₂=1490ppm SM=44.0%   [R2C2] T=26.1°C H=66.0% L=5300 Lux CO₂=1600ppm SM=46.0%
[R2C3] T=24.5°C H=60.0% L=5102 Lux CO₂=1450ppm SM=48.0%   [R2C4] T=27.7°C H=67.0% L=5555 Lux CO₂=1520ppm SM=50.0%
[R2C5] T=25.3°C H=63.0% L=5001 Lux CO₂=1505ppm SM=49.0%

--------------------------------------------------------------
Average Temperature across Farm: 27.0°C
Highest CO₂: Greenhouse [R1C5] with 1650 ppm
```

### 🧭 Mentor Summary

> “In this version, we’ve gone from:
>
> * A **single variable** → one data point
> * To a **1D array of structures** → 10 greenhouses in a list
> * To a **2D array of structures** → a spatial grid representing the actual Transflower Farm
>
> That’s how digital twins of physical systems are modeled — one layer of abstraction at a time.”
