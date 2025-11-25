

Array:
        A Fixed-size collection of elements stored in contiguous memory
        All elements are stored next to each other.
        Example: int arr[5]={45,56,76,78,90};

Index:   0    1    2    3    4
        +----+----+----+----+----+
Data:   | 45 | 56 | 76 | 78 | 90 |
        +----+----+----+----+----+


Linked list:
        A Dynamic-size collection of nodess stored at non-contiguous memory
        Each node contains:
                    data
                    pointer to the next node

        Example:   |45|next|->|56|next|->|76| next|->NULL

+-------+    +-------+    +-------+
|  45   | -> |  56   | -> |  76   | -> NULL
+-------+    +-------+    +-------+



Feature                     Array                                       Linked List


Memory allocation           static/fixed                                Dynamic/grows as needed
Memory location             Contiguous                                  Random/ non-contigous
Size                        Fixed at creation                           Flexible, can grow/ shrink
Access Time                 random access using index                   Sequential access
Insert/Delete Item          shift elements                              can at begining/middle/last if pointer known
Extra memory                No extra memory                             Exra memory for pointers
Cache friendliness          Very Good(contiguous)                       Poor
Implementation              Simple                                      understanding of pointers
Best used when              Frequent access by index                    Frequent insert/delete


Advantages of Array:
            Fast random access   arr[i]
            Good Cache performance
            Simple to use

Disadvantages of Array:
            Fixed Size
            Costly insertions and deletions
            Memory waste if array is too large


Advantages of Linked List:
            Dynamic Size (grow/shrink at runtime)
            Easy insertion/updation/Deletion
            No memory wastage

Disadvantages of Linked List:
            No random access (must traverse through linked list)
            Extra memory for pointers
            Poor Cache
            Slower traversal compared with array
            














