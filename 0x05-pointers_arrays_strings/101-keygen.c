#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define PASSWORD_LENGTH 10

int main(void)
{
	// Seed the random number generator with the current time
	srand(time(NULL));

	char password[PASSWORD_LENGTH + 1]; // +1 for the null terminator
	const char charset[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

	for (int i = 0; i < PASSWORD_LENGTH; i++)
	{
		int index = rand() % (sizeof(charset) - 1);
		password[i] = charset[index];
	}
	password[PASSWORD_LENGTH] = '\0'; // Null-terminate the string

	printf("%s\n", password);

	return 0;
}
