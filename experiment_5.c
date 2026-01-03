//program to swap two numbers(using variable/pointers)
#include <stdio.h>
int main(){
    int a = 10,b =5,temp;
    printf("before swap: a = %d,b = %d\n", a,b);

    temp = a;
    a=b;
    b=temp;

    printf("after swap: a = %d, b= %d", a,b);

    return 0;
}