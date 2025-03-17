
#include "functions.h"


int main(void){
    int choice = -1;
    int arr[3];
    do {
        printf("Chon chuong trinh: \n");
        printf("1. Program 1\n");
        printf("2. Program 2\n");
        printf("3. Program 3\n");
        printf("4. Program 4\n");
        printf("5. Program 5\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            function1();
            break;
        case 2: 
            function2(0);
            break;
        case 3:
            function3(0,0);
            break;
        case 4:
            function4(arr);
            break;
        case 5:
            function5(3.4);
            break;
        
        default:
            break;
        }
    } while(choice != -1);
    
    
    return 0;
}
