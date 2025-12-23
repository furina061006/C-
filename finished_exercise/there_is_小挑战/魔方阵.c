#include <stdio.h>
int main()
{
int n,k,t,r,i,j;
printf("以下是魔方阵，你输入一个正奇数n的值，我就可以输出一个，每行和、每列和、每对角线和都相等的n*n方阵，请输入“n”的值，如\nn=5\n");
scanf("n=%d",&n);
if ((n%2)==1 && n>0)
{
    int a[n][n];//要等 n的值确定下来才设数组a，比如数组a的大小为零，血淋淋的教训/(ㄒoㄒ)/~~
    //而且如果数组内的行列数是变量组成的，不能一开始就设其中的值。同样是血淋淋的教训/(ㄒoㄒ)/~~
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)  a[i][j]=0;
    i=0,j=(n-1)/2;
    a[i][j]=1;
    for(k=2;k<=n*n;k++)//k初始为2，k=1已经定了，行和列搞清楚（）
    {
        t=i-1,r=j+1;//如果使用i--,j++,会使得i,j的值也会变化
        if(t<0) t=n-1;
        if(r>n-1) r=0;
        if(a[t][r]==0)
        {
            a[t][r]=k;
            i=t,j=r;
        }   
        else             
        {
            i++;
            if(i>n-1) i=0;
            a[i][j]=k;
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        putchar('\n');
    }
    putchar('\n');
}
else printf("你输入的不是正奇数\n");
return 0;
}