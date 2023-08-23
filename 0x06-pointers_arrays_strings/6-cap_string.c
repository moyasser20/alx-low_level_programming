#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
 int isLower(char c)
 {
     return (c >= 97 && c<=122);
 }
 int isDelimiter(char c)
 {
     int i;
     char delimiter[]="\t\n,.!?\"{}()";
     
     for(i = 0; i< 12; i++)
     {
         if (c == delimiter[i])
         {
             return (1);
         }
     }
     return (0);
 }
 
 char *cap_string(char *s)
 {
     char *ptr = s;
     int foundDelimiter = 1;
     
     while (*s)
     {
         if (isDelimiter(*s))
         {
             foundDelimiter = 1;
         }
         else if (isLower(*s) && foundDelimiter)
         {
             s -= 32;
             foundDelimiter = 0;
         }
         else
         {
             foundDelimiter = 0;
         }
     }
     return (ptr);
 }
