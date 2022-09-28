
//...answer-1.....
#include<stdio.h>
float area(int r)
{
    return (22*r*r)/7 ;
}
int main()
{
    int r;
    float a;
    printf("enter the radius of circle - : ");
    scanf("%d",&r);
    //a=area(r);
    printf("area of the circle:%f",area(r));
    return 0;
}
//..answer-2.....

#include<stdio.h>
int simple_interest(int p,int r,int t)
{
    return (p*r*t)/100 ;
}
int main()
{
    int r,p,t; 
    printf("Enter rate - : ");
    scanf("%d",&r);
    printf("Enter the principal-:");
    scanf("%d",&p);
    printf("Enter the time-:");
    scanf("%d",&t);
    //a=simple_interest(r,p,t);
    printf("interest after :%d",simple_interest(r,p,t));
    return 0;
}

//answer-3
int iseveNum(int);
int main()
{
  int num;
  printf("Enter the no:");
  scanf("%d",&num);
  if (num%2==0)
        printf("even");
  else
         printf("odd");
  return 0;       
}
int isevenNum(int a)
{ 
  return(a);
}

//answer-4
#include<stdio.h>
int nat_no();
int main()
{
 int x,i;
 printf("Enter the no:");
 scanf("%d",&x);

  for(i=1;i<x;i++)
 printf("%d",i);

 printf("%d",nat_no(x));
 return 0;

}
int nat_no(int a)
{

}
//..answer-5...
#include<stdio.h>
int odd_num(int);
int main()
{
int x,i;
printf("Enter the no:");
scanf("%d",&x);

  for(i=1;i<x;i+2)
printf("%d",&i);

printf("%d",odd_num(x));
return 0;
}
int odd_num(a)
{

}

//..answer-6...
#include<stdio.h>
int fact(int);
int main()
{
  int no;
  printf("enter the no:");
  scanf("%d",&no);
  printf("%d",fact(no));
}
int fact(int n)
{
  int i,f=1;
  for(i=1;i<=n;i++)
    f=f*i;
  return f;
}

//.....answer-9....
#include<stdio.h>
int char_check(int);
int main()
{
 char x;
 printf("Enter the no:");
 scanf("%c",&x);
 if(x>='0' && x<='9')
 {
 printf("this is the digit%c");
 }
 else
 {
  printf("this is the char%c");
 }
 return 0;
}
int char_check();

//...(answer-10)...
#include<stdio.h>
int main()
{
int x,i;
printf("Enter the no:");
scanf("%d",&x);
for(i=2;x>1;i++){
while(x%i==0)
 {
  printf("%d", i);
  x=x/i;
 }
}
}