#include"../include/decision_making.h"
void student_marks()
 {
    int marks;
    printf("\n\nenter student marks");
    scanf("%d",&marks);
    if (marks>=75)
    {
        printf("\nyou pass with distinction");
    }
    else if (marks>=60)
    {
        printf("\nyou got first class");
    }
    else if (marks>=40)
    {
        printf("\nyou pass only");
    }
    else if (marks<40)
    {
        printf("\nyou are fail");
    }
}


//Basics of C  Programming:
// variable declartion
// arithmatic operation utilization
// logical operator ususage,, bitwise operators
// conditional statement
// looping statements
// function declaration
// how declare prototypes in header file
// how write implementation in source files
// how to implement logic for showing odd, even, prime numbers ?
// how to get number of bytes needed for differnt data types using sizeof function
//