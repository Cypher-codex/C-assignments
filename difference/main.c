#include<stdio.h>
                int main()
    {
	int y=0,m=0;
	y=5;
	m=y++;
	printf("m=%d,y=%d",m,y);
	y=7;
	m=++y;
	printf("\nm=%d,y=%d",m,y);
	return 0;
    }

