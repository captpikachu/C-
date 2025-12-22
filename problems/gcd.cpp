#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter nums: "<<endl;
    cin>>num1;
    cin>>num2;
    if((num1<0)||(num2<0)){
        cout<<"Pos rkh";
    }
    else{
        while(num1!=num2){
            int temp = num2;
            num2 = (num2>num1?num2:num1)-(num2<num1?num2:num1);
            num1 = temp;
                        }
                        cout<<" THE GCD is :"<<num1;
    }
    return 0;
}