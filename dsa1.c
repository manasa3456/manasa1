#include<stdlib.h>
#include<stdio.h>
int main()
{
    int *p,n,ele,ch,i,pos;
    printf("enter no. of elements to create an array:\t");
    scanf("%d",&n);
    p=malloc(n*sizeof(int));
    printf("dynamic array created.\n");
    printf("enter %d elements \n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
    }
    while(1)
    {
        printf("\n1.insert \n2.delete \n 3.display \n 4.exit \n enter your choice: \t");
        scanf("%d",&ch);
        switch(ch)
        {
            case1:
            printf("\n enter elements 2 pos(0 to %d) to insert :\t",n-1);
            scanf("%d%d",&ele,&pos);
            realloc(p,(n+1)*sizeof(int));
            n=n+1;
            for(i=n-1;i>=pos;i--)
            {
                p[i]=p[i-1];
            }
            p[pos]=ele;
            break;
            case2:
            printf("enter position (0 to %d) to delete",n-1);
            scanf("%d",&pos);
            for(i=pos+1;i<n;i++)
            {
                p[i-1]=p[i];
            }
            n=n-1;
            break;
            case3:
            printf("\n array elements are: \n");
            for(i=0;i<n;i++)
            {
                printf("%d\t",p[i]);
            }
            break;
            case4:
            exit(0);
        }
    }
    return 0;
}