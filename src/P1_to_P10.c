#include "P005.h"
#include "P010.h"
#include <assert.h>
#include <math.h>

int Multiples_of_3_and_5(int target){
    if(target > 0){
        int sum = 0;
        for( ; target--; ){
            if(target % 5 == 0)
                sum += target;
            else if(target % 3 == 0)
                sum += target;
        }
        return sum;
    }
    return -1;
}

int Even_Fibonacci_numbers(){
    int a = 1,b = 2,sum = 0,temp = 0;
    for(; b < 4000000; temp = a,a = b, b += temp){
        if(a % 2 == 0) sum += a;
    }
    if(a % 2 == 0) sum += a;
    return sum;
}

int Largest_prime_factor()
{
	long long prime = 600851475143;
	int i = 2;
	for (; i <= prime; )
	{
		if (prime % i == 0)  prime /= i;
		else  ++i;
	}
	return i;
}

int Largest_palindrome_product()
{
	int max = 0;
	for (int i = 999 ; i > 0 ; i--)
	{
		for (int j = 999; j > 0; j--)
		{
			int num = i * j;
			if (Is_palindromic( num ))
			{
				max = Maxnum(max,num);
			}
		}
	}
	return max;
}

int Maxnum(int a,int b)
{
	if(a>b) return a;
	else return b;
}

int Is_palindromic( int num )
{
	assert(num>0);
	int div = 1;
	while (num/div >= 10)
	{
		div *= 10;
	}
	while (num)
	{
		if (num / div == num % 10)
		{
			num = (num % div) / 10; 
			div /= 100;
		}
		else return 0;
	}
	return 1;
}

int Smallest_multiple()
{
	int a = 2520;
	for (int i = 1; i <= 20; i++)
	{
		if (a%i != 0)
		{
			++a;
			i = 1;
		}
	}
	return a;
}

int Sum_square_difference()
{
	int a=0,b=0;
	for (int i = 1; i <= 100; ++i)
	{
		a+= i*i;
		b+= i;
	}
	b = b*b - a;
	return b;
}

int Is_prime(int n)
{
	if(n == 1) return 0;
	if(n < 4) return 1;
	if(n%2 == 0) return 0;
	if(n<9) return 1;
	if(n%3 ==0) return 0;
	// all prime greater than 6 can be written from 6x+1 or 6x +5.
	double a = sqrt(n);
	int f = 5;
	while (f<=a)
	{
	  if(n%f == 0) return 0;
	  if(n%(f+2) ==0) return 0;
	  f+=6;
	}
	return 1;
}

int The_10001st_prime()
{
    int sum =0;
	for (int i = 1;; i++)
	{
		if (Is_prime( i ))
		{
			sum+=1;
		}
		if (sum == 10001)
		{
			return i;
		}
	}
}

long long Largest_product_in_a_series()
{
	char series_string[] =  
	"73167176531330624919225119674426574742355349194934"
	"96983520312774506326239578318016984801869478851843"
	"85861560789112949495459501737958331952853208805511"
	"12540698747158523863050715693290963295227443043557"
	"66896648950445244523161731856403098711121722383113"
	"62229893423380308135336276614282806444486645238749"
	"30358907296290491560440772390713810515859307960866"
	"70172427121883998797908792274921901699720888093776"
	"65727333001053367881220235421809751254540594752243"
	"52584907711670556013604839586446706324415722155397"
	"53697817977846174064955149290862569321978468622482"
	"83972241375657056057490261407972968652414535100474"
	"82166370484403199890008895243450658541227588666881"
	"16427171479924442928230863465674813919123162824586"
	"17866458359124566529476545682848912883142607690042"
	"24219022671055626321111109370544217506941658960408"
	"07198403850962455444362981230987879927244284909188"
	"84580156166097919133875499200524063689912560717606"
	"05886116467109405077541002256983155200055935729725"
	"71636269561882670428252483600823257530420752963450"; 

	int len = sizeof(series_string) - 1;
	long long max = 0;

	// i represent serial number
	for (int i = 0; i < len - 12; i++)
	{
		long long product = 1;
		for (int j = 0; j < 13; j++)
		{
			product *= (long long)(series_string[i+j] - '0');
		}
		if (product > max)
		{
			max = product;
		}
	}
	return max;
}


int Special_Pythagorean_triplet()
{
	int a,b;
	int sum = 1000;
	for (a = 1; a < sum/3; a++)
	{
		for (b = a + 1; b < sum / 2; b++)
		{
			int c = sum - a - b;
			if (a*a + b * b == c * c)
			{
				int result = a*b*c;
				return result;
			}
		}
	}
	return 0;
}

int Summation_of_primes()
{
	int sum = 5;
	int i;
	int max = 2000000;
	for (i = 5; i <= max; )
	{
		if (Is_prime( i ))
		{
			sum += i;
		}
		i += 2;
		if (( i<= max ) && Is_prime( i ))
		{
			sum += i;
		}
		i += 4;
	}
	return sum;
}
