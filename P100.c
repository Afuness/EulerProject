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