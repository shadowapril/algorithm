/*************************************************************************
	> File Name: triangle.cpp
	> Author: april
	> Mail: aprildykj@gmail.com 
	> Created Time: Sun, Oct 11, 2020  6:34:25 PM
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,count,n;
	scanf("%d",&n);
	count = n*2-1;
	for(i=0;i<n;i++){
		for(j=0;j<i;j++) printf(" ");
		for(j=0;j<count;j++) printf("#");
		printf("\n");
		count -= 2;
	}
	return 0;
}
