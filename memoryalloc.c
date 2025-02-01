#include <stdio.h>

int main() {
    int a;
    float b;
    double c;
    char name[] = "Esther";

    // puts("Pointer to all the variables declared: ");
    // printf("a: %p: \n", &a);
    // printf("b: %p: \n", &b);
    // printf("c: %p: \n", &c);
    // printf("name: %p: \n", name);



    // for (int i= 0; i<6; i++){
    //     printf("name[%d]: %p: \n", &name[i]);

    // }
    // scanf("%i", &a);
    // printf("%i\n", a);

    int *p2a;
    p2a = &a;

    a = 10;

    //Pointer Arithmetics

       for (int i= 0; i<7; i++){
        printf("%c\n", name[i]);

    }
    puts("");
        char *p2name = name;
        for (int i= 0; i<7; i++){
        printf("%c\n", *p2name);
        p2name++;
    }
    // printf("Value: %i\n; Address: %p\n", *p2a, p2a);
    // a =90;
    // printf("Value: %i\n; Address: %p\n", *p2a, p2a);
    // *p2a =5;


    // printf("%p\n", p2a);
}