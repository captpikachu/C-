#include<bits/stdc++.h>
using namespace std;
void Par(int in,int out,int k,int n,string str){
    if(n>=2*k){
    cout<<str<<" ";
    str.clear();
    return;
    }
    if(in<k){
        str+="(";
        Par(in+1,out,k,n+1,str);
    }
    if(out<in && out<k){
        str+=")";
        Par(in,out+1,k,n+1,str);
    }
}
int main()
{
    int k=2;
string str;
// str[2*k]='\0';
Par(0,0,k,0,str);
return 0;
}