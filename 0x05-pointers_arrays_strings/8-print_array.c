#include "main.h"

/**
* print_array - display
* @a:integer
* @n:integer
* return:void
*/
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i < (n - 1))
{
printf(", ");
}
printf("\n");
}
