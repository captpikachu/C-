#include<bits/stdc++.h>
using namespace std;
const long long m = 1e9 +7;
long long exp(long long a, long long b) {
	long long ans = 1;
	while(b) {
		if (b & 1) ans = ans * a % m;
		a = a * a% m;
		b= b/2;
	}
	return ans;
}
int main()
{
int n;
cin>>n;
int number_of_divisors=1;
long long sum =1;
long long product = 1;
int current_divisors=1;
for(int i=0;i<n;i++){
    long long a,b;
    cin>>a>>b;
    sum =sum * ((exp(a,b+1))-1)%m * exp((a-1),m-2)%m;
	// product=product;
	product = exp(product,b+1) *
		           exp(exp(a,(b*(b+1)/2)), current_divisors) % m;
				   current_divisors=current_divisors*(b+1)%(m-1);
				   number_of_divisors=number_of_divisors*(b+1)%m;

}
cout<< number_of_divisors<<" "<<sum<<" "<<product;

return 0;
}