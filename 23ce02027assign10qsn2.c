#include<stdio.h>
int main()
{
    struct num {
        int a;
        int b;
        char c[1];
    };
    union new {
        int x;
        int y;
        char z[1];
    };
    struct num s;
    printf("enter a:");
    scanf("%d",&s.a);
    printf("enter b:");
    scanf("%d",&s.b);
    printf("enter c:");
    scanf("%s",&s.c);
    union new u;
    printf("enter x:");
    scanf("%d",&u.x);
    printf("enter y:");
    scanf("%d",&u.y);
    printf("enter z:");
    scanf("%s",&u.z);
    printf("\n%d\n",sizeof(s));
    printf("%d",sizeof(u));
}