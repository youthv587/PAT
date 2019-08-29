/*  规律：当N*K*K-K能整除10的l次方时，得自守数，l为K的长度   */


#include<iostream>
#include<string>
#include<sstream>
#include<cmath>

using namespace std;
int main(){
int M;
while(cin>>M){
	stringstream ss;
	string s;int num,tmp,l,N=10;
	for(int i=0;i<M;i++){
		cin>>s;	
		l=s.length();
  	ss<<s;      
   	ss>>num;      //字符转数字     
		ss.clear();
		if(l==3)tmp=1000;
		else if(l==2)tmp=100;
		else if(l==1)tmp=10;
		else tmp=10000;

		for(int j=1;j<N;j++){//不能从0开始
	 					 if((j*num*num-num)%tmp==0){
	 					 	cout<<j<<" "<<j*num*num<<endl;
	 					 	break;//求出自守数就结束循环
	 					 }
						 else if(j==9)cout<<"No"<<endl;	
		}

	}
	
}
	
	return 0;
}
