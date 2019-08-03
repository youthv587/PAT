#include<iostream>
#include<algorithm>
using namespace std;

int main(){

	long long int N,p;
	while(cin>>N>>p){
		long long int num=0,max=0,a[N];
	    for(int i=0;i<N;i++)cin>>a[i];
	    sort(a,a+N);
	    for(int j=0;j<N;j++){
	    //num=0;
	    for(int i=j+num;i<N;i++){//+num后不会超时
	    	if(a[i]<=a[j]*p)num++;
            else break;
	    }
	    //if(num>max)max=num;
	}
		cout<<num;

	}

return 0;
}
