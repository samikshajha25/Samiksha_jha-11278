//program demonstrating data types and format specifer
#include <stdio.h>
int main(){
    int age = 19 ;
    float height = 5.8;
    double salary = 35000.000;
    char grade = 'A';
    char name[] = "Samiksha";
    
    printf("%d\n", age);
    printf("%f\n", height);
    printf("%.2lf\n", salary);
    printf("%c\n", grade);
    printf("%s\n",name);

    return 0;
}
