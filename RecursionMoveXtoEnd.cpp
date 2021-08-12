#include <bits/stdc++.h>
#include <math.h>
using namespace std;

string moveXall(string s){
    if(s.length()==0){
        return "";
    }

    char ch=s[0];
    string ans = moveXall(s.substr(1));

    if(ch=='x'){
        return ans+ch;
    }
    return ch+ans;
}

int main (){

    cout<<moveXall("axxbdxcefxhix");
  return 0;

} 