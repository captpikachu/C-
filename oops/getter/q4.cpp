#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int s,n,x,y;
    cin>>s;
    cin>>n;
    vector<pair<int,int>> v1;
    // vector<int> v2;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x;
        cin>>y;
        pair<int,int> temp={x,y};
        v1.push_back(temp); 
    }
    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j<n;j++{
    //         if(arr[i]>arr[j])
    //         swap(arr[i],arr[j])
    //     }
    // }


return 0;
}