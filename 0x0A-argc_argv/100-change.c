#include <stdio.h>
#include <stdlib.h>
/**
  * main - main function
  * @argc : input int
  * @argv : input pointers to array of strings
  * Return: will always return 0 sucess
  */
int main(int argc, char *argv[])
{
	int chng = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int p = atoi(argv[1]);

		while (p > 1)
		{
			if (p >= 25)
			{
				chng += p / 25;
				p = p % 25;
			}
			else if (p >= 10 && p < 25)
			{
				chng += p / 10;
				p = p % 10;
			}
			else if (p >= 5 && p < 10)
			{
				chng += p / 5;
				p = p % 5;
			}
			else if (p >= 2 && p < 5)
			{
				chng += p / 2;
				p = p % 2;
			}
		}
		if (p == 1)
		{
			chng += 1;
		}
	}
	printf("%d\n", chng);
	return (0);
}
