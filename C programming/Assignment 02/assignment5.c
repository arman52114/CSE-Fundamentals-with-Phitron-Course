#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];

    for(int i=0;i<n-1;i=i+1)
    {
        scanf("%d",&ar[i]);
        
        
    }
    if(n%2==0)
    {
        for(int i=n-2;i>=0;i=i-2)
    {
        printf("%d ",ar[i]);
    }
    }

    if(n%2==1)
    {
        for(int i=n-1;i>=0;i=i-2)
    {
        printf("%d ",ar[i]);
    }
    }
    
    return 0;
}