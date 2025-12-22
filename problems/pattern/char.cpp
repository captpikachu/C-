#include<iostream>
using namespace std;
void nLetterTriangle(int n) {
    int row,col,space;
    row=1;
    while(row<=n){
        col = 0;
        space = n-row;
        while(space){
            cout<<" ";
            space--;
        }
    while(col<row){
        cout<<char('A'+col);
        col++;}
        col--;
    while('A'+col-65){
        cout<<char('A'+col-1);
    col--;}   
        cout<<endl;
        row++;}
}

int main()
{ nLetterTriangle(3);
// nLetterTriangle(4);
// nLetterTriangle(5);
return 0;
}