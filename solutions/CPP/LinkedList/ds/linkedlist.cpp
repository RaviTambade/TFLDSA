#include "linkedlist.h"
#include <iostream>
using namespace std ;
      
LinkedList::LinkedList  (){
    this -> ptrHead =nullptr ;
}

void LinkedList::insert(int item){
    Node * newNode= new Node(item) ;

    if (ptrHead == nullptr){
        ptrHead  = newNode ;
        return ;
    }

    Node * currentNode = ptrHead     ;
    while (currentNode->next != nullptr )
    {
        currentNode= currentNode->next ;
    }
    currentNode->next = newNode ;              
}

void LinkedList::search(int item ){
    
    Node * ptrCurrentNode = ptrHead ; 
    int i = 0 ;

    while (ptrCurrentNode != nullptr)
    {   
        if (ptrCurrentNode->data == item){
            cout<<item<<" found at position "<< i << endl ;
            return ;
        } 
        ptrCurrentNode = ptrCurrentNode->next ;
        i++;
    }
}

void LinkedList::display(){
    Node * ptrCurrentNode = ptrHead ;
    if (ptrCurrentNode == nullptr)
    {
        cout<<"list is empty "<< endl ;
        return ;
    }
    cout<<"start ";
    while (ptrCurrentNode  != nullptr){
        cout<<ptrCurrentNode->data<<" ->";
        ptrCurrentNode = ptrCurrentNode->next ;
    }
    cout<<"end"<<endl ;
}
        
void LinkedList::remove(int item ){
    if (ptrHead->data == item){

        ptrHead = ptrHead->next;
        return ;
    }
    Node *previousNode = nullptr ;
    Node *ptrCurrentNode = ptrHead ; 

    //case 2 : if is between staring and ending 
    while (ptrCurrentNode->next!= nullptr)
    {
        previousNode=ptrCurrentNode;
        ptrCurrentNode = ptrCurrentNode ->next ;
        if (ptrCurrentNode->data == item ){

            previousNode->next = ptrCurrentNode ->next ;
            return ;
        }               
    }
    cout << "number not found "<<endl ;
}
 