#include <stdio.h>

int main() {

	const char *a[2]; //stored emails inside the program for demonstration purposes
	a[0] = "joebloggs@gmail.com";
	a[1] = "junesummers@gmail.com";

	char premiumKey[20] = "photoshopcode";
	char keyInput [20];

	int input;

	printf("\nWelcome to Photoshop, please enter which account you'd like: \n");
	printf("\n1). Basic Account\n");
	printf("\n2). Premium Account\n");
	scanf("%d", &input);

	if(input == 1) {
		char email[20]; //user can use this route to inject a format string exploit to possibly retrieve or bypass the Key Validation for premium users
		printf("Selected Basic Account");
		printf("\nPlease enter your email: ");
		scanf("%s", &email);
		printf(email);
	}

	else {
		printf("Selected Premium. Please enter your product key: \n");
		scanf("%s", &keyInput);
		if (strcmp(premiumKey,keyInput) == 0 ){
			char email[20];
			printf("Key working!");
			printf("\nPlease enter your email: ");
			scanf("%s", &email);
			printf(email);
			
		}
		else {
			printf("Invalid code");
		}

	}
	

}