#include "prime.h"
#include <stdio.h>
int prime(int a)
{
if (a >= 2)
{   int i;
    for (i=2;i*i<=a;i++)
    {
        if (a%i == 0) 
     {   
        printf("%d不是素数\n",a); 
        break;
     }
    }
    if (i*i > a)    
        printf("%d是一个素数\n",a);
    
}
else
    printf("%d小于2，哥们儿\n",a);
return 0;
}