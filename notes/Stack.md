# Stack Data Structure

## Building Enterprise Software One Action at a Time

> **"A stack is not just a data structure—it is a memory of recent actions. Whenever software needs to remember the latest operation and reverse it if necessary, a Stack becomes the perfect solution."**


# Introduction

So far, we have explored three important data structures:

* **Arrays** for storing fixed-size collections.
* **Linked Lists** for managing dynamic data.
* **Queues** for processing requests in the order they arrive (FIFO).

However, many business applications require a completely different behavior.

Sometimes, **the most recent action must be processed first**.

Think about your daily activities.

* You place books one on top of another.
* You stack plates in a restaurant.
* You open multiple screens on your mobile phone.
* You browse several web pages and press the Back button.
* You type a document and press **Ctrl + Z** to undo your last action.

In each of these situations, **the last item added is the first item removed**.

This principle is called **LIFO (Last In, First Out)**.

The **Stack** data structure follows this principle.


# A Story from an Insurance Company

Imagine you are developing software for **Transflower Insurance Services**.

A customer service executive performs the following operations:

```text
1. Updates Customer Address
2. Changes Nominee Details
3. Modifies Premium Amount
4. Updates Mobile Number
```

Suddenly the customer says,

> "I made a mistake. Please undo my last change."

Which change should the system reverse?

Not the first one.

Not the second one.

The **last** modification.

```text
Update Address

↓

Update Nominee

↓

Update Premium

↓

Update Mobile Number
```

The latest action is removed first.

This is exactly how a **Stack** works.


# What is a Stack?

A Stack is a linear data structure where insertion and deletion take place at **one end only**, called the **Top**.

The last element inserted is the first element removed.

```text
Top

↓

Mobile Update

↓

Premium Update

↓

Nominee Update

↓

Address Update
```

This behavior is called

**LIFO**

**Last In First Out**

---

# Stack Terminology

Every Stack has one important position.

```text
Top
```

All operations happen only at the **Top**.

Unlike a Queue,

* Insert from Top
* Remove from Top

---

# Stack Operations

A Stack supports four basic operations.

---

## 1. Push

Add a new element onto the stack.

Business Example

Customer updates

```text
Email Address
```

The update is placed on top.

```text
Top

↓

Email Update

↓

Mobile Update

↓

Premium Update
```

---

## 2. Pop

Remove the most recent element.

Customer clicks

```text
Undo
```

The latest update disappears.

```text
Before

Top

↓

Email Update

↓

Mobile Update

↓

Premium Update
```

```text
After

Top

↓

Mobile Update

↓

Premium Update
```

---

## 3. Peek

View the latest element without removing it.

Example

```text
Latest Update

↓

Email Address
```

Useful when displaying

"Last Activity"

---

## 4. IsEmpty

Checks whether the stack contains any elements.

```text
No Undo Operations Available
```

---

# Why Not Use a Queue?

Suppose a customer performs five updates.

If they choose Undo,

Should the system undo

```text
First Update?
```

No.

It should undo

```text
Last Update.
```

Therefore,

Queues cannot implement Undo.

Stacks are the correct choice.

---

# Stack in the Insurance Management System

Our Insurance Application already includes

* Customer Management
* Policy Management
* Premium Calculation
* Customer Service Queue

Now we introduce another service.

```text
Action History Stack
```

Every important customer operation is stored.

Examples

```text
Policy Created

↓

Premium Updated

↓

Address Changed

↓

Claim Submitted
```

Whenever Undo is requested,

the latest operation is removed.

---

# Business Scenario 1

## Undo Customer Updates

Customer performs

```text
Address Updated

↓

Nominee Updated

↓

Email Updated
```

Undo

↓

```text
Email Updated
```

is reversed.

---

# Business Scenario 2

## Browser History

Insurance employees visit

```text
Dashboard

↓

Customers

↓

Policies

↓

Claims
```

Press Back

↓

Return to

```text
Policies
```

Every browser uses a stack.

---

# Business Scenario 3

## Function Call Stack

Suppose the application executes

```text
Login()

↓

LoadCustomer()

↓

CalculatePremium()

↓

SavePolicy()
```

The runtime stores every function call on the stack.

When execution completes,

functions return in reverse order.

---

# Business Scenario 4

## Expression Evaluation

Premium Calculation

```text
(BasePremium + Tax)

×

RiskFactor
```

The compiler evaluates complex expressions using stacks.

Compilers, calculators, and interpreters rely heavily on stack operations.

---

# Business Scenario 5

## Text Editors and IDEs

Developer types

```text
if
{

}
```

Indentation levels are managed using stacks.

Undo also uses stacks.

Visual Studio

VS Code

Eclipse

IntelliJ

all rely on stacks.

---

# Business Scenario 6

## Task Management

Insurance administrator performs

```text
Generate Report

↓

Backup Database

↓

Send Email
```

The latest task can be cancelled immediately using a stack.

---

# Business Scenario 7

## Transaction Management

Customer performs

```text
Premium Payment

↓

Policy Update

↓

Claim Registration
```

Suppose the database fails.

The latest transaction is rolled back first.

Stacks help maintain transaction consistency during rollback operations.

---

# Enterprise Applications of Stack

Stacks are widely used in enterprise software.

## 1. Undo and Redo

Document editors

Drawing software

Insurance forms

Banking systems

Medical record systems

---

## 2. Function Call Stack

Every programming language

* C
* C++
* C#
* Java
* Python

uses a runtime stack.

Without it,

programs cannot execute nested function calls.

---

## 3. Browser Navigation

```text
Home

↓

Products

↓

Policies

↓

Claim Status
```

Back button

↓

Returns to

```text
Policies
```

---

## 4. Expression Evaluation

Compilers evaluate

```text
A + B * C
```

using stacks.

---

## 5. Syntax Parsing

Programming languages

XML

JSON

HTML

use stacks to verify

```text
()

{}

<>

[]
```

---

## 6. Database Transactions

Enterprise databases maintain transaction rollback history using stack-like behavior.

---

## 7. Memory Management

Operating systems allocate stack memory for

* Local Variables
* Function Parameters
* Return Addresses

---

# Stack vs Queue

| Stack                 | Queue             |
| --------------------- | ----------------- |
| LIFO                  | FIFO              |
| Insert at Top         | Insert at Rear    |
| Remove from Top       | Remove from Front |
| Undo                  | Customer Service  |
| Browser Back          | Print Queue       |
| Function Calls        | Task Scheduling   |
| Expression Evaluation | Ticket Processing |

---

# Learning Outcome

After completing this chapter, students will be able to:

* Understand the **LIFO (Last In, First Out)** principle.
* Implement stack operations such as **Push**, **Pop**, **Peek**, and **IsEmpty**.
* Design an **Action History Stack** for the Insurance Management System.
* Explain why stacks are ideal for undo functionality, browser navigation, function execution, transaction rollback, syntax checking, and expression evaluation.
* Recognize that stacks are one of the most fundamental data structures used by compilers, operating systems, databases, IDEs, browsers, and enterprise business applications.

Most importantly, students will realize that every time they click **Undo**, press the **Back** button in a browser, execute a function, or roll back a transaction, they are interacting with one of the most powerful and widely used data structures in computer science—the **Stack**.


# Extending the Insurance Management System

# Action History Module using Stack

---

# Business Problem

Imagine you are working as a Software Engineer at **Transflower Insurance Services**.

Every day, customer service executives perform hundreds of operations such as:

* Creating New Policy
* Updating Customer Address
* Changing Nominee
* Updating Premium
* Registering Insurance Claim
* Approving Policy
* Cancelling Policy

Sometimes the executive makes a mistake.

For example,

Rahul's premium was accidentally updated from **₹8,500** to **₹85,000**.

The manager immediately says,

> "Undo the last operation."

How can the software remember what was done last?

This is where the **Stack Data Structure** becomes useful.

Instead of deleting records manually, every business operation is first recorded in an **Action History Stack**.

Whenever Undo is requested,

the latest action is removed first.

This follows the **LIFO (Last In First Out)** principle.

---

# Existing Insurance Management System

```text
Insurance Management System

│
├── Customer Management
├── Policy Management
├── Premium Calculator
├── Customer Service Queue
│
└── Action History Stack     (NEW)
```

---

# Understanding Action History

Suppose an executive performs the following operations.

```text
09:00 AM

Create Customer Rahul
```

↓

```text
09:05 AM

Create Health Policy
```

↓

```text
09:10 AM

Update Premium
```

↓

```text
09:15 AM

Submit Claim
```

Each operation is stored in the stack.

```text
                TOP
                 │
                 ▼
+------------------------------+
| Submit Insurance Claim       |
+------------------------------+
| Update Premium               |
+------------------------------+
| Create Health Policy         |
+------------------------------+
| Create Customer Rahul        |
+------------------------------+
```

Notice that the **latest operation is always on the Top.**

---

# Step 1: Design Business Operation

Every operation should store:

* Operation Id
* Customer Id
* Customer Name
* Operation Name
* Date and Time

Example

```text
Operation Id : 1004

Customer : Rahul

Operation : Premium Updated

Time : 10:15 AM
```

---

# Step 2: Create ActionHistory Class

```csharp
using System;

public class ActionHistory
{
    public int ActionId { get; set; }

    public int CustomerId { get; set; }

    public string CustomerName { get; set; }

    public string ActionName { get; set; }

    public DateTime ActionTime { get; set; }
}
```

Each object represents one business operation.

---

# Step 3: Create ActionHistoryStack Service

```text
Insurance Management System

        │

        ▼

Action History Stack
```

This service is responsible for

* Push
* Pop
* Peek
* Display
* IsEmpty

---

# Step 4: Push()

## Business Scenario

Customer Rahul purchases a policy.

Operation

```text
Create Policy
```

Store it.

```text
TOP

↓

Create Policy
```

Another action

```text
Update Premium
```

Push again.

```text
TOP

↓

Update Premium

↓

Create Policy
```

### C#

```csharp
public void Push(ActionHistory action)
{
    history.Push(action);

    Console.WriteLine("Action Saved.");
}
```

---

# Step 5: Pop()

Manager says

> Undo Last Operation

Latest operation

```text
Update Premium
```

is removed.

```text
Before

TOP

↓

Update Premium

↓

Create Policy
```

```text
After

TOP

↓

Create Policy
```

### C#

```csharp
public ActionHistory Pop()
{
    if(history.Count==0)
        return null;

    return history.Pop();
}
```

---

# Step 6: Peek()

Before undo,

the manager asks

> "What was the last action?"

Without removing it,

return

```text
Update Premium
```

### C#

```csharp
public ActionHistory Peek()
{
    if(history.Count==0)
        return null;

    return history.Peek();
}
```

---

# Step 7: Display()

Display complete history.

```text
Latest Action

↓

Claim Submitted

↓

Premium Updated

↓

Policy Created

↓

Customer Created
```

### C#

```csharp
public void Display()
{
    foreach(var action in history)
    {
        Console.WriteLine(
        action.ActionId + " " +
        action.CustomerName + " " +
        action.ActionName);
    }
}
```

---

# Step 8: IsEmpty()

At application startup

```text
History Empty ?
```

If

```text
Yes
```

No Undo is available.

### C#

```csharp
public bool IsEmpty()
{
    return history.Count==0;
}
```

---

# Step 9: Complete ActionHistoryStack Service

```csharp
using System;
using System.Collections.Generic;

public class ActionHistoryStack
{
    private Stack<ActionHistory> history =
        new Stack<ActionHistory>();

    public void Push(ActionHistory action)
    {
        history.Push(action);
    }

    public ActionHistory Pop()
    {
        if(history.Count==0)
            return null;

        return history.Pop();
    }

    public ActionHistory Peek()
    {
        if(history.Count==0)
            return null;

        return history.Peek();
    }

    public bool IsEmpty()
    {
        return history.Count==0;
    }

    public void Display()
    {
        foreach(var action in history)
        {
            Console.WriteLine(
                $"{action.ActionId}  " +
                $"{action.CustomerName}  " +
                $"{action.ActionName}  " +
                $"{action.ActionTime}");
        }
    }
}
```

---

# Step 10: Testing the Stack

```csharp
ActionHistoryStack actionStack =
    new ActionHistoryStack();

actionStack.Push(new ActionHistory
{
    ActionId = 1001,
    CustomerId = 1,
    CustomerName = "Rahul",
    ActionName = "Customer Created",
    ActionTime = DateTime.Now
});

actionStack.Push(new ActionHistory
{
    ActionId = 1002,
    CustomerId = 1,
    CustomerName = "Rahul",
    ActionName = "Policy Created",
    ActionTime = DateTime.Now
});

actionStack.Push(new ActionHistory
{
    ActionId = 1003,
    CustomerId = 1,
    CustomerName = "Rahul",
    ActionName = "Premium Updated",
    ActionTime = DateTime.Now
});

Console.WriteLine("Action History");
actionStack.Display();

Console.WriteLine();

Console.WriteLine("Latest Action");
Console.WriteLine(actionStack.Peek().ActionName);

Console.WriteLine();

Console.WriteLine("Undo Last Action");
ActionHistory undoAction = actionStack.Pop();

Console.WriteLine("Removed : " + undoAction.ActionName);

Console.WriteLine();

Console.WriteLine("Remaining History");
actionStack.Display();
```

---

# Sample Output

```text
Action History

1003 Rahul Premium Updated
1002 Rahul Policy Created
1001 Rahul Customer Created

Latest Action

Premium Updated

Undo Last Action

Removed : Premium Updated

Remaining History

1002 Rahul Policy Created
1001 Rahul Customer Created
```

---

# Enterprise Software Mapping

| Insurance Operation        | Stack Operation |
| -------------------------- | --------------- |
| Create Policy              | Push            |
| Update Premium             | Push            |
| Submit Claim               | Push            |
| Undo Last Change           | Pop             |
| View Last Action           | Peek            |
| View Complete History      | Display         |
| Check if Undo is Available | IsEmpty         |

---

# Learning Outcome

By implementing the **Action History Module**, students experience how the **Stack** data structure supports real-world business requirements. Every important insurance operation is recorded as an action and pushed onto the stack. When an incorrect update occurs, the system can immediately **undo the most recent operation** using `Pop()`. Students gain hands-on experience with `Push`, `Pop`, `Peek`, `Display`, and `IsEmpty`, while also understanding how stacks power enterprise features such as **Undo/Redo**, **browser navigation**, **function call management**, **transaction rollback**, and **activity history**. This demonstrates that the Stack is not merely a theoretical concept but a practical foundation for building reliable, maintainable, and user-friendly enterprise software.
