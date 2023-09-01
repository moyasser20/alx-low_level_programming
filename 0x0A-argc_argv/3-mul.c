#include <stdio.h>
#include <stdlib.h>
/**
 * main - Enter point
 *
 * Description: aa
 * @argv: lol
 * @argc: beo
 * Return: 0 (Success)
*/
int main(int argc, char *argv[])
{
int sum;
if (argc != 3)
{
printf("Error\n");
return (1);
}
else
{
sum = atoi(argv[1]) * atoi(argv[2]);
printf("%i\n", sum);
}
return (0);
}
