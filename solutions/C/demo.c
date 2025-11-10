#include <stdio.h>
#include <stdbool.h>
//global variable
int marks=56;

//implementation of function
void showDetails(){
    int sum=67;
    int * ptrResult= (int *)malloc (sizeof(int));  //pointer
    *ptrResult=89;
    printf("Transfower TAP Details !");
    printf( "Sum,= %d", sum);
    printf("Result= %d", *ptrResult);

    showDetails();   //recursive call
}

int main(){
    int count=0;
    while(count < 10)
    {
        showDetails();  //invoke function
                        //call function
                        //resolve function
                        //Jump to function
                        //Excute 
        count++;
    }  
}
