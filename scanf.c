#include <stdio.h>

int main(){
    char name[40];
    int age;

    printf("Enter you favorite sports player's name:\n");
    scanf("%39s", name);

    printf("Now enter their age:\n");
    scanf("%i", &age);

    // entering more than one info thro scanf
    char firstName[20];
    char lastName[20];

    printf("Enter your first and last name: ");
    scanf("%19s %19s", firstName, lastName);
    printf("Hello, %s %s\n", firstName, lastName);

    return 0;
}