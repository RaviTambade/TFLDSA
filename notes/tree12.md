# B-Tree and B+ Tree: How Databases Search Billions of Records Efficiently

> **"A Binary Search Tree works well in memory. A B-Tree works efficiently on disk. That is why SQL Server, MySQL, Oracle, PostgreSQL, and modern file systems use B-Trees instead of Binary Search Trees."**

# Introduction

Throughout this journey we learned

* Arrays
* Linked Lists
* Stack
* Queue
* Tree
* Binary Search Tree
* AVL Tree
* Heap
* Hash Table
* Graph
* Trie

Now comes the most important Tree used in enterprise software.

**B-Tree**

If you become an ASP.NET Core developer working with SQL Server or MySQL, every query you execute depends on B-Trees.

# Story from an Insurance Company

Imagine **Max Insurance Company** has

```text
10 Crore Insurance Policies
```

Every day thousands of customers ask

```text
Find Policy No.

984563210
```

Should SQL Server scan

```text
Policy 1

↓

Policy 2

↓

Policy 3

↓

...

↓

Policy 984563210
```

Impossible.

Searching would take too long.

Instead,

SQL Server uses

```text
B-Tree Index
```


# Why Not Use a Binary Search Tree?

Binary Search Tree

```text
          50
        /    \
      25      75
     /  \    /  \
   10   30 60   90
```

Each node stores

```text
One Key
```

Searching millions of records means

Millions of node accesses.

Hard disks are much slower than RAM.

Databases need fewer disk reads.

# Solution

Instead of storing

```text
One Key
```

Store

```text
Many Keys
```

inside one node.

That is called a

```text
B-Tree
```

# B-Tree Node

Instead of

```text
50
```

A node stores

```text
+----------------------+
|10|20|30|40|50|60|70|
+----------------------+
```

One disk read.

Many keys available.

Huge performance improvement.

# Example

```text
                 [40 | 80]

             /       |        \

      [10|20|30] [50|60|70] [90|100]
```

Notice

One node contains multiple values.

# Searching

Search

```text
60
```

Step 1

```text
[40 | 80]
```

60 lies between

```text
40

and

80
```

Move to middle child.

Step 2

```text
[50|60|70]
```

Found.

Only

```text
2 Disk Reads
```

# Insert

Insert

```text
65
```

Node becomes

```text
[50|60|65|70]
```

If node becomes full,

Split it.

# Splitting

Before

```text
[10|20|30|40|50]
```

Split

↓

```text
        [30]

      /      \

 [10|20]   [40|50]
```

Middle value moves upward.

Tree remains balanced.


# Delete

Delete

```text
40
```

If a node has too few values,

Borrow from a sibling.

If borrowing is impossible,

Merge two nodes.

Database performs this automatically.


# Why B-Tree is Fast

Imagine

```text
100 Crore Records
```

BST

```text
Many disk reads
```

B-Tree

```text
Very few disk reads
```

Disk access is expensive.

Reducing disk access improves performance dramatically.


# What is B+ Tree?

B+ Tree is an improved version of B-Tree.

Difference

B-Tree

```text
Data stored

Everywhere
```

B+ Tree

```text
Data stored

Only in Leaf Nodes
```

Internal nodes contain only keys.

Leaf nodes contain actual records.


# B+ Tree Structure

```text
              [40 | 80]

          /       |        \

     [10|20] [50|60] [90|100]

          ↓        ↓        ↓

      Data Records Linked Together
```

Notice

Leaf nodes are connected.

# Why Link Leaf Nodes?

Suppose SQL Server executes

```sql
SELECT *
FROM Policies
WHERE PolicyNo BETWEEN 1000 AND 5000
```

Instead of searching again and again, Database reaches first record.Then simply walks

```text
1000

↓

1001

↓

1002

↓

1003

↓

...
```

Very fast.

Perfect for

* Reports
* Sorting
* Range Queries


# Business Scenario 1

## Insurance Policy Search

Customer searches

```text
Policy No

850012
```

Database

↓

B+ Tree

↓

Policy Record


# Business Scenario 2

## Banking

Account Number

↓

B+ Tree

↓

Customer Account


# Business Scenario 3

## Hospital

Patient ID

↓

B+ Tree

↓

Medical Record


# Business Scenario 4

## E-Commerce

Product ID

↓

B+ Tree

↓

Product Details


# Business Scenario 5

## Library

Book ID

↓

B+ Tree

↓

Book Information



# B-Tree vs B+ Tree

| B-Tree                       | B+ Tree                            |
| ---------------------------- | ---------------------------------- |
| Data in all nodes            | Data only in leaf nodes            |
| Fewer sequential advantages  | Excellent sequential access        |
| Good for search              | Best for search + range queries    |
| Internal nodes contain data  | Internal nodes contain only keys   |
| Used in some storage engines | Most modern databases use B+ Trees |



# Enterprise Applications

B-Tree / B+ Tree are used in

* SQL Server Indexes
* MySQL InnoDB Indexes
* PostgreSQL Indexes
* Oracle Database
* SQLite
* NTFS File System
* Linux ext4 File System
* APFS (Apple)
* HFS+
* Database Storage Engines

# ASP.NET Core Example

Imagine your application executes

```csharp
var policy =
dbContext.Policies
         .FirstOrDefault(
             p => p.PolicyNo == 850012);
```

Your code looks simple.

But internally

```text
ASP.NET Core

↓

Entity Framework Core

↓

SQL Server

↓

B+ Tree Index

↓

Disk

↓

Policy Record

↓

Response
```

Without B+ Trees,

this query could take minutes instead of milliseconds.


# Complete DSA Journey

```text
Arrays
      │
      ▼
Linked Lists
      │
      ▼
Stacks
      │
      ▼
Queues
      │
      ▼
Trees
      │
      ▼
Binary Search Trees
      │
      ▼
AVL Trees
      │
      ▼
Heaps
      │
      ▼
Hash Tables
      │
      ▼
Graphs
      │
      ▼
Trie
      │
      ▼
B-Tree
      │
      ▼
B+ Tree
      │
      ▼
SQL Server
MySQL
Oracle
PostgreSQL
Operating Systems
Cloud Storage
```

# Learning Outcome

After completing this chapter, students will understand:

* Why Binary Search Trees are unsuitable for disk-based databases.
* How B-Trees reduce disk I/O by storing multiple keys in one node.
* How node splitting and merging maintain balance automatically.
* The difference between B-Trees and B+ Trees.
* Why B+ Trees are ideal for range queries and ordered data retrieval.
* How SQL Server, MySQL, Oracle, PostgreSQL, and file systems use B+ Trees to search billions of records efficiently.

Most importantly, **Every SQL query they write in an ASP.NET Core application is accelerated by B+ Tree indexes, even though they rarely see them directly.**


# Transflower Mentor Final Thought

When students first learn DSA, they often ask:

"Where will I use all these data structures?"

Now the answer is clear.

- Array → Store data.
- Linked List → Dynamic memory.
- Stack → Function calls and Undo.
- Queue → Request processing.
- Tree → Hierarchical data.
- BST / AVL → Fast searching.
- Heap → Priority scheduling.
- Hash Table → Instant key-based lookup.
- Graph → Networks and relationships.
- Trie → Auto-complete and prefix search.
- B+ Tree → Database indexing and file systems.

This is the complete evolution of a software engineer's thinking—from storing a few values in memory to building enterprise systems that can search, organize, and process billions of records efficiently.

## Tap your potential.
