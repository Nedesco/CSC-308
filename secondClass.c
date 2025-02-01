#include <stdio.h>

int main(){
    int age = 99; 
    age = 20;
    printf("Basit is %d years old", age );
    puts("Hello world");

    char  gender = 'F';
    printf("%c", gender);

    char name[20];
    printf("Please enter your name: ");
    scanf("%s", name);
    printf("Hello %s \n", name);

    printf("Please enter your age: ");
    scanf("%d", &age);
    return 0;
}
