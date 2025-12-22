#include<iostream>
using namespace std;
int main()
{
   int num = 10;
   int* intPtr = new int;
   intPtr=&num;
double* doublePtr = reinterpret_cast<double*>(intPtr);
// double* ptrDouble =(&num);
cout<<sizeof(* doublePtr);
    return 0;
}