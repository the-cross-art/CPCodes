#include <bits/stdc++.h>
#include <math.h>
using namespace std;

class student{
    public:
    string name;
    int age;
    bool gender;

    void printInfo(){
        cout<<"name = ";
        cout<<name<<endl;
        cout<<"age = ";
        cout<<age<<endl;
        cout<<"gender = ";
        cout<<gender<<endl;
    }

    //Operator overloading

    bool operator == (student &a){
        if(name==a.name && age==a.age && gender==a.gender){
            return true;
        }
        return false;
    }
};

int main (){
    // student a;
    // a.name='Urvi';
    // a.age=0;
    // a.gender=1;

    student arr[3];
    for (int i = 0; i < 3; i++)
    {   
        cout<<"name = ";
        cin>>arr[i].name;
        cout<<"age = ";
        cin>>arr[i].age;
        cout<<"gender = ";
        cin>>arr[i].gender;
    }

    for (int i = 0; i < 3; i++)
    {
        /* code */
        arr[i].printInfo();

    }

    student b;
    student c=a;

    if(c==a){
        cout<<"same"<<endl;
    }else{
        cout<<"note same"<<endl;
    }
    
    


  return 0;

} 