
## Two Types of Software & The Role of Data Structures

Alright everyone, before we dive deeper into coding or any complex design, let’s step back and understand one of the most basic — yet most misunderstood — foundations of computer science.

There are **two main categories of software** in our digital world:
👉 **Application Software**
👉 **System Software**

Now, many of you might be using applications every single day — your browsers, WhatsApp, YouTube, Amazon, games, mobile apps, office tools — all of these fall under **Application Software**.
They’re built to help users perform specific tasks — shopping, chatting, editing, playing, learning, or managing data.

But behind the scenes, there’s another invisible world — **System Software** — the one that actually *runs the show*.
These are your **Operating Systems**, **Compilers**, **Device Drivers**, **Embedded Controllers**, and **System Utilities**.
They’re not built for end users — they’re built for developers, for machines, for managing resources efficiently.

So, when you design an **Application Software**, your focus is on **user experience, interaction, and business logic**.
When you design a **System Software**, your focus shifts towards **hardware control, performance optimization, and resource management**.

Two different worlds, right?
But here’s the fascinating part — both of them share a **common foundation**.
No matter how different they look on the outside, both rely deeply on one thing — **Data Structures**.

---

### ⚙️ Common Engineering Traits

Let’s think like engineers for a moment.
Every piece of software — whether it’s your mobile game or your operating system — has to manage **data**, **memory**, and **execution flow** efficiently.

And this is where **Data Structures** come into play.

The **Stack** helps manage function calls, screen navigation, undo-redo operations, and even recursive logic inside the CPU.
The **Queue** manages process scheduling in the OS, message queues in microservices, and print jobs in your printer spooler.
The **Linked List** manages memory dynamically when you don’t know how much data will come next.
The **Tree** powers file systems, UI hierarchies, and structured data storage like XML or JSON.
And the **Graph** connects everything — from your social media networks to Google Maps routes and distributed systems.

So you see, whether you’re designing an *Application Software* or a *System Software*,
➡️ The **perspective** may change — user-centric vs. system-centric.
➡️ But the **principles** remain the same — efficiency, reliability, scalability.

That’s what makes you an **engineer**, not just a developer.

---

### 💡 Thinking Like an Engineer

Now, the reason I always insist on understanding *how things work beneath the surface* is simple —
If you know how your system manages its data internally, you’ll automatically write better applications.
You’ll stop wasting CPU cycles.
You’ll allocate memory smartly.
You’ll make your software faster, lighter, and scalable.

That’s what system design is all about — thinking not just about “what” the software does, but *“how” it does it efficiently.*

So tomorrow, when you write a mobile app, you won’t just think about screens and buttons —
you’ll think about **what data structure suits the need**,
how to handle **runtime resources**,
and how to **optimize performance** as the number of users grows.

That’s the mindset shift —
From **coder** to **engineer**.
From **developer** to **designer**.
From **writing code** to **crafting systems**.

---

### 🧠 Mentor Reflection

So remember this —

> “Software may look different on the outside, but every great software shares the same skeleton — Data Structures.”

Application Software and System Software are like two sides of the same coin.
One speaks to humans, the other speaks to machines — but both must *think efficiently*, *respond intelligently*, and *work seamlessly*.

And the bridge between them — is your **understanding of data structures** and **system design thinking**.

That’s what will define you — not as a developer who writes code,
but as an **engineer who builds systems that last.**


# Microscopic   vs Macroscpic Approach in Software

When you learn **data structures**, you go deep into the *microscopic* world of computer science — you optimize memory, time complexity, recursion, graphs, trees, and algorithms.

But when you zoom out — when you want a **bird’s-eye view** — you start seeing the *macroscopic* world:
How does a large application like Amazon or YouTube actually run?
How do millions of users connect, interact, and never crash the system?
That’s **System Design**.

In every science, you have two ways to study:

* **Microscopic approach** — understanding the fine details.
* **Macroscopic approach** — seeing the big picture.

In computer science:

* Microscopic means data structures, algorithms, compiler design, OS, networking — all the gears inside the machine.
* Macroscopic means system design, high-level design (HLD), low-level design (LLD), and enterprise architecture — how those gears work together to run a massive system smoothly.


Many modern companies say,

> “We don’t want you to reinvent data structures — we already have libraries for that.”

But they add,

> “Can you build systems that use these existing components in a way that’s scalable, fault-tolerant, and reusable?”

That’s where **System Design** interviews have become so important over the last 7–8 years.
Because they’re not testing how fast you can code — they’re testing *how you think about scale*.

For example, take **YouTube**.
Millions of creators upload videos every second.
Millions of viewers watch, comment, and share simultaneously.
Yet, YouTube *never* goes down.

Think about it — if YouTube were just a simple website running on one web server, it would have crashed long ago.

So what’s the secret?
It’s **System Design** — concepts like **load balancing**, **traffic management**, **distributed servers**, and **fault tolerance**.

When one machine fails, another takes over.
When traffic spikes, load balancers distribute requests intelligently.
And behind every “simple” user action like clicking *Play*, there’s a beautifully designed architecture making sure your video never stops buffering.

That’s engineering.
That’s the macroscopic beauty of computer science.

(pauses, looks at students)
So as we move forward, I don’t want you to just *write programs*.
I want you to *design systems*.
Because someday, you’ll not just build code — you’ll build companies, platforms, and solutions that impact millions.

And that journey starts when you stop thinking like a coder…
and start thinking like an engineer. 💡

 
 (Imagine this being told in class — calm tone, deep insight, mentor’s warmth)


## ⚙️ **From Code to Scalable Systems**

Many companies today say:

> “We already have optimized data structure libraries. We don’t need you to reinvent them.”

But they ask,

> “Can you design a system that uses them to handle millions of users?”

That’s what System Design is all about — taking the existing building blocks and arranging them in a way that’s **scalable**, **resilient**, and **future-ready**.

That’s why in the last 7–8 years, interviews have shifted.
They’re not just asking, *“Can you code this algorithm?”*
They’re asking, *“Can you design a system that works when 10 million users log in at once?”*

### 🌍 **The YouTube Story — A Living Example of System Design**

Let’s talk about **YouTube** — a perfect example of large-scale System Design.

Every second, thousands of creators upload videos.
Millions of users are watching, commenting, liking, and sharing at the same time.
And yet — have you ever seen YouTube go down?

Never.

Why? Because YouTube is not just a *website* — it’s a *system*.

A system that uses:

* **Load Balancing** – to distribute traffic across multiple servers.
* **Caching** – to deliver videos faster from nearby locations.
* **Replication and Redundancy** – to ensure no data is lost.
* **Scalability** – to handle global spikes in demand.

When one server fails, another one instantly takes over.
When traffic increases, load balancers divert users intelligently.
And all this happens so smoothly that you never even notice.

That’s **System Design** in action — invisible, powerful, and essential.

### 💡 **The Mindset Shift**

So when you write your next program, don’t stop at “It works.”
Ask, “Will it still work when 10,000 people use it at once?”
That’s when your thinking shifts from a *developer* to an *engineer*.

You stop writing just *code*… and start designing *systems*.
Because someday, you won’t just build a project — you’ll build a platform, a product, or maybe even a company.

And that journey begins the day you start thinking *systemically*.

So remember:
👉 Data Structures make you a **coder**.
👉 Algorithms make you a **problem solver**.
👉 But **System Design** — that makes you an **engineer**.
 

 (mentor smiles, adjusts the mic, looks around the room)

👋 “Can you hear me?”

(pauses, sees a few confused faces)
Okay… if I’m audible to most of you, then Sachin, maybe your network bandwidth is low. Nitish, you too — just check that once, okay? Perfect. So let’s continue.

Can someone remind me what we were talking about just before this?
(Students reply softly)
Yes — YouTube! Exactly.

### 🎥 **System Design in the Real World**

So, we were discussing YouTube.
Now think for a moment — YouTube is always available.
It runs 24×7, across every corner of the world.

Every second, millions of people are watching videos. Thousands are uploading new ones. Billions of comments, likes, and shares are happening simultaneously.

And yet — have you ever seen YouTube go down?
Rarely.

So the question is: *How is this possible?*

If YouTube is a website, it must be hosted on a **web server**, right?
That web server is a *machine*. And every machine has limits — it can fail, it can overheat, it can lose power.
But YouTube doesn’t stop.

Why? Because it is **not dependent on one machine**.
It has been designed — intelligently, architecturally, and strategically — to **handle scalability**.

That’s where **System Design** comes in.

### ⚙️ **From Data Structures to Scalable Systems**

Now listen carefully — this is important.
Someone has already written the perfect data structures. Libraries are already built.
Companies don’t want you to “reinvent the wheel.”

What they want is this:

> “Can you use those existing data structures to build a system that is scalable, reusable, and distributable?”

That’s the new engineering mindset.

So people learn DevOps, cloud, and networking not because they want to become system administrators — but because these are the *tools* through which scalability and reliability are achieved.

And that’s how we move from **coding** to **engineering**.


### 👩‍💻 **Microscopic vs. Macroscopic Thinking**

Now, most of you here are freshers — I understand that.
As freshers, nobody will immediately ask you to *design* a large-scale system.
What the industry expects is:

> “Can you code efficiently?”
> “Can you think logically?”
> “Can you optimize?”

So right now, our focus is on the **microscopic** level — learning data structures, learning how code behaves.
But someday, as you grow, your focus must shift to the **macroscopic** level — to *System Design*, to *Architecture*, to *Scalability*.

That’s the natural journey of an engineer.

That’s why I’ve kept those **System Design documents** for you — so you can start seeing the bigger picture early.


### 💻 **From WhatsApp to LinkedIn — The World You Live In**

Now, let me ask you something simple.
What are the applications you use every day?

(Students respond)
WhatsApp, Gmail, Instagram, PhonePe, LinkedIn…

Exactly!

You’re surrounded by real-world systems — constantly working behind the scenes.
So when you use WhatsApp, do you ever think — *what data structures are being used there?*

* When you send a message, a **Queue** handles your delivery order.
* When you check your chat history, **Linked Lists** and **Trees** are managing message storage.
* When you search contacts, **Hash Tables** speed it up.
* When millions of people go online at once, **Load Balancers** prevent overload.

Everything is **System Design in action**, built upon strong **Data Structures** underneath.

That’s why I keep saying — fundamentals first, system thinking next.

### 🧱 **The Foundation: Data Structures**

Now before we jump into big systems, let’s take a step back.
What *is* a data structure, really?

It’s not just arrays or stacks.
It’s a **way to organize information** so that it can be used efficiently.

Let me show you:
When I write `12`, it’s a value — an integer.
When I write `30/10/2025`, that’s also a value — a *date*.
But the date is not a primitive type. It’s made of multiple values — day, month, year.

So, we call it a **composite data type** — or a **data structure**.

Similarly, if I define something like:
`Ravi Tambade 51 18/08/1975 MCT` —
that’s a **Person** data structure — made of strings, numbers, and dates.

In C, you’d use a `struct`.
In Java, you’d use a `class`.
In Python, maybe a dictionary or object.

Different languages, same concept — a structured way to represent data.

### 🧠 **Two Worlds: Application and System Software**

Now, once we start building programs using these data structures, they become **applications**.

We call them **Application Software** — Gmail, WhatsApp, Instagram, Word, Excel — all business-focused programs.

But these applications cannot exist on their own.
They need an **environment to run** — an **Operating System**, a **Kernel**, a **File System**.
That’s what we call **System Software**.

So, in computer science, everything sits on two layers:

* **System Software** → the foundation (OS, Compiler, Drivers)
* **Application Software** → what users interact with

Both require **data structures** at their core.
Both need **system design** at scale.

### 🚀 **The Bigger Message**

So let’s connect all the dots:

* **Data Structures** → help you organize and process data efficiently.
* **System Design** → helps you connect that data into scalable, reliable architectures.
* **Application Software** → brings that architecture to life.
* **System Software** → keeps everything running underneath.

When you understand all these layers together — *that’s when you stop being a coder*…
…and start becoming an **engineer**.

(smiles again)
So today, yes, we’ll code.
We’ll write our arrays and linked lists.
But while doing that, keep one question in your mind:

> “Where will this be used in a real-world system like WhatsApp or YouTube?”

That one question — if you keep asking — will change the way you learn forever.

## 🧠 From System Software to System Design

Let’s start with a very simple question.
When you open **WhatsApp**, **Gmail**, **Instagram**, **LinkedIn**, or make a **UPI** payment — what are you really using?

You’re using **application software**, right?
We call them **online applications**.

These online applications run in the **cloud**, and you access them from your **mobile**, **laptop**, or **desktop**.
Millions of people across the world are using the same WhatsApp or Gmail at the same time — sending, receiving, uploading, downloading — and yet, no message is lost, no data is missing.

Have you ever wondered *how that’s even possible*?
That’s where **System Design** comes in.

### 🌐 The World of Online Applications

These multi-user applications — WhatsApp, Gmail, Instagram — are not simple programs.
They are **distributed systems**, designed to handle massive **traffic**.
Behind the scenes, every single chat message, attachment, or notification is represented by some kind of **data structure**:

* Message
* User
* Attachment
* Document

All these are user-defined structures — designed and optimized by developers.
But those data structures alone can’t make WhatsApp run for billions of people.

That’s where the **macroscopic** view comes in — *System Design*.

When you focus deeply on how your code works — that’s a **microscopic** view (data structures, algorithms, graph theory, systems programming).
But when you step back and see how the whole system works together — that’s a **macroscopic** view (architecture, scalability, reliability, load balancing).


### ⚙️ The Other World — System Software

Now let’s move from application software to **system software**.
Tell me, what are examples of system software?

* **Operating Systems** – Windows, Linux, macOS
* **Device Drivers** – display driver, keyboard driver, printer driver
* **Embedded Systems** – drones, washing machines, routers

These are not running in the cloud — they run *inside the machine itself*.

Let’s take one example:
Suppose ten students in a lab send their Word document to the same printer at the same time.
How does that one printer manage ten print requests without missing a single job?

It uses a concept called **spooling**.
It means the printer driver maintains a **queue** of jobs — first come, first served.
When one print is done, it picks the next from the queue.
That’s how it handles load efficiently.

You see? Even here, data structures like **queues** and **linked lists** come to life — not just in theory but in real system-level code.

### 🤖 Embedded Systems — Thinking Efficiently

In embedded systems — like drones or washing machines — we have **limited resources**:

* Limited RAM
* Limited processing power

So every line of code and every data structure must be **optimized**.
You can’t waste a byte.
You must choose wisely — should I use a **stack** or a **queue**?
Should I use a **linked list** or an **array**?

That’s what makes an engineer.
An engineer is someone who knows **how to think like a human but work like a machine**.

### 🏗️ Arriving at System Design

Now let’s come back to the main idea — **System Design**.

See, data structures teach you how to build efficient components.
System Design teaches you how to connect those components into a *scalable, reliable, and maintainable system*.

In the last few years, most tech companies have realized that they don’t need everyone to reinvent data structures — they already have optimized libraries.
What they now need are engineers who can use those libraries to build **scalable systems**.

That’s why **System Design** interviews are trending.
They test whether you can design something like YouTube, Netflix, or WhatsApp —
not just write code, but design *systems* that handle:

* **Scalability**
* **Load Balancing**
* **Traffic Management**
* **Autonomy and Reusability**

So remember — when you learn System Design, you are not just learning *how to code*…
you’re learning *how to make systems that never go down, even when the world is using them*.

That’s the art of an **Engineer** — not just a Developer.
Your **AI** tools can assist you, but your **fundamentals** will save your career.

## *How System Design Meets Data Structures in Real Applications*

Alright everyone, let’s come back to **application software** — not system software now, but **real-world apps** like e-commerce, browsers, games, and compilers.

Why are we discussing this?
Because **System Design** is not only about architecture diagrams and servers — it’s also about *how your code, your data structures, and your modules come together to make large-scale applications work*.

### 🛒 E-Commerce — The Playground of System Design

Think of an **e-commerce application** like Amazon or Flipkart.
Now, what really happens there?

* **Product Catalog** – Thousands of products need to be stored, searched, and displayed efficiently.
* **Order Processing** – Millions of customers placing orders simultaneously.
* **Shopping Cart** – Temporary storage for selected items.
* **Inventory Management** – Tracking available stock.
* **CRM (Customer Relationship Management)** – Handling user data, preferences, and history.
* **Shipment Module** – Managing deliveries and logistics.

Now ask yourself — if there are 10,000 products, how will you represent them in memory?

You’ll need **data structures**.

Maybe a **tree** structure —
`Product → Category → Subcategory → Item`

So you could have:

```
Product
 ├── Fruits
 │     ├── Mango
 │     ├── Apple
 ├── Vegetables
 │     ├── Carrot
 │     ├── Potato
 └── Flowers
       ├── Jasmine
       ├── Rose
```

Each category is a **node**, and the items are **child nodes**.
You can even link them using **linked lists** for traversal, or use a **hash map** for quick lookups.

That’s how a large e-commerce catalog becomes efficient — not by magic, but by applying **the right data structure at the right place**.

### 📞 Contact List — Hash Maps in Action

Think about your **mobile contact list**.
You open “Contacts”, search for *Sanika Bor*, and instantly find her details — along with two numbers, photo, and address.

How does your phone find that so fast among 3000 contacts?
Because it uses a **hash map** (or dictionary).

Each contact is stored as a **key-value pair**:
`Key = Name` → `Value = Memory location where details are stored`

So “Sanika Bhor” points to her data chunk in memory, and from there you get all her details.
That’s real-world **dictionary or hash map** usage — not just a theory question from your textbook.


### 🌍 Web Browsers — Stack in Everyday Use

Now open your **browser** — Chrome, Edge, Firefox, anything.
You click links — *Next, Next, Next…* and then you hit the back button.

What happens?

You go **back** through your navigation history — one page at a time.
Go too far back, and you reach the **bottom**.
Go forward again, and you reach the **top**.

This is a **stack**.
It’s literally *push* and *pop* in action.

Each time you open a new page → *Push*
Each time you hit back → *Pop*

So before you even write code for a stack, see where it lives — in your browser history, undo-redo in Word, and even in compiler function calls.

### 🧩 Undo and Redo — Stack in Office Applications

Take **Microsoft Word** or **Excel**.
You type something, delete, copy, paste — and you can *undo* or *redo* everything.

How is that implemented?
Two stacks.

* One stack for *undo operations*
* One stack for *redo operations*

Each action you perform is recorded as a command on the stack.
When you press Ctrl+Z, the last command is popped and reversed.
Press Ctrl+Y, it’s pushed back to the redo stack.

So again, **data structures at work**.


### 🧮 Compilers — Stacks and Trees in Language Processing

Now, let’s move deeper — into **compilers**.

When you write C++, Java, or Python, the compiler doesn’t just read text.
It parses mathematical expressions, function calls, and nested parentheses using stacks and trees.

For example:
`(2 + (3 * 5))`

The compiler pushes each opening bracket and operator on the stack.
When a closing bracket is found, it pops, computes, and continues.

That’s called **expression parsing**, and it’s a real implementation of **stack** in compilers.

Similarly, **symbol tables** are often stored using **hash maps or trees** to quickly look up variables and functions.
That’s how **James Gosling**, when building Java, and **Dennis Ritchie**, when designing C, structured their compilers — through solid **data structure principles**.

### 🎮 Gaming — Real-Time Data Structures

Now look at **gaming applications** — online multiplayer games.
When you move your character, the entire **game state** changes — camera angle, object positions, collisions.

This is called **Game State Management**, and it uses **queues**, **stacks**, and **graphs** to manage transitions.

Classic example — *Pac-Man*.
Each move updates your position and recalculates nearby paths in the maze — all through **state management algorithms**.

So in games too, **data structures** are breathing life into what you see on screen.


### 🎨 Designing Software — CorelDRAW and Photoshop

Even design tools like **Photoshop** or **CorelDRAW** rely on **stack concepts**.
You draw something → Undo → Redo → Layers → History.
All managed by stacks, linked lists, and trees behind the scenes.

### 💼 Why Big Companies Build Their Own Libraries

Now you might ask,
“Sir, can’t we just install a library and use it?”

Yes, you can. But big companies like **Microsoft** or **Adobe** rarely rely on others.
They build their **own libraries**, because they want **full control, full optimization, and full profit**.

They hire **engineers** — not just coders — who understand how to design these internal data structures efficiently.

If their library is well-optimized, their cloud billing can drop from ₹1 crore to ₹25 lakh —
and that’s real business impact created by good **system design and data structure decisions**.

### 🧭 The Takeaway

So what’s the big picture?
Whether it’s a **system software** like an operating system or a **business application** like Amazon,
the DNA of every great software lies in **system design** and **data structures**.

Learn both —
🔹 Microscopic view → data structures, algorithms
🔹 Macroscopic view → system design, scalability, architecture

And then, **think like a human but work like a machine** —
that’s how you become an **Engineer**, not just a Developer.




## 🎯 From Stack to System Design

**[Mentor speaks]**

You know, I think today we’ve discussed so many different *categories of software*.
Let’s pause and think — all these things you use daily: mobile apps, browsers, games, compilers, office tools… they all look different, but deep inside, they share the same language — *Data Structures.*

Take your mobile apps, for example — say an e-commerce app like **Amazon**. You keep tapping — *click, click, click* — open product, go back, open another one, add to cart, then return to the home screen.
That entire smooth experience — this “go forward, go back” — is powered by one beautiful concept from Data Structures — the **Stack**.

Every screen you open gets *pushed* on top. When you go back, it’s *popped* off.
Simple, right? But so powerful. That’s how navigation works in almost every app you use — whether it’s WhatsApp, Instagram, or even your mobile settings.

So imagine tomorrow you join **Meta**, and your team says — “Hey, we’re building the next version of WhatsApp.”
Now, your job will not just be to write code.
Your job will be to **make that code efficient** — so that the app runs faster, lighter, smoother — for millions of people.
And that’s where the **choice of the right data structures** and **algorithms** matters.

Because coding is not just typing lines — it’s **thinking like an engineer**.
That’s why I always say:
👉 “Don’t become a developer first — become an engineer first.”
Because **AI won’t save your career**, but **your fundamentals will**.

When you think like an engineer, you start seeing patterns.
Today, we talked about the *stack* in mobile apps.
Tomorrow, we’ll get our hands dirty and write the actual stack code — push, pop, peek — from scratch.
Because the only way to learn is to *play with the code*, break it, fix it, and build again.

But remember — understanding stacks, queues, trees, or graphs is still a **microscopic view**.
It’s like looking at the cells of the system.
If you zoom out, the next thing you must learn is how these microscopic pieces come together to form a living, breathing system — and that’s called **System Design**.

### 🔍 Transition: From Microscopic to Macroscopic Thinking

In computer science, we always say there are two approaches:

* **Microscopic** — learning data structures, algorithms, compilers, operating systems.
* **Macroscopic** — learning how to design *systems* that scale, that don’t fail, that serve millions — like YouTube, Netflix, or WhatsApp.

When you dive deep into code, that’s microscopic learning.
But when you step back and ask —
“How does YouTube handle millions of videos without crashing?”
“How does WhatsApp deliver messages instantly?”
you’re entering the **macroscopic world of System Design.**

Now, companies today already have world-class data structure libraries.
They don’t need you to reinvent the wheel.
They want engineers who can **use those existing libraries** to build **scalable, reliable, and reusable systems.**

That’s why in modern interviews, especially in product companies, you’ll find more and more questions around **System Design**.
Because they want to see — can you think beyond a single function?
Can you imagine how 1000 servers talk to each other?
Can you make systems that never go down, even when millions of people use them?

Take YouTube, for instance.
Millions of videos uploaded every hour. Millions of viewers watching simultaneously.
And yet — YouTube never really *crashes*.
Why? Because it’s not a single web server.
It’s a **distributed, load-balanced, scalable system**.
It’s built using the same data structures you’re learning — but at a *macroscopic scale.*

### 🧠 The Big Picture

So when you learn data structures, you’re learning *how the brain works*.
When you learn system design, you’re learning *how the body functions*.

One gives you precision.
The other gives you purpose.

That’s why —

> “An engineer is someone who thinks like a human, but builds like a machine.”

And that’s the mindset we’ll carry forward.

Tomorrow, we’ll start implementing **Stack** — from scratch — in code.
But remember, every small piece of logic you write today will one day be part of a much bigger design — a scalable system serving millions.

So learn to think deep (microscopic), but also learn to see wide (macroscopic).
That’s how you become a true engineer — not just a developer.
