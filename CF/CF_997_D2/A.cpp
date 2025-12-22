#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t){
    int n,m;
    cin>>n>>m;
    vector<int> x(n);
    vector<int> y(n);
    int Pold=4*m;
    int Pnew = 0;
    for(int i =0;i<n;i++){
        cin>>x[i]>>y[i];
    }
    for(int i=1;i<n;i++){
        Pnew=Pold - 2*(m-x[i]) -2*(m-y[i])+4*m;
        Pold = Pnew;
    }
    cout<<Pold<<endl;
    t--;
}
return 0;
}