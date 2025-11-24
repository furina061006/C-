#include <stdio.h>
int main()
{
    int i,j,judge,a[6][6]={0};
    int rangwokankan(int b[6][6]);
    a[0][0]=a[4][2]=a[4][5]=a[5][4]=1;
    a[0][1]=a[0][3]=a[1][3]=a[2][4]=a[2][5]=a[5][1]=0;
    for (i=0; i<6; i++)
    {
        for (j=0; j<6; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    putchar('\n'); 
    rangwokankan(a);//实参填a就行
    return 0;
}

int rangwokankan(int b[6][6])
{
    int i,j;
    for (i=0; i<6; i++)
    {
        for (j=0; j<6; j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    putchar('\n');
    return 0;
}