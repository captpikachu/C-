#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t){
    int low = 2;
    int high = 999;
    int mid = (low+high)/2;
    int ans = mid;
    while(low<=high){
         cout<<"? "<<mid<<" "<<mid<<endl;
         cout.flush();
    int area;
    cin>>area;
   
        if(area==(mid*mid))
        low=mid+1;
        else
        {high = mid-1;
        ans = mid;}
        mid = (low+high)/2;
    }
    cout<<"! "<<ans<<endl;
    t--;
}

return 0;
}