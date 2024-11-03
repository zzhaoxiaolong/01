#include<stdio.h>
int main()
{
    int m,n,i,j,num;
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
        for(n=0;n<m-i;n++)
           printf(" ");
        num=2*i-1;
        for(j=0;j<num;j++)
           printf("*");
        printf("\n");
    }
    return 0;
}