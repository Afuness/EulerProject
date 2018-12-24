#include "P015.h"


// simple but inefficient.
int Highly_divisible_triangular_number()
{
	int divisor_num = 0;
	int triangle_num = 1;
	for (int i = 1;; i++)
	{
		triangle_num = i*(i+1)/2;
		for (int j = 1; j <= sqrt( triangle_num ); j++)
		{
			if (triangle_num % j == 0)
			{
				divisor_num += 2;
			}
		}
		if (divisor_num > 500)
		{
			return triangle_num;
		}
		divisor_num = 0;
	}
}

// all Any integer N can be expressed as the product of primes.
