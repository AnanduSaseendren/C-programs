/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int i,n,product=1;
   
   printf("eneter a a number");
   scanf("%d",&n);
   i=1;
   
   while(i <=n){
       product*=i;
       i++;
   }
   
   printf("sum of n product %d :%d\n",n,product);

    return 0;
}