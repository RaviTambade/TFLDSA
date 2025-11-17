#include <iostream>
#include <string.h>
#define size 5
#include "Shelf.cpp"
using namespace std;

int main(){
    
    Book book1("You can win","Shiv khera");
    Book book2("Ignited Minds","APJ Kalam"); 
    Book book3("The Monk who sold his Ferrari", "Robhin Sharma");
    Book book4("Mahabharat", "Vyas");
    Book book5("Ramayan", "Walminki");
   
    Shelf  theShelf ;
    theShelf.push(book1);
    theShelf.push(book2);
    theShelf.push(book3);
    theShelf.push(book4);
    theShelf.push(book5);

    cout<<"Show all Books which are pushed"<<endl;

    theShelf.display();
    theShelf.pop();
    theShelf.pop();
    theShelf.pop();
    theShelf.pop();
    theShelf.pop();
    theShelf.pop();  /// underflow
    cout<<"|n\n After first Pop \n";
    theShelf.display();
    return 0;
}