### 🧑‍🏫 Data Structures in Real-World Software

So let us do one thing,
We’ll get started for **one more extra day** for our **data structures** sessions.

Now, if you remember, last week we already spent almost **5 to 6 days** trying to get ourselves **comfortable** — not just writing code, but **understanding where data structures are actually used** inside real-world systems.

Because, see, it’s not only about writing a `stack.c` file or a `queue.c` file.
It’s about **why** such things even exist — and **where** they make a difference.

### 💡 Why Data Structures Matter in the Real World

So I said earlier, every **CPU cycle**, every **gigabyte of memory**, and even every **byte stored or transferred** in the cloud **costs money**.

Now imagine — your application is deployed on AWS, Azure, or Google Cloud.
Every millisecond of computation, every MB of RAM your program occupies, and every GB of network bandwidth your service consumes — all of that gets **billed monthly**.

Just like your **electricity bill** from the state electricity board — cloud providers send their own **digital bill**.

So what happens if your program is inefficient?
If your algorithm takes too long or your data structure wastes space —
your bill will simply go up. 📈

### 🧠 The Real Definition of an “Optimized Application”

An application that consumes **less CPU cycles** and **less memory**
— yet performs the same work —
is what I call a **“perfectly designed application.”**

And who creates such applications?
👉 Developers who have mastered **Data Structures and Algorithms (DSA)**.

That’s exactly why companies like **Meta**, **Amazon**, **Microsoft**, **Google**, or **Netflix**
always test your **DSA skills** — because your DSA knowledge shows your ability to **think efficiently**, to **use memory wisely**, and to **build scalable solutions**.

### 🧩 Microscopic vs. Macroscopic View

So, we discussed — understanding **software development** is like understanding the **entire process** — requirement, design, implementation, deployment, and maintenance.

But understanding **data structures** is like putting that process **under a microscope** 🔬
and studying how your **CPU**, **RAM**, and **storage** behave when the code runs.

So DSA gives you the **microscopic view** of computer science — how data moves, how memory is allocated, how instructions execute.

At the same time, we must also build the **macroscopic view**, which is called **System Design Thinking**.
That is — how multiple components, services, databases, APIs, and users work together in a full-fledged **software system**.

### 🧩 DSA + System Design = Complete Engineer

That’s why big companies today don’t just ask for “Can you code a stack?”
They ask:

* “Can you design a chat system like WhatsApp?”
* “Can you handle millions of requests like Amazon?”
* “Can you optimize video streaming like YouTube?”

Because they want engineers who understand **both** sides:

* Microscopic (how data moves in memory)
* Macroscopic (how systems work at scale)

### ⚙️ Recap of Data Structure Types

Then we listed down different categories of **core data structures** —
the building blocks of all software:

| Linear Data Structures | Non-Linear Data Structures |
| ---------------------- | -------------------------- |
| Stack                  | Tree                       |
| Queue                  | Graph                      |
| Linked List            | —                          |

Now, look around your world:

* Your **chat list** in WhatsApp behaves like a **queue**.
* Your **browser back/forward** buttons use a **stack**.
* Your **contacts list** is a **linked list**.
* Your **filesystem folders** form a **tree structure**.
* Your **social network** (friends and connections) is a **graph**.

So, everywhere — these structures exist silently behind the screen, powering your everyday apps.

### 🧠 Final Thought for Today

See, if **AI** or **machine learning** is the *glamour* of modern technology,
then **Data Structures and Algorithms** are its *muscles and bones*. 💪

Because you can’t build intelligent, fast, and reliable software without understanding **how data lives, moves, and dies in memory**.

So remember our key mantra:

> “Artificial Intelligence will not save you — the **fundamentals** will.”

Beautiful. Let’s now retell your entire explanation in **mentor storytelling style**, keeping your natural classroom tone, but making it flow like a guided narrative that inspires and connects concepts step by step — just like how you speak during live mentoring.


All right everyone, let’s recall where we are and why we’re learning what we’re learning.
See, when we look around us — WhatsApp, YouTube, Amazon, games, mobile apps — all of them are **application software**. Each of these applications is built around **specific functionalities**: chatting, shopping, editing, streaming, and so on.

Now, when we say “implement these functionalities,” what do we actually mean?
It means *writing code that works correctly, efficiently, and reliably.*
And the moment you start writing that kind of code, there’s one thing that immediately becomes important — **data structures**.

Let’s zoom out for a moment.
Your applications run **on top of the operating system**, right?
And the operating system itself runs **on top of the hardware**.

Now imagine your operating system — it’s not just sitting idle; it’s constantly managing multiple programs at once. You’re watching YouTube, downloading something in the background, maybe running a compiler, all at the same time.
That’s called **multitasking**.

How does your OS achieve that?
Through something called a **scheduler** — a software component that decides *which task runs when and for how long.*
That scheduler internally uses algorithms like **Round Robin**, **First-Come-First-Serve**, or **Shortest Job First**.

So think about it:
Behind every smooth experience you get from your computer — whether it’s multitasking or performance optimization — there are **algorithms** and **data structures** silently doing their job.

That’s why I always tell you — as computer science students, **think like engineers**.
Don’t just learn to code; learn to **design, develop, and understand** the system as a whole.

When you build your mindset that way, you start noticing that data structures aren’t just a subject — they’re the **foundation of every layer of computing**:

* The **hardware** layer needs them for managing memory efficiently.
* The **system software** layer (like the OS) needs them for scheduling and resource allocation.
* The **application software** layer (like WhatsApp or YouTube) needs them for implementing features that actually work fast and smoothly.

Now, in our previous sessions, we built this foundation step by step.
We explored how **functions** and **nested functions** work, how **stack memory** handles function calls, and how the **stack** grows and shrinks during program execution.
Then we moved to the concept of **callback mechanisms**, understanding how functions can be passed as parameters — something that modern programming relies on heavily.

After that, we entered the world of **heap memory** — the region used for **dynamic memory allocation**.
We compared how different languages handle it:

* In **C or C++**, you manually manage it using `malloc`, `free`, `new`, or `delete`.
* In **Java**, you have a **garbage collector** that takes care of it automatically.

From there, we explored **heap intelligence**, and even tricky topics like **endless loops**, **stack overflow**, and how these situations occur when your memory or recursion isn’t handled properly.

By now, you’ve built a solid understanding of:

* How a program executes,
* How threads and CPU interact,
* How stack and heap cooperate,
* And why data structures are the backbone behind every system — whether it’s the OS, compiler, or your favorite app.

So, from here onward, we’re ready to **dive into implementation-level learning** — building our own data structures, seeing how they live in memory, and how they make our applications efficient and intelligent.

 Excellent — this is exactly the kind of real classroom energy and rhythm you use when mentoring.
Let’s now rewrite this in **mentor storytelling style** — keeping your voice, pacing, and spontaneity intact — but polishing it into a structured, inspiring, and immersive delivery.


All right everyone, so at this moment, let’s bring our complete focus to **implementation**.
We’ve spent enough time building the foundation — understanding how systems work, how memory behaves, and why data structures even exist.
Now, it’s time to **build them**.

Let me do one thing — I’ll just open a notepad and set our **agenda for this week.**
(looks at the screen)
Is the notepad visible, or are you still seeing the Chrome window?
All right, good — so here’s our plan.

### 🗓️ This Week’s Agenda

Our goal this week is **implementation**.
And when I say implementation, we’re going to implement the **core computer science structures** — the ones that define how every application stores, organizes, and processes data.

So our roadmap looks like this:

1. **Stack**
2. **Queue**
3. **Linked List**
4. **Tree**
5. **Graph**

Now, before we jump into coding any of these, there’s one foundational idea we need to understand clearly — something called a **collection**.

### 🧩 What’s a Collection?

When I say *collection*, what comes to your mind?
It simply means — **a group of similar objects kept together.**
Just like you might have a collection of songs, or a collection of photos, in programming we have a **collection of data elements**.

For example, in C you might write:

```c
int count;
```

That’s just one variable.
But what if I want to store *many* integers — say, marks of 50 students?
That’s where we introduce the **array**.

So, you see — an **array** is the simplest form of a **static data structure**, where all the elements are of the same type and stored in continuous memory.

And this array is going to be our **first stepping stone** before we move into advanced data structures like stack, queue, or linked list.

### 🧠 Static vs Dynamic Data Structures

Let me use a new term here — **static data structure**.
When the size of your collection is fixed, like an array, we call it static.
When the size can change — when you can add or remove elements on the go — we call it **dynamic**, like linked lists, trees, or graphs.

So, if we want to truly understand **stack** and **queue**, we must start by mastering arrays — because arrays teach us how to **organize and access data efficiently**.

### 💻 Choosing a Programming Language

Now the next question — *which language should we use for implementation?*
See, data structure is a **conceptual subject**, not limited to any one language.
You can implement the same logic using **C**, **C++**, **Java**, **Python**, or **JavaScript**.
The syntax may change, but the underlying idea remains the same.

Let’s take a quick look:

* **C** and **C++** – compiled, closer to hardware, great for performance understanding.
* **Java** – object-oriented, managed memory.
* **Python**, **JavaScript**, **TypeScript** – scripting languages, interpreted at runtime.

So, we have both **compiled** and **interpreted** languages — both serve as vehicles for logic.

But do you know something interesting?
Even when we write code in **Python**, it is actually **interpreted by a program written in C** — the Python interpreter itself is implemented in C language!
That means the roots of all high-level programming trace back to **C**.

So if you really want to understand programming deeply — how memory is managed, how data moves inside the computer — then **C** is the best place to begin.

### 👩‍💻 Students’ Language Choices

Now, I know each of you has your own preferred language:

* **Sachin, Ajay, Rahul, Karan, Nitish, Anish, Prajwal** — you’re exploring **Python** for logical thinking.
* **Sumit, Sanika, Nikita** — you’re strong in **C language**.
* **Pranita, Akshay, Vishal** — you’re practicing **C#** in the .NET world.

That’s absolutely fine!
Because what we are learning — **data structures** — is universal.
It doesn’t matter whether you write it in C or Python; the **logic** stays the same.

### 🏁 Today’s Plan

So here’s what we’ll do:

* Today, I’ll implement **Stack** using **C language**, because it helps us visualize what’s happening inside memory — the push, pop, and overflow operations at the lowest level.
* Tomorrow, you will **implement the same stack** in your respective languages — Python, C#, or Java.
  That’s our ultimate goal — to learn the **logic once** and express it in **multiple languages**.

Remember:

> *Languages are just tools. Logic is the real language of a developer.*

(🎓 **Mentor storytelling mode on**)

All right everyone, let’s pause here for a second. Let me just take you a little back in time to the way we started our coding journey. Remember the small piece of code we wrote last week — `demo.c`?
Yes, exactly! The one where we simply created a function called **showDetails()**, and then called it from our **main()** function. That was our very first baby step into understanding how a C program breathes and runs.

Now today, I’m just adding a small twist — we’ll create **one more file** called `collection.c`.
And I’ll tell you *why* I’m doing that in a minute. But before that, let’s remind ourselves — whenever we create a new `.c` file, we are in the world of **C programming**.

And being in that world means we follow certain traditions, right?
Like every C program begins by saying,

> “Hey compiler, I’m going to use some standard library functions today.”

So we do that by writing:

```c
#include <stdio.h>
```

That’s our way of greeting the C world!

Then comes the **entry point** of every C program — the one function that kicks everything off:

```c
int main() {
    // program logic
}
```

Now, this `main()` is not just a random function — it’s literally the “doorway” through which your program enters execution. The OS looks for it first, like saying,

> “Okay, show me where to start.”

Inside main, you know what we do? We talk to our program using `printf`.
So I might write something like:

```c
printf("Hello ESA\n");
return 0;
```

And once I hit **Run**, the terminal lights up — *Hello ESA!*
That’s our C program speaking back to us for the first time.

Now once we’ve got that hello working, we try to make it more meaningful.
Let’s say I want to record **students’ marks**.
So what do we do? We start declaring variables:

```c
int student1_score = 67;
int student2_score = 89;
int student3_score = 56;
int student4_score = 59;
int student5_score = 78;
```

Beautiful, right? But… pause for a second and *look carefully.*
How many variables did we just create?
Five!

And what do these represent?
Five students’ marks — but **of the same kind of data** — all are integer marks.

Now here comes the mentor’s question:

> If tomorrow I have 500 students… will I write 500 variables?

No way!
That’s where the idea of a **collection** or **array** comes in — a structured way to store multiple values of the same type using a single name.

So what we’ve just done — declaring 5 separate integer variables — gives us a perfect motivation to learn our next topic: **Arrays in C**.

💡 *So our story today begins with repetition… and ends with realization — that there must be a smarter way to store similar data together.*

(🎓 **Mentor storytelling style — continued**)

Perfect. Let’s pause and *feel* what just happened in our little program, okay?

So, earlier we had **five independent variables** —
`student1_score`, `student2_score`, `student3_score`, `student4_score`, `student5_score`.
Each of them was like a separate tiny box, and you told me correctly — they all lived happily in the **stack memory** of our process.

Now let’s zoom in mentally and see it in action:
Every time you write

```c
int student1_score = 67;
```

you’re actually asking the system:

> “Please give me some room in stack memory to hold this integer value.”

So one by one, as we declared 5 such variables, the compiler quietly created 5 slots on the **stack frame of `main()`**.
Each slot got filled with its corresponding value — 67, 89, 56, 59, 78.
They all stacked up neatly — just like books piled one after the other on a shelf.

Now here’s where the curiosity begins — you stopped and asked,

> “Sir, but can we manage all five students’ marks with just *one* variable name?”

That’s a brilliant question!

So, I smiled and said,

> “Yes, we can. But we need a magical concept for that — a concept that allows us to create *continuous memory* under one name.”

So I went ahead and typed this line:

```c
int student_score[5];
```

Now suddenly something magical happens behind the scenes.

Earlier, we had 5 variables with 5 names.
Now we have **1 variable name** — `student_score`,
but that one name represents **5 integer slots** — one after another, continuously in stack memory.

It’s like you went from holding 5 separate balloons,
to holding one long garland of 5 balloons tied together 🎈🎈🎈🎈🎈.

So the big question I threw at the class was —

> “Now how many variables do you think exist here?”

And you all rightly said: **Just one variable.**

Exactly!
There’s only *one symbol table entry* — one identifier called `student_score`.
But that name internally points to a block of **5 consecutive memory cells**.
That, my friends, is what we call an **Array** —

> A collection of similar data elements stored in **continuous memory locations**, represented by a single name and accessed using an **index**.

Let’s explore what’s really going on inside memory:

| Index | Variable Expression | Stored Value |
| :---: | :------------------ | :----------: |
|   0   | `student_score[0]`  |      78      |
|   1   | `student_score[1]`  |      67      |
|   2   | `student_score[2]`  |      87      |
|   3   | `student_score[3]`  |      15      |
|   4   | `student_score[4]`  |      90      |

All these 5 boxes lie **side by side** in the stack, like:

```
| 78 | 67 | 87 | 15 | 90 |
 ↑
 student_score (points to base address)
```

So now, instead of writing five different variable names,
we can use a single line like this:

```c
printf("Marks scored by student ID 1 = %d", student_score[0]);
```

And for the rest?
Just change the index:

```c
student_score[1]
student_score[2]
student_score[3]
student_score[4]
```

The same name, the same memory type, but different slots — neat, simple, organized.

Now, if we visually compare both approaches:

### 🧩 Before Arrays

```c
int student1_score = 78;
int student2_score = 67;
int student3_score = 87;
int student4_score = 15;
int student5_score = 90;
```

➡️ Too many variable names, more typing, less flexibility.

### 🧠 After Arrays

```c
int student_score[5] = {78, 67, 87, 15, 90};
```

➡️ One name, five slots, simple to loop, easy to manage.

💡 **Mentor insight:**
When you declared `student_score[5]`, the compiler reserved 5 × 4 bytes = 20 bytes (assuming `int` = 4 bytes) in your **stack memory**, and arranged them continuously.
Because we didn’t use `malloc()` or `free()`, this array is a **static stack array**, not a heap one.

So now, the program has evolved — from scattered variables to structured data storage.
This is the beauty of arrays — they give *shape* to data.


Now let’s move to the next level of our story:

> “How do we avoid repeating the `printf` statements and print all five values automatically?”


Excellent! So far, we’ve built a nice picture in our mind —
we started with *five separate variables*, turned them into *one array variable*,
and now we’re finally understanding **how arrays actually live inside memory**.

Let’s pick up from where we left.

Now imagine you’re standing with your whiteboard marker in hand, and I’m drawing this on the board:

🧠 “So whenever I want to read any value, I will always start from the **first memory location** —
the base address — and from there I’ll reach the desired element using the **index**.”

That means, if my array name is `student_score`,
then `student_score[0]` gives me the value at the **base address** (say, 1000).
And `student_score[1]` gives me the value **4 bytes ahead** (since `int` = 4 bytes).

So internally, your CPU calculates the address like this:

```
Address of student_score[i] = BaseAddress + (i * sizeof(int))
```

### 🧩 Let’s make the definition formal:

> **Array** is a **collection of elements of the same data type**
> stored in **contiguous (side-by-side)** memory locations,
> and accessed using an **index**.

I pause for a second and ask the class:
👉 “Who can tell me what *contiguous* means in simple English?”

Someone replies — “Side by side.”

Exactly!

Think of three students standing in one straight line:
Student1, Student2, Student3 — all side by side.
That’s what contiguous means — **no gaps between them**.

So if each student is holding one mark value (78, 67, 87...),
they are standing shoulder-to-shoulder in memory.
That’s what an array looks like in the computer’s mind.

Now I draw this on the board:

```
Address →   1000   1004   1008   1012   1016   1020   1024   1028
Value   →    78     79     80     81     82     83     84     85
Index   →     0      1      2      3      4      5      6      7
```

See the magic?
Every next value starts **4 bytes ahead** of the previous one.
That’s why we say **contiguous memory** — like consecutive compartments of a train 🚆.

### 🌱 Local vs Global Arrays

Now, here’s a small but important twist.

If I declare the array **inside** the `main()` function, like this:

```c
int student_score[8];
```

then this array is a **local variable** —
it lives inside the **stack memory** of the `main()` function.

But if I declare it **outside** the `main()` function:

```c
int student_score[8];  // declared before main
```

then it becomes a **global variable** —
stored in the **global/static segment** of the process memory.

So, if someone asks:

> “Sir, where exactly will my array live in memory?”

Your answer depends on where it’s declared:

* Inside a function → **Stack**
* Outside all functions → **Global/Static Memory**
* Created using `malloc()` → **Heap**

This is where understanding of **memory segments** becomes powerful.

### 💻 Now, what about printing all values?

Earlier, we were writing:

```c
printf("Marks scored by student 1 = %d", student1_score);
printf("Marks scored by student 2 = %d", student2_score);
printf("Marks scored by student 3 = %d", student3_score);
```

and so on.

That means, for 8 students, we wrote 8 `printf()` lines — so repetitive!
So, as a programmer, we start thinking — “There must be a better way.”

And yes — there is!
Because arrays are **indexed** and **contiguous**, we can easily use a **for loop**.

### 🧠 The Elegant Way

```c
#include <stdio.h>

int main() {
    int student_score[8];
    for (int i = 0; i < 8; i++) {
        student_score[i] = 78 + i;  // assigning marks
    }

    for (int i = 0; i < 8; i++) {
        printf("Marks scored by Student ID %d = %d\n", i, student_score[i]);
    }

    return 0;
}
```

When this runs,
the first loop initializes the marks — `78, 79, 80, ...`
and the second loop prints each one neatly.

Now the entire work that earlier took **16+ lines**
has been reduced to **just 6 compact lines** — clear, structured, and logical.

That’s the **power of arrays** — they make your code **data-driven** instead of **hard-coded**.

### 🧮 Memory Analysis

Now I ask, “How many variables do you have here?”
And the class says — “One!”

Exactly — only **one array variable**, `student_score`.
But inside it, there are **8 integer elements**.

So the array holds:

* 1 variable name (symbol)
* 8 elements (data cells)
* 32 bytes of total space (since 8 × 4 = 32 bytes)

Now let’s visualize how those 32 bytes are stored:

```
Address  → 1000 | 1004 | 1008 | 1012 | 1016 | 1020 | 1024 | 1028
Value    →  78  |  79  |  80  |  81  |  82  |  83  |  84  |  85
Index    →   0  |   1  |   2  |   3  |   4  |   5  |   6  |   7
```

So if the base address (index 0) is `1000`,
then `student_score[3]` is stored at `1000 + (3 * 4)` = `1012`.

That’s how CPU calculates the exact location of every array element.

### 🧭 Mentor reflection:

> “This is why arrays are so efficient.
> They give us **direct access** to any element in memory —
> no searching, no linking, just pure address arithmetic.”

And that’s why, when you print the array using a loop,
your CPU is simply walking through memory in perfect rhythm —
like counting steps on a straight path — 1000, 1004, 1008, 1012...
That’s contiguous storage in action.

Now the question I’d ask the class before moving ahead:

> “What if I want to store *names* of students instead of marks?
> Can we still use an array?”

That’s where **character arrays** come into the story —
the building blocks of **strings** in C.

✨ **“Product.c: From Arrays to Structures”** ✨

All right team, let’s pick up where we left off — yesterday we explored *arrays* as a way to store multiple values of the **same data type** in contiguous memory locations. Today, we go one level higher — let’s learn how to represent a **real-world entity** that is made up of *different* data types.

### 🧠 The Scenario — “Product.c”

Imagine we are working for a company called **Transflower**, which has a beautiful **greenhouse in Tamade Mala**.
We grow many types of flowers — **Rose**, **Lotus**, **Gerbera**, **Lily**, and **Jasmine**.
Each flower is a **product**.
And every product has some information:

* An **ID** (integer)
* A **name** (string)
* A **price** (float/double)
* A **quantity** (integer)

Now the question is — how do we represent this flower as a *single unit of information*?

Earlier, we would’ve written:

```c
int id = 101;
char name[20] = "Gerbera";
float price = 23.7;
int quantity = 5000;
```

But you see what’s happening?
These are **four separate variables**, yet together they describe one flower.
We need something that can *hold all these related pieces together* — just like how a *bouquet* holds multiple flowers! 🌸💐

### 🧩 Enter the `struct` — Your First User-Defined Type

C language gives us a wonderful feature called **structure**.
A `struct` is a **non-primitive data type**, a *user-defined composite type* that groups multiple fields of different data types under one name.

Let’s define it:

```c
#include <stdio.h>

struct Product {
    int id;
    char name[50];
    float price;
    int quantity;
};
```

Here, `Product` is not a variable — it’s a *new data type* created by us.
It’s our own customized data structure.

### 🌷 Creating Flower Objects

Now, just like we create `int x;`, we can create:

```c
struct Product flower1 = {101, "Gerbera", 23.7, 5000};
struct Product flower2 = {102, "Rose", 45.5, 3000};
struct Product flower3 = {103, "Lotus", 55.2, 2000};
struct Product flower4 = {104, "Lily", 18.4, 7000};
struct Product flower5 = {105, "Jasmine", 12.3, 9000};
```

Here, we are using **only one struct definition**, but we have **five different variables (objects)** — `flower1` to `flower5`.

All five exist **on the stack**, since they are declared inside `main()`.

### 🖨️ Printing Product Details

Let’s print them beautifully:

```c
printf("Flower ID: %d\n", flower1.id);
printf("Name: %s\n", flower1.name);
printf("Price: %.2f\n", flower1.price);
printf("Quantity: %d\n", flower1.quantity);
```

Or, you can reuse the same `printf()` logic for each flower:

```c
printf("Flower ID: %d, Name: %s, Price: %.2f, Quantity: %d\n",
       flower2.id, flower2.name, flower2.price, flower2.quantity);
```

### 💡 What Did We Achieve?

Earlier we used **arrays** to represent *multiple values of the same type*.
Now, using **structures**, we can represent *multiple attributes of one entity*.
So the difference is:

| Concept | Purpose               | Example               |
| ------- | --------------------- | --------------------- |
| Array   | Same-type values      | Marks of 5 students   |
| Struct  | Different-type values | Details of one flower |

### 🧰 Next Steps — “Your Turn”

Now that you understood `Product.c`, your assignment for tomorrow is:

🔹 Implement similar programs in other languages —
`Product.java`, `Product.py`, `Product.cs` — using **class** instead of **struct**.

Because every modern language evolved from this same principle of **user-defined data structures**.

🔹 Then we’ll move ahead to the next concept — **Stack**.
Just like we described *product attributes* today, we’ll describe *stack attributes* tomorrow — size, top, elements, and operations like push/pop.

### 🏁 Mentor’s Closing Words

So today we learned how **C structures help us move from primitive to composite**, from **data** to **entity**, and from **variables** to **objects**.

Just as we grow flowers in a greenhouse, in programming we “grow” data structures in memory 🌿.

Tomorrow, we’ll see how to **organize** them one over another — yes, our next structure: **the Stack**. Let us get connected tomorrow at TFL TAP Classroom. Enjoy  your time.