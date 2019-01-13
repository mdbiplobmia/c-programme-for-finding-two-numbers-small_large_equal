#include<stdio.h>

int main()
{
    int a,b;
    while(scanf("%d %d",&a,&b)==2)   //take input until end of file(EOF)
    {
        if(a>b)
            printf("a > b\n");
        else if(a<b)
            printf("a < b\n");
        else
            printf("a == b\n");
    }
    return 0;

}
