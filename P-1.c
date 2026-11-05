#include<stdio.h>
int main()
{
    int i,j,n,m;
    printf("Enter two numbers :");
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            printf("(%d,%d) ",i,j);
        }
        printf("\n");
    }
    return 0;
}
