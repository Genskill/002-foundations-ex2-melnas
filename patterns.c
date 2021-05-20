#include <stdio.h>
#include <cs50.h>
int main(void)
{
  int choice=get_int("Enter type of pattern (1 or 2) ");
  int r=get_int("Number of rows");
  if(choice==1)
  {
    for(int i=r;i>0;i--)
    {
      for(int j=0;j<i;j++)
      {
        printf("#");
      }
      printf("\n");
    }
  }
  else if(choice==2)
  {
    for(int i=r;i>0;i--)
    {
      for(int j=0;j<r;j++)
      {
        if(j>=i-1)
        {
          printf("#");
        }
        else
          printf(" ");
      }
      printf("\n");
    }
  }
};
