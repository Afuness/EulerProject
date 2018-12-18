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