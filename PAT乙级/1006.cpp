#include <iostream>
using namespace std;
int main(){
  int n,a=0,b=0,c=0,i=1;//n输入的数,a个位,b十位,c百位
  cin>>n;
  c=n/100;b=(n-c*100)/10;a=n-c*100-b*10;
  while (c!=0){
    cout<<'B';
    c--;
    }
  while (b!=0){
    cout<<'S';
    b--;
    }
  while (a!=0){
    cout<<i;
    i++;a--;
    }
  return 0;
}
