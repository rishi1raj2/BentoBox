#include<iostream>
using namespace std;

void rotate(int a[]){
    
    cout<<a[4]<<" ";
    for(int i=0;i<4;i++){
    
    
    cout<<a[i]<<" ";
    }
}

int main(){
    int a[5]={1,2,3,4,5};
    rotate(a);

}