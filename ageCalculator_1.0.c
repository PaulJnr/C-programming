#include <stdio.h>

int main(void)
{
	int birthYear;
	int currentYear;

	printf("Enter your birth year: ");
	scanf("%i", &birthYear);
	printf("Enter the current year: ");
	scanf("%i", &currentYear);

	int ageCalculator = currentYear - birthYear;

	printf("Your age as of %d is %d!\n", currentYear, ageCalculator);
}


