from ..ds.linkedlist import LinkedList
from .filemanager import FileManager 


class UIManager:

    def showMenu(self):
        print("1. Insert")
        print("2. Search")
        print("3. Delete")
        print("4. Display")
        print("5. Save to file")
        print("6. Exit")

    def acceptChoice(self):
        return int(input("Enter your choice: "))
        