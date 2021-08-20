#include<stdio.h>
#include<stdlib.h>

 


long int Fibonnaci_even(int n)
{
    if (n < 1)
    return n;
    if (n == 1)
    return 2;
 
   
    return ((4 * Fibonnaci_even(n-1)) +
             Fibonnaci_even(n-2));
}




int main ()
{
    
	int n ;

    scanf("%d",&n);
    
    printf("%d",Fibonnaci_even(n)) ;
    return 0;
}
