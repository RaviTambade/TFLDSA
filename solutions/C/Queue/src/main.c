#include "queue.h"
#include <stdio.h>

//Global pointer to struct Queue

struct Queue* queue=NULL;
int size=0;

int main() {
printf("Welcome to Queue Operations\n");
int option=1;
  while(1){
        printf("\n CRUD Operations Menu \n");
        printf("1.Create \t");
        printf("2.Enqueue \t");
        printf("3.Dequeue \t");
        printf("4.Display \t");
        printf("5.Exit\t");
        scanf("%d", &option);

        switch(option){
              case 1:
                {
                    printf("Enter the size of Queue: ");
                    scanf("%d", &size);
                    queue = createQueue(size);
                }      
              break;

              case 2:{
                    int data;
                    printf("Enter data to enqueue: ");
                    scanf("%d", &data);
                    enqueue(queue, data);
              }
              break;

              case 3:{
                    int data=dequeue(queue);
                    printf("Dequeued: %d\n", data);
              }
              break;

              case 4:
                display(queue);
              break;
               
              case 5:
                    return 0;
              break;
              
              default:
                printf(" Invalid Options, Please try again\n");
        }
  }
    return 0;
}