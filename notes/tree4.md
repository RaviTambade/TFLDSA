# Why Binary Search Trees Become Slow

# Understanding the Need for Balanced Trees

> **"A Binary Search Tree is efficient only when it remains balanced. If it becomes unbalanced, it behaves like a Linked List, and we lose its performance advantage."**

# Introduction

So far we learned how to:

* Create a Tree Node
* Insert Nodes
* Search Nodes
* Traverse Nodes
* Delete Nodes

Everything looked fast. Searching required only a few comparisons. But that happens only when the tree is **balanced**. Let's see what happens when it is not.


# Story from an Insurance Company

Imagine an insurance company stores policy numbers. One day policies arrive in this order.

```text
150
100
200
75
125
175
250
```

The resulting tree looks like this.

```text
              150
            /     \
         100      200
        /   \    /   \
      75   125 175 250
```

This is called a **Balanced Tree**. Searching Policy **175**

```text
150

↓

200

↓

175
```

Only **3 comparisons**. Very fast.

---

# Another Day...

Now suppose policies arrive in this order.

```text
100
110
120
130
140
150
160
```

Insert one by one.

```text
100
```

↓

```text
100
   \
   110
```

↓

```text
100
   \
   110
      \
      120
```

↓

```text
100
   \
   110
      \
      120
         \
         130
```

↓

```text
100
   \
   110
      \
      120
         \
         130
            \
            140
```

↓

```text
100
   \
   110
      \
      120
         \
         130
            \
            140
               \
               150
```

↓

```text
100
   \
   110
      \
      120
         \
         130
            \
            140
               \
               150
                  \
                  160
```

---

# Is This Still a Tree?

Yes. But look carefully. It looks exactly like a Linked List.

Searching

```text
160
```

requires

```text
100

↓

110

↓

120

↓

130

↓

140

↓

150

↓

160
```

Seven comparisons. The Binary Search Tree has lost its advantage.

---

# Balanced Tree vs Unbalanced Tree

Balanced

```text
              150
            /     \
         100      200
        /   \    /   \
      75   125 175 250
```

Height

```text
3
```

Search

```text
Very Fast
```

---

Unbalanced

```text
100
  \
 110
    \
    120
      \
      130
        \
        140
          \
          150
            \
            160
```

Height

```text
7
```

Search

```text
Very Slow
```

---

# Why Does This Happen?

Because the insertion order matters. Random insertions often produce a reasonably balanced tree. Sorted insertions create a skewed tree.


# Enterprise Problem

Imagine SQL Server storing

```text
1 Crore Customer Records
```

If its index became like this,

```text
1

↓

2

↓

3

↓

4

↓

5

↓

6

↓

...
```

Every search would become slow. Banks... Insurance companies... Hospitals... E-commerce companies... cannot afford this.

# Engineering Solution

Software engineers invented

* AVL Tree
* Red-Black Tree
* B-Tree
* B+ Tree

These trees automatically keep themselves balanced. Even after millions of insertions.


# Real Enterprise Mapping

| Business Problem | Solution      |
| ---------------- | ------------- |
| Policy Search    | Balanced Tree |
| Customer Search  | B-Tree        |
| Database Index   | B+ Tree       |
| File System      | B-Tree        |
| Routing Tables   | Balanced Tree |


# Learning Outcome

After completing this chapter, students will understand:

* Why Binary Search Trees can become slow.
* The difference between balanced and unbalanced trees.
* How insertion order affects performance.
* Why enterprise software prefers self-balancing trees.
* Why SQL Server, MySQL, Oracle, PostgreSQL, and modern file systems rely on balanced tree structures instead of a simple Binary Search Tree.

Most importantly, **Good software engineering is not just about choosing a data structure—it is about choosing the right data structure for real-world workloads.**
