///week10-2.cpp
#include <stdio.h>
int main()
{
    printf("叫块俱计:");
    int n;
    scanf("%d",&n);
    ///printf("计琌 %d\n",n%10);
    ///printf("计琌 %d\n",n/10 %10);
    ///printf("κ计琌 %d\n",n/100 %10);
    while(n>0){
        printf("计%dブ:%d\n",n,n%10);
        n=n/10;
    }
}
