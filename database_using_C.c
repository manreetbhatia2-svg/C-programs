#include<stdio.h>
#include<string.h>
//sort using any technique by roll number
typedef struct {    
    int roll_num;
    char name[20];
    int Dsa, De, Maths;
    float avg;
}student ;

void display(int n, student s[]);
int search (char name[], student s[], int n);
void modify_name(char old_name[20], char new_name[20], int n, student s[]);
void modify_roll(int old_roll, int new_roll, int n, student s[]);
void modify_marks(char subject[], int roll, int new_marks, student s[], int n);
void append(student *s, int *n);
void sort(int n, student s[]);

int main(){
    int n, choice, modify_choice, old_roll, new_roll, new_marks, roll;
    char old_name[20], new_name[20], search_name[20], subject[10];
    printf("Enter the number of students ");
    scanf("%d",&n);
   
    student s[n];

    for (int i=0; i<n; i++){
       
        printf("\nEnter the roll number of the student ");
        scanf("%d",&s[i].roll_num);
       
        printf("Enter the name of the student ");
        getchar();
        fgets(s[i].name, sizeof(s[i].name), stdin);
        s[i].name[strcspn(s[i].name, "\n")] = '\0';




        printf("Enter the marks for DE ");
        scanf("%d",&s[i].De);
       
        printf("Enter the marks for DSA ");
        scanf("%d",&s[i].Dsa);
       
        printf("Enter the marks for Maths ");
        scanf("%d",&s[i].Maths);
       
        s[i].avg = (s[i].De + s[i].Dsa + s[i].Maths)/3.0;
    }


    printf("\n*** STUDENT DATABASE MANAGEMENT SYSTEM ***");
    printf("\n1.Search by name \n2.Display the array\n3.Modify \n4.Append\n5.Sort by roll number\n6.Exit");
    printf("\n");

    do{
        printf("Enter choice "); 
        scanf("%d", &choice);
        switch (choice){
            case 1:  // search by name
                printf("Enter the name to be searched ");
                getchar();
                fgets(search_name, sizeof(search_name), stdin);
                search_name[strcspn(search_name,"\n")] = '\0';




                int diff = search(search_name, s, n);
                if (diff == 0)
                    printf("The name %s is found \n",search_name);
                else
                    printf("The name is not found \n");
                break;
                
            case 2: // Display the array
                display(n, s);
                break;
        
            case 3: // Modify
                printf("1.Modify name\n2.Modify roll number\n3.Modify marks\n");
                printf("Enter choice ");
                scanf("%d",&modify_choice);

                switch (modify_choice){
                    case 1: // modify name
                        printf("Enter the name you want to modify ");
                        getchar();
                        fgets(old_name, sizeof(old_name), stdin);
                        old_name[strcspn(old_name,"\n")] = '\0';


                        printf("Enter the new name ");
                        fgets(new_name, sizeof(new_name), stdin);
                        new_name[strcspn(new_name,"\n")] = '\0';


                        modify_name(old_name, new_name, n, s);
                        display(n, s);
                        break;
                    case 2: // modify roll number
                        printf("\nEnter the roll number you want to modify ");
                        scanf("%d",&old_roll);


                        printf("Enter the new roll number ");
                        scanf("%d",&new_roll);


                        modify_roll(old_roll, new_roll, n, s);
                        display(n, s);
                        break;
                
                    case 3: // modify marks
                        printf("Enter which subject marks to modify (Dsa, De, Maths) ");
                        scanf("%s",subject);


                        printf("Enter the roll number whose marks have to be changed ");
                        scanf("%d",&roll);


                        printf("Enter the modified marks ");
                        scanf("%d",&new_marks);


                        modify_marks(subject, roll, new_marks, s, n);
                        display(n, s);
                        break;

                }
            
            break;
        
            case 4: //Append
                append(s,&n);
                display(n, s);
                break;

            case 5: //Sort by roll number
                sort(n,s);
                display(n,s);
                break;
            
            case 6: // Exit
                break;
        }
    }
    while (choice<6);
    return 0;
}

void display(int n, student s[]){
    printf("\nRoll number\tName\tDE\tDSA\tMaths\tAverage\n");
    for(int i=0; i<n; i++){
        printf("%d \t\t%s \t%d \t%d \t%d \t%.2f\n",s[i].roll_num, s[i].name, s[i].De, s[i].Dsa, s[i].Maths, s[i].avg);
    }
}

int search (char name[], student s[], int n){
    int diff;
    for(int i=0; i<n ; i++){
        diff = strcmp(s[i].name,name);
        if (diff == 0)
            break;
    }  
    return diff;
}
void modify_name(char old_name[20], char new_name[20], int n, student s[]){
    for(int i=0; i<n ; i++){
        if (strcmp(s[i].name,old_name) == 0)    
            strcpy(s[i].name, new_name);
    }
}


void modify_roll(int old_roll, int new_roll, int n, student s[]){
    for(int i=0; i<n ; i++){
        if(s[i].roll_num == old_roll)
            s[i].roll_num = new_roll;
    }
}


void modify_marks(char subject[], int roll, int new_marks, student s[], int n){
    for(int i=0; i<n ; i++){
        if(s[i].roll_num == roll){
           
            if((strcmp(subject, "De")) == 0){
                s[i].De = new_marks;
            }
            if((strcmp(subject, "Dsa")) == 0){
                s[i].Dsa = new_marks;
            }
            if((strcmp(subject, "Maths")) == 0){
                s[i].Maths = new_marks;
            }
            s[i].avg = (s[i].De + s[i].Dsa + s[i].Maths)/3.0;
            break;
        }
       
    }
}


void append(student *s, int *n){
    printf("\nEnter the roll number of the student ");
    scanf("%d",&s[*n].roll_num);
   
    printf("Enter the name of the student ");
    getchar();
    fgets(s[*n].name, sizeof(s[*n].name), stdin);
    s[*n].name[strcspn(s[*n].name, "\n")] = '\0';

    printf("Enter the marks for DE ");
    scanf("%d",&s[*n].De);
   
    printf("Enter the marks for DSA ");
    scanf("%d",&s[*n].Dsa);
   
    printf("Enter the marks for Maths ");
    scanf("%d",&s[*n].Maths);
   
    s[*n].avg = (s[*n].De + s[*n].Dsa + s[*n].Maths)/3.0;
    (*n)++;
}

void sort(int n, student s[]){
    student temp;
    student *p = s;
    for (int i=0; i<n-1; i++){
        for (int j=0; j<n-i-1; j++){
            if((p+j)->roll_num > (p+j+1)->roll_num){
                temp = *(p+j);
                *(p+j)=*(p+j+1);
                *(p+j+1)=temp;
            }
        }
    }
}