#include<string.h>
#include<iostream>
using namespace std;


int lenstr(string s){
int i=0;
while(s[i]!='\0'){
i++;
}
return i+1;
}
// void revword(string &word){
// int s = 0;
// int e = lenstr(word)-1;
// while(s<e){
//     char temp = word[s];
//     word[s]=word[e];
//     word[e]=temp;
//     s++;
//     e--;
// }
// }
// int countw(string s){
// int count = 0;
// int i=0;
// while(s[i]!='\0'){
// if(s[i]==' ')
// count++;
// i++;
// }

// return count+1;
// }
string remsp(string s){
    string ans="";
    int i = 0;
while((s[i]!='\0')&&i<lenstr(s)-1){

    if(s[i]==s[i+1]){
i++;
    }
    ans = ans+s[i];
    i++;
}
return ans;
}

//     string reverseWords(string s) {
// string temp = remsp(s);
// string ans="";
// string word="";
// int j =lenstr(temp)-1;
// for(int i=0;i<countw(s);i++){

//     while(temp[j]!=' '||temp[j]!='\0'){
//         word = word + temp[j];
//         j--;
//     }
//         j--;
//         revword(word);
//         ans = ans + word + ' ';

// }
// return ans;
//     }



int main(){
    string s1 = "The   sky   is blue";
    string ans = remsp(s1);
    cout<<ans;
}
