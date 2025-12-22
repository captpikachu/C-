#include<iostream>
using namespace std;
void getNumberPattern(int n) {
    int row,col;
    int val=n;
    for(row=1;row<=n;row++){
        val=n;
        col=1;
            while(col<row){
                cout<<val;
            val--;
            col++;}
            while(col+row<=2*n-1){
                cout<<val;
                col++;}
            while(col<=2*n-1){
                cout<<val;
                val++;
                col++;}
            cout<<endl;}

        for(row=n-1;row>0;row--){
            val=n;
            col=1;
            while(col<row){
                cout<<val;
            val--;
            col++;}
            while(col+row<=2*n-1){
                cout<<val;
                col++;}
            while(col<=2*n-1){
                cout<<val;
                val++;
                col++;}
            cout<<endl;}
    }
int main()
{
getNumberPattern(9);
return 0;
}