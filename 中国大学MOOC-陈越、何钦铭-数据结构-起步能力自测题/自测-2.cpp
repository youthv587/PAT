#include <iostream>
using namespace std;


int main(){
  bool isPrime(int a);
  int N,i=0,num=0;
  cin>>N;
  
for(i=1;i<=N;i+=2){
  if(isPrime(i-2)&&isPrime(i))num++;
}
  cout<<num<<endl;
  return 0;
}

 bool isPrime(int a){
   if(a==1)return false;
   else if(a==2)return true;
   else{
    for(int i=2;i*i<=a;i++){
      if(a%i==0)return false;
      }
      return true;
  }
  }
