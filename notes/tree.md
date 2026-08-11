

## Tree

> **"Where do you see hierarchy in the real world?"**

Think about:

```text
Company
   ↓
Department
   ↓
Team
   ↓
Employee
```

Or:

```text
E-Commerce
   ↓
Electronics
   ↓
Mobiles
   ↓
Smartphones
```

Or even your computer:

```text
C:\
 ├── Users
 │    ├── Ravi
 │    └── Admin
 │
 ├── Program Files
 │
 └── Windows
```

What do you notice?

There is **parent-child relationship** everywhere.

That is where the Tree data structure becomes natural.

## 1. What is a Tree?

A Tree is a data structure used to represent **hierarchical relationships**.

Think of it like a family tree.

```text
                 Parent
                   │
          ┌────────┴────────┐
          ↓                 ↓
       Child 1           Child 2
          │
      ┌───┴───┐
      ↓       ↓
   Child 3  Child 4
```

Unlike an array:

```text
10 → 20 → 30 → 40
```

a tree gives us **branches**.

That branching nature is the key idea.

## 2. Where does industry use Trees?

Your source gives several important business examples. 

#### File System

```text
Root
 ├── Documents
 │    ├── Resume.pdf
 │    └── Report.docx
 │
 ├── Pictures
 │    ├── Photo1.jpg
 │    └── Photo2.jpg
 │
 └── Videos
```

#### Organization

```text
CEO
 │
 ├── Engineering Manager
 │      ├── Developer
 │      └── Tester
 │
 └── Sales Manager
        ├── Sales Executive
        └── Sales Executive
```

#### Product Catalog

```text
Products
 │
 ├── Electronics
 │    ├── Mobile
 │    ├── Laptop
 │    └── Television
 │
 └── Furniture
      ├── Chair
      └── Table
```

So mentor says:

> **Whenever the business has hierarchy, think about Tree.**

## 3. Now let's do something interesting

Instead of representing:

```text
Company
Department
Employee
```

can we represent a **mathematical expression** using a Tree?

Absolutely.

This is called an:

##  Expression Tree

Your source defines an expression tree as a tree in which each node represents either an **operator or an operand**. 

Consider:

```text
(3 + 4) * (5 - 2)
```

A student might normally calculate:

```text
3 + 4 = 7

5 - 2 = 3

7 * 3 = 21
```

But let's ask a different question:

> **"Can we represent the structure of this expression?"**

Yes.

```text
             *
           /   \
          +     -
         / \   / \
        3   4 5   2
```

Now the expression has become a **tree**.


##  4. Mentor asks: What is the root?

Look at:

```text
             *
           /   \
          +     -
         / \   / \
        3   4 5   2
```

The root is:

```text
*
```

Why?

Because multiplication is the final/main operation:

```text
(3 + 4) * (5 - 2)
```

The left side is:

```text
3 + 4
```

The right side is:

```text
5 - 2
```

Therefore:

```text
             *
           /   \
       3 + 4   5 - 2
```

This is exactly the hierarchical structure of the expression. 



##  5. Leaf Nodes

Now look at:

```text
             *
           /   \
          +     -
         / \   / \
        3   4 5   2
```

What are `3`, `4`, `5`, and `2`?

They don't have children.

Therefore they are **Leaf Nodes**.

```text
3
4
5
2
```

These are the operands.

Your source describes leaf nodes as the values or variables participating in the expression. 

##  6. Internal Nodes

What about:

```text
*
+
-
```

These nodes have children.

Therefore they are **Internal Nodes**.

They represent operations:

```text
+ → Addition
- → Subtraction
* → Multiplication
/ → Division
```

So remember:

```text
              TREE

       Internal Nodes
          Operators
              │
              ↓
        +  -  *  /

       Leaf Nodes
          Operands
              │
              ↓
       3  4  5  2
```


## 7. Now comes the beautiful part — Traversal

Mentor asks:

> "Can I walk through the tree in different ways?"

Yes.

There are three important traversals mentioned in your source. 

#### Inorder

```text
Left → Root → Right
```

For our tree:

```text
3 + 4 * 5 - 2
```

With parentheses appropriately interpreted:

```text
(3 + 4) * (5 - 2)
```

#### Preorder

```text
Root → Left → Right
```

Result:

```text
* + 3 4 - 5 2
```

#### Postorder

```text
Left → Right → Root
```

Result:

```text
3 4 + 5 2 - *
```

This is also called **postfix / Reverse Polish notation** in the source. 


## 8. Why is Postorder important?

Now we reach the interesting programming problem.

Suppose I tell the computer:

```text
3 4 + 5 2 - *
```

The computer can evaluate it using a stack.

But with an expression tree, we can recursively evaluate it.

Start from the root:

```text
             *
           /   \
          +     -
         / \   / \
        3   4 5   2
```

First evaluate left:

```text
3 + 4
```

Result:

```text
7
```

Then evaluate right:

```text
5 - 2
```

Result:

```text
3
```

Finally:

```text
7 * 3
```

Result:

```text
21
```

So the tree naturally supports **bottom-up evaluation**.

Your source explicitly identifies postorder traversal as the natural approach for evaluation. 


## 9. Let's convert this thinking into C##

The original source uses C and pointers. 

Since our students are learning C##, let's translate the **same concept** into C##.

First, what does one Tree Node need?

Ask:

> "What does a node know?"

It needs:

```text
value
left child
right child
```

So:

```csharp
public class TreeNode
{
    public char Value { get; set; }

    public TreeNode? Left { get; set; }

    public TreeNode? Right { get; set; }

    public TreeNode(char value)
    {
        Value = value;
    }
}
```

Notice the difference from C.

In C we needed:

```c
struct TreeNode *left;
struct TreeNode *right;
```

In C##, the object references naturally give us the relationship.


##  10. Build the Expression Tree

Now let's construct:

```text
(3 + 4) * (5 - 2)
```

Start with root:

```csharp
TreeNode root = new TreeNode('*');
```

Then:

```csharp
root.Left = new TreeNode('+');
root.Right = new TreeNode('-');
```

Then build the leaves:

```csharp
root.Left.Left = new TreeNode('3');
root.Left.Right = new TreeNode('4');

root.Right.Left = new TreeNode('5');
root.Right.Right = new TreeNode('2');
```

Now our object graph becomes:

```text
             *
           /   \
          +     -
         / \   / \
        3   4 5   2
```

This is the same tree represented in the uploaded source. 



##11. Mentor asks: How do we evaluate it?

This is where **recursion** becomes our friend. Think:

> "If I give you a node, can you calculate the expression represented by that node?"

Yes.

If it is a leaf:

```text
3
```

return:

```text
3
```

If it is:

```text
+
 / \
3   4
```

calculate:

```text
3 + 4
```

If it is:

```text
*
 / \
+   -
```

first calculate both children and then multiply their results.

That gives us:

```csharp
public int Evaluate(TreeNode? node)
{
    if (node == null)
        return 0;

    // Leaf node
    if (node.Left == null && node.Right == null)
    {
        return node.Value - '0';
    }

    int leftValue = Evaluate(node.Left);
    int rightValue = Evaluate(node.Right);

    switch (node.Value)
    {
        case '+':
            return leftValue + rightValue;

        case '-':
            return leftValue - rightValue;

        case '*':
            return leftValue * rightValue;

        case '/':
            return leftValue / rightValue;

        default:
            throw new InvalidOperationException(
                $"Unknown operator: {node.Value}");
    }
}
```

The recursive evaluation follows the same logic as the source's `evaluateTree()` implementation. 

## 🎯 12. Complete C## Example

```csharp
public class TreeNode
{
    public char Value { get; set; }

    public TreeNode? Left { get; set; }

    public TreeNode? Right { get; set; }

    public TreeNode(char value)
    {
        Value = value;
    }
}

public class ExpressionTree
{
    public int Evaluate(TreeNode? node)
    {
        if (node == null)
            return 0;

        // Leaf node
        if (node.Left == null && node.Right == null)
        {
            return node.Value - '0';
        }

        int leftValue = Evaluate(node.Left);
        int rightValue = Evaluate(node.Right);

        return node.Value switch
        {
            '+' => leftValue + rightValue,
            '-' => leftValue - rightValue,
            '*' => leftValue * rightValue,
            '/' => leftValue / rightValue,

            _ => throw new InvalidOperationException(
                $"Unknown operator: {node.Value}")
        };
    }
}

class Program
{
    static void Main()
    {
        // (3 + 4) * (5 - 2)

        TreeNode root = new TreeNode('*');

        root.Left = new TreeNode('+');
        root.Right = new TreeNode('-');

        root.Left.Left = new TreeNode('3');
        root.Left.Right = new TreeNode('4');

        root.Right.Left = new TreeNode('5');
        root.Right.Right = new TreeNode('2');

        ExpressionTree expressionTree = new ExpressionTree();

        int result = expressionTree.Evaluate(root);

        Console.WriteLine(
            $"Result of expression: {result}");
    }
}
```

Output:

```text
Result of expression: 21
```

The source material gives the same expected result for `(3 + 4) * (5 - 2)`. 


## Mentor's Big Picture

Now step back.

We started with:

```text
Business hierarchy
       ↓
Tree
       ↓
Nodes
       ↓
Parent / Child
       ↓
Binary Tree
       ↓
Expression Tree
       ↓
Traversal
       ↓
Recursion
       ↓
Expression Evaluation
```

This is the kind of progression I would want a Transflower student to understand.

Don't memorize:

```text
TreeNode
Left
Right
Evaluate()
```

Instead ask three questions whenever you see a new data structure:

### Question 1 — What problem does it solve?

Tree solves **hierarchical relationship representation**.

### Question 2 — What does one element look like?

For a binary tree:

```text
Node
 ├── Value
 ├── Left
 └── Right
```

### Question 3 — How do elements relate?

```text
Parent
 ├── Left Child
 └── Right Child
```

Once these three things are clear, the code becomes much easier.



### 🌱 Transflower takeaway

> **Data Structures are not about memorizing classes.**

> They are about learning how to **organize data and model relationships**.

For Queue:

```text
FIFO
 ↓
Front + Rear
```

For Stack:

```text
LIFO
 ↓
Top
```

For Linked List:

```text
Node → Node → Node
```

For Tree:

```text
       Node
      /    \
   Child  Child
```

And for an Expression Tree:

```text
             *
           /   \
          +     -
         / \   / \
        3   4 5   2
```

The moment a student can **draw the data structure on paper before writing the C## code**, the journey from **problem → design → implementation** has begun.

That is the real Transflower way of learning Data Structures.
