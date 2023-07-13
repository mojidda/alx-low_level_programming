#include <stdio.h>
/**
 * main -Entry point
 * Return: 0 (success)
 */

int main(void)
{
	char x;
	int y;
	long int n;
	long long int m;
	float t;

printf("size of a char; %lu byte(s)\n", (unsigned long)sizeof(x));
printf("size of a int; %lu byte(s)\n", (unsigned long)sizeof(y));
printf("size of a long int; %lu byte(s)\n", (unsigned long)sizeof(n));
printf("size of a long long int; %lu byte(s)\n", (unsigned long)sizeof(m));
printf("size of a float; %lu byte(s)\n", (unsigned long)sizeof(t));
return (0);
}
