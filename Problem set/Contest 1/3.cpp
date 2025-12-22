#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
cin>>t;
for(int i=0;i<t;i++){
    int count =0;
    int a,b;
    cin>>a>>b;
    long long product=1;
    for(int i = b+1;i<=a;i++){
        product = product*i;
        int temp = (int)sqrt(product);
        for(int j =2;j<=product;j++){
            if(product%j==0){
            while(product%j==0){
            product=product/j;
            count=count++;
        }
        }
    }
    if(product>1)
    {product =1;
    count++;}
    // long long num = factorialDivision(a,b);

}
}

cout<<count;
return 0;
}


// a!/b! find prime factors for b+1 to a