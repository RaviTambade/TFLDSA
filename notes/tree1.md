# Tree Data Structure

# Building Enterprise Software Through Relationships

> **"A Tree is not just a data structure; it is a model of how businesses organize information, represent relationships, and make searching millions of records fast and efficient."**

# Introduction

So far, we have learned:

* Arrays store collections of data.
* Linked Lists allow dynamic growth.
* Stacks manage Last-In-First-Out operations.
* Queues process requests fairly using First-In-First-Out.

But real-world business applications are rarely linear. Think about everyday life.

* A company's organizational chart
* Computer folders and files
* Product categories on Amazon
* Insurance policy hierarchy
* Hospital departments
* Family trees

These are **hierarchical relationships**, not simple lists. This is exactly where the **Tree Data Structure** comes into the picture.

# A Story from an Insurance Company

Imagine you have joined **Transflower Insurance Services** as a Software Engineer. Your manager gives you a task.

> "Build a dashboard showing all insurance products."

You open the business documents. Instead of one long list, you find something like this:

```
Insurance Products

├── Life Insurance
│     ├── Term Insurance
│     ├── Whole Life
│     └── Child Plan
│
├── Health Insurance
│     ├── Individual
│     ├── Family Floater
│     └── Senior Citizen
│
└── Vehicle Insurance
      ├── Bike
      ├── Car
      └── Commercial Vehicle
```

You immediately realize... This is **not** a linked list. This is **not** an array. This is a **Tree**.


# What is a Tree?

A Tree is a **non-linear data structure** that stores data in a hierarchical manner. Every Tree starts with one special node.

```
             Insurance
                 |
      -----------------------
      |         |           |
    Life     Health      Vehicle
```

This top-most node is called the **Root**. Every other node grows from it. Just like a real tree grows from its trunk.

# Tree Terminology

Consider this example.

```
                 Insurance
               /     |      \
          Life     Health   Vehicle
          /  \        |       /   \
      Term  Whole  Family   Bike  Car
```

## Root Node

The first node.

```
Insurance
```

Everything starts here.


## Parent Node

A node having child nodes.

```
Insurance
```

is parent of

```
Life
Health
Vehicle
```


## Child Node

Nodes connected below a parent.

```
Life
```

is child of

```
Insurance
```


## Leaf Node

Nodes without children.

```
Term
Whole
Family
Bike
Car
```

These are called leaf nodes.


## Level

Distance from the root.

```
Level 0

Insurance

Level 1

Life Health Vehicle

Level 2

Term Whole Family Bike Car
```


## Height

Longest path from root to the deepest leaf.

Height helps determine how efficiently we can search.


# Why Not Use an Array?

Imagine an insurance company selling **50 lakh policies**. If every product were stored in one array... Finding one specific product would require checking many entries. But with a Tree...

```
Insurance

↓

Health

↓

Family Floater
```

Only a few comparisons are needed. That is why Trees make searching much faster.

---

# Tree in the Insurance Management System

Our application already stores:

* Customers
* Policies
* Claims
* Premiums

Now imagine another module.

```
Insurance Products
```

Every product belongs to a category.

```
Insurance

├── Life
├── Health
└── Vehicle
```

Each category contains multiple products. Perfect example of a Tree.

---

# Business Scenario 1

## Insurance Product Catalog

```
Insurance

├── Life
│     ├── Term
│     └── Child Plan
│
├── Health
│     ├── Individual
│     └── Family
│
└── Vehicle
      ├── Bike
      └── Car
```

Customers navigate categories naturally.

---

# Business Scenario 2

## Company Organization

```
CEO

├── Sales Manager
│      ├── Sales Executive 1
│      └── Sales Executive 2
│
├── HR Manager
│
└── IT Manager
       ├── Developer
       ├── Tester
       └── DevOps
```

Every employee reports to another employee.

---

# Business Scenario 3

## Folder Structure

```
C:

├── Projects
│      ├── Insurance
│      └── Banking
│
├── Documents
│
└── Downloads
```

Your operating system itself uses Trees.

---

# Business Scenario 4

## ASP.NET Core Application Structure

```
InsuranceSolution

├── Controllers
│     ├── CustomerController
│     ├── PolicyController
│     └── ClaimController
│
├── Models
│
├── Services
│
├── Repositories
│
└── Views
```

Every ASP.NET Core project is organized like a Tree.


# Business Scenario 5

## Website Navigation

```
Home

├── Products
│      ├── Life
│      ├── Health
│      └── Vehicle
│
├── Claims
│
├── Premium Calculator
│
└── Contact
```

Menus naturally form Trees.

# Enterprise Applications of Trees

Trees are everywhere in enterprise software.

## 1. Database Indexes

Databases like SQL Server, MySQL, PostgreSQL, and Oracle use **B-Trees** to search millions of records quickly. Without Trees... Searching customer records would become much slower.

## 2. File Systems

Windows, Linux, and macOS organize folders and files using Trees.

## 3. XML & HTML Documents

Every web page is represented as a **DOM Tree**.

```
HTML

↓

Body

↓

Div

↓

Button
```

JavaScript works by traversing this Tree.


## 4. ASP.NET Core Routing

When a request arrives...

```
Browser
↓
Routing
↓
Controller
↓
Action
↓
Service
↓
Repository
↓
Database
```

The application's components are organized hierarchically.


## 5. AI Decision Trees

Machine Learning uses Decision Trees for prediction. For example,

```
Age > 60?

↓

Yes

↓

Senior Citizen Policy

↓

No

↓

Regular Policy
```

Insurance companies use such models for risk assessment.


# Learning Outcome

After completing this chapter, students will be able to:

* Understand hierarchical data.
* Identify Root, Parent, Child, Leaf, Height, and Levels.
* Traverse Trees logically.
* Design Tree-based business applications.
* Understand why databases use Trees for indexing.
* Relate Trees to ASP.NET Core project structure, file systems, HTML DOM, organizational charts, and enterprise software.

Most importantly, students will realize that a **Tree is far more than a DSA topic**.

It is one of the most important structures behind modern operating systems, databases, web browsers, cloud platforms, AI systems, and enterprise applications.

At Transflower, we don't teach Trees just to solve interview questions. We teach Trees because they help engineers understand **how real software organizes information, scales to millions of records, and powers the digital systems we use every day.**

# Tree Data Structure

# Understanding Nodes, Left, Right, Insertion, Traversal, and Deletion

> **"A Tree is not just a data structure. It represents relationships. Every node knows where it belongs, making searching, inserting, and deleting data much faster than a linear list."**

# Introduction

Imagine you are building an **Insurance Management System**. Every customer has a unique **Policy Number**.

```
101
205
150
310
120
180
```

If these policy numbers are stored in an array, searching may require checking many elements Instead, we organize them into a **Binary Search Tree (BST)**. A Binary Search Tree automatically keeps data organized.

# What is a Node?

A **Node** is the basic building block of a Tree. Each node contains three parts.

```text
+-------------------------+
| Policy Number : 150     |
| Left Pointer            |
| Right Pointer           |
+-------------------------+
```

In C#, a node looks like this:

```csharp
class TreeNode
{
    public int Data;

    public TreeNode Left;
    public TreeNode Right;

    public TreeNode(int value)
    {
        Data = value;
        Left = null;
        Right = null;
    }
}
```

---

# Root Node

The first node inserted becomes the **Root**. Suppose the first policy created is

```
150
```

```text
      150
```

This is the Root Node.


# Left and Right Child

Every node can have **at most two children**.

```
             Parent
            /      \
       Left Child  Right Child
```

For a Binary Search Tree,

```
Left  < Parent

Right > Parent
```

This rule makes searching efficient.


# Adding Nodes (Insertion)

Imagine customers purchase policies in this order.

```
150

100

200

75

125

175

250
```

Let's insert them one by one.


## Step 1

Insert 150

```text
150
```


## Step 2

Insert 100

100 is smaller than 150.

Move left.

```text
      150
     /
   100
```


## Step 3

Insert 200

200 is greater than 150.

Move right.

```text
      150
     /   \
   100   200
```


## Step 4

Insert 75

75 < 150

Go Left

75 < 100

Go Left

```text
        150
       /   \
    100    200
    /
  75
```


## Step 5

Insert 125

125 < 150

Go Left

125 > 100

Go Right

```text
        150
       /   \
    100    200
    / \
  75 125
```


## Step 6

Insert 175

```text
        150
       /   \
    100    200
    / \    /
  75 125 175
```


## Step 7

Insert 250

```text
              150
            /     \
         100      200
        /   \    /   \
      75   125 175 250
```

This is our Binary Search Tree.


# Searching a Node

Suppose we want Policy **175**.

```text
Start

150

↓

175 >150

Move Right

↓

200

↓

175 <200

Move Left

↓

175 Found
```

Only three comparisons were needed.

Imagine searching 10 lakh policies this way!


# Tree Traversal

Traversal means **visiting every node**. There are three important traversals.


# 1. Preorder Traversal

Visit

```
Root

Left

Right
```

Example

```text
              150
            /     \
         100      200
        /   \    /   \
      75   125 175 250
```

Output

```text
150

100

75

125

200

175

250
```

Useful for copying a tree.


# 2. Inorder Traversal

Visit

```
Left

Root

Right
```

Output

```text
75

100

125

150

175

200

250
```

Notice something interesting? The values are automatically sorted. That is why Binary Search Trees are popular.


# 3. Postorder Traversal

Visit

```
Left

Right

Root
```

Output

```text
75

125

100

175

250

200

150
```

Useful when deleting an entire tree.


# Removing Nodes (Deletion)

Deletion has three cases.

## Case 1

Deleting a Leaf Node

Delete

```
75
```

Before

```text
      100
     /
   75
```

After

```text
     100
```

Easy.

Just remove it.


## Case 2

Deleting a Node with One Child

Suppose

```text
      100
     /
    75
      \
      90
```

Delete

```
75
```

90 moves up.

```text
      100
     /
    90
```

The child replaces the deleted node.

## Case 3

Deleting a Node with Two Children

Delete

```
150
```

```text
              150
            /     \
         100      200
        /   \    /   \
      75   125 175 250
```

We cannot simply remove it.

Instead,

Find the **Inorder Successor** (smallest node in the right subtree).

That is

```
175
```

Replace 150 with 175. Then remove the original 175 node.

Final Tree

```text
              175
            /     \
         100      200
        /   \       \
      75   125      250
```

The tree remains valid.


# Enterprise Applications of Trees

Trees are used everywhere.

## 1. Insurance Product Hierarchy

```text
Insurance

├── Life
├── Health
└── Vehicle
```


## 2. Company Organization

```text
CEO

↓

Managers

↓

Employees
```


## 3. Windows Folder Structure

```text
C:

├── Program Files
├── Users
└── Windows
```

## 4. HTML DOM

```text
HTML

↓
Body
↓
Div
↓
Button
```

Every web page is a Tree.

## 5. Database Indexes

SQL Server
MySQL
Oracle
PostgreSQL

All use B-Trees or B+ Trees for fast searching.Without Trees, Searching millions of customer records would become very slow.


# Summary

| Operation   | Description                               |
| ----------- | ----------------------------------------- |
| Root        | First node of the tree                    |
| Node        | Stores data and links to children         |
| Left Child  | Smaller than parent (BST)                 |
| Right Child | Greater than parent (BST)                 |
| Insert      | Place node according to BST rules         |
| Search      | Compare and move left or right            |
| Preorder    | Root → Left → Right                       |
| Inorder     | Left → Root → Right (Sorted Output)       |
| Postorder   | Left → Right → Root                       |
| Delete      | Remove leaf, one-child, or two-child node |

# Learning Outcome

After completing this chapter, students will be able to:

* Understand the structure of a Tree and a Binary Search Tree.
* Create nodes with left and right references.
* Insert new nodes while maintaining BST rules.
* Search for data efficiently.
* Perform Preorder, Inorder, and Postorder traversals.
* Delete nodes in all three cases (leaf, one child, and two children).
* Relate Trees to enterprise applications such as database indexing, file systems, ASP.NET project structures, HTML DOM trees, and insurance product hierarchies.

Most importantly, students will understand that **Trees are not just interview topics—they are one of the most fundamental data structures behind operating systems, databases, web browsers, enterprise software, and AI systems.**

Below is a **simple C# Console Application** that demonstrates the basic operations of a **Binary Search Tree (BST)**:

* Create Node
* Add (Insert) Node
* Search Node
* Inorder Traversal
* Preorder Traversal
* Postorder Traversal
* Remove Node

It is intentionally kept simple for beginners.

```csharp
using System;

class TreeNode
{
    public int Data;
    public TreeNode Left;
    public TreeNode Right;

    public TreeNode(int data)
    {
        Data = data;
        Left = null;
        Right = null;
    }
}

class BinarySearchTree
{
    public TreeNode Root;

    // Insert Node
    public TreeNode Insert(TreeNode root, int data)
    {
        if (root == null)
            return new TreeNode(data);

        if (data < root.Data)
            root.Left = Insert(root.Left, data);
        else if (data > root.Data)
            root.Right = Insert(root.Right, data);

        return root;
    }

    // Search Node
    public bool Search(TreeNode root, int data)
    {
        if (root == null)
            return false;

        if (root.Data == data)
            return true;

        if (data < root.Data)
            return Search(root.Left, data);
        else
            return Search(root.Right, data);
    }

    // Inorder Traversal
    public void Inorder(TreeNode root)
    {
        if (root != null)
        {
            Inorder(root.Left);
            Console.Write(root.Data + " ");
            Inorder(root.Right);
        }
    }

    // Preorder Traversal
    public void Preorder(TreeNode root)
    {
        if (root != null)
        {
            Console.Write(root.Data + " ");
            Preorder(root.Left);
            Preorder(root.Right);
        }
    }

    // Postorder Traversal
    public void Postorder(TreeNode root)
    {
        if (root != null)
        {
            Postorder(root.Left);
            Postorder(root.Right);
            Console.Write(root.Data + " ");
        }
    }

    // Find Minimum Node
    public TreeNode FindMin(TreeNode root)
    {
        while (root.Left != null)
            root = root.Left;

        return root;
    }

    // Remove Node
    public TreeNode Delete(TreeNode root, int data)
    {
        if (root == null)
            return null;

        if (data < root.Data)
            root.Left = Delete(root.Left, data);

        else if (data > root.Data)
            root.Right = Delete(root.Right, data);

        else
        {
            // Case 1 : No Child
            if (root.Left == null && root.Right == null)
                return null;

            // Case 2 : One Child
            if (root.Left == null)
                return root.Right;

            if (root.Right == null)
                return root.Left;

            // Case 3 : Two Children
            TreeNode min = FindMin(root.Right);
            root.Data = min.Data;
            root.Right = Delete(root.Right, min.Data);
        }

        return root;
    }
}

class Program
{
    static void Main()
    {
        BinarySearchTree bst = new BinarySearchTree();

        int[] values = { 150, 100, 200, 75, 125, 175, 250 };

        foreach (int value in values)
            bst.Root = bst.Insert(bst.Root, value);

        Console.WriteLine("Inorder Traversal");
        bst.Inorder(bst.Root);

        Console.WriteLine("\n\nPreorder Traversal");
        bst.Preorder(bst.Root);

        Console.WriteLine("\n\nPostorder Traversal");
        bst.Postorder(bst.Root);

        Console.WriteLine("\n");

        Console.WriteLine("\nSearch 175");
        Console.WriteLine(bst.Search(bst.Root, 175));

        Console.WriteLine("\nDelete 200");
        bst.Root = bst.Delete(bst.Root, 200);

        Console.WriteLine("\nInorder After Deletion");
        bst.Inorder(bst.Root);

        Console.ReadKey();
    }
}
```

### Output

```text
Inorder Traversal
75 100 125 150 175 200 250

Preorder Traversal
150 100 75 125 200 175 250

Postorder Traversal
75 125 100 175 250 200 150

Search 175
True

Delete 200

Inorder After Deletion
75 100 125 150 175 250
```

### How the Insert Works

```
Insert 150

150
```

```
Insert 100

    150
   /
100
```

```
Insert 200

    150
   /   \
100    200
```

```
Insert 75

      150
     /   \
   100   200
   /
 75
```

```
Insert 125

      150
     /   \
   100   200
   / \
 75 125
```

```
Insert 175

      150
     /   \
   100   200
   / \   /
 75 125 175
```

```
Insert 250

        150
       /   \
    100    200
    / \    / \
  75 125 175 250
```

