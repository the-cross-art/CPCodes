# include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main (){

    string s = "adsfjhaki";
    
    // Manual Method

    // for(int i=0; i<str.size();i++){
    //     if(str[i] >= 'a' && str[i] <='z')
    //         str[i]-=32;
    // }
    // cout <<str;

    // for(int i=0; i<str.size();i++){
    //     if(str[i] >= 'A' && str[i] <='Z')
    //         str[i]+=32;
    // }
    // cout <<str;

    transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout<< s<<endl;

    transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout<< s<<endl;


  return 0;

}
 