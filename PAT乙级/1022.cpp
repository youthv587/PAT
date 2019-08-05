#include<iostream>
#include <stack>
using namespace std;

int main(){
	int A,B,D,num;
	stack<int>S;
	cin>>A>>B>>D;
	num=A+B;
	if(num==0)cout<<0;
	while(num){//当和num大于0时，取余并入栈
	S.push(num%D);
	num=num/D;	
	}
	
	while(!S.empty()){//将堆栈中的数字依次取出
	cout<<S.top();
	S.pop();
	}
return 0;
} 
