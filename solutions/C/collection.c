#include <stdio.h>


//global Variable

 //array variable ;

//How many elements  in array Variable ?-----8 
// one integer value to be stored-------- 4 bytes
// 8 interger values to store in contigueous location;
// 8 * 4 = 32 bytes 
// either on Stack or on he
int main(){
    int studentsScore[4];    //array varible
    for(int i=0; i<=4;i++)
    {
        studentsScore[i]=78+i;
    }
    
    //memory Blocks: one after the other
    //[78][67][87][15][90]
    //An Array is a colletion of elments of the same data type, 
    //stored in contiguous ( side by side) memory locations and accessed  using an index

    for(int i=0; i<=4;i++)
    {
        printf("\n Marks scored by student id %d   at Address %d = %d value",i, &studentsScore[i], studentsScore[i]);
    }
    return 1;
}

        //Two types of Data Strctures:
        // Primitive data structures :   int , char, float , double

        // Non primitive data Strcutures: Array, structure, Stack, Queue
        //                              Linked list, Tree, Graph, Hash Table
