#include<iostream>
#include <stdio.h>
#include<math.h>
using namespace std;

int main(){
	int C1,C2,h,m,s;
	cin>>C1>>C2;
	
	h=(C2-C1)/360000;m=(C2-C1-h*360000)/6000;s=round((C2-C1-h*360000-m*6000)/100.0);
	printf("%02d:%02d:%02d\n", h, m, s);//注意时间里补零，如 01:00:10。

return 0;
} 
