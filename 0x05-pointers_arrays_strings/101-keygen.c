#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 * generate_password: generates password 94 + 33
 */
#define PASSWORD_LENGTH 10

char *generate_password()
{
	char *password = malloc((PASSWORD_LENGTH + 1) * sizeof(char));
		if (password == NULL)
			{
			fprintf(stderr, "Memory allocation failed.\n");
				exit(1);
				}

			srand(time(NULL));
			for (int i = 0; i < PASSWORD_LENGTH; i++)
					{
			password[i] = rand() % 94 + 33;
					}
				password[PASSWORD_LENGTH] = '\0';
				return (password);
}

int main(void)
{
		char *password = generate_password();

		printf("%s\n", password);
		free(password);

		return (0);
}
