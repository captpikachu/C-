#include<bits/stdc++.h>
using namespace std;
bool check_odd(int n){
    if(n&1)
    return 1;
    return 0;
}
bool pow_2(int n){
    int count_one=0;
    for (int i=0;i<31;i++){
        count_one = count_one + (n&1);
        n=n>>1;
        if(count_one>1)
        return false;
    }
    if(count_one==1)
    return true;
    return false;
}
int set_bits(int n){
    int count_one=0;
    for (int i=0;i<31;i++){
        count_one = count_one + (n&1);
        n=n>>1;
    }
return count_one;
}
//check set or not
// int n=13;
// int i=2;
// cout<<(1<<i)<<endl;
// cout<<(n & (1<<i))<<endl;
// if(n & (1<<i))
// cout<<"set";
// else
// cout<<"not set";
int main()
{
// cout<<check_odd(6);
// cout<<pow_2(408);
// cout<<set_bits(47);
return 0;
}