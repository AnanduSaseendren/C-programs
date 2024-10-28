/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,i,even,odd;
    printf("Hello World");
    scanf("%d",&n);
    
    while(i<=n){
        if(i%2==0){
            even+=i;
        }else{
            odd+=i;
        }
        i++;
    }
    
    printf("even number %d :\n",even);
    printf("odd numbers %d: \n",odd );

    return 0;
}
