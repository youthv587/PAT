#include <iostream>
#include <string>
#include <sstream>    
using namespace std;

stringstream ss;
int d=0,n=0,a[10]={0,0,0,0,0,0,0,0,0,0};//d临时存数字用,n用于循环,a[10]下标对应数字、值对应出现次数
string N; 

int main(){
  cin>>N;
 
  while(n<N.size()){//计数
   ss<<N[n];        //流入字符
   ss>>d;           //转为数字
   a[d]++;
   ss.clear();      //清空
   n++;
  }
for(int i=0;i<10;i++){//次数大于0则输出
	if(a[i]!=0)cout<<i<<":"<<a[i]<<endl;
}
  return 0;
}
