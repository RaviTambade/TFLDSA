#include <stdio.h>
#include <stdbool.h>


// Structure
// Non primitive Data Types
// user defined Data Type
// composite Data Types
struct Product{
    int id;
    char name[50];
    float price;
    int quantity;
};

int main() {

    struct Product  flower1={ 101, "Gerbera", 23.7, 5000};
    struct Product  flower2={ 102, "Rose", 45.4, 7980};
  
    printf(" Flower  Id: %d     Name:%s         price:%.2f   Quantity:%d \n",
                    flower1.id, flower1.name, flower1.price, flower1.quantity);

    printf(" Flower  Id: %d     Name:%s         price:%.2f   Quantity:%d \n",
                    flower2.id, flower2.name, flower2.price, flower2.quantity);
}