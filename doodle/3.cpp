#include<iostream>
// #include<vector>
using namespace std;
 void rotate(int nums[][3]) {
       // i (new)-->j(old)
       //j(new)--> n-i old
    int n =3;
       int i,j=0;
       int temp[][3]={0};
       while(i<n){
           while(j<n){
       
        temp[j][n-i] = nums[i][j]; 
        j++;   }
        i++;}
        while(i<n){
           while(j<n){
       
        nums[i][j]=temp[i][j]; 
        j++;   }
        i++;}
 }
int main()
{
int nums[][3] = {{1,2,3},{4,5,6},{7,8,9}};
int i,j=0;
int n =3;
while(i<n){
           while(j<n){
       
        cout<<nums[i][j]<<" "; 
        j++;   }cout<<endl;
        i++;}
        cout<<endl;
rotate(nums);

while(i<n){
           while(j<n){
       
        cout<<nums[i][j]<<" "; 
        j++;}
        cout<<endl;
        i++;}
return 0;
}