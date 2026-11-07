#include<stdio.h>
  int main()
{ 
    int a,b,c,sum;
    printf("enter angle a\n");
    scanf("%d", &a);
    printf("enter angle b\n");
    scanf("%d", &b);
    printf("enter angle c\n");
    scanf("%d", &c);
     
    sum=a+b+c;
    
    if (sum==180 && a>0 && b>0 && c>0)
    {
        printf("this triangle is Valid\n");
    }
    else 
    {
        printf("this triangle is Not Valid\n");
    }
  
     return 0;


}
