#include<iostream>
#include<math.h>
using namespace std;
int main(){
  int N,n,i,j,k;char c;
  cin>>N>>c;
  n=sqrt((N+1)/2);//计数
  
  //上部倒三角
  for(i=0;i<n;i++){
    for(j=i;j>0;j--)
    cout<<' ';
    for(k=2*(n-i)-1;k>0;k--)
    cout<<c;
  cout<<endl;}
  
  //下部梯形
  for(i=n-2;i>=0;i--){
    for(j=i;j>0;j--)
    cout<<' ';
    for(k=2*(n-i)-1;k>0;k--)
    cout<<c;
  cout<<endl;}
  
  //若有剩余则输出
  //if(N>2*n*n-1){
  i=N-2*n*n+1;
  cout<<i<<endl;//}
  return 0;
}
