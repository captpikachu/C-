#include<iostream>
#include<vector>
using namespace std;
int main()
{   int n;
// int m;
cin>>n;
// cin>>m;
   vector<char**>alex;
    // vector<char**> sam;
for(int i=0;i<n;i++){
    char* temp;
    cin>>temp;
    alex.push_back(temp);
}
// for(int j=0;j<m;j++){
//     cin>>*sam[j];
// }

cout<<alex[1];
return 0;
}