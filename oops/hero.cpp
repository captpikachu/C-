#include<iostream>
using namespace std;
#include<string.h>
class c1{}; // this is allocated size of 1 byte for 
//identification in memory

class Hero{
    // void hero_name(char* name){
    //     int i=0;
    //     // while(name[i]!='\0')
        

    // }
    public:
    int health;
    char name[20]="Tanjiro";
    char level;
};
int main(){
cout<<sizeof(Hero);
}