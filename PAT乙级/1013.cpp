#include<iostream>
using namespace std;

bool isPrime(int n){
	if(n<=1)return false;
	for(int i=2;i*i<=n;i++){
		if(n%i==0)return false;
	}return true;
}

int main(){

	int M,N,n=0,num=0;
	cin>>M>>N;
	while(num<N){
       if(isPrime(n)){
           num++;//记录是第几个素数
	       if(num>=M){
   			    if((num-M)%10==0)cout<<n;//每行第一个
       		  else if((num-M)%10==9)cout<<" "<<n<<endl;//每行第十个
	   		    else cout<<" "<<n;
	   		 }
		} 
	   n++;
	}



return 0;
}
