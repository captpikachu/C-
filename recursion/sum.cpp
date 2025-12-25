#include<iostream>
using namespace std;

int sumArr(int arr[],int size){
    if(size==1)
    return arr[0];
    else
    return arr[0]+sumArr(arr+1,size-1);
}

int main()
{

int arr[2]={3,4};
cout<<sumArr(arr,2);
return 0;
}
