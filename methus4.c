#include <stdio.h>

int main(void)
{
	int methuselahAge = 969;
	int userAge;

	printf("Enter your age: ");
	scanf("%d", &userAge);

	while (userAge < 0 || userAge == 0)
	{
		printf("Age can't be less than or equal to zero! Please enter a correct age: ");
		scanf("%d", &userAge);
	}

	// Calculate the difference outside the while loop
	int methus4 = methuselahAge - userAge; // Find the difference

	if (userAge > methuselahAge)
	{
		printf("Bravo! You're officially the oldest person who ever lived!\n");
	}
	else
	{
		printf("You'd have to live %d more years for you to equal Methuselah's age!\n", methus4);
	}

	return 0;
}
