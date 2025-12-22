#include<iostream>
using namespace std;

void bubble_sort(int arr[],int n){
    if((n==1)||n==0)
    return;
  for(int i=1;i<n;i++){
    if(arr[i]<arr[i-1]){
        int temp = arr[i-1];
        arr[i-1]=arr[i];
        arr[i]=temp;

    }
  }
    return bubble_sort(arr,n-1);


}


int main()
{

int arr[8]={4,66,6,66,12,0,-3,-3};
bubble_sort(arr,8);
for(int i=0;i<8;i++){
    cout<<arr[i]<<" ";
}
return 0;
}