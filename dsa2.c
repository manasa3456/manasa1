#include<stdlib.h>
#include<stdio.h>
struct term
{
    int row;
    int col;
    int value;
};
struct term a[10];
int main()
{
    int i,row,col,value,n;
    printf("enter no. of rows,cols,values");
    scanf("%d%d%d",&row,&col,&value);
    a[0].row=row;
    a[0].col=col;
    a[0].value=value;
    n=value;
    printf("enter non zero elements");
    for(i=1;i<=n;i++)
    {          
        printf("enter row,col,value");
        scanf("%d%d%d",&row,&col,&value);
        a[i].row=row;
        a[i].col=col;
        a[i].value=value;
    }
    for(i=0;i<=n;i++)
    {
        printf("%d,%d\t=%d",a[i].row,a[i].col,a[i].value);
        printf("\n");
    }
    return 0;
}