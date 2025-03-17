#include "functions.h"

void function1(){
    printf("%s","Program 1\n");
}
int function2(int n){
    printf("%s","Program 2\n");
    return n;
}
float function3(int a, int b){
    printf("%s","Program 2\n");
    return a / b;
}
char function4(int arr[]){
    char name[20];
    return name[0];
}
bool function5(float num){
    return num > 0 ? 1 : 0;
}