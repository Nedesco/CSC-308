#include <stdio.h>
#include <stdlib.h>

int main(){
//  char val; 
    // printf("Insert an input\n");
    // scanf("%c", &val);

    // switch(val){
    //     case 'A' ... 'z':
    //       for(int i = 1; i<=4; i++){
    //         printf("%c ", val + 3*i);
    //     }
    //     break;

    //     case '0' ... '9':
    //     int input;
    //     input = val - '0';
    //     for(int i = 1; i<=4; i++){
    //         printf("%i ", input + 3*i);
    //     }
    //     break;  
    // }
    int choice;
    printf("Enter a choice: 1. Character 2. Integer 3. Float");
    scanf("%i", &choice);
    switch(choice){
        case 1:
        char val;
        printf("Insert an input\n");
        scanf("%c", &val);
        for(int i = 1; i<=4; i++){
        printf("%c ", val + 3*i);
        }
        break;

        case 2:
        int num;
        printf("Insert an input\n");
        scanf("%i", &num);
        for(int i = 1; i<=4; i++){
        printf("%i ", num + 3*i);
        }
        break;

        case 3:
        float input;
        printf("Insert an input\n");
        scanf("%f", &input);
        for(int i = 1; i<=4; i++){
        printf("%f ", input + 3*i);
        }
        break;
    }








    return 0;
}