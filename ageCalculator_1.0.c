#include <stdio.h>

int main(void)
{
	int birthYear;
	int currentYear;
	int ageCalculator = currentYear - birthYear;

	printf("Enter your birth year: ");
	scanf("%d", &birthYear);
	printf("Enter the current year: ");
	scanf("%d", currentYear);
	printf("Your age as of %d is %d!\n", currentYear, ageCalculator);
	return(0);
}



