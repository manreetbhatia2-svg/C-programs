#include<stdio.h>

struct student{
    char name[20];
    int marks, roll_num;
}b[3];
int main(){
    for (int i=0; i<3; i++){
        printf("Enter name ");
        scanf("%s",b[i].name);
        printf("Enter roll number ");
        scanf("%d",&b[i].roll_num);
        printf("Enter marks ");
        scanf("%d",&b[i].marks);
    }

    for (int i=0; i<3; i++){
        printf("%s \t%d \t%d ", b[i].name, b[i].roll_num, b[i].marks );
    }
    return 0;
}