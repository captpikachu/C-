#include<bits/stdc++.h>
using namespace std;
string betterString(string str1, string str2){
vector<int> last_occur_str1(26,-1);
vector<int> last_occur_str2(26,-1);
int n = str1.size();
vector<int> dp1(n+1);
vector<int> dp2(n+1);
dp1[0]=1;
dp2[0]=1;
for (int i =1;i<=n;i++){

if((last_occur_str1[str1[i-1]-'a'])==-1)
    dp1[i]=2*dp1[i-1];

else
    dp1[i]=2*dp1[i-1] - dp1[last_occur_str1[str1[i-1]-'a']];

            last_occur_str1[str1[i-1]-'a']=i-1;
}

for (int i =1;i<=n;i++){

if((last_occur_str2[str2[i-1]-'a'])==-1)
    dp2[i]=2*dp2[i-1];

else
    dp2[i]=2*dp2[i-1] - dp2[last_occur_str2[str2[i-1]-'a']];

            last_occur_str2[str2[i-1]-'a']=i-1;
}

return dp1[n]>=dp2[n]?str1:str2;


}
int main()
{

string s1 = "abcc";
string s2 = "abcd";
cout<<betterString(s1,s2);
return 0;
}