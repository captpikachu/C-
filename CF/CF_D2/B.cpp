        #include<bits/stdc++.h>
        using namespace std;
        int main() {    
            int t;
            cin >> t;
            while (t--) {
                long long a, b, k;
                cin >> a >> b >> k;
                long long g = 
                __gcd(a,b);
                if(a==b || (a<=k && b<=k) || (g!=1 && a/g<=k && b/g<=k))
                cout<<'1'<<endl;
                else
                cout<<'2'<<endl;

            }
            return 0;
        }