#include "variadic function"
#include <stdarg.h>
/**
 * sum_them_all -  sum all arguments
 * @n: int, number of undefined arguments
 *
 * Return: sum of args
 * On error, 0 is returned
 */
int sum_them_all(const int n, ...)
{
va_list list;
int i, sum=0;


va_start(list,n);
if (n != 0)
	for (i = 0; i < n; sum += va_arg(list, unsigned int), i++)
	;
va_end(list);

return (sum);

}
