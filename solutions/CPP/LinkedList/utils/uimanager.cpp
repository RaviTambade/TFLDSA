#include"filemanager.cpp"

class UIManager
{
    public:

        void showMenu(){
            cout<<"***** Menu *****"<<endl ;
            cout <<"1. insert new node "<<endl ;
            cout <<"2.search node "<<endl ;
            cout <<"3.display all nodes  "<<endl ;
            cout <<"4. remove node "<<endl ;
            cout<<"5.save and exit "<<endl ;
        
        }
        int getChoice (int choice ){
            cout <<"enter your choice "<< endl ; 
            cin >> choice;
            return choice;
        }
};