 # ✅ **Problem Statement: Bookshelf Stack Implementation (LIFO Simulation)**

A motivational library wants to organize books using a **stack-based bookshelf**, where the **last book placed on the shelf should be the first one removed**. This follows the **LIFO (Last-In First-Out)** principle, just like a memory stack in computers.

You are required to implement a simple bookshelf system with the following specifications:

### **Requirements**

1. **Create a `Book` class**

   * Data members:

     * `title` (string)
     * `author` (string)
   * Provide:

     * A **default constructor** that initializes the book with:

       * Title: `"Rich Dad Poor Dad"`
       * Author: `"Robert K"`
     * A **parameterized constructor** to set custom title and author values.

2. **Create a `Shelf` class that behaves like a Stack**

   * Use a **fixed-size array** of 5 `Book` objects.
   * Maintain an integer `top` to store the index of the topmost book.
   * Initialize `top` as `-1` in the constructor.
   * Implement the following operation:

     * `push(Book)`

       * Add a book to the top of the shelf.
       * (Overflow check not implemented initially.)

3. **In the `main()` function**

   * Create a `Shelf` object named `motivationalShelf`.
   * Create multiple book objects using the parameterized constructor.
   * Push these books onto the shelf one by one.
   * Intentionally push **more than 5 books** to simulate **stack overflow** and observe the behavior.

### **Output / Objective**

* Understand how a **stack works using a real-life analogy** (books on a shelf).
* Visualize **LIFO behavior** in object-oriented design.
* Observe what happens when the system **pushes beyond the fixed capacity** (logical overflow scenario).
* Extend the system later to include:

  * Overflow check
  * Underflow check
  * `pop()` operation
  * `peek()` operation
  * Display all books
 

 