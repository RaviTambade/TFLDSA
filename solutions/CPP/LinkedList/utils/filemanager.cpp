#include <string>
#include <fstream>
#include "LinkedList.cpp"

class FileManager
{
    public:

        bool serialize(LinkedList list, string filename){

            bool status = false ;
        
            ofstream fout(filename);
            Node *ptrCurrentNode = list.ptrHead ;
            
            while (ptrCurrentNode != nullptr )
            {
                fout<<ptrCurrentNode->data<<endl ;
                status =true;
                ptrCurrentNode=ptrCurrentNode->next;
            }
            return status ;  
        }


        LinkedList deserialize(string filename){
            LinkedList list ;
            ifstream fin(filename);
            int value ;
            while (fin >> value){
                list.insert(value);
            }
            return list ;
        }
};
