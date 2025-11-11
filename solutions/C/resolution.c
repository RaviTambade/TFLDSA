
# include <stdio.h>
# include <stdlib.h>


//Square matrix (3,3) (4,4) (6,6)
//Rectangular matrix (3,5)

# define HEIGHT 4
# define WIDTH 4


typedef struct {
     int red;
     int green;
     int blue;
} Pixel ;


int main(){
    int x;
    x=34;                  //single dimensional data
    printf("\n %d \n", x);

    int marks[4]={23,54,34,65};

    Pixel screen[HEIGHT][WIDTH]; //2D matrix


    //Nested loop

    for(int y=0; y< HEIGHT;y++)
    {
        for(int x=0; x< WIDTH;x++){
            screen[y][x].red=rand()%256;
            screen[y][x].green=rand()%256;
            screen[y][x].blue=rand()%256;
        }
    }

    for(int y=0; y< HEIGHT;y++)
    {
        for(int x=0; x< WIDTH;x++){
          printf("(%d,%d,%d)\t", screen[y][x].red,screen[y][x].green,screen[y][x].blue);
        }
        printf("\n");
    }
}