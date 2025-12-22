#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
    int a1,a2,a4,a5;
    cin>>a1>>a2>>a4>>a5;
    int a3=a1+a2;
    int Fib1=1;
    if(a4==a3+a2)
    Fib1++;
    if(a5==a4+a3)
    Fib1++;
int Fib2=1;
int Fib3=1;
a3 = a4-a2;
if(a3==a1+a2)
Fib2++;
if(a5==a4+a3)
Fib2++;
a3 = a5-a4;
if(a3==a1+a2)
Fib3++;
if(a4==a3+a2)
Fib3++;   
cout<<max(max(Fib1,Fib2),Fib3)<<endl;
}

return 0;
}