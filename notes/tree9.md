# Graph Data Structure : Connecting the World Through Relationships

> **"A Tree connects data in a hierarchy. A Graph connects data in a network. Modern software systems—from Google Maps to Facebook to cloud microservices—are built on Graphs."**

# Introduction

So far we have learned

* Arrays store collections.
* Linked Lists connect sequential data.
* Stacks manage function calls.
* Queues process requests.
* Trees organize hierarchical information.
* AVL Trees keep searches balanced.
* Heaps process high-priority tasks.
* Hash Tables provide lightning-fast lookups.

But not everything in software is hierarchical. Think about these questions.

* Can one city connect to many cities?
* Can one employee work with multiple departments?
* Can one microservice call many other services?
* Can one person have hundreds of friends?

The answer is **Yes**. This is where **Graphs** are used.


# Story from an Insurance Company

Imagine **Max Insurance Company** has branches across India.

```text
Pune
Mumbai
Delhi
Bangalore
Hyderabad
Chennai
```

Every branch communicates with several other branches. It is **not** a hierarchy. It is a network.

```text
          Delhi
         /     \
   Mumbai ----- Pune
      |          |
 Bangalore ---- Hyderabad
        \        /
         Chennai
```

This is a **Graph**.


# What is a Graph?

A Graph consists of

```text
Vertices (Nodes)

+

Edges (Connections)
```

Think of

```text
City

↓

Vertex
```

Road

↓

```text
Edge
```

# Example

```text
        Pune
       /    \
 Mumbai      Hyderabad
      \      /
      Bangalore
```

Vertices

```text
Pune

Mumbai

Hyderabad

Bangalore
```

Edges

```text
Pune — Mumbai

Pune — Hyderabad

Mumbai — Bangalore

Hyderabad — Bangalore
```


# Graph Terminology

## Vertex

A point in the graph.

Example

```text
Pune
```


## Edge

Connection between two vertices.

```text
Pune -------- Mumbai
```


## Degree

Number of connections.

```text
Pune

↓

2 Connections
```


## Path

Route from one node to another.

```text
Mumbai
↓
Pune
↓
Hyderabad
```


## Cycle

A path that returns to the starting point.

```text
Pune
↓
Mumbai
↓
Bangalore
↓
Hyderabad
↓
Pune
```

# Directed Graph

Connections have direction.

```text
Customer
↓
Policy
↓
Claim
```

One-way relationship.

# Undirected Graph

Roads

```text
Pune ------- Mumbai
```

Travel both directions.



# Weighted Graph

Edges store cost.

```text
Pune ----- Mumbai

150 Km
```

```text
Mumbai ---- Delhi

1400 Km
```

Weight may represent

* Distance
* Cost
* Time
* Network latency



# Business Scenario 1

## Google Maps

Cities

↓

Vertices

Roads

↓

Edges

Distance

↓

Weight

Software calculates

Shortest Route.

 

# Business Scenario 2

## Social Media

Rahul

↓

Friends

↓

Priya

↓

Amit

↓

Neha

Everyone connects with many people.

Graph.

 

# Business Scenario 3

## Airline Reservation

```text
Delhi

↓

Mumbai

↓

Dubai

↓

London
```

Flights connect cities.

Graphs help find

* Shortest route
* Cheapest route
* Fewest stops

  

# Business Scenario 4

## Computer Network

```text
Router A

↓

Router B

↓

Router C
```

Packets travel through a graph.

  

# Business Scenario 5

## Microservices

```text
API Gateway

↓

Customer Service

↓

Policy Service

↓

Claim Service

↓

Payment Service
```

Each service communicates with many others.

This communication forms a graph.

  

# Graph Representation

## Adjacency Matrix

```text
          A B C D

A         0 1 1 0

B         1 0 1 1

C         1 1 0 0

D         0 1 0 0
```

Good for dense graphs.

## Adjacency List

```text
A → B → C

B → A → C → D

C → A → B

D → B
```

Most enterprise applications use this approach because it saves memory.

# Graph Traversal

Like Trees,

Graphs also need traversal. There are two important algorithms.

## Breadth First Search (BFS)

Visit nearby nodes first.

```text
Start

↓

Pune

↓

Mumbai

↓

Hyderabad

↓

Bangalore
```

Uses

```text
Queue
```

Applications

* GPS
* Social Networks
* Recommendation Systems

## Depth First Search (DFS)

Go as deep as possible.

```text
Pune

↓

Mumbai

↓

Bangalore

↓

Hyderabad
```

Uses

```text
Stack
```

Applications

* File Search
* Dependency Resolution
* AI Search
* Maze Solving

# Enterprise Applications

Graphs power

* Google Maps
* Facebook
* LinkedIn
* Airline Reservation Systems
* Computer Networks
* Internet Routing
* Fraud Detection
* Recommendation Engines
* Cloud Microservices
* Kubernetes Service Communication


# Graph vs Tree

| Tree               | Graph                 |
| ------------------ | --------------------- |
| Hierarchical       | Network               |
| One Root           | No Root Required      |
| No Cycles          | Cycles Allowed        |
| Parent-Child       | Any-to-Any Connection |
| Organization Chart | Road Map              |

# Learning Outcome

After completing this chapter, students will understand:

* What a Graph is.
* Vertices and Edges.
* Directed and Undirected Graphs.
* Weighted Graphs.
* Graph Representation.
* Breadth First Search (BFS).
* Depth First Search (DFS).
* Enterprise applications of Graphs.

Most importantly, students will realize that **Graphs model relationships, not hierarchies.**

Every time you use:

* Google Maps
* WhatsApp
* Facebook
* LinkedIn
* Cloud Computing
* Kubernetes
* Computer Networks

you are using software powered by **Graph Data Structures**.

# Transflower Mentor Thought

Imagine three different ways to organize people.

```
Array
↓

People standing in a line.
Tree
↓

Employees reporting to a manager.
Graph
↓

People in a social network where everyone can know everyone else.
```

That is the evolution of thinking in software engineering.

- Arrays teach storage.
- Linked Lists teach dynamic connections.
- Trees teach hierarchy.
- Graphs teach relationships.

Modern enterprise software is increasingly built around relationships—between users, services, devices, and data. Understanding Graphs prepares you to build systems like route planners, recommendation engines, fraud detection platforms, distributed cloud systems, and AI knowledge graphs.

