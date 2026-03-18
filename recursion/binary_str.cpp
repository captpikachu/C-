#include<bits/stdc++.h>
using namespace std;
void GS(int k, char str[],int n){
    if(n>=k)
    {cout<<str<<" ";
    return;}
    if(str[n-1]=='1'){
    str[n]='0';
    GS(k,str,n+1);
    }
    else{
        str[n]='0';
        GS(k,str,n+1);
        str[n]='1';
        GS(k,str,n+1);
    }
}
void GenStr(int k){
char str[k+1];
str[0]='0';
str[k]='\0';
GS(k,str,1);
str[0]='1';
GS(k,str,1);
}
int main()
{
int k=4;
GenStr(k);
return 0;
}