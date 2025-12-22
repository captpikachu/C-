#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    
    if(a==0)
    return b;
    if(b==0);
    return a;
    if(a==b)
    return a;
    if(a>b){
    return(a%b,b);
}
else if(b>a)
return(a,b%a);


}
int main()
{

cout<<gcd(35,14);
return 0;
}