#include <stdio.h>
int main()
{
    int n,i,j;
    void recursion(int);
    printf("请输入塔的高度： ");
    scanf("%d",&n);
    recursion (n);
    return 0;
}


void recursion(int n)
{
    int exc(int,int);
    int i,j,a[n],b[n],c[n];
    for(i=0;i<n;i++)    a[i]=n-i;
    for(i=0;i<n;i++)    b[i]=0;
    for(i=0;i<n;i++)    c[i]=0;
    for(i=n-1;i>=0;i--)        printf("%d\t%d\t%d\n",a[i],b[i],c[i]);
    if(n==1)    c[0]=a[n-1],a[n-1]=0;
    else        
    {
        recursion (n-1);
        c[0]=a[0];
        
    }
}

