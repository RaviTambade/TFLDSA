#include <iostream>
#include <string>
#include "Book.cpp"
#define size 5
using namespace std;
class Shelf{
    private :
         int top;  //represent index of the shelf
         Book books[size];
    public:
        Shelf(){
            this->top=-1;
        }
        void push(Book theBook){ 
            //Overflow condition
            if(top == size-1){
                cout<<"Shelf is full with Books"<<endl;
                cout<<"You can not push more books on Shelf";
            }
            else{
                top++;
                this->books[top]=theBook;
            }
        }

        void pop(){
            //Underflow condition
            if(this->top>=0)
            this->top--;
            else{
                cout<<"Shelf is empty"<<endl;
                cout<<"There is no any book available to Pop"<<endl;
            }
        }
        
        Book peek(){
            if(this->top ==-1){
                Book noBook("*******","********");
                return noBook;
            }
            Book theBook=books[top];
            return theBook;
        }

        void display(){
            //keep traversing  shelf with Books from Top to bottom
            cout<<"\n Books available on Shelf"<<endl;
            for(int i=top; i>=0;i--){
                this->books[i].print();
            }
        }   
};