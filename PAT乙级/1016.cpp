#include<iostream>
using namespace std;

int main(){

	int A,DA,DB,B,PA,PB;
	
	while(cin>>A>>DA>>B>>DB){
		PA=0,PB=0;//初始化
 	    while(A>0){
 	    	if(A%10==DA)PA=10*PA+DA;//每有一个满足的就对PA进行操作
 	    	A=A/10;
 	    }
 		while(B>0){
 	    	if(B%10==DB)PB=10*PB+DB;
 	    	B=B/10;
 	    }
	cout<<PA+PB<<endl;
	}

return 0;
}
