#include<stdio.h>
#include<string.h>
struct student{

    int roll_no;
    char name[20];
    int id;
    int marks;

};
int main()
{
    struct student s1[5];
    int i;
    for(i=0;i<5;i++)
    {
        printf("Enter roll no.:");
        scanf("%d",&s1[i].roll_no);
        printf("Enter Name:");
        scanf("%s",s1[i].name);
        printf("Enter id:");
        scanf("%d",&s1[i].id);
        printf("Enter marks:");
        scanf("%d",&s1[i].marks);


    }
    printf("-----Information of students-----\n");
    for(i=0;i<5;i++)
    {
        printf("1)Roll no.:%d\n 2)Name:%s\n 3)id:%d\n 4)Marks:%d\n",
            s1[i].roll_no,s1[i].name,s1[i].id,s1[i].marks);
    }
    return 0;
}