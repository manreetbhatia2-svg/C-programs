#include<stdio.h>

struct student{
    char name[20];
    int marks, roll_num;
}b;
int main(){
    printf("Enter name ");
    scanf("%s",b.name);
    printf("Enter roll number ");
    scanf("%d",&b.roll_num);
    printf("Enter marks ");
    scanf("%d",&b.marks);

    printf("Data collected\n");
    printf("%s \t%d \t%d ", b.name, b.roll_num, b.marks );
    return 0;
}