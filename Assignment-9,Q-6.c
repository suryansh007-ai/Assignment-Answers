/*6.	Write a program in C to check whether a number can be expressed as sum of two prime numbers.
Test Case:
Enter a positive Integer: 34 34 = 3 + 31
34 = 5 + 29
34 = 11 + 23
34 = 17 + 17
*/

#include <stdio.h>
int isPrime(int num) 
{
    if (num<2)
        return 0;
    for (int i=2;i*i<=num;i++) 
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}
void primeSumPairs(int n) 
{
    int found=0;
    for (int i=2;i<=n/2;i++)
     {
        int p1=i;
        int p2=n-i;
        if (isPrime(p1) && isPrime(p2)) 
        {
            printf("%d = %d + %d\n",n,p1,p2);
            found=1;
        }
    }
    if (!found)
        printf("%d cannot be expressed as sum of two primes.\n",n);
}
int main() 
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    primeSumPairs(n);
    printf("\nSuryansh Sirohi");
}