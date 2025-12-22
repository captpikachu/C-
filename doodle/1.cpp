#include<iostream>
#include<vector>
using namespace std;

        int compress(vector<char>& chars) {
        string s;
        int n = chars.size();
        int i=1;
        int count =1;
       while(i<n){
        count=1;
           while(chars[i]==chars[i-1]){
               i++;
               count++;
           }
        s = s + chars[i-1];
        if(count<10)

       {    char t = '0'+count;
           s = s+t;
       }
        else if (count>10){
            while(count){
            char dig = '0'+count%10;
            s = s + dig;
            count = count/10;
            }
        }
        i++;
       }
       chars.clear();
    //    cout<<s<<endl;
        int j =0;
        while(s[j]!='\0'){
            chars[j]=s[j];
        j++;
        cout<<chars[j];
        }
        
       return s.size();
    }

int main()
{
vector<char> chars ={'a','a','b','b','c','c','c'};
cout<<endl<<compress(chars);

return 0;
}
        