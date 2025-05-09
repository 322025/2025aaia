//week12-3c.cpp
#include <stdio.h>
int main()
{
	int x1,y1,x2,y2,a;
	scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
	a=(x2-x1)*(y2-y1);
	if(a>0)printf("%d",a);
	else printf("%d",a*(-1));
}
