#include<iostream>
using namespace std;

int fibonnacci(int  n){
    if (n==1 || n==2)
    return 1;

    return fibonnacci(n-1)+fibonnacci(n-2);


}
int main()
{

int n;
cin>>n;
// for(int i=1;i<=n;i++){
//     cout<<"term "<<i<<"is "<<fibonnacci(i)<<endl;
// }
long long a =0;
long long b = 1;
for(int i=2;i<n;i++){
    long long temp = a;
    a = b;
    b = temp+b;
    cout<<"term "<<i<<" is "<<b<<endl;
}

return 0;
}