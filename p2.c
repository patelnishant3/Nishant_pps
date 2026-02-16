#include<stdio.h>
int main()
{
  int English,Maths,BEE,PPS,FAI;
  float per,Total;
  
  printf("\nEnglish marks= ");
  scanf("%d",&English);
  printf("\nMaths marks= ");
  scanf("%d",&Maths);
  printf("\nBEE marks= ");
  scanf("%d",&BEE);
  printf("\nPPS marks= ");
  scanf("%d",&PPS);
  printf("\nFAI marks= ");
  scanf("%d",&FAI);

  Total=English+Maths+BEE+PPS+FAI;
  printf("\nTotal Obtained Marks Out Of 500= %f",Total);
  
  per= Total*100/500;
  printf("\nPer = %f",per);

  if ( per>=90 )
  {
     printf("\nGrade = A");
  }
  else if ( per>=75 )
  {
     printf("\nGrade = B");
  }
  else if ( per>=60 )
  {
     printf ("\nGrade = C");
  }
  else if ( per>=40 )
  {
     printf ("\nGrade = D");
  }
  else if ( per<40 )
  {
     printf ("\nGrade = fail");
  }
  return 0;
  
}
