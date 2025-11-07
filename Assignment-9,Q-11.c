/*Find the the value of j at the end of the execution of the following C program. And explain the reasoning behind the output.
 
int incr(int i)
{
static int count = 0; 
count = count + i; 
return (count);
}
void main()
{
int i,j;
for (i = 0; i <=4; i++) 
j = incr(i);
}
*/



/*Answer=10
0+1+2+3+4=10,j=10.
REASON:For i=0: count+=0,j=0
For i=1:count+=1,j=1
For i=2:count+=2,j=1+2=3
For i=3:count+=3,j=3+3=6
For i=4:count+=4,j=6+4=10
*/