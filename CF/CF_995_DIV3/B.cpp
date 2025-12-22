// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// int t;
// cin>>t;
// while(t){
// int n,a,b,c;
// cin>>n>>a>>b>>c;
// int sum=0;
// int day=1;
// if((a==b)&&(a==c)&&(a==1))
// {sum = n;
// day=n;}
// while(sum<n){
// if(day%3==0){
// sum = sum+c;
// if(sum>=n)
// break;
// }
// else if((day-1)%3==0){
//     sum = sum+a;
//     if(sum>=n)
//     break;
// }
// else if((day-2)%3==0){
//     sum = sum+b;
//     if(sum>=n)
//     break;
// }
// day++;
// }
// cout<<day<<endl;
//     t--;
// }

// return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, a, b, c;
        cin >> n >> a >> b >> c;
        int cycle_sum = a + b + c;

        int full_cycles = n / cycle_sum;
        int total_distance = full_cycles * cycle_sum;
        int day = full_cycles * 3;  
        if (total_distance >= n) {
            cout << day << endl;
            continue;
        }
        if (total_distance < n) {

            total_distance += a;
            day++;
            if (total_distance >= n) {
                cout << day << endl;
                continue;
            }
            total_distance += b;
            day++;
            if (total_distance >= n) {
                cout << day << endl;
                continue;
            }
            total_distance += c;
            day++;
            cout << day << endl;
        }
    }

    return 0;
}

