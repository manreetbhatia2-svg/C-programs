#include<stdio.h>

struct student{
    char name[20];
    int marks, roll_num;
}b,*a;
int main(){
    a = &b;
    printf("Enter name ");
    scanf("%s",a->name);
    printf("Enter roll number ");
    scanf("%d",&a->roll_num);
    printf("Enter marks ");
    scanf("%d",&a->marks);

    printf("Data collected\n");
    printf("%s \t%d \t%d ", a->name, a->roll_num, a->marks );
    return 0;
}