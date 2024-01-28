#include <stdio.h>
#include <time.h>

int main(void)
{
	// Get the current time
	time_t currentTime;
	struct tm *localTime;
	
	time(&currentTime);
	localTime = localtime(&currentTime);

	// Format and print the current time
	char timeString[100]; // Assuming a reasonable buffer size
	strftime(timeString, sizeof(timeString), "%Y-%m-%d %H:%M:%S", localTime);
	
	printf("Current time: %s\n", timeString);

	// Extract the current year
	int currentYear = localTime->tm_year + 1900;
	
	// Get the birth year from the user
	int birthYear;
	printf("Enter your birth year: ");
	scanf("%i", &birthYear);

	// Calculate and display the age
	int age = currentYear - birthYear;
	printf("Your age as of %d is %d\n", currentYear, age);
	return 0;
}
