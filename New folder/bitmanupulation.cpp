#include<iostream>
using namespace std;

int nofone (int n){
    int count =0;
    while(n!=0){
        n= (n & n-1);
        count++;
    }
    return count;

}

int main(){
    cout<< nofone (19)<<endl;
    cout<<"a";
}