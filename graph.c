#include<stdio.h>
#include<conio.h>
main()
{
    int n,a,b;
    for(b=1;b<=5;b++)
    {
    scanf("%d",&n);
    for(a=1;a<=n;a++)
        printf("*");
    printf("\n");
    }
    getch();
}
