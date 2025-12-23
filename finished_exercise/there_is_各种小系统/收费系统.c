#include<stdio.h>

int main()
{
    double  n;
    scanf("%lf",&n);
    puts("收费:");
    if(n==(int)n)
    {
        if(n<=3)
            printf("10元\n");
        else if(n>3 && n<10)
            printf("%d元\n",(int)((n - 3) * 2 + 10));// printf("%d元\n",(n-3)*2+10);是错误的，会报错，
        else if (n>=10)                             //一开始是实型，需要先显式转换，再输出整型；
            printf("%d元\n",(int)(24+(n-10)*3));
    }
    else
    {
        int m = n;
        if(n<=3)
            printf("10元\n");
        else if(n>3 && n<10)
            printf("%d元\n",(m-2)*2+10);
        else if (n>=10)
            printf("%d元\n",(24+(m-9)*3));
    }
            return 0;
}
