#include<stdio.h>

struct student{
    int roll;
    char name[20];
    float de,dsa;
}s;
void display(int, char*, float, float);
int main(){
    printf("Enter roll number: ");
    scanf("%d",&s.roll);
    printf("Enter name: ");
    scanf("%s",s.name);
    printf("Enter DE makrs: ");
    scanf("%f",&s.de);
    printf("Enter DSA makrs: ");
    scanf("%f",&s.dsa);   
    display(s.roll, s.name, s.de, s.dsa);

    return 0;

}

void display(int a, char*b, float c, float d){
    float avg = (c+d)/2;
    printf("%d\t%s\t%.2f\t%.2f\t%.2f",a, b, c, d, avg);
}