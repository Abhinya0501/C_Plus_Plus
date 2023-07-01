#include<iostream>
using namespace std;

bool pall(int i, string &s){
if(i>=s.size()/2)
return true;
if(s[i]!=s[s.size()-i-1])
return false;

}

int main(){
    string s="madam";
    cout<<pall(0,s);
    return 0;
}