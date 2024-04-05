#include<stdio.h>
#include<string.h>
int main()
{
    enum paytype{
        hourly,
        salary
    };
     union empdetails{
        float wage;
        double sal;
    };
    struct employee
    {
      int id;
      char name[100];  
      enum paytype py;
      union empdetails u;
    };
    struct employee e1;
    printf("enter id:");
    scanf("%d",&e1.id);
    printf("enter name:");
    scanf("%s",&e1.name);
    printf("enter paytype:");
    scanf("%d",(int*)&e1.py);
   if(e1.py==salary){
    printf("enter salary:");
    scanf("%lf",&e1.u.sal);
    }
    if(e1.py==hourly){
        printf("enter wage:");
        scanf("%f",&e1.u.wage);}

    printf("id:%d\n",e1.id);
    printf("name:%s\n",e1.name);
    if(e1.py==hourly)
    {
    printf("paytype is hourly\n");
    printf("hourly wage is:%f\n",e1.u.wage);
}
if(e1.py==salary)
{
    printf("paytype is salary\n");
    printf("salary is :%lf\n",e1.u.sal);
}
}