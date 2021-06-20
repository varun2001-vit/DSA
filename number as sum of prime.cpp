#include <stdio.h>

int prime(int n);



int main()

{

int n, i;

printf("Enter the number: ");

scanf("%d", &n);

int flag = 0;

for(i = 2; i <= n/2; ++i)

{



if (prime(i) == 1)

{

if (prime(n-i) == 1)

{

printf("\n%d = %d + %d\n\n", n, i, n - i);

flag = 1;

}

}

}



if (flag == 0)

printf("%d cannot be expressed as the sum of two prime numbers\n", n);



return 0;

}




int prime(int n)

{

int i, isPrime = 1;

for(i = 2; i <= n/2; ++i)

{

if(n % i == 0)

{

isPrime = 0;

break;

}

}

return isPrime;

}
