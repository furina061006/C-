#include <stdio.h>
#include <stdlib.h>
#define L (sizeof(struct Table))
struct Table
{
    long num;
    char name[30];
    int score;
    struct Table * next;
};

int main()
{
    struct Table *scan();
    void print(struct Table *head);
    struct Table *head;
    head = scan();
    print(head);        
    return 0;
}

struct Table *scan()
{
    static int n=0;
    struct Table *p1,*p2,*head;
    p1=p2=malloc(L),head=NULL;
    printf("请输入一个学生的学号、姓名、分数：（用空格隔开，想结束时请输入0 0）\n");
    do{
        if (n==1) head=p2; 
        n +=1;
        p2=p1;
        scanf("%ld%s%d",&p1->num,p1->name,&p1->score);  
        p1=malloc(L);
        p2->next=p1;
    }while(p2->num!=0);
    if (n==1) head=NULL;
    return head;
}

void print(struct Table *head)
{
    struct Table *p1=head;
    while (p1->num!=0)
    {
        printf("num:\t%ld\nname:\t%s\nscore:\t%d\n",p1->num,p1->name,p1->score);
        p1=p1->next;
    }
}