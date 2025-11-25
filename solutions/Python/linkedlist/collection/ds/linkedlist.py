from .Node import Node

class LinkedList:

    #constructor
    def __init__(self):
        self.head = None

    # CRUD Operations

    def insert(self, item):
        new_node = Node(item)  

        if self.head is None:
            self.head = new_node
        else:
            current = self.head
            while current.next!= None:
                current = current.next
            current.next = new_node 

    def search(self, item):
        current = self.head
        while current:
            if current.data == item:
                return True
            current = current.next
        return False
    
    def delete(self, item):

        current = self.head
        previous = None
        
        while current and current.data != item:
            previous = current
            current = current.next
        if current is None:
            return  
        if previous is None:
            self.head = current.next  
        else:
            previous.next = current.next
            
    def display(self):
        current = self.head

        while current:
            print(current.data, end=" -> ")
            current = current.next
        print("None")
