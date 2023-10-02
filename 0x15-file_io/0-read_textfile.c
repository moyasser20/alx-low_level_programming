#include "main.h"
#include <stdlib.h>
/**
* read_textfile - function
* @filename: ff
* @letters: aa
* Return: ss
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
size_t o, r, w;
char buff;

if (filname == NULL)
{
return (0);
}
buff = malloc(sizeof(char) * letters);

if (buff == NULL)
return (0);

o = open(filname, O_RDONLY);
r = read(o, buff, letters);
w = write(STDOUT_FILENO, buff, r);

if (o == -1 || r == -1 || w == -1 || w != r)
{
free(buff);
return (0);
}

free(buff);
close(o);

return (w);
}

