#include<iostream>
using namespace std;

int main(){

	int a,b,c=0;
	while(cin>>a>>b){
		if(c==0&&b>=1)cout<<a*b<<" "<<b-1;//普通的第一个
		else if(c>0&&b>=1)cout<<" "<<a*b<<" "<<b-1;//非第一个，这样输出解决了后面会有多余空格的问题
		else if(c==0&&b==0)cout<<0<<" "<<0;//特殊的第一个
		c++;
	}



return 0;
}
