#include<iostream>
void swap(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}
using namespace std;
int main()
{

int x = 4;
int y = 8;
swap(x,y);
cout<<x<<y<<endl;

// int *p = &x;
// *p=76;


cout<<x;
return 0;
}