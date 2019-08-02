#include<iostream>
#include<string>
using namespace std;

int main(){

	int n,max,min;

while(cin>>n&&n>0){
    string a[n][2];int score[n];//用于存取字符串和成绩
	for(int i=0;i<n;i++){
		cin>>a[i][0]>>a[i][1]>>score[i];
	}
	
  max=0,min=0;
  
    for(int i=1;i<n;i++){//比较成绩，记录最大成绩和最小成绩的下标
	    if(score[i]>score[max]){
	      max=i;}
	    if(score[i]<score[min]){
	      min=i;}
	        }
	
	cout<<a[max][0]<<" "<<a[max][1]<<endl;
	cout<<a[min][0]<<" "<<a[min][1]<<endl;
	
	}


return 0;
}
