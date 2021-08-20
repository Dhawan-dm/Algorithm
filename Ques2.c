#include<stdio.h>    
#include<stdlib.h> 

int mth_Smallest(int a[] , int n ,int m , int max)
{
    int arr[max];
    int i=0;
    int count = 0;

    for (int i = 0; i < max; i++)
    {
        arr[i]=0;
    }
    
    
    for(i=0;i<max;i++)
    {   
        
        arr[a[i]]++;
    }
    
    for(i=0;i<max;i++)
    { 
        if(arr[i]!=0)
        {
            count++;
            if(m == count)
            {
                return i;
            }
        }
        
    }
}





int main(){  

int n,m;

scanf("%d",&n);

int a[n];
int max=-1;

for(int i = 0;i<n;i++)
{
    scanf("%d",&a[i]);
    
    if(a[i]>max)
    {
        max=a[i];
    }
    
}
scanf("%d",&m);

printf("%d",mth_Smallest(a,n,m,max));


}  
