#include<bits/stdc++.h>
using namespace std;
int fact[1000001]={0}; //global array declaration limit 1e7, local 1e5
int main()
{
int n;
cin>>n;
for(int i=0;i<n;i++){
    int a;
cin>>a;
int s = sqrt(a);
for(int j =1;j<=s;j++){
if(a%j==0)
{fact[j]++;
if(a/j!=j)
fact[a/j]++;
}
}
}
for(int i = 1000000;i>=1;i--){
if(fact[i]>=2)
{cout<<i;
break;}
}

return 0;
}

// #include <cmath>
// #include <iostream>
// using namespace std;
// const int MAX_VAL = 1e6;
// int divisors[MAX_VAL + 1];

// int main() {
// 	int n;
// 	cin >> n;
// 	for (int i = 0; i < n; i++) {
// 		int a;
// 		cin >> a;
// 		const int up = (int)sqrt(a);
// 		for (int div = 1; div <= up; div++) {
// 			if (a % div == 0) {
// 				// the divisor and quotient are both divisors of a
// 				divisors[div]++;
// 				// make sure not to double count!
// 				if (div != a / div) { divisors[a / div]++; }
// 			}
// 		}
// 	}

// 	for (int i = MAX_VAL; i >= 1; i--) {
// 		if (divisors[i] >= 2) {
// 			cout << i << endl;
// 			break;
// 		}
// 	}
// }