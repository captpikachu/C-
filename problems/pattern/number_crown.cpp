#include<iostream>
using namespace std;
void numberCrown(int n) {
     int row, col, space;
    row=1;
    while(row<=n){
        col=1;
        while(col<=row){
            cout<<col;
            col++;}
        space = 2*(n-row);
        while(space){
            cout<<" ";
            space--;}
            while(--col){
                cout<<col;
                }
        cout<<endl;
        row++;}
}


int main()
{
numberCrown(4);
numberCrown(3);
numberCrown(9);
return 0;
}