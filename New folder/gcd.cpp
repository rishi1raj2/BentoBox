#include<iostream>
using namespace std;

int main(){
    
    int a,b;
    cin>>a>>b;
    int rem= b%a;

    while(rem){
        rem = rem %b;
    }
    cout<<rem;

    return 0;
}