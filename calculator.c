#include<stdio.h>
int main()
{
 char opt;
 int n1,n2;
 float res;
 
 printf("Choose and operator(+,-,*,/)\n");
 scanf("%c",&opt);
 if(opt=='/')
  {
  	printf("You have sealect:- Division.");
  }
  else if(opt=='*')
  {
  	printf("You have sealect:-  Multiplication");
  }
  else if(opt=='-')
  {
  	printf("You have sealect:-Subtraction");
  }
  else if(opt=='+')
  {
  	printf("You have sealect:-Addition");
  
  }
  printf("\nEnter the first number");
  scanf("%d",&n1);
   printf("Enter the second number");
  scanf("%d",&n2);
   switch(opt)  
    {  
        case '+':  
            res = n1 + n2;  
            printf (" Addition of %d and %d is: %.2f", n1, n2, res);  
            break;  
          
        case '-':  
            res = n1 - n2;  
            printf (" Subtraction of %d and %d is: %.2f", n1, n2, res);  
            break;  
              
        case '*':  
            res = n1 * n2; 
            printf (" Multiplication of %d and %d is: %.2f", n1, n2, res);  
            break;            
          
        case '/':  
            if (n2 == 0)     
            {  
                printf (" \n Divisor cannot be zero. Please enter another value ");  
                scanf ("%d", &n2);        
                }  
            res = n1 / n2; // divide two numbers  
            printf (" Division of %d and %d is: %.2f", n1, n2, res);  
            break;  
        default:  /* use default to print default message if any condition is not satisfied */  
            printf (" Something is wrong!! Please check the options ");               
    } 
}

