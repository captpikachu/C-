// find sum of all presents in array

// divide by number of people this will give you number of rounds that will be completed

// now after this many rounds few people will not have the choice 
// (those whose boxes have presents less than number of rounds)
//  so they should come at end and those who have choice will
//  come at front of permutation : now you permute this number 
// of people who have choice at front and permute those who don't have
//  choice at end and get the ans (take modulo as well)



// Also we have to check condition for box 0 as present in it 
// may also fall below 0 during intermediate rounds then answer 
// will be 0 This will happen when sum of 
// (for all people will present less than number of rounds + present in box 0) 
// is less than number of people less * number of rounds


// We can put less presents people at front when there is large amount in box 0 this is possible
// with the limit of extra capacity of box 1 
// putting the people with the amount of difference to front group and calculate updated value
// 

#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;
long long MOD = 998244353;
long long fact[100];
long long invFact[100];
long long power(long long base, long long exp) {
    long long res = 1;
    base %= MOD;
    while (exp > 0) {
        if (exp % 2 == 1) res = (res * base) % MOD;
        base = (base * base) % MOD;
        exp /= 2;
    }
    return res;
}

long long modInverse(long long n) {
    return power(n, MOD - 2);
}

void precompute() {
    fact[0] = 1;
    invFact[0] = 1;
    for (int i = 1; i < 100; i++) {
        fact[i] = (fact[i - 1] * i) % MOD;
        invFact[i] = modInverse(fact[i]);
    }
}

long long nCr(int n, int r) {
    if (r < 0 || r > n) return 0;
    return (((fact[n] * invFact[r]) % MOD) * invFact[n - r]) % MOD;
}

void solve() {
    int n;
    cin >> n;
    
    vector<long long> a(n + 1);
    long long total_sum = 0;
    for (int i = 0; i <= n; i++) {
        cin >> a[i];
        total_sum += a[i];
    }
    
    long long k = total_sum / n;
    long long rem = total_sum % n;    
    
    int cnt_rich = 0;
    int cnt_poor = 0;
    
    long long base_deficit = 0;
    for (int i = 1; i <= n; i++) {
        if (a[i] >= k + 1) {
            cnt_rich++;
        } else {
            cnt_poor++;
        }
        if (a[i] < k) {
            base_deficit += (k - a[i]);
        }
    }
    if (base_deficit > a[0]) {
        cout << 0 << endl;
        return;
    }
    long long spare_a0 = a[0] - base_deficit;
    long long ways = 0;
    
    for (int y = 0; y <= cnt_poor; y++) {
        if (y > spare_a0) break; 
        
        int rich_needed = rem - y;
        if (rich_needed >= 0 && rich_needed <= cnt_rich) {
            long long ways_to_choose_poor = nCr(cnt_poor, y);
            long long ways_to_choose_rich = nCr(cnt_rich, rich_needed);
            
            long long combination = (ways_to_choose_poor * ways_to_choose_rich) % MOD;
            ways = (ways + combination) % MOD;
        }
    }
    long long perm_heavy = fact[rem];
    long long perm_light = fact[n - rem];
    
    long long ans = (ways * perm_heavy) % MOD;
    ans = (ans * perm_light) % MOD;
    
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    precompute();
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}