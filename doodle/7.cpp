#include<bits/stdc++.h>
using namespace std;
int main(){
  vector<int> nums={0,1,0,2,0,0,0,3,3,0,3};
  int count=1;
  int element = nums[0];
  for(int i=1;i<nums.size();i++){
    if(nums[i]==element)
    count++;
    else count--;
    if(count==0)
    {element=nums[i];count=1;}
  }
  cout<<element;
  return 0;
}