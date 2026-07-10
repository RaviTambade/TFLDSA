# Binary Search Tree in an Insurance Management System

## Building Enterprise Software One Policy at a Time

> **"A Binary Search Tree is not just a collection of nodes. It is a way of organizing business data so that searching, inserting, and updating information remains fast even when millions of records exist."**

# Business Problem

Imagine you are working for **Max Insurance Company**. Every customer purchases an insurance policy. Each policy has a unique Policy Number.

```text
101
205
150
310
120
180
```

When a customer visits the office, the executive needs to quickly answer questions like:

* Does Policy 205 exist?
* Insert a new policy.
* Remove a cancelled policy.
* Display all policies in sorted order.

Searching one-by-one through millions of policies is inefficient.

Instead, we organize policies using a **Binary Search Tree**.


# Insurance Management System

```text
Insurance Management System

│
├── Customer Management
├── Policy Management
├── Premium Management
├── Claim Management
│
└── Policy Search Tree (NEW)
```

The Policy Search Tree stores policy numbers efficiently.


# Step 1 : Insurance Policy Class

Each policy contains

```text
Policy Number
Customer Name
Policy Type
Premium Amount
```

Example

```text
Policy No : 150
Customer : Rahul
Policy : Health Insurance
Premium : ₹15,000
```

```csharp
public class InsurancePolicy
{
    public int PolicyNo;
    public string CustomerName;
    public string PolicyType;
    public double Premium;
}
```


# Step 2 : Tree Node

Each node stores one policy.

```text
+----------------------------+
| InsurancePolicy            |
| Left Child                 |
| Right Child                |
+----------------------------+
```

```csharp
public class TreeNode
{
    public InsurancePolicy Policy;

    public TreeNode Left;

    public TreeNode Right;

    public TreeNode(InsurancePolicy policy)
    {
        Policy = policy;
    }
}
```

# Step 3 : Insert Policy

Customer Rahul purchases Policy **150**.

```text
150
```

Later,

Priya purchases Policy **100**.

```text
      150
     /
   100
```

Then,

Amit purchases Policy **200**.

```text
      150
     /   \
   100   200
```

Every new policy is inserted according to BST rules.

* Smaller → Left
* Greater → Right


# Step 4 : Search Policy

Customer says

> "Please check Policy Number 175."

Software searches

```text
150

↓

Right

↓

200

↓

Left

↓

175 Found
```

Only a few comparisons are needed.


# Step 5 : Display All Policies

Using **Inorder Traversal**

```text
75

100

125

150

175

200

250
```

Policies automatically appear in ascending order.

Useful for reports.


# Step 6 : Delete Policy

Suppose customer cancels Policy **200**.

```text
Before

        150
       /   \
    100    200
           / \
        175 250
```

After deletion

```text
        150
       /   \
    100    250
       \
      175
```

The tree reorganizes itself while maintaining BST rules.


# Mapping Tree Operations to Business

| Business Activity         | BST Operation       |
| ------------------------- | ------------------- |
| Customer purchases policy | Insert              |
| Customer searches policy  | Search              |
| Display policy report     | Inorder Traversal   |
| Backup policy hierarchy   | Preorder Traversal  |
| Archive all policies      | Postorder Traversal |
| Cancel policy             | Delete              |


# Enterprise Applications

The same Tree concept is used in:

* Insurance Policy Search
* Banking Customer Records
* Hospital Patient Records
* Product Catalogs
* Employee Hierarchies
* Windows Folder Structure
* HTML DOM
* SQL Server B-Tree Indexes
* MySQL Indexes
* Oracle Indexes

# Learning Outcome

After completing this module, students will be able to:

* Design a Binary Search Tree.
* Store business objects instead of simple integers.
* Insert customer policies.
* Search policies efficiently.
* Display policies in sorted order.
* Delete cancelled policies.
* Understand why databases use Trees to search millions of records quickly.

Most importantly, **Trees are not just academic data structures—they are the foundation of database indexes, enterprise search systems, operating systems, and modern business applications.**
