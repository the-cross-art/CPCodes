# include <bits/stdc++.h>
#include <math.h>
using namespace std;

bool isPower2(int n){
    return (n && !(n & n-1) );
}


int main (){

    cout<<isPower2(16)<<endl;
    
  return 0;

}
 