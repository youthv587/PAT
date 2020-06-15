#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;

int main(){
	int N,add0,sum1,num;double avg;int max;//N为个数,后面依次为需要输出的变量
	add0=0; sum1=0; num=0; avg=0; max=0; 
    int count1=0;//判断加减
    double count3=0;double sum3=0;//用于计算avg
    while(cin>>N){
       int a[N];
       for(int i=0;i<N;i++) cin>>a[i];
       
       for(int i=0;i<N;i++){
           switch(a[i]%5){
                   case 0 :
                   if(a[i]%10==0)add0+=a[i];
                   break;
                   case 1 :
                   if(count1%2)sum1-=a[i];
                   else sum1+=a[i];
                   count1++;
                   break;
                   case 2 :
                   num++;
                   break;
                   case 3 :
                   sum3+=a[i];
                   count3++;
                   break;
                   case 4 :
                   if(a[i]>max)max=a[i];
                   break;
                   default :
                   break;
           }
       }
       	if(count3)avg=sum3/count3;//count3不能为零 
        if(add0!=0)cout<<add0<<' ';
        else cout<<'N'<<' ';
        if(count1>0)cout<<sum1<<' ';
        else cout<<'N'<<' ';
        if(num!=0)cout<<num<<' ';
        else cout<<'N'<<' ';
        if(avg!=0)cout<<setprecision(1)<<fixed<<avg<<' ';
        else cout<<'N'<<' ';
        if(max!=0)cout<<max;
        else cout<<'N';
       
    }

return 0;
} 
