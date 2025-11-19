#include <iostream>
#include "Linkedlist.cpp"

int main(){

    LinkedList list;
   
    list.insert(45);
    list.insert(67);
    list.insert(87);
    list.insert(64);
    list.insert(112);

    list.display();
   /// list.search(87);
   // list.remove(67);

   // list.display();
    return 0;
}