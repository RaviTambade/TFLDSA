#include "node.h"

class LinkedList
{
    public:
        Node *ptrHead ;
        
        LinkedList();
        void insert(int item);
        void remove(int item );
        void search(int item );
        void display();
};