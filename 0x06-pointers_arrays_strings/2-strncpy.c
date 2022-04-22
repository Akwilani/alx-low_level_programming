#include "main.h"
/**
* _strcpy - function that copies a str
* @dest: string to copy to
* @src: string to be copied from
* @n: integer that determines number of 
* Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
int x;
for (x = 0; x < 0 && src[x] != '\0'; x++)
dest[x] = src[x]
for (; n > x; x++)
dest[x] = '\0';
return (dest);
}
