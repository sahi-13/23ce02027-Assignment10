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
    e1.id=1;
    strcpy(e1.name,"sahithi");
    e1.py=salary;
    e1.u.sal=15550.34;
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
    printf("salary is :%f\n",e1.u.sal);
}
}