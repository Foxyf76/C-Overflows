#include <stdio.h>
#include <string.h>




int main(void)
{   
    srand(time(NULL)); // for random number generator

    char bankPassword[5];
    char inputPassword[5];
    int pass = 0;

    printf("\n Welcome to Bank of Ireland! We will now generate your random 5 digit password! \n");
    for (int i=0;i<5;i++) {
        bankPassword[i]=(rand()%26)+65; //generate random password each time
 }
 printf("Your generated password is:\n");
 printf(bankPassword);
 printf("\n-----------------\n");
 printf("Please enter your password:\n");
 gets(inputPassword); //user can create buffer overflow at this point in the program to gain access to the account
 
if(strcmp(bankPassword, inputPassword) == 0) {
    pass = 1;
    printf("Correct password!");
    printf("\n-----------------\n");
}

else {
    printf("\nWRONG\n");
}

if(pass) {
    printf("Welcome back user!\n");
}

else {
    printf("Incorrect password\n");
}


    return 0;
}

#pragma GCC diagnostic pop