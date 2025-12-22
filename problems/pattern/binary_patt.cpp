#include<iostream>
using namespace std;
void nBinaryTriangle(int n) {
    int row,col,val;
    row=1;
    while(row<=n){
        col=1;
        val = row&1;
        while(col<=row){
            cout<<val;
            val = !val;
            col++;}
        cout<<endl;
    row++;}
}
int main()
{
nBinaryTriangle(3);

return 0;
}