#include<iostream>
using namespace std;

int main(){

int n=0,N,num;
char c;
cin>>N>>c;
if(N!=0){
while(2*n*n-1<=N)n++;
n--;
num=N-(2*n*n-1);//计算多余字符数,沙漏字符数为2n*n-1

for(int i=n;i>0;i--){
    for(int j=0;j<n-i;j++)cout<<" ";
    for(int k=0;k<2*i-1;k++)cout<<c;
    cout<<endl;
}
for(int i=2;i<=n;i++){
    for(int j=0;j<n-i;j++)cout<<" ";
    for(int k=0;k<2*i-1;k++)cout<<c;
    cout<<endl;
}
cout<<num; //为0时也输出
}
else cout<<N; 
return 0;
}
