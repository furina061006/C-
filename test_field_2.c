#include <stdio.h>
#include <string.h>

int main()
{
    /*
    指针类型的地址内存字节数：
    printf("sizeof(int*)    = %zu\n", sizeof(int*));//%zu用于打印内存字节数，似乎用%ld也可以
    printf("sizeof(char*)   = %zu\n", sizeof(char*));
    printf("sizeof(double*) = %zu\n", sizeof(double*));
    printf("sizeof(void*)   = %zu\n", sizeof(void*));
    
    指针直指字符串：
   char *b="furina061006";//此时"furina061006"是只读属性的，不可更改，是字符串常量
   b[2]='r';//报错
   printf("%c\n",b[2]);
 
    //指针类型的显式、隐式转化
    int a=3;
    void *p1;
    int *p2=&a;
    char *p3="I love china!";
    printf("*p1= %d\n",*(int *)(p1=p2));
    printf("p1= %s\n",(char *)(p1=p3));//此处如果打印，(char *)(p1=p3)则输出%s;        *(char *)(p1=p3)=%c
    printf("p3= %d\n",*(int*)(p3=p2));
    p3="I love china!";
    printf("p2= %c\n",*(char*)(p2=p3));
    //空指针的永久变现————答案就是拿个其他指针代替他
    p1 = malloc(12*sizeof(int));
    p2 = p1;
    *p2=1,*(p2+1)=2;
    printf("%d  %d\n",*p2,*(p2+1));
    //空指针指向有类型数据地址
    p1 =&a;//首先，可以存储地址
    printf("%p\n",p1);//可以不转换类型就输出地址
    printf("%d\n",*(int*)p1);//可以转换成相应指针类型后输出数值
  
    //结构体的指针应用
    struct Poeple
    {
        int age;
        char sex;
        char name[30];
    }KoBe={42,'M',"KoBe"};
    struct Poeple *p =&KoBe;
    int *p1= &KoBe;
    printf("%d\n",KoBe.age);
    printf("%d\n",(*p).age);//正确用法
    printf("%d\n",*p1);//有点风险，但是也证明了struct和结构体首成员的地址相同，但是其类型不同，导致编译法则不同
    printf("%c\n",p->sex);//可行，效果等于(*p).sex
    printf("%d\n",&KoBe->age);//错误，违规
   
    //结构体的强制类型转换
    struct Arr
    {
    char name[30];
    char phonemumber[30];
    }arr[2]={{"黄","13859046166"},{"野兽先辈","07211919810"}};
    struct Arr *p=arr[0].phonemumber;
    printf("%c\n",*(char*)(p+1));//这种方法只适用于输出一个字符，而不能输出一整个字符串。
    //更有意思的，这个原本是struct Arr类型的指针，所以，p+1后，跨度是一整个结构体，而不是强制转化后的一个char大小
    char *p1= arr[0].phonemumber;
    for (;*p1!='\0';)
        putchar(*p1++);//也可以这样曲线救国
    putchar('\n');
    printf("%s\n",arr[0].phonemumber);
     */
 
    return 0;
}
