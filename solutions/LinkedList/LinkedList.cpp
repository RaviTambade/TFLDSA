#include <iostream>
#include "Node.cpp"

using namespace std;
class LinkedList{
    private :
            Node * head;
    public:
    
            LinkedList(){
                this->head=nullptr;
            }

            void insert(int item){
                Node * theNode=new Node(item);

                if(head ==nullptr){
                    head=theNode;
                    return ;
                }

                Node * current=head;
                while(current->next != nullptr){
                    current=current->next;
                }
                current->next=theNode;
            }

            void search(int data){
                //logic
            }

            void remove(int data){
                //logic
            }

            void display(){
                //linked list Traversing
                Node * current=this->head;
                if(current ==nullptr){
                    cout<<"List is empty"<<endl;
                }

                while(current !=nullptr){
                    cout<<current->data<<"----->";
                    current=current->next;
                }
            }
};