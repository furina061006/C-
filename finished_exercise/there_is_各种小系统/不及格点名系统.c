#include <stdio.h>
int main()
{
    int n;
    printf("请输入学生人数：  ");
    scanf("%d",&n);
    char score[n][3];
    printf("格式为：“XX,XX,XX”:\n");
    for(int i=0;i<n;i++)   
        {
            scanf("%d,%d,%d",&score[i][0],&score[i][1],&score[i][2]);
            printf("%d  %d  %d\n",score[i][0],score[i][1],score[i][2]);
        }
    char (*p)[3]=score;
    void nuero(char(*p)[3],int n);
    nuero(p,n); 
    char a[][8]={"hello","world","and","pioneer"};
    char (*p1)[8]=a;
    /*printf("%s\n",a[2]);
    printf("%s\n",p1[2]);
    printf("%s\n",*(p1+2));
    printf("%s\n",p1+2);//四种输出结果都是“and”*/
    return 0;
}

void nuero(char(*p)[3],int n)
{
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            {
                if(*(*(p+i)+j)<60)
                    {
                        printf("{%d %d %d}\n",**(p+i),*(*(p+i)+1),*(*(p+i)+2));
                        //printf("{%s}\n",*(p+i));    //出错，因为char score里存的是整数，字符要用'...'表示
                        break;
                    }
            }
    }
}