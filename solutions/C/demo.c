//macro : Preprocessor
#include <stdio.h>
#include <stdbool.h>



//global variable
int marks=56;

void showDetails(){

    int sum=67;
    int * ptrResult= (int *)malloc (sizeof(int));  //pointer
    *ptrResult=89;
    printf("Transfower TAP Details !");

    printf( "Sum,= %d", sum);
    printf("Result= %d", *ptrResult);


}

//Blocking Call

int main(){
    //logic
    //set of instructions
    //printf function have been nested inside main
    for(int i=0;i<=10000;i++){
        showDetails();  //invoke
    }
    
}