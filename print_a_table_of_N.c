//10. Write a program to print a table of N.
#include<stdio.h>
int main()
{
    int i,n,table;
    printf("The table of 5 is\n");
    scanf("%d",&n);
    for ( i = 1; i <=10; i++)
    {
        table=n*i;
        printf("%d * %d = %d\n",n,i,table);
    }
    return 0;
}
