#include <stdio.h>

int main()
{
    int score[3][3]={{11,45,14},{19,19,810},{0,7,21}},n;
    for(int i=0;i<1;i++)
    {
        puts("请输入想查询成绩的学生编号(1到3号)：");
        scanf("%d",&n);
        if(n<1 || n>3)
        {
            puts("\a输入编号有误，请再次输入");
            i -=1;
        }
    }
    int *search(int (*)[3],int);//第一个变量类型是int (*)[3]，不是int *[3]
    int *p=search(score,n);//不是int *p[3]=search(score,n);
    printf("第%d位同学三门成绩为： %d %d %d\n",n,*p,*(p +1),*(p +2));
    return 0;
}

int *search(int (*arr)[3],int n)
{
    return *(arr+n-1);
}