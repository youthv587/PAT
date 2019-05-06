#include <iostream>
#include <string>
#include <sstream>    //头文件
using namespace std;

stringstream ss;
int n=0,a=0,b=0,c=0,sum=0,d=0;
string k; 
string str[10] =  {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};

int main(){
  cin>>k;
 
  while(n<k.size()){//求和
   ss<<k[n];        //流入字符
   ss>>d;           //转为数字
   ss.clear();      //清空
   sum=sum+d;
   n++;
  }
 
                   //以下代码按题目要求而预先计算好，不够智能
  c=sum/100;b=(sum-c*100)/10;a=sum%10;
  if(c!=0){
  	cout<<str[c]<<' '<<str[b]<<' '<<str[a];
  }
  else if(b!=0){
  	cout<<str[b]<<' '<<str[a];
  }
  else{
  	cout<<str[a];
  }
  return 0;
}
