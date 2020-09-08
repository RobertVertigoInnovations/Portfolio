#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
void menu(void);
float multiply(void);
float add(void);
float divide(void);
float minus(void);

int main (void)
{
  
  int enterMenu = 1;
  int choice;
  menu();
  while (enterMenu)
  {
    
    choice = getchar();
    switch(choice)
    {
       
      case 'a': add();
              while ((getchar()) != '\n');
              menu();
              break;
      case 'd': multiply();
                while ((getchar()) != '\n');
                menu();
                break;
      case 'm': multiply();
                while ((getchar()) != '\n');
                menu();
                break;
      case 's':minus();
               while ((getchar()) != '\n');
               menu();
               break;
      case 'q':printf("Bye.\n");
               return 0 ;
               break;
      default : 
                printf("Please respond with a, s, m, d, or q.\n\n");
                while ((getchar()) != '\n');
                break;
    }
    
  }
  menu();

}


float isnum(void)
{
   float input;
   char ch;

   while (scanf("%g", &input) != 1)  
   {
       while ((ch = getchar()) != '\n' )
       {
         putchar(ch);  
       }          
       printf(" is not an number.\n");
       printf("Please enter a number, such as 2.5, -1.78E8, or 3: \n");
     }

   return input;
}


float multiply(void)
{

  float f;
  float s;
  float multiplyNumber;

  printf("Enter first number: \n");
  f = isnum();
  printf("Enter second number: \n");
  s = isnum();
  multiplyNumber = f * s;

  printf("\n%g * %g = %g\n", f, s, multiplyNumber);
  return 0;

}


float add(void)
{
  float f;
  float s;
  float addNumber;

  printf("Enter first number: \n");
  f = isnum();
  printf("Enter second number: \n");
  s = isnum();

  addNumber = f + s;

  printf("\n%g + %g = %g\n", f, s, addNumber);
  return 0;
}

float minus(void)
{
  float f;
  float s;
  float minusNumber;
  printf("Enter first number: \n");
  f = isnum();
  printf("Enter second number: \n");
  s = isnum();

  minusNumber = f - s;

  printf("\n%g - %g = %g\n", f, s, minusNumber);
  return 0;
}

float divide(void)
{
  float f ;

  
  float s;
  int checkS = 1;
  int count = 1 ;
  float divideNumber;
  printf("Enter first number: \n");
  f = isnum();
  printf("Enter second number: \n");
    while(checkS)
    {
      
      s=isnum();
      if(s != 0)
      {
        break;
        checkS = 0 ;
      }
      printf("Enter a number other than 0: \n");
      
    }

  divideNumber = f / s;

  printf("\n%g / %g = %g\n", f, s, divideNumber);
  return 0;
}

void menu(void)
{
  printf("\nEnter the operation of your choice:\n");
  printf("a. add           s. subtract\n");
  printf("m. multiply      d. divide\n") ;
  printf("q. quit\n\n");
}