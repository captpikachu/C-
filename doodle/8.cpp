#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;

    vector<string> nums;
    string current = "";

    for (char c : s) {
        if (c == '-' || c == ',') {
            nums.push_back(current);
            current = "";
        } else {
            current += c;
        }
    }
    nums.push_back(current);

    int n=nums.size();
    long long ans=0;

    for(int i=0;i<n;i=i+2){
        for(long long j=stoll(nums[i]);j<=stoll(nums[i+1]);j++){
           string s=to_string(j);
           int l=s.length();

           for(int z=1;z<=9;z++){
            bool flag=true;
            if(l%z==0 && l/z>=2){
                string part=s.substr(0,z);
                for(int k=0;k<l;k=k+z){
                    string check=s.substr(k,z);
                    if(check!=part){
                        flag=false;
                    }
                }
                if(flag==true){
                    ans+=j;
                    break;
                }
            }
            else continue;
            if(flag==true){
                break;
            }
           }
        }
        cout<<ans<<" ";
    }
    cout<<endl<<ans;

}