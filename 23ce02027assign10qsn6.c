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
    ds[0].num=0;
    ds[0].p.s.op=1;
    ds[0].p.s.st=100;
    ds[1].num=1;
    strcpy(ds[1].p.d.arr,"vaishnavi");
    ds[2].num=0;
    ds[2].p.s.op=2;
    ds[2].p.s.st=200;
    ds[3].num=1;
    strcpy(ds[3].p.d.arr,"iitbhubaneshwar");
    printf("THE CONTROL MESSAGE IS:\n");
    printf("opcode is :%d\n",ds[0].p.s.op);
    printf("status code is:%d\n",ds[0].p.s.st);
    printf("THE CONTROL MESSAGE IS:\n");
    printf("opcode is :%d\n",ds[2].p.s.op);
    printf("status code is:%d\n",ds[2].p.s.st);
    printf("\n");
    printf("THE DATA PAYLOAD IS:\n");
    printf("the payload is:%s\n",ds[1].p.d.arr);
    printf("THE DATA PAYLOAD IS:\n");
    printf("the payload is:%s\n",ds[3].p.d.arr);
    return 0;
}