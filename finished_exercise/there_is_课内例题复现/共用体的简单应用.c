#include <stdio.h>
#include <stdlib.h>
#define L (sizeof(struct Message))
union Categ
{
    char clas[20];//不写class，是因为class在Cpp里是关键词
    char position[20];
};
struct Message
{
    long int id;
    char name[30];
    char sex;
    char status;
    union Categ category;
    struct Message *next;    
};

int main()
{
    struct Message *scan();
    void print(struct Message *head,char status);
    struct Message *head=scan();
    char status;
    printf("请输入想查询的职位：(s/t/a)\n");
    status =getchar();
    print(head,status);
    return 0;
}

struct Message *scan()
{
    struct Message *head,*p1,*p2;
    static int n=0; 
    printf("请输入ID、姓名、性别（m/f）、身份（s/t）、班级或职位（机器人250X/教授/导员）：(想停止时，ID请输入0)\n");
    head=NULL,p1=p2=malloc(L);
    do{
        if(n==1)  head=p2;
        n +=1;
        scanf("%ld",&p1->id);
        if(p1->id==0)  break;//循环最后会再此跳出，此时p2指向最后一个有效信息，p1指向无用的新开空间
        scanf("%s %c %c",p1->name,&p1->sex,&p1->status);
        p2=p1;
        if(p1->status=='s')
        {
            scanf("%s",p1->category.clas);
            p1=p2->next=malloc(L);
        }
        else if(p1->status=='t')
        {
            scanf("%s",p1->category.position);
            p1=p2->next=malloc(L);
        }        
        else   
        {
            printf("Error Input! Try again Bro!\n");
        }
    }while(1);//设计链表，要想，每次循环开始和结束时各指针的指向情况，最好画个图
    //printf("%-10ld%-30s%-4c%-4c%-20s\n",p2->id,p2->name,p2->sex,p2->status,p2->category.clas);
    p2->next= NULL;
    free(p1);
    puts("数据读取完成！");   
    getchar();
    return head;
}

void print(struct Message *head,char status)//为了方便，都用了status，用的时候一定要分清楚！！！
{
    struct Message *p1=head;
    puts("ID        姓名            性别    身份     班级或职位");
    while(p1!=NULL)
    {
        if(status =='s')   status='t';
        if(status =='t')   status='s';
        if(p1->status != status)
        {
            if (p1->status == 's')
                printf("%-10ld%-20s%-8c%-8c%-20s\n",p1->id,p1->name,p1->sex,p1->status,p1->category.clas);
            if (p1->status == 't')
                printf("%-10ld%-20s%-8c%-8c%-20s\n",p1->id,p1->name,p1->sex,p1->status,p1->category.position);
        }
        p1 = p1->next;
    }
    puts("一滴也没有了...");
}
