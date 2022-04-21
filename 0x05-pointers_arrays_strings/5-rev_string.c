#include "main.h"
/**
<<<<<<< HEAD
 * rev_string - reverse a string
 * @s:string
 * Return:void
 */
void rev_string(char *s)
{
int i, j;
char a[500]
i=0;
j=0;
        while (*(s+i))
        {
                *(a+i) = *(s+i);
                i++;
        }
        i = i-1;
        while (i >= 0)
        {
                *(s+i) = *(a + j);
                j++;
                i--;
        }
=======
* rev_string - reverse a string
* @s:string
* Return:void
*/
void rev_string(char *s)
{
int i, j;
char a[500];
i = 0;
j = 0;
while (*(s + i))
{
*(a + i) = *(s + i);
i++;
}
i = i - 1;
while (i >= 0)
{
*(s + i) = *(a + j);
j++;
i--;
}
>>>>>>> 1ffff02282979426f43cbba9b7af64b180d99037
}
