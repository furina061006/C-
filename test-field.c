#include <stdio.h>
#include <string.h>
int main()
{
/*
int a;
double b,c;
printf("请输入b,c的值");
scanf("%lf,%lf",&b,&c);
a = b/c ;
printf("a的值为%lf\n",(double)a);
printf("a的值为%d\n",a);
printf("a的值为%.0lf\n",(double)a);
printf("a的值为%c\n",(char)(a+1));
return 0;


int a=-1145;
short b;
b = a;
printf("请输入a的值:");
scanf("%d",&a);
printf("b的值为%d",b);
return 0;


int a=114514,b=1145,c=1145;
printf("a=%d,b=%d,c=%d",a,b,c);
return 0;

int main()
{
unsigned int a=-1;
printf("a的值为%d\n",a);//  =-1
printf("a的值为%u\n",a);//  =4294967295
return 0;
}

int main()
{

return 0;
}

int main()
{
int j=0,i=5,k=0;
j = i--;//j = ++i--会出错
printf("k的值为%d,j的值为%d,i的值为%d\n",k,j,i);//k的值为0,j的值为5,i的值为4//
j=0,i=5;
k = i---j;//左结合性，--给了i
printf("k的值为%d,j的值为%d,i的值为%d",k,j,i);//k的值为5,j的值为0,i的值为4//
return 0;
}

int main()
{
int year,month,date,hour,minute;
scanf("%4d%2d%2d",&year,&month,&date);//若此处打入数字多于8位，则下一步的检索会直接跳过输入阶段，读取缓存区内的前两位，若只有一位，则只读一位.
scanf("%2d%2d",&hour,&minute);//若下一步检索有两个，缓冲区有1~2字符，则第一个数输入残余字符，还需输入一次，第二个数会取前两位
printf("%6d.%d.%d\n%d.%d",year,month,date,hour,minute);//这里的%6d是最少输出6位，向右靠拢，多于六位则自然打出
return 0;
}

int main()
{
int a,b,c;
scanf("a=%d,b=%d,c=%d",&a,&b,&c);//一定要输入a=1,b=2,c=4这样的模式
printf("a=%d,b=%d,c=%d",a,b,c);
return 0;
}

int main()
{
 int a,b; 
 float x,y; 
 char c1,c2;
scanf("a=%db=%d",&a,&b); //"a=3b=78.5 71.82Aa"一口气输入，不然c1=\n导致换行,也可以改变代码//
scanf("%f%e",&x,&y); 
scanf("%c%c",&c1,&c2);// 把此处的代码改成scanf(" %c%c",&c1,&c2);或者scanf("%*c%c%c",&c1,&c2);//
printf("%d,%d,%f,%e,%c,%c",a,b,x,y,c1,c2);//此👆处是空格,            这里的👆%*c是赋值抑制符
return 0;
}

int main()
{
int c1='C',c2='h',c3='i',c4='n',c5='a';
c1+=4,c2+=4,c3+=4,c4+=4,c5+=4;
putchar(c1);
putchar(c2);
putchar(c3);
putchar(c4);
putchar(c5);
printf("\n%c%c%c%c%c",c1,c2,c3,c4,c5);
return 0;
}
int main()
{

return 0;
}

int main()
{
    int c1,c2;
    c1=97;
    c2=98;
    printf("c1=%c.c2=%c\n",c1,c2);
    printf("c1=%d.c2=%d\n",c1,c2);
    return 0;
}
   
int main()
{
    double a = 114514;
    printf("%e\n",a);
    return 0;
}


    putchar(getchar());
    putchar('\n');
putchar (getchar());
 putchar('\n'); 
int a; 
a=getchar(); 
putchar(a);
putchar ('\n');

int a;
a =1;
if (a == 1<=2)
printf("%d\n",a);
else
printf("有误！\a");

char grade;
scanf("%c",&grade);
printf("Your sorce:");
switch (grade)
{
    case 'A': printf("85~100\n");break;
    case 'B': printf("70~84\n");break;
    case 'C': printf("60~69\n");break;
    case 'D': printf("<60\n");break;
    default: printf ("有问题孩子\n");
}
   
int a,b,c,m;
scanf("%d%d%d",&a,&b,&c);
m = a;
if (a<b)
{
m = b;
  if (b<c)
  m = c;
}
else 
    if(a<c)
    m = c;
    printf("%d",m);
   
int i,sum;
do 
{
    printf("i=%d,sum=%d\n",i++,sum+=i);//函数体内从右到左
}
while (i<=10);
 
i=0,sum=0;
for (;i<=10;i++,sum+=i)//循环体内也是从右到左
    printf("i=%d,sum=%d\n",i,sum); 
int a[10]={0,1,2,3,4,5,6,7,8,9},i;
for(;i<10;i++)
{
    printf("a[%d]为%d\n",i,a[i]);
}
  
char c[6];//一定要填元素数，不能为空
scanf("%5s",c);//最好限制读取额
printf("%s\n%d\n%d\n",c,sizeof(c),strlen(c));   

char c[100]="jm\ntiantang";//这样会把'\n'看成转义字符，但如果是终端输入，那'\n'就是'\'+'n'
puts(c);//用后会自动跳转下一行
printf("%s\n",c);
 
引用外部文件
#include <stdio.h>
#include "prime.h"//要搞头文件和源函数，还得改task.json里的配置，在args.加上prime.c
int main()
{
int a;
scanf("%d",&a);
prime(a);
return 0;
}

杨辉三角形

int a,i,j;
printf("请输入杨辉三角的行数：");
scanf ("%d",&a);
int c[a][a];
c[0][0]=1;
    for (j=1;j<a;j++)   c[0][j]=0; 
    for (j=0;j<a;j++)   printf ("%4d",c[0][j]);
    printf ("\n");
    if (a>1)
    { 
        for (i=1;i<a;i++)
        {
            c[i][0]=1;
            printf("%4d",c[i][0]);  
            for (j=1;j<a;j++)
            {
                c[i][j] = c[i-1][j-1] + c[i-1][j];
                printf("%4d",c[i][j]);
            }    
        
            printf("\n");
        }
    }

char a[20] ,c[20];
scanf ("%s",a);//检索遇到空白字符就停止读取，如（' ', '\n' ,'\t'等等）不会读取'\n',所以缓冲区会还有个'\n',还有scanf在空格处即停止
getchar ();//吃掉'\n'
fgets (c,sizeof(c),stdin);//fgets函数终止的条件：1.读取了[ofsize(c)-1]个字符  2.读取到了'\n',然后把'\n'放入数组c中  3.遇到文件终止符EOF
//fgets有三个参数，一个是输出位置，一个是读取大小，一个是标准输入流，还有两个标准输出流[stdout,stderr]
printf ("%s\n",a);
printf ("%s",c);
puts(c);//自带换行符，所以此程序中，此刻会连跳两行
  
char c1[30]="poeple of";
char c2[]=" china";
char c3[30];//太小会栈溢出
strcpy (c3,strcat(c1,c2));//若用，strncpy(c3,strcat(c1,c2),n),可确定性赋n位字符
printf("%s\n",c1);//poeple of china，如果c1[]设小了，会出现一些错误，上次我用c1[10]结果是poeple of poeple of china
printf("%s\n",c2);// china
strcpy (c3,strcat(c1,c2));
printf("%s\n",c3);//poeple of china china
printf("%d\n",strcmp(c3,c1));//输出0，因为上一步把c1也整成poeple of china china了
putchar('\n');

char d1[30]="poeple of";
char d2[]=" china";
char d3[30];//太小会栈溢出
strcpy(d3,d1);
strcat(d3,d2);//通过这一步，就可以不改变c1,c2的值
printf("%s\n",d1);
printf("%s\n",d2);
printf("%s\n",d3);
printf("%d\n",strcmp(d1,d3));
putchar('\n');
printf("%d\n",sizeof(d3));//占用空间的长度
printf("%d\n",strlen(d3));//实际长度
  
int a=114514;
float *p = &a;
printf("%d\t%lf\n",a,*p);//输出 114514  0.000000
float b=11451419;
int *q = &a;
printf("%f\t%d\n",b,*q);//输出 114514.000000   114514,所以float不能指向int,但int可以指向float型
printf("%d\t%d\n",sizeof(a),sizeof(b));
 */
int a=10;
int *p1= &a,*p2;
p2 =&p1;
printf("%d\t%d\n",p1,*p2);
return 0;//猜测： ??
}