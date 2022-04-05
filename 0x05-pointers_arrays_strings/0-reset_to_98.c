#include "main.h"

/*reset the value to 98
 *@n the value which is going to be reseted
 *@*p is the pointer address
 */
int main(void)
{
    int n;
     n = 5;
    printf("n=%d\n", n);
    int *p=&n;
    *p=98;
    printf("n=%d\n", n);
    return (0);
}

