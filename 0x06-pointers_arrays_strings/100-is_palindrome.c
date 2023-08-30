#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
    int len = strlen(s);

    if (len <= 1) // An empty string or single character is a palindrome
        return (1);

    return check_palindrome(s, 0, len - 1); // Call a helper function to check for palindrome
}

/**
 * check_palindrome - Recursive helper function to check palindrome.
 * @s: The string to check.
 * @start: The starting index of the substring.
 * @end: The ending index of the substring.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int check_palindrome(char *s, int start, int end)
{
    if (start >= end) // Base case: All characters have been checked
        return (1);

    if (s[start] != s[end]) // If the characters at start and end differ, it's not a palindrome
        return (0);

    return check_palindrome(s, start + 1, end - 1); // Recursively check the next pair of characters
}
