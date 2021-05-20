#include<stdio.h>
#include<cs50.h>

int main(void)
{
  float a= get_float("side 1 \n");
  float b= get_float("side 2 \n");
  float c= get_float("side 3 \n");
  if(a>b && a>c)
  {
    if(b*b+c*c==a*a)
      printf("Yes");
    else
      printf("No");
  }
  if(b>c && b>a)
  {
    if(a*a+c*c==b*b)
      printf("Yes");
    else
      printf("No");
  }
  else
  {
    if(a*a+b*b==c*c)
      printf("Yes");
    else
      printf("No");
    }
};
  
  
    
             
