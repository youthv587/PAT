#include<iostream>
using namespace std;

int main(){
	int n,sum=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)cin>>a[i];
	
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++){
			if(j==i)continue;
		    sum=sum+a[i]*10+a[j];	
			}
    cout<<sum;
return 0;
} 
