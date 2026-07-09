# Queue Data Structure
## Building Enterprise Software One Customer Request at a Time

> **"A queue is not just a data structure; it is a model of how businesses serve customers fairly, process requests efficiently, and build scalable software systems."**

# Introduction

So far, we have learned how arrays store collections of data and how linked lists allow data to grow dynamically. However, many real-world business problems are not just about storing data—they are about **processing requests in the correct order**.

Think about your daily life.

* Waiting at a bank counter.
* Standing in a supermarket billing line.
* Boarding a bus.
* Calling customer support.
* Printing documents from multiple computers.

In each of these situations, the person who arrives first is served first.

This simple principle is known as **FIFO (First In, First Out)**.

The **Queue** data structure follows exactly the same principle.


# A Story from an Insurance Company

Imagine you are developing software for **Transflower Insurance Services**.

At 9:00 AM, customers start visiting the office.

```
Rahul arrives.
```

After a few minutes,

```
Priya arrives.
```

Then,

```
Amit arrives.
```

Later,

```
Sneha arrives.
```

The company cannot randomly choose whom to serve first.

It must follow a fair process.

```
Rahul

↓

Priya

↓

Amit

↓

Sneha
```

Rahul arrived first.

Rahul must be served first.

This is exactly how a Queue works.

# What is a Queue?

A Queue is a linear data structure that stores elements in the order they arrive.

The first element inserted is the first element removed.

```
First In
      ↓
+-------------------------------+
| Rahul | Priya | Amit | Sneha |
+-------------------------------+
      ↑
First Out
```

This is called

**FIFO**

**First In First Out**

# Queue Terminology

Every Queue has two important ends.

```
Front -------------------- Rear
```

### Front

Customer leaves from here.

### Rear

New customer joins here.

```
Front

↓

Rahul → Priya → Amit → Sneha

                        ↑

                      Rear
```

# Queue Operations

A Queue mainly supports four operations.

## 1. Enqueue

Insert a new element.

Example

A new customer purchases insurance.

```
Rahul

↓

Priya

↓

Amit

↓

Sneha

↓

Vikram
```

Vikram is added at the **Rear**.


## 2. Dequeue

Remove the first element.

Rahul's work is completed.

He leaves.

```
Before

Rahul

↓

Priya

↓

Amit
```

After

```
Priya

↓

Amit
```

Only the customer at the **Front** can leave.


## 3. Peek (Front)

View the first customer without removing them.

```
Next Customer

Rahul
```

Useful for display.


## 4. IsEmpty

Checks whether there are any customers waiting.

```
Queue Empty ?

Yes

or

No
```


# Why Not Use an Array?

Suppose 10,000 customers visit every day. Every time the first customer leaves, all remaining customers must be shifted.

```
Rahul leaves.

Priya shifts.

Amit shifts.

Sneha shifts.
```

This wastes processing time. Queues solve this problem efficiently.


# Queue in the Insurance Management System

Our Insurance Application already stores

* Customers
* Policies
* Premiums

Now imagine another module. Customer Service Desk. Every customer submits a request.

```
New Policy
Policy Renewal
Claim Request
Premium Payment
Address Update
Document Verification
```

Should these requests be processed randomly? No. They should follow FIFO.

# Business Scenario 1

## Policy Approval Queue

```
Rahul
↓
Priya
↓
Amit
```

Approval Officer processes

```
Rahul
↓
Priya
↓
Amit
```

in the same order.


# Business Scenario 2

## Claim Processing Queue

Customers submit insurance claims.

```
Claim 101
↓
Claim 102
↓
Claim 103
```

Claims are processed one after another. No customer is skipped unfairly.


# Business Scenario 3

## Premium Payment Verification Queue

Every payment received online enters the queue.

```
Payment 1
↓
Payment 2
↓
Payment 3
```

The accounting service verifies them sequentially.

# Business Scenario 4

## Document Verification Queue

Customers upload

* Aadhaar
* PAN
* Driving License
* Medical Reports

Verification requests are queued.

```
Verification 101

↓

Verification 102

↓

Verification 103
```

# Business Scenario 5

## Customer Support Queue

Customer calls

↓

Support Request Created

↓

Added to Queue

↓

Assigned to Support Executive

↓

Resolved

This ensures every customer receives fair service.


# Enterprise Applications of Queue

Queue is one of the most widely used data structures in enterprise software.

## 1. Task Scheduling

Modern systems execute thousands of tasks every minute.

```
Task 1
↓
Task 2
↓

Task 3
```

Operating systems and enterprise schedulers process tasks in order or by configured priority.


## 2. Message Queue

Large applications rarely communicate directly. Instead,

```
Application A
↓
Message Queue
↓
Application B
```

The sender continues working while the receiver processes messages later. Examples include order processing, notifications, and payment workflows.


## 3. Background Job Processing

Users should not wait for slow operations. Instead,

```
User Clicks Submit
↓
Background Queue
↓
Email Sent
↓
PDF Generated
↓
SMS Delivered
```

The application remains responsive while work is completed in the background.


## 4. Print Queue

Many users print simultaneously.

```
User 1
↓
User 2
↓
User 3
```

The printer processes documents one at a time.


## 5. Customer Support Ticket System

Every support request becomes a ticket.

```
Ticket 101
↓
Ticket 102
↓
Ticket 103
```

Support agents always know which request should be handled next.

## 6. Batch Processing

Banks and insurance companies process millions of records overnight.

```
Customer 1
↓
Customer 2
↓
Customer 3
↓
Customer 4
```

Jobs are processed sequentially or distributed across multiple workers.


## 7. Web Server Request Queue

Thousands of users visit a website simultaneously.

```
Browser Request
↓
Server Queue
↓
Worker Thread
↓
Response
```

Without request queues, servers would quickly become overloaded.

## 8. Inventory Management

Customer orders arrive continuously.

```
Order 101
↓
Order 102
↓
Order 103
```

The warehouse fulfills orders in the sequence they were received unless business rules specify otherwise.


# Queue vs Stack

| Stack                           | Queue                             |
| ------------------------------- | --------------------------------- |
| LIFO                            | FIFO                              |
| Insert and Remove from Same End | Insert at Rear, Remove from Front |
| Undo Operations                 | Customer Service                  |
| Browser History                 | Support Ticket Processing         |
| Function Calls                  | Task Scheduling                   |
| Expression Evaluation           | Print Queue                       |


# Learning Outcome

After completing this chapter, students will be able to:

* Understand the FIFO principle.
* Design queue-based business applications.
* Implement queue operations such as **Enqueue**, **Dequeue**, **Peek**, and **IsEmpty**.
* Integrate queues into an Insurance Management System for handling customer requests.
* Recognize how enterprise software uses queues for asynchronous processing, messaging, scheduling, web request handling, inventory management, and customer support.

Most importantly, students will realize that a Queue is far more than an academic data structure—it is a fundamental architectural component used in modern enterprise applications to ensure fairness, scalability, reliability, and efficient processing of millions of business requests every day.



## Queue-Based Customer Service Module

### Extending the Insurance Management System

Now that we understand the Queue data structure, let's implement it in our existing **Insurance Management System**.


# Business Problem

Imagine you are working as a software engineer in an insurance company. Every day hundreds of customers visit the customer service department. Customers request services such as:

* Purchase New Policy
* Renew Existing Policy
* File Insurance Claim
* Premium Payment
* Address Change
* Document Verification

When a customer arrives, they receive a token number.

```
Token 101
Token 102
Token 103
Token 104
```

Customers must be served in the same order in which they arrive. This is a perfect use case for a **Queue**.


# Existing Insurance System

```
Insurance Management System

│
├── Customer Management
├── Policy Management
├── Premium Calculator
├── Claim Management
│
└── Customer Service Queue   (NEW)
```

Instead of storing customer requests randomly, we introduce a **Customer Service Queue**.

# Step 1: Design Customer Service Request

Each customer request contains

```
Token Number
Customer Id
Customer Name
Service Type
Request Time
```

Example

```
Token : 101
Customer : Rahul
Service : Policy Renewal
Time : 10:30 AM
```

# Step 2: Create CustomerServiceRequest Class

```csharp
public class CustomerServiceRequest
{
    public int TokenNo;
    public int CustomerId;
    public string CustomerName;
    public string ServiceType;
    public DateTime RequestTime;
}
```

This class represents one customer waiting in the queue.

# Step 3: Create CustomerServiceQueue

```
Front
↓
Rahul
↓
Priya
↓
Amit
↓
NULL
Rear
```

The queue stores customer requests.


# Step 4: Implement Enqueue()

### Business Scenario

A new customer enters the insurance office.

```
Vikram
↓
Policy Purchase
```

The request is added to the **Rear**.

```
Rahul
↓
Priya
↓
Amit
↓
Vikram
```

### C# Method

```csharp
public void Enqueue(CustomerServiceRequest request)
{
    queue.Enqueue(request);

    Console.WriteLine("Customer Added To Queue.");
}
```

# Step 5: Implement Dequeue()

### Business Scenario

The customer service executive calls

```
Token 101
```

Rahul's request is processed. He leaves the queue.

```
Before

Rahul
↓
Priya
↓
Amit
```

```
After

Priya
↓
Amit
```

### C# Method

```csharp
public CustomerServiceRequest Dequeue()
{
    if(queue.Count==0)
    {
        return null;
    }

    return queue.Dequeue();
}
```


# Step 6: Implement Peek()

Suppose the executive wants to know

> "Who is the next customer?"

Without removing anyone,Peek returns

```
Rahul
```

### C#

```csharp
public CustomerServiceRequest Peek()
{
    if(queue.Count==0)
        return null;

    return queue.Peek();
}
```

# Step 7: Display Queue

The receptionist wants to see

```
Current Waiting Customers
```

```
101 Rahul

102 Priya

103 Amit

104 Sneha
```

### C#

```csharp
public void Display()
{
    foreach(var customer in queue)
    {
        Console.WriteLine(customer.TokenNo +
                          " " +
                          customer.CustomerName +
                          " " +
                          customer.ServiceType);
    }
}
```

# Step 8: IsEmpty()

At the end of the day

```
Any customers waiting?
```

If

```
Queue Count == 0
```

Office can close.

### C#

```csharp
public bool IsEmpty()
{
    return queue.Count==0;
}
```

# Step 9: Complete Queue Service

```csharp
using System;
using System.Collections.Generic;

public class CustomerServiceQueue
{
    private Queue<CustomerServiceRequest> queue =
        new Queue<CustomerServiceRequest>();

    public void Enqueue(CustomerServiceRequest request)
    {
        queue.Enqueue(request);
    }

    public CustomerServiceRequest Dequeue()
    {
        if(queue.Count==0)
            return null;

        return queue.Dequeue();
    }

    public CustomerServiceRequest Peek()
    {
        if(queue.Count==0)
            return null;

        return queue.Peek();
    }

    public bool IsEmpty()
    {
        return queue.Count==0;
    }

    public void Display()
    {
        foreach(var request in queue)
        {
            Console.WriteLine(
                $"{request.TokenNo}  " +
                $"{request.CustomerName}  " +
                $"{request.ServiceType}");
        }
    }
}
```

# Step 10: Testing the Queue

```csharp
CustomerServiceQueue serviceQueue =
    new CustomerServiceQueue();

serviceQueue.Enqueue(
new CustomerServiceRequest
{
    TokenNo=101,
    CustomerId=1,
    CustomerName="Rahul",
    ServiceType="Policy Purchase",
    RequestTime=DateTime.Now
});

serviceQueue.Enqueue(
new CustomerServiceRequest
{
    TokenNo=102,
    CustomerId=2,
    CustomerName="Priya",
    ServiceType="Claim Request",
    RequestTime=DateTime.Now
});

serviceQueue.Enqueue(
new CustomerServiceRequest
{
    TokenNo=103,
    CustomerId=3,
    CustomerName="Amit",
    ServiceType="Policy Renewal",
    RequestTime=DateTime.Now
});

Console.WriteLine("Waiting Customers");

serviceQueue.Display();

Console.WriteLine();

Console.WriteLine("Next Customer");

Console.WriteLine(
serviceQueue.Peek().CustomerName);

Console.WriteLine();

Console.WriteLine("Serving Customer...");

CustomerServiceRequest served =
serviceQueue.Dequeue();

Console.WriteLine(served.CustomerName);

Console.WriteLine();

Console.WriteLine("Remaining Queue");

serviceQueue.Display();
```

# Sample Output

```
Waiting Customers

101 Rahul Policy Purchase
102 Priya Claim Request
103 Amit Policy Renewal

Next Customer

Rahul

Serving Customer...

Rahul

Remaining Queue

102 Priya Claim Request
103 Amit Policy Renewal
```

# Real Enterprise Mapping

| Insurance Department               | Queue Operation |
| ---------------------------------- | --------------- |
| Customer arrives                   | Enqueue         |
| Service executive calls next token | Dequeue         |
| Reception checks next customer     | Peek            |
| Display waiting list               | Display         |
| Office closing check               | IsEmpty         |


# Learning Outcome

By implementing this **Customer Service Queue**, students learn how the Queue data structure directly supports real-world business workflows. They understand that `Enqueue` models incoming customer requests, `Dequeue` serves customers in **FIFO (First-In, First-Out)** order, `Peek` allows staff to view the next request without processing it, `Display` provides operational visibility, and `IsEmpty` indicates when all work has been completed. This hands-on implementation demonstrates how fundamental data structures underpin customer service systems, help desks, banking queues, hospital registration desks, airport check-ins, and large-scale enterprise applications.