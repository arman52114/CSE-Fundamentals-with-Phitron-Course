#include<stdio.h>
#include<string.h>
int main()
{
    char a[101],b[101];
    scanf("%s %s",a,b);

    // for(int i=0;i<=strlen(b);i++)
    // {
    //     a[i]=b[i];
    // }
    // printf("%s",a);

    strcpy(a,b);
    printf("%s",a);


    return 0;
}