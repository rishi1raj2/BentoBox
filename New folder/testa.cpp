#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a1,a2,b1,b2,c1,c2;
	    cin>>a1>>a2>>b1>>b2>>c1>>c2;
	    int a=a1+a2;
	    int b=b1+b2;
	    int c=c1+c2;
	    int maxxx = max(a,b,c);
	    cout<<maxxx;
	    
	}
	return 0;
}