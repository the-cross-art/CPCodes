#include <bits/stdc++.h>
#include <math.h>
using namespace std;

void ReverseStr(string s){

    if(s.length()==0){
        return;
    }

    string ros = s.substr(1);
    ReverseStr(ros);
    cout<<s[0];
}

int main (){

    ReverseStr("binod");
    return 0;

}