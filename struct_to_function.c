#include<stdio.h>

struct student{
    int roll;
    char name[20];
    float de,dsa;
}s;
void display(struct student );
int main(){
    printf("Enter roll number: ");
    scanf("%d",&s.roll);
    printf("Enter name: ");
    scanf("%s",s.name);
    printf("Enter DE makrs: ");
    scanf("%f",&s.de);
    printf("Enter DSA makrs: ");
    scanf("%f",&s.dsa);   
    display(s);

    return 0;

}

void display(struct student a){
    float avg = (a.de + a.dsa)/2;
    printf("%d\t%s\t%.2f\t%.2f\t%.2f",a.roll, a.name, a.de, a.dsa, avg);
}