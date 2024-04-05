#include<stdio.h>
#include<string.h>
int main()
{
    struct comsg{
        int op;
        int st;
    };
    struct data {
        char arr[100];
    };
    union packet {
        struct comsg s;
        struct data d;
    };
    struct datapacket{
        int num;
        union packet p;
    };
    struct datapacket ds[4];
    printf("enter num:");
    scanf("%d",&ds[0].num);
    for(int i=0;i<4;i++)
    {
        if(ds[i].num==0)
        {
    printf("opcode is:");
    scanf("%d",&ds[i].p.s.op);
    printf("status code is:");
    scanf("%d",&ds[i].p.s.st);
       }
       else if(ds[i].num==1)
       {
        printf("char array is:");
        scanf("%s",&ds[i].p.d.arr);
       }
    }
    for(int i=0;i<4;i++)
    {
        if(ds[i].num==0)
        {
    printf("THE CONTROL MESSAGE IS:\n");
    printf("opcode is :%d\n",ds[i].p.s.op);
    printf("status code is:%d\n",ds[i].p.s.st);}
    printf("\n");
    if(ds[i].num==1){

    printf("THE DATA PAYLOAD IS:\n");
    printf("the payload is:%s\n",ds[i].p.d.arr);
    
    }
   
    }    
    return 0;
}