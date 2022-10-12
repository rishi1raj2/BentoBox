#include<iostream>
using namespace std;

string remove(string s){
    if(s.length()==0){
        return "";
    }
    char ch=s[0];
    string ros= remove(s.substr(1));
    if(ch==ros[0]){
        return ros;
    }
    return (ch+ros);
    
}

int  main(){
    cout<<remove("aaaabbbeeecdddd")<<endl;
    return 0; 
}