#include <iostream>
using namespace std;
int main(){
  int n,j1=0,j2=0,j3=0,y1=0,y2=0,y3=0;
  cin>>n;
  while(n!=0){
    cin>>j1>>j2>>y1>>y2;
      if(j2!=y2){
        if(j2==j1+y1)
          y3++;
        else if(y2==j1+y1)
          j3++;
      }
    n--;
  }
  cout<<j3<<' '<<y3;
  return 0;
}
