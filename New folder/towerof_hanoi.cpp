#include<iostream>
using namespace std;

void towerofhonoi(int n, char src,char helper, char dest ){
    if(n==0){
        return;
    }

    towerofhonoi(n-1, src, dest ,helper);
    cout<<"move from   "<<src<<" to "<<dest<<endl;
    towerofhonoi(n-1 ,helper,src, dest);
    

}

int main(){
    
    towerofhonoi(3,'A','B','C');

}