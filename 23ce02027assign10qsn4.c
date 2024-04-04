#include<stdio.h>
int main()
{
   union nub{
    int a;
    float num[2];
    char alp[2];
   };
   union nub u;
   printf("enter elements of char array:");
   scanf("%s",u.alp);
   printf("enter value of a:");
   scanf("%d",&u.a);
   printf("enetr elements of num array: ");
   scanf("%f%f",&u.num[0],&u.num[1]);
   printf("the value of a is:%d",u.a);
   printf("\nthe elements in array are :%f\t%f",u.num[0],u.num[1]);
   printf("\nthe char array is :%s",u.alp);
   return 0;
}