#include<stdio.h>
#include<stdlib.h>
/*Develop a program to add two polynomials using singly linked list 
The display should include the polynomials that are added and the resultant polynomial,
in descending order of the exponents. You can assume user enters the terms in descending order of the power*/
typedef struct node{
    int coeff;
    int exp;
    struct node *next;
}node;
node* create_polynomial();
node* add_2_polynomials(node*a1, node*a2);
void display_polynomial(node* a);
node *p,  *p_more, *curr,  *head, *head_sum;

int main(){
    node *p1,*p2,*p3;
    printf("1st polynomial:\n");
    p1 = create_polynomial();

    printf("2nd polynomial:\n");
    p2 = create_polynomial();

    printf("1st polynomial: ");
    display_polynomial(p1);
    printf("\n2nd polynomial: ");
    display_polynomial(p2);

    p3 = add_2_polynomials(p1,p2);
    printf("\nSum of polynomials: ");
    display_polynomial(p3);
    
}

node* create_polynomial(){
    char ans;
    head = NULL;

    p = (node*)malloc(sizeof(node));                                                 
    printf("Enter coefficient: ");
    scanf("%d",&p->coeff);
    printf("Enter exponent: ");
    scanf("%d",&p->exp);
    head = p;  

    do{
        printf("Want more terms in the polynomial? (y/Y): ");
        scanf(" %c",&ans);
        printf("\n");
        if(ans == 'y' || ans == 'Y'){
            p_more = (node*)malloc(sizeof(node)); 
            printf("Enter coefficient ");
            scanf("%d",&p_more->coeff);
            printf("Enter exponent ");
            scanf("%d",&p_more->exp);
            p->next = p_more;
            p = p_more;
        }
    }while(ans == 'y' || ans == 'Y');
    p->next = NULL;
    return head;
}

node* add_2_polynomials(node*a1, node*a2){
    head_sum = NULL;

    while(a1 != NULL && a2 != NULL){
        p = (node*)malloc(sizeof(node)); 
        if(a1->exp == a2->exp){
            p->coeff = a1->coeff + a2->coeff;
            p->exp = a1->exp;
            a1 = a1->next;
            a2 = a2->next;
        }
        else if(a1->exp > a2->exp){
            p->coeff = a1->coeff;
            p->exp = a1->exp; 
            a1 = a1->next;  
        }
        else if(a1->exp < a2->exp){
            p->coeff = a2->coeff;
            p->exp = a2->exp;   
            a2 = a2->next;
        }
        if(head_sum == NULL){
            head_sum = p;
            curr = p;
        }
        else{
            curr->next=p;
            curr = p;
        }
    }
    while(a1 != NULL)
    {
        p = (node*)malloc(sizeof(node));
        p->coeff = a1->coeff;
        p->exp = a1->exp;

        curr->next = p;
        curr = p;
        a1 = a1->next;
    }

    while(a2 != NULL)
    {
        p = (node*)malloc(sizeof(node));
        p->coeff = a2->coeff;
        p->exp = a2->exp;

        curr->next = p;
        curr = p;
        a2 = a2->next;
    }
    curr->next = NULL;
    return head_sum;
}

void display_polynomial(node* a){
    while(a!=NULL){
        if(a->exp == 0){
            printf("%d ",a->coeff);
            break;
        }
        if(a->next!=NULL)
            printf("%dx^%d + ",a->coeff,a->exp);
        else
            printf("%dx^%d ",a->coeff,a->exp);
        a = a->next;
    }
}





