#include <bits/stdc++.h>
#include <math.h>
using namespace std;

bool dec(int n){

    if(n==0){
        return true;
    }

    cout<<n<<endl;
    dec(n-1);

}

bool inc(int n){

    if(n==0){
        return true;
    }

    inc(n-1);
    cout<<n<<endl;


}
int main (){

    int n;
    cin>>n;
    inc(n);
  return 0;

}