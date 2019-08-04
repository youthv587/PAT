#include<iostream>
using namespace std;

int main(){
	int a[10],num=0;
	for(int i=0;i<10;i++)cin>>a[i];
	
	for(int i=1;i<10;i++){//输出第一个最小的数字（非0）
		if(a[i]>0){
		    cout<<i;a[i]--;break;
				}
	}

	for(int i=0;i<10;i++){//重小到大把剩余数字输出
	    while(a[i]>0){
		   cout<<i;a[i]--;
				}	
	}

return 0;
} 
