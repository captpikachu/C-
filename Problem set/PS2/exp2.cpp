#include<bits/stdc++.h>
using namespace std;
const int m = 1e9+7;
long long exp(long long x,long long n, int m) {
	x%=m;
	long long ans = 1;
	while (n > 0) {
		if (n%2==1) {
			ans = ans*x%m;}
		x =x*x%m;
		n /= 2;
	}
	return ans;}

int main(){
   int n;
	cin >> n;
	for (int t = 0; t < n; t++) {
		int a, b, c;
		cin>>a>>b>>c;
		long long b_c = exp(b, c, m -1);
		long long ans = exp(a, b_c, m);
		cout << ans << '\n';
	}
return 0;
}