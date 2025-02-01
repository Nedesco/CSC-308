#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>



int main (){
bool Exit = false;
int choice;
int quantity;
int price;
int total = 0;
int subtotal;




do{
    printf("Welcome to Mama Cas Restaurant.\n What meal would you like to order?\n ");
    printf("1. Poundo Yam and Edikaikong - 3200\n 2. Fried Rice and Chicken - 3000\n 3. Amala and Ewedu Soup\n 4. Eba and Egusi Soup\n 5. White Rice and Stew\n 6. Exit");
    scanf("%i", &choice);

    switch (choice) {
        case 1:
        price = 3200;
        printf("Quantity: ");
        scanf("%i", &quantity);
        subtotal = price* quantity;
        total = total + subtotal;
        break;


        case 2:
        price = 3000;
        printf("Quantity: ");
        scanf("%i", &quantity);
        subtotal = price* quantity;
        total = total + subtotal;
        break;

        case 3:
        price = 2500;
        printf("Quantity: ");
        scanf("%i", &quantity);
        subtotal = price* quantity;
        total = total + subtotal;
        break; 

        case 4:
        price = 2000;
        printf("Quantity: ");
        scanf("%i", &quantity);
        subtotal = price* quantity;
        total = total + subtotal;
        break;

        case 5:
        price = 2500;
        printf("Quantity: ");
        scanf("%i", &quantity);
        subtotal = price* quantity;
        total = total + subtotal;
        break;

        case 6:
        printf("Exited>>\n");
        Exit = true;
        break;

        default:
        printf("Invalid choice!\n");
        break;


    }
     } while (Exit == false);
     printf("total: %i", total);



return 0;
}