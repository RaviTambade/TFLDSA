// LIFO: Last in First out----memory-----stack
// FIFO: First in First out-----scheduling exectuion---queue
#define size 5
# include <iostream>
# include <string.h>

using namespace std;

class Book{
        public:
                string title;
                string author;

              
                Book(){
                    this->title="Rich Dad Poor Dad";
                    this->author="Robert K";
                }

                Book(string t, string a){
                    this->title=t;
                    this->author=a;
                }
};

class Shelf{

    private :
         int top;  //represent index of the shelf

         Book books[size];

    public:
            Shelf(){
                this->top=-1;
             }


            void push(Book theBook){ 
                    top++;
                    this->books[top]=theBook;
             }
           
};


//Mode of execution
//Release mode
//Debug mode

int main(){

    Shelf  motivationalShelf ;
    Book book1("You can win","Shiv khera");
    motivationalShelf.push(book1);
    Book book2("Ignited Minds","APJ Kalam");
    motivationalShelf.push(book2);
    Book book3("The Monk who sold his Ferrari", "Robhin Sharma");
    motivationalShelf.push(book3);

    Book book4("Mahabharat", "Vyas");
    motivationalShelf.push(book4);

    Book book5("Ramayan", "Walminki");
    motivationalShelf.push(book5);
    Book book6("M3", "Ram Pande");
    motivationalShelf.push(book6);


    //Book theBook=motivationalShelf.pop();

    return 0;
}