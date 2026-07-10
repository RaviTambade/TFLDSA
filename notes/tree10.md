# Trie (Prefix Tree) : Powering Search, Auto-Complete, and AI Suggestions
After Graphs, the next topic in the Transflower Mentor DSA Roadmap is Trie (Prefix Tree). Unlike BSTs that search numbers efficiently, a Trie is designed to search words and prefixes extremely quickly. This is why search engines, code editors, dictionaries, and AI applications use it.

> **"A Binary Search Tree searches numbers efficiently. A Trie searches words efficiently. Every time your phone suggests a word while typing, a Trie is working behind the scenes."**

# Introduction

So far we have learned

* Arrays store data.
* Linked Lists connect data.
* Trees organize hierarchical information.
* Hash Tables find exact matches quickly.
* Graphs model networks and relationships.

But consider this question. Suppose an insurance company has **10 lakh customer names**. A customer starts typing

```text
RA
```

Immediately the software suggests

```text
Rahul
Rajesh
Rakesh
Ramesh
Ram
Ranjit
```

How? Did the software compare every customer name? No. Did it use a Binary Search Tree? Not efficiently. It used a **Trie**.


# Story from an Insurance Company

Customer starts typing

```text
RA
```

Software immediately shows

```text
Rahul Sharma
Rajesh Patil
Ramesh Kulkarni
Rakesh Singh
```

Before the customer even finishes typing. This is possible because the names are stored as a **Prefix Tree**.


# What is a Trie?

Trie comes from

```text
Retrieval
```

A Trie stores characters instead of complete words.

Each node stores

```text
One Character
```

instead of an entire word.

# Example

Words

```text
CAR

CAT

CAN
```

Trie

```text
           Root
             |
             C
             |
             A
          /  |  \
         R   T   N
```

Notice

The letters

```text
C

A
```

are stored only once.

Memory is saved.

Searching becomes faster.

# Another Example

Words

```text
DOG

DOOR

DONE
```

Trie

```text
           Root
             |
             D
             |
             O
          /   \
         G     O
              / \
             R   N
                  \
                   E
```

Common prefixes share the same path.

# Searching

Customer types

```text
DO
```

Software moves

```text
Root

↓

D

↓

O
```

Immediately finds

```text
DOG

DOOR

DONE
```

Very fast.


# Insert

Insert

```text
APPLE
```

Tree

```text
Root

↓

A

↓

P

↓

P

↓

L

↓

E
```

Insert

```text
APPLICATION
```

Software reuses

```text
APP
```

and adds only the remaining letters.

# Search

Search

```text
APPLE
```

Move character by character.

```text
A
↓
P
↓
P
↓
L
↓
E

Found
```
# Prefix Search

Search

```text
APP
```

Software immediately returns

```text
APPLE

APPLICATION

APP STORE
```

This is called **Prefix Search**.

# Business Scenario 1

## Insurance Customer Search

Typing

```text
RA
```

Shows

```text
Rahul

Rajesh

Rakesh

Ramesh
```

# Business Scenario 2

## Google Search

Type

```text
ASP
```

Suggestions

```text
ASP.NET Core

ASP.NET MVC

ASP.NET Web API
```

# Business Scenario 3

## Mobile Keyboard

Typing

```text
GOO
```

Suggestions

```text
Good

Google

Good Morning

Good Luck
```

# Business Scenario 4

## VS Code / Visual Studio IntelliSense

Type

```text
Cons
```

Suggestions

```text
Console

Console.WriteLine

Console.ReadKey
```

# Business Scenario 5

## E-Commerce

Customer types

```text
IPH
```

Suggestions

```text
iPhone 15

iPhone 16

iPhone Charger

iPhone Cover
```

# Trie Operations

## Insert

Add a new word.

Example

```text
POLICY
```

Characters are inserted one by one.

## Search

Check whether

```text
POLICY
```

exists.

## StartsWith

Check whether words begin with

```text
POL
```

Returns

```text
POLICY

POLICE

POLLUTION
```

## Delete

Remove a word.

Unused nodes are removed automatically.

# Trie vs Hash Table

| Hash Table        | Trie                   |
| ----------------- | ---------------------- |
| Exact Match       | Prefix Search          |
| Fast Lookup       | Fast Suggestions       |
| No Ordering       | Alphabetical Traversal |
| Dictionary Lookup | Auto Complete          |

# Trie vs Binary Search Tree

| Binary Search Tree     | Trie              |
| ---------------------- | ----------------- |
| Stores complete values | Stores characters |
| Number Search          | Word Search       |
| Sorted Traversal       | Prefix Traversal  |
| Comparison Based       | Character Based   |

# Enterprise Applications

Trie is used in

* Google Search
* AI Chatbots
* ChatGPT Tokenization
* Visual Studio IntelliSense
* VS Code Auto Complete
* Mobile Keyboard Suggestions
* Dictionary Applications
* Search Engines
* Contact Search
* Product Search

# Learning Outcome

After completing this chapter, students will understand:
* What a Trie is.
* How words are stored.
* Prefix searching.
* Insert and Search operations.
* Auto-complete algorithms.
* Enterprise applications of Tries.

Most importantly, **A Trie is not designed to search numbers—it is designed to search words and prefixes extremely efficiently.**


## Transflower Mentor Thought

Imagine visiting a library.

- A Hash Table helps you find one exact book if you know its unique ID.
- A Binary Search Tree keeps books arranged in order.
- A Trie helps the librarian complete the title while you're still speaking.

You say: "Ins..." Before you finish, the librarian replies:

- Insurance Management
- Insurance Claim Processing
- Insurance Policy Guide

That is exactly how Google Search, mobile keyboards, Visual Studio IntelliSense, and AI-powered applications provide instant suggestions.