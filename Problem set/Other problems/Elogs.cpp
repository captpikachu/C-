#include<bits/stdc++.h>
using namespace std;
bool isPossible(int mid, vector<int> &logs,int k){
    int n = logs.size();
    double cuts=0;
    int no_of_cuts=0;
    for(int i=0;i<n;i++){

        cuts = ceil((double)logs[i]/(double)mid)- 1;

        // cout<<"current cuts: "<<i<<" "<<cuts<<endl;
        no_of_cuts+=cuts;
        if(no_of_cuts>k)
        return false;
    }
    return true;
    // return true;
}


int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> logs(n);
    for(int i=0;i<n;i++)
    {cin>>logs[i];
    }
    sort(logs.begin(),logs.end());
    int s=0;
    int e = logs[n-1];
    int mid = (e -s)/2 + s;
    int ans = e;
    while(s<=e){
        //  cout<<"current mid is: "<<mid<<endl;
        if(isPossible(mid,logs,k)){
            ans = mid;
            // cout<<"current ans: "<<ans<<endl;
            e = mid-1;
            mid = (e -s)/2 + s;
        }
        else{
            s = mid+1;
            mid = (e -s)/2 + s;
        }
       
    }
   cout<<ans<<'\n';
return 0;
}