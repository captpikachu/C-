#include<bits/stdc++.h>
using namespace std;
string addStrings(string num1, string num2) {
    string result = "";
    int carry = 0;
    int i = num1.size() - 1;
    int j = num2.size() - 1;

    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        if (i >= 0) {
            sum += num1[i] - '0';
            i--;
        }
        if (j >= 0) {
            sum += num2[j] - '0';
            j--;
        }
        carry = sum / 10;
        sum %= 10;
        result.push_back(sum + '0');
    }

    reverse(result.begin(), result.end());
    return result;
}
int main()
{
    int digit = 5;
    char dig = digit +'0';
    string s (1,dig);
    string ans ="";
    ans = ans +s;
    ans = ans +"3";
    // dig = dig-'0';
cout<<(ans);

return 0;
}