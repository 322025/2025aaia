///week11-1.cpp
///函式/函數function
#include <stdio.h>
int addnum(int a,int b)
{
    printf("在函式addnum()裡,得到參數a:%d b:%d\n",a,b);
    int ans=a+b;
    printf("算出答案 %d要return出去\n",ans);
    return ans;
}
int main()
{
    printf("在main()呼叫使用addnum()\n");
    int ans =addnum(2,3);
    printf("在main()得到答案:%d\n",ans);
}
