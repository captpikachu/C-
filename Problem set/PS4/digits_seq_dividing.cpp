#include<bits/stdc++.h>
using namespace std;
int dig(int n){
    int i=0;
while(n){
    i++;
    n=n/10;
}
return i;
}
int main()
{
int q;
cin>>q;
while(q){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count =0;
    int prev_no=0;
    int curr_no=0;
    int i=0;
    vector<int> ans;
    bool pr=0;
    bool possible=1;
while(s[i]!='\0'){
    curr_no=0;
    while(s[i]!='\0' && curr_no<=prev_no){
        // cout<<s[i]<<endl;
    curr_no=curr_no*10 + s[i]-'0';
    // cout<<"curr_no "<<curr_no<<endl;
    i++;
    }
    i--;
    // cout<<"curr_no "<<curr_no<<endl;
    count++;
    if(curr_no==prev_no)
    possible=false;
    ans.push_back(curr_no);
    if(count>2 && curr_no<=prev_no)
    {   
        // int p = pow(10,dig(curr_no));
        int p=0;
        vector<int>nums;
        while(prev_no){
            nums.push_back(prev_no%10);
            // nums[p++]=prev_no%10+'0';
            prev_no/=10;
    p++;
        }
        reverse(nums.begin(),nums.end());
        while(curr_no){
            nums.push_back(curr_no%10);
            // nums[p++]=curr_no%10+'0';
            curr_no/=10;
           }
           reverse(nums.begin()+p,nums.end());
        // prev_no = prev_no*p + curr_no;
        cout<<"YES"<<endl;
    int k=0;
    while(k<ans.size()-2){
        count--;
        cout<<ans[k++]<<" ";
    }
    for(int p=0;p<nums.size();p++){
        cout<<nums[p];
    }
    cout<<endl;
    pr=1;
    break;
    }
    prev_no=curr_no;
    i++;
}

if(!pr  && count>=2 && possible ){
    int j=0;
    cout<<"YES"<<endl;
while(j<ans.size()){
    cout<<ans[j]<<" ";
    j++;
}
cout<<endl;
}
else if(count<2 || !possible){
    cout<<"NO"<<endl;
}
    q--;
}

return 0;
}