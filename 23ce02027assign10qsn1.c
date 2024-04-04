#include<stdio.h>

union data
{
    int a;
    char b;
    float c;
};
int main(){
    union data d;
    d.a=5;
    d.b='s';
    d.c=1.732;
    printf("%d\n %c\n %f",d.a,d.b,d.c);
    return 0;
}