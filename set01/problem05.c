#include<stdio.h>
int input();
int compare(int a,int b,int c);
void output(int a,int b,int largest,int c);
int main()
{
    int a,b,c,largest;
    a=input();
    b=input();
    c=input();
    
    largest=compare(a,b,c);
    output(a,b,c,largest);
    return 0;
}
int input()
{
    int x;
    printf("enter two number:");
    scanf("%d",&x);
    return x;
}
int compare(int a , int b,int c)
{
    int largest;
    if(a>=b&&a>=c)
  {
    largest=a;
    return a;
  }
  if(b>=a&&b>=c)
  {
    largest=b;
    return a;
  }
  else{
    largest=c;
    return c;
  }
}
void output(int a,int b,int c, int largest)
{
    printf("the largest of %d,%d and %d is %d\n",a,b,c,largest);
}