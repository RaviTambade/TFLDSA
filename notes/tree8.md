# Hash Table (HashMap / Dictionary) : Finding Data in Constant Time


After Heap, the next topic should be Hash Table (HashMap / Dictionary). This is one of the most important data structures in modern ASP.NET Core, Java Spring Boot, Node.js, and Python applications because almost every enterprise application performs millions of fast lookups.

> **"A Tree searches by comparing values. A Hash Table searches by calculating an address. Instead of asking 'Where is the data?', it knows exactly where to look."**

# Introduction

So far we have learned:

* Arrays store data.
* Linked Lists connect data.
* Stacks manage function execution.
* Queues process requests.
* Trees organize hierarchical data.
* AVL Trees keep searching fast.
* Heaps process highest-priority work.

But imagine this business problem.

A customer calls an insurance company.

He says,

> "My Policy Number is **105432**."

Should the software compare millions of policy numbers one by one? No. Should it traverse a Tree?
It could. But there is an even faster solution.

A **Hash Table**.


# Story from an Insurance Company

Imagine **Max Insurance Company** has

```text
10,00,000 Policies
```

A customer says

```text
Policy Number

105432
```

The software should immediately locate the record. Not after checking

```text
100

200

300

...

105432
```

Instead, the system calculates

```text
Hash(105432)
↓
Memory Location
↓
Customer Record
```

No searching. No traversal. Direct access.


# What is a Hash Table?

A Hash Table stores

```text
Key
↓
Value
```

Example

```text
Policy Number
↓
Insurance Policy
```

Think of it as a dictionary.

```text
Dictionary

Word
↓
Meaning
```

# Real Example

```text
101
↓
Rahul
```

```text
102
↓
Priya
```

```text
103
↓
Amit
```

Searching

```text
102
```

Immediately returns

```text
Priya
```

# Key and Value

Every record contains

```text
Key

↓

Unique Identifier
```

```text
Value

↓

Business Object
```

Example

```text
Key

Policy Number
```

Value

```text
Insurance Policy
```

# Hash Function

A Hash Function converts a key into an index.

Example

```text
Hash(105)

↓

5
```

Hash(212)

↓

```text
2
```

Hash(356)

↓

```text
6
```

The computer knows exactly where to store the data.


# Business Scenario 1

## Customer Login

Customer enters

```text
Email Address
```

Software immediately finds

```text
Customer Account
```

without scanning the database cache.



# Business Scenario 2

## ASP.NET Core Session

```text
Session Id

↓

Session Object
```

When the browser sends

```text
SessionId
```

ASP.NET immediately retrieves the user's session.


# Business Scenario 3

## Product Catalog

Customer searches

```text
Product Code

P10025
```

Hash Table returns

```text
Laptop
```

immediately.


# Business Scenario 4

## Employee Lookup

Employee enters

```text
Employee Id

EMP1025
```

Software immediately finds

```text
Employee Details
```

# Business Scenario 5

## Banking

Account Number

↓

Account Details

Millions of customers.

Still extremely fast.

# Operations

## Insert

```text
101

↓

Rahul
```

Stored in Hash Table.

## Search

```text
Key = 101
```

Returns

```text
Rahul
```

## Update

```text
101

↓

Rahul Sharma
```

Value changes.

Key remains same.

## Delete

Remove

```text
101
```

Record disappears.


# Collision

Sometimes Two keys generate the same index.

Example

```text
101

↓

Index 5
```

```text
201

↓

Index 5
```

Both cannot occupy the same location.This is called

```text
Collision
```

Solutions include

* Chaining (Linked List)
* Open Addressing
* Double Hashing

# Hash Table vs Binary Search Tree

| Binary Search Tree     | Hash Table                 |
| ---------------------- | -------------------------- |
| Searches by comparison | Searches by hash           |
| Data remains ordered   | Data is unordered          |
| Traversal possible     | No sorted traversal        |
| Good for range search  | Excellent for exact lookup |
| O(log n) average       | O(1) average               |

# Enterprise Applications

Hash Tables are used in

* ASP.NET Core Session Management
* Authentication
* JWT Token Cache
* Redis Cache
* Dictionary<TKey,TValue>
* Java HashMap
* Python Dictionary
* JavaScript Map
* DNS Lookup
* Browser Cache

# C# Example

```csharp
Dictionary<int, string> customers =
    new Dictionary<int, string>();

customers.Add(101, "Rahul");
customers.Add(102, "Priya");
customers.Add(103, "Amit");

Console.WriteLine(customers[102]);
```

Output

```text
Priya
```

# Learning Outcome

After completing this chapter, students will understand:

* What a Hash Table is.
* Key–Value storage.
* Hash Functions.
* Insert, Search, Update, and Delete.
* Hash Collisions.
* Difference between Hash Tables and Trees.
* Why enterprise applications use Hash Tables for fast lookups.

Most importantly,  **A Hash Table does not search by comparing data—it calculates where the data should be. That is why it is one of the fastest data structures used in modern software systems.**


# Transflower Mentor Thought

Imagine visiting a library. Without a catalog, you would walk through every shelf looking for a book. That is like searching an array. With a Binary Search Tree, the books are organized, so you search much faster. With a Hash Table, it's as if you tell the librarian the book's unique ID, and they immediately point to the exact shelf and position. That is why almost every enterprise application—from ASP.NET Core Identity and Redis Cache to Java HashMap, Python Dictionary, and browser caches—relies on hash tables for lightning-fast lookups.
