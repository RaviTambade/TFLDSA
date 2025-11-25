from Collection import LinkedList, uiManager, fileManager

# Main function to run the LinkedList UI
def main():

    mgr = fileManager()
    ui_manager = uiManager()

    list = LinkedList()

    # Attempt to deserialize existing list from file
    list = mgr.deserialize()


    while True:

        ui_manager.showMenu()
        choice = ui_manager.acceptChoice()
        
        match choice:
                case 1:
                    item = input("Enter item to insert: ")
                    list.insert(item)

                case 2:
                    item = input("Enter item to search: ")
                    found = list.search(item)
                    if found:
                        print(f"{item} found in the list.")
                    else:
                        print(f"{item} not found in the list.")

                case 3:
                    item = input("Enter item to delete: ")
                    list.delete(item)
                    print(f"{item} deleted if it was present.")

                case 4:
                    list.display()

                case 5:
                    mgr = fileManager()
                    mgr.serialize(list)

                case 6:
                    print("Exiting...")
                    break

                case _:
                    print("Invalid choice. Please try again.")
# Run the main function
main()
