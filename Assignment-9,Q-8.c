/*8.	Write a C program to create a display function to print the following pattern for each input value supplied by the user.
 Your program needs to prompt the user for the number of lines to print. Output: enter pattern rows = 6
*
*
**
***
*****
********
*************
*/
#include<stdio.h>
void pattern(int n)
{
    int a=1,b=1,temp,i,j;
    for(i=0;i<n;i++)
    {
        temp=a;
        a=b;
        b+=temp;
        for(j=0;j<a;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    pattern(n);
}