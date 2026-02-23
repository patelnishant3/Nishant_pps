#include <stdio.h>
int main()
{
  int num,sum,choice,a,b,c,n,digit;
  do{
     printf("\n===MENU===\n");
     printf("\n1,check number is even or odd\n");
     printf("\n2,check number is positive or negative\n");
     printf("\n3,find greatest of three\n");
     printf("\n4,find sum of digits\n");
     printf("\n5,exit the program\n");
     scanf("%d",&choice);
     
     switch(choice){
          case 1:
          {
            printf("enter a number");
            scanf("%d",&num);
            if(num %2 == 0)
              printf("number is even");
            else
              printf("number is odd");
              
            break;
          }
          
          case 2:
          {
            printf("enter a number");
            scanf("%d",&num);
            if(num >= 0)
              printf("number is positive");
            else if(num <= 0)
              printf("number is negative");
              
            break;
          }
          
          case 3:
          {
            if(a==b && b==c);
              printf("all the number are same");
            if(a>=b && b>=c)
              printf("a is greatest %ls",&a);
            else if(b>=a && b>=c)
              printf("b is greatest %ls",&b);  
            else if(c>=b && c>=a)
              printf("c is greatest %ls",&c);
              
            break;
          }
          
          case 4:
          {
            printf("enter a number");
            scanf("%d",&n);
            sum = 0;
            while(n !=0)
            {
              digit = n%10;
              sum += digit;
              n = n/10;
            }    
            printf("sum of digit is %d",sum);
            break;
          }
          
            
           
     }
     while (num!=5);
     return 0;
     
}
