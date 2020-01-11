#include <stdio.h>

int main()
{
    int n = 999;     // from 1 to n
    int n1 = n / 3;  // from 1 to n1
    int n2 = n / 5;  // from 1 to n2
    int n3 = n / 15; // from 1 to n3
    int sum = 3  * (n1 * (n1 + 1) / 2) + // sum of mults. of 3  in 1..n
	          5  * (n2 * (n2 + 1) / 2) - // sum of mults. of 5  in 1..n
			  15 * (n3 * (n3 + 1) / 2);  // sum of mults. of 15 in 1..n
    printf("%d\n", sum);
    return 0;
}
