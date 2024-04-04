#include<stdio.h>
int main()
{
   
    union empdetails{
        float wage;
        double sal;
    };
     struct employee
    {
      int id;
      char name[100];  
      
    };
    struct employee e;
    printf("enter id:");
    scanf("%d",&e.id);
    printf("enter name:");
    scanf("%s",&e.name);
    union empdetails u;
    printf("enter hourly wage:");
    scanf("%f",&u.wage);
    printf("enter salary:");
    scanf("%lf",&u.sal);
    printf("%d\n%s\n",e.id,e.name);
    printf("%f\t%lf",u.wage,u.sal);
}