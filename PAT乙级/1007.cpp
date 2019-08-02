#include<iostream>
using namespace std;

	bool isPrime(int n){//判断素数
		if(n<=1)return false;
		for(int i=2;i*i<=n;i++){//用i*i可以替代调用平方根
		   if(n%i==0)return false;
		  }
        return true;   	
	}

int main(){

	int n,count;


	
while(cin>>n&&n>0){
	count=0;
	for(int i=2;i<=n-2;i++){//因为下面用的是+2，且题意为不超过n,所以用i<=n-2
		if(isPrime(i)&&isPrime(i+2))count++;
	}
 	cout<<count<<endl;
	}


return 0;
}
