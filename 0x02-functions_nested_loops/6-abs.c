#include "main.h"

/**
* abs - returns absolute value of an int
8 @n - integer from which to get an absolute value
*Return : void
*/

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	return (n);
}
