#include "P100.h"

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