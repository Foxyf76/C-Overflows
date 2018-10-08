#include <stdio.h>

int main(void) {

	int number;

	printf("\n Please enter a number: \n");
    scanf("%d", &number);

    while (number == 0 || number == 1) {
    	printf("\n Number cannot be zero or one! \n");
    	printf("\n Please enter a number: \n");
    	scanf("%d", &number);
    }

     
    while (number>1){
    	number = number * 2; //multiply by 2 until overflow occurs
    	printf("\n%d\n", number);
    }

    return 0;
    
}