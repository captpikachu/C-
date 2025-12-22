#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n;
    cin>>x;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    deque<int> d1;
    int sum=0;
    int i=0;
    int count=0;
    while(i<n){
        d1.push_back(arr[i]);
        sum = sum+arr[i];
        // cout<<"Current sum is: "<<sum<<endl;
        if(sum==x)
        {
         count++;
        //  cout<<"curr count: "<<count<<endl;
         sum=sum-d1.front();
         d1.pop_front();
         
        }
        while(sum>x){
            sum=sum-d1.front();
            d1.pop_front();
        }
        if(sum==x)
        {
         count++;
        //  cout<<"curr count: "<<count<<endl;
         sum=sum-d1.front();
         d1.pop_front();
         
        }
        i++;

    }
      while(!d1.empty() && sum>=x)
            {   if(sum==x)
                count++;
                sum=sum-d1.front();
                d1.pop_front();
                }
    cout<<count;




return 0;
}