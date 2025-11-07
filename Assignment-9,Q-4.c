/*4.	Write a program in C to add two complex numbers using function.
Hint: Take real and imaginary part of complex numbers in different variable and perform the operaton.
*/
#include<stdio.h>
int complex_r(int n1, int n2)
{
    return (n1+n2);
}
int complex_i(int n1, int n2)
{
    return (n1+n2);
}
int main()
{
    int i1,i2,r1,r2,a,b;
    printf("Enter the real part of first complex number:");
    scanf("%d",&r1);
    printf("Enter the complex part of first complex number:");
    scanf("%d",&i1);
    printf("Enter the real part of second complex number:");
    scanf("%d",&r2);
    printf("Enter the complex part of second complex number:");
    scanf("%d",&i2);
    a=complex_r(r1,r2);
    b=complex_i(i1,i2);
    printf("\nComplex number after addition:%d+%di",a,b);

}