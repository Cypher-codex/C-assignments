#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter any 3 numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a-b>0 && a-c>0)
         printf("\nGreatest is a :%d",a);
    else
         if(b-c>0)
             printf("\nGreatest is b :%d",b);
         else
             printf("\nGreatest is c :%d",c);
    return 0;
    getch();
}

