#include <iostream>
#include <string>

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

            void print(){
                cout<<"\n"<<this->title <<"  "<<this->author;
            }
};