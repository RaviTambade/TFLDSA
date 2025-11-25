from ..ds.linkedlist import LinkedList

class FileManager :
    
    # Save linked list to a file
    def serialize(self, filename,list):
        current= list.head 
        with open(filename, "w") as file :
            while current != None:
                file.write(str(current.data)+ "->")
                current = current.next 

    # Load linked list from a file
    def deserialize(self, filename):
        list = LinkedList()
        try:
            with open(filename, "r") as file :
                data = file.read()
                items = data.split("->")
                for item in items:
                    if item :
                        list.insert(item)
        except FileNotFoundError:
            pass
        return list