#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    int n = 0;
    int i =0;
    while(i<s.size()){
        n = n*10 + (s[i]-'0');
        i++;
    }
    double sq= sqrt(n);
    int check = int(sq)*int(sq);
    if(check==n)
    cout<<int(sq)<<" "<<0<<endl;
    else cout<<-1<<endl;
}

return 0;
}