#include<iostream>
using namespace std;

class A{
    public:
    int a;
    void fucA(){
        cout<<"public"<<endl;
    }

    private:
    int b;
    void funB(){
        cout<<"private"<<endl;
    }
};
int main(){
    A obj;
    obj.fucA();
    obj.funB();
}