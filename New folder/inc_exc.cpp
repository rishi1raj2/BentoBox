#include<iostream>
using namespace std;

//to find no.'s divisible by a and b
//so we find no.'s divisible by a and b - no.'s divisible by both a and b


int divisible(int n, int a,int b){
    int c1,c2,c3;

    c1=n/a;
    c2= n/b;
    c3 = n/(a*b);

    cout<<(c1+c2-c3)<<endl;

}

int main(){
    int n,a,b;
    cin>>n>>a>>b;

    divisible(n,a,b);
}