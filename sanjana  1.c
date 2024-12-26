#include <stdio.h>
#include <stdlib.h>

char firstName[50], lastName[50], email[100], destination[100];
int age, paymentOption;

void welcome(){
    printf("\n**");
    printf("\n WELCOME TO XSPACE MOON TRAVEL *");
    printf("\n Your journey to the Moon starts here! *");
    printf("\n**");
    printf("\n press any key to continue");
    getchar();
}

void input(){
    // Collect user information
    printf("\n Please enter your first name: ");
    scanf("%s", firstName);
    printf("\n Please enter your last name: ");
    scanf("%s", lastName);
    printf("\n Please enter your email: ");
    scanf("%s", email);
    printf("\n Please enter your age: ");
    scanf("%d", &age);
    printf("\n Please enter your destination (e.g., Moon Base Alpha): ");
    scanf(" %[^\n]%*c", destination);
}

void paymentOptions(){
    printf("\n Payment Options:");
    printf("\n 1. Credit/Debit Card");
    printf("\n 2. Phonepay");
    printf("\n 3. Bank Transfer");
    printf("\n Please select your payment option (1-3): ");
    scanf("%d", &paymentOption);
}

void calculations(){
    // Display collected information
    printf("\n**");
    printf("\n Reservation Details ");
    printf("\n*");
    printf("\n Name: %s %s", firstName, lastName);
    printf("\n Email: %s", email);
    printf("\n Age: %d", age);
    printf("\n Destination: %s", destination);
    printf("\n Payment Option: ");
    switch (paymentOption) {
        case 1:
            printf("Credit/Debit Card");
            break;
        case 2:
            printf("Phonepay");
            break;
        case 3:
            printf("Bank Transfer");
            break;
        default:
            printf("Invalid payment option");
            break;
    }
    printf("\nThank you for booking with Moon Travel!");
}

int main() {
    welcome();
    input();
    paymentOptions();
    calculations();
    return 0;
}
void output(){
	 printf("\n**");
    printf("\n Reservation Details ");
    printf("\n*");
    printf("\n Name: %s %s", firstName, lastName);
    printf("\n Email: %s", email);
    printf("\n Age: %d", age);
    printf("\n Destination: %s", destination);
    printf("\n Payment Option: ");
    
}
