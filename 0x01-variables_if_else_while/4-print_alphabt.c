#include <stdio.h>
/**
 * main -main function
 * Return: always 0
 */
int main(void)
{
char alx;

for (alx = 'a' ; alx <= 'z' ; alx++)
if (alx != 'q' && alx != 'e')
putchar(alx);
putchar('\n');
return (0);
}	
