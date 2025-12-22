#include<bits/stdc++.h>
using namespace std;
int divide(int dividend, int divisor){
    long ans =0;
    bool neg=false;
    if((dividend<0 && divisor>0)||(dividend>0 && divisor<0))
    neg = true;
    long n = abs(dividend);
    long d = abs(divisor);
    // if(dividend<0)
    // n = n*-1;
    // if(divisor<0)
    // d = d*-1;
    // cout<<n<<" "<<d<<endl;
    // if(divisor==INT_MIN){
    //     return 0;
    // }
    // if(dividend==INT_MIN){

    // }
    
    //     if(dividend==divisor)
    // return neg?-1:1;
    if(n<d)
    return 0;
    while(n>d){
        long temp = d;
        long val=1;
    while(temp<n){
        temp = temp<<1;
        val=val<<1;}
    val=val>>1;
    temp = temp>>1;
    ans = ans+val;
    n = n-temp;
    }
    if(n==d)
    ans = ans + 1;
    // return neg?-1*ans:ans;
    ans = ans*(neg?-1:1);
    if(ans>INT_MAX)
    return INT_MAX;
    if(ans<=INT_MIN)
    return INT_MIN;
    return ans;
}
int main()
{
cout<<divide(-2147483648,1);
return 0;
}