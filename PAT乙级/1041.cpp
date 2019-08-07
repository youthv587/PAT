#include <iostream>
#include<string>
using namespace std;
int main(){
int N,M;
while(cin>>N){
string str[N];int a[N][2];//建立依次存放准考证号、试机座位号、考试座位号
for(int i=0;i<N;i++)cin>>str[i]>>a[i][0]>>a[i][1]; 
cin>>M;
int b[M];
for(int i=0;i<M;i++)cin>>b[i];

for(int i=0;i<M;i++)
    for(int j=0;j<N;j++)
        if(b[i]==a[j][0])cout<<str[j]<<" "<<a[j][1]<<endl;
}

  return 0;
}
