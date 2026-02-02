#include"../include/sumit.h"
#include"../include/decision_making.h"
#include"../include/looping.h"
int main()
{
    print();
    addtion();
    calculate_area();
    relation_ope();
    conditional();
    logical();
    bitwise();
    size_of();
    If();
    If2();
    even();
    greatestint();
    student_marks();
     prime();
    basic_for();
   

} 
/*
g++ -Iinclude -c ./src/addtion.c -o ./build/addtion.o
g++ -Iinclude -c ./src/area_circle.c -o ./build/area_circle.o
g++ -Iinclude -c ./src/bitwise.c -o ./build/bitwise.o
g++ -Iinclude -c ./src/conditional_operator.c -o ./build/conditional_operator.o
g++ -Iinclude -c ./src/hello.c -o ./build/hello.o
g++ -Iinclude -c ./src/logical.c -o ./build/logical.o
g++ -Iinclude -c ./src/main.c -o ./build/main.o
g++ -Iinclude -c ./src/relation_operator.c -o ./build/relation_operator.o
g++ -Iinclude -c ./src/sizeof.c -o ./build/sizeof.o
g++ -Iinclude -c ./src/If.c -o ./build/If.o
g++ -Iinclude -c ./src/If2.c -o ./build/If2.o
g++ -Iinclude -c ./src/even.c -o ./build/even.o
g++ -Iinclude -c ./src/greatestint.c -o ./build/greatestint.o
g++ -Iinclude -c ./src/student_marks.c -o ./build/student_marks.o
g++ -Iinclude -c ./src/for.c -o ./build/for.o
g++ -Iinclude -c ./src/prime.c -o ./build/prime.o


g++ ./build/main.o ./build/for.o ./build/prime.o ./build/if.o ./build/hello.o ./build/student_marks.o ./build/greatestint.o ./build/even.o ./build/sizeof.o ./build/relation_operator.o ./build/addtion.o ./build/area_circle.o ./build/logical.o ./build/bitwise.o ./build/conditional_operator.o ./build/if2.o -o ./build/output.exe


*/