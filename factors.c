#include "factor.h"
/**
* foperation - The function factorize a number
* @pbf: pointer to the address of the number
* Return: int
*/

int foperation(char *pbf)
{
	u_int64_t i;
	u_int64_t x;

	x = strtouq(pbf, NULL, 10);


	for (i = 2; i < x; i++)
	{
		if (x % i == 0)
		{
			printf("%" PRIu64 "=%" PRIu64 "*%" PRIu64 "\n", x, x / i, i);
				break;
		}
	}

return (0);
}
