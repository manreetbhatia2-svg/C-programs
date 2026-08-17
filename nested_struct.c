#include<stdio.h>

struct student{
    char name[20];
    int marks, roll_num;
};

struct teacher{
    int id_no;
    char deg[30];
    struct student s;
}t;

int main(){
    printf("Enter name ");
    scanf("%s",t.s.name);
    printf("Enter roll number ");
    scanf("%d",&t.s.roll_num);
    printf("Enter marks ");
    scanf("%d",&t.s.marks);
    printf("Enter teacher id no. ");
    scanf("%d",&t.id_no);   

    printf("Data collected\n");
    printf("%s \t%d \t%d \t%d", t.s.name, t.s.roll_num, t.s.marks, t.id_no );
    return 0;
}