#ifndef UIMANAGER_H
#define UIMANAGER_H
#include <iostream>
#include <string>
#include "Shelf.cpp"

using namespace std;

class UIManager {
private:
    Shelf theShelf; 
    
public:
    UIManager() {
        cout << "\n=====================================================\n";
        cout << "Welcome to the Transflower Bookshelf Application!\n";
        cout << "=====================================================\n\n";
    }


    void showMenu() {
        cout << "\n================== MENU OPTIONS ==================\n";
        cout << "1. Push a Book onto the Shelf\n";
        cout << "2. Pop a Book from the Shelf\n";
        cout << "3. Peek at the Top Book\n";
        cout << "4. Display All Books\n";
        cout << "5. Exit Application\n";
        cout << "==================================================\n";
        cout << "Enter your choice: ";
    }

    void handleUserChoice() {
        int choice;
        cin >> choice;

        string title, author;
        switch (choice) {
            case 1:
                cout << "\nEnter Book Title: ";
                cin.ignore();          // clear leftover newline
                getline(cin, title);
                cout << "Enter Author Name: ";
                getline(cin, author);
                {
                    Book newBook(title, author);
                    theShelf.push(newBook);
                }
                break;

            case 2:
                theShelf.pop();
                break;

            case 3:
                theShelf.peek();
                break;

            case 4:
                theShelf.display();
                break;

            case 5:
                cout << "\nExiting... Thank you for using the Transflower Bookshelf!\n";
                exit(0);

            default:
                cout << "\nInvalid choice. Please enter a valid option.\n";
                break;
        }
    }

    void start() {
        while (true) {
            showMenu();
            handleUserChoice();
        }
    }
};
#endif