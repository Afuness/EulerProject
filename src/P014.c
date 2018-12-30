#include "P015.h"

// 13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1
// 计算13时，发现10已经被计算过一次
// 所有的序列数都可以用小于它的序列数来表示

// TO: 解决超大数组溢出问题
int cache[1000001] = {0};

long Longest_Collatz_sequence()
{
	int sequenceLength = 0;
	long startinfNumber = 0;
	long sequence;
	//超大数组溢出
	cache[1] = 1;


	for (int i = 2; i <= 1000000; i++)
	{
		sequence = i;
		int j = 0;
		//when i is even, it will less than sequence
		while (sequence != 1&& sequence >= i)
		{
			j++;
			if (sequence % 2 == 0)
			{
				sequence /= 2;
			}
			else
			{
				sequence = sequence*3 +1;
			}
		}
		cache[i] = j + cache[sequence];
		if (cache [ i ] > sequenceLength)
		{
			sequenceLength = cache[i];
			startinfNumber = i;
		}


	}
	return startinfNumber;
}