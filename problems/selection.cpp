#include<iostream>
using namespace std;
void swap(int &a,int &b){
    int temp = a;
    a=b;
    b=temp;
}
int min(int arr[],int n){
int min = arr[0];
int index =0;
for(int i=1;i<n;i++){
    if(arr[i]<min)
    {min = arr[i];
    index =i;}}
    return index;
}
void selection(int arr[],int n){
    if(n==0||n==1)
    return;
int index = min(arr,n);
swap(arr[index],arr[0]);
selection(arr+1,n-1);
}

int main()
{
int arr[8]={4,66,6,66,12,0,-3,-3};
selection(arr,8);
for(int i=0;i<8;i++){
    cout<<arr[i]<<" ";
}



return 0;
}