
#include<stdio.h>
#include<stdlib.h>
int main(){
	int num1, choice;
	float div, num2;
	printf("Enter the 1st number ");
	scanf("%d",&num1);
		
	printf("Enter the 2nd number ");
	scanf("%f",&num2);

	printf("1.Add\n2.Subtract\n3.Multiply\n4.Divide\nEnter choice: ");
	scanf("%d",&choice);
	while(1){
		
		switch (choice){

			case 1: // Addition
				printf("Sum = %.2f\n",num1 + num2);
				break;
		
			case 2: // Subtraction
				printf("Difference = %.2f\n",num1 - num2);
				break;
		
			case 3:// Multiplication
				printf("Product = %.2f\n",num1 * num2);
				break;
		
			case 4: // Division
				div = (num1/num2);
				printf("Quotient = %.2f\n",div);
				break;

			default:
				printf("Not a valid choice ");
				exit(0);
		}

		printf("1.Add\n2.Subtract\n3.Multiply\n4.Divide\nEnter choice: ");
		scanf("%d",&choice);
	}
}

