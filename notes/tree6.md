# Heap Data Structure :Processing the Most Important Work First

> **"A Queue serves customers in the order they arrive. A Heap serves the customer with the highest priority first."**

# Introduction

Previously we learned about the Queue.

A Queue follows

```text
FIFO

First In

First Out
```

This works well for

* Bank queues
* Insurance customer service
* Railway ticket booking
* Printing documents

Everyone is treated fairly.

But...

Real businesses sometimes cannot process requests in arrival order.

Some requests are more important.


# Story from an Insurance Company

Imagine you are building software for **Max Insurance Company**.

Customers submit claims.

At 10:00 AM

```text
Claim 101

Minor Vehicle Scratch
```

At 10:05 AM

```text
Claim 102

Hospital Emergency
```

At 10:10 AM

```text
Claim 103

Lost Mobile Phone
```

Should the company process them like this?

```text
101

↓

102

↓

103
```

No.

The hospital emergency must be handled first.

The company decides

```text
Highest Priority First
```

This is where a **Heap** is used.

---

# What is a Heap?

A Heap is a **Complete Binary Tree**. Every node follows a priority rule. There are two types.


# Max Heap

The largest value is always at the top.

```text
        100
      /     \
    80       70
   /  \     /  \
 40  50   60  30
```

Parent Always Greater than Children


# Min Heap

The smallest value is always at the top.

```text
         10
      /      \
    20       30
   /  \     /  \
 40  50   60  70
```

Parent Always Smaller than Children


# Why Not Use Queue?

Queue

```text
Claim 101
↓
Claim 102
↓
Claim 103
```

Emergency customer waits.


Heap

```text
Emergency

↓

High

↓

Medium

↓

Low
```

Most important request is processed immediately.



# Business Scenario 1

## Insurance Claim Processing

Priority

```text
Hospital Emergency
↓
Death Claim
↓
Accident Claim
↓
Vehicle Damage
↓
General Inquiry
```

Highest priority always comes first.


# Business Scenario 2

## Hospital

Patients arrive

```text
Rahul

Fever

Priority 3
```

```text
Amit

Heart Attack

Priority 1
```

```text
Priya

Cold

Priority 4
```

Doctor treats

```text
Heart Attack

↓

Fever

↓

Cold
```

Not arrival order.

Priority order.

# Business Scenario 3

## Operating System

Many programs are waiting.

```text
Chrome

Visual Studio

Spotify

Windows Update
```

CPU decides Which process has highest priority? Heap helps the scheduler.


# Business Scenario 4

## Airline Boarding

Passengers

```text
Business Class

Gold Member

Silver Member

Economy
```

Boarding

```text
Business

↓

Gold

↓

Silver

↓

Economy
```

Priority.


# Business Scenario 5

## Online Shopping

Warehouse receives

```text
Normal Delivery

Express Delivery

Prime Delivery
```

Warehouse processes

```text
Prime

↓

Express

↓

Normal
```

# Heap Operations

## Insert

Add a new element.

Then rearrange.

```text
Before

        90
      /    \
    80      70
```

Insert

```text
100
```

After

```text
        100
      /     \
    90       70
   /
 80
```

Largest moves upward.


## Delete

Remove Root

```text
100
```

Tree rearranges automatically. Largest remaining element becomes Root.

## Peek

Return highest priority. Do not remove it.

# Heap vs Binary Search Tree

| Binary Search Tree    | Heap                         |
| --------------------- | ---------------------------- |
| Searching             | Priority Processing          |
| Left < Parent < Right | Parent has higher priority   |
| Sorted Traversal      | Fast Highest Priority Access |
| Database Search       | CPU Scheduling               |
| Customer Search       | Emergency Processing         |


# Enterprise Applications

Heap is used in

* CPU Scheduling
* Hospital Emergency Queue
* Insurance Claim Prioritization
* Banking Transaction Processing
* Dijkstra Shortest Path Algorithm
* Network Packet Scheduling
* Task Scheduling
* AI Search Algorithms


# Learning Outcome

After completing this chapter, students will understand:

* What a Heap is.
* Difference between Max Heap and Min Heap.
* Heap insertion.
* Heap deletion.
* Heap priority rule.
* Difference between Queue and Heap.
* Enterprise applications of Heap.

Most importantly, students will realize that a **Heap is not about storing data in sorted order.**

Its purpose is simple:
> **Always process the most important task first.**
