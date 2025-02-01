#include <stdio.h>
#include <stdbool.h>
int main (){
    // int accountBalance = 10000;
    // int credit = 50000;
    // int debit = 20000;
    // int age = 5;
    // int newVariable = accountBalance + credit;
    // int anotherVariable = accountBalance - debit;

    // accountBalance += credit;

    // printf("%i\n", age/2);

    // int isAdult = 1;
    // int isPAUStudent = 0;

    // if (isAdult == 1 || isPAUStudent ==1){
    //     printf("You can get free lunch\n");
    // }else {
    //     printf("No free lunch for you\n");
    // }

    // int a = 5;
    // int b = 3;

    // printf("%i\n", ~a);

    
    int age;
    printf("Please Enter you age\n");
    scanf("%d", &age);

    if (scanf("%d", &age) == 0){
        printf("Inavlid input! Please enter a valid age");
        return 1;
    }

    if (age > 18){
        printf("You can vote\n");
    }else {
        printf("You cannot vote\n");
    }

    // int CSC205, CSC201, STA;

    // printf("Enter your CSC205 score\n");
    // scanf("%i", &CSC205);
    // printf("Enter your CSC201 score\n");
    // scanf("%i", &CSC201);
    // printf("Enter your STA score\n");
    // scanf("%i", &STA);

    // int total = CSC205 + CSC201 + STA;

    // int avg = total/3;

    // int percentage =  avg;
    // if (total > 100|| avg > 100 || percentage > 100){
    //     printf("All scores can only be less than 100\n");
    // }else{
    // printf("Your total is %i\n", total);
    // printf("Your average is %i\n", avg);
    // printf("Your percentage is %i %%\n", percentage);}
    
    char letter;
    printf("Enter a letter from a to j")
    scanf("%c", &letter);
    if ((letter >= 'A' && letter <= 'J') || (letter  >= 'a' && letter <= 'j')){
        for (int i; i<=6; i++){
            printf("%c", letter + i);
        }
        printf("\n");
    }else {
        printf("Invalid input");
    }

//     int a,b,choice;
//     printf("Enter a:\n");
//     scanf("%i", &a);
//     printf("Enter b:\n");
//     scanf("%i", &b);
//     printf("Enter choice:\n 1. Multiplication\n 2. Addition\n 3. Subtraction\n 4. Division\n ");
//     scanf("%i", &choice);
//     if (choice > 4){
//         printf("select within range!");
//         printf("Enter choice:\n 1. Multiplication\n 2. Addition\n 3. Subtraction\n 4. Division\n ");
//         scanf("%i", &choice);
//     }else{
//         switch ( choice ){
//         case 1:
//         printf("%d * %d = %d\n", a,b,(a * b));
//     break;

//     case 2:
//         printf("%d + %d = %d\n", a,b, (a + b) );
//     break;

//     case 3:
//         printf("%d - %d = %d\n", a,b, (a - b) );
//     break;

//     case 4:
//         if (b == 0){
//             printf("Zero cannot divide any number\n");
//         }else{
//         printf("%d / %d = %d\n", a,b, (a/b) );}
//     break;

//     default:
//     printf("Invalid choice!");
//     break;
//     }
// }

    // int num, i;
    // printf("Enter any number: ");
    // scanf("%d", &num);

    // for (i=0; i<=2; ++i)
    //     printf("Right shift by %d: %d\n", i, num>>i);

    // printf("\n");

    // for (i=0; i<=2; ++i)
    //     printf("Left shift by %d: %d\n", i, num<<i);


    return 0;
    }

    
    