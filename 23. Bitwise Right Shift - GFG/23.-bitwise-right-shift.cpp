// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

void utility(int a, int b){

    //just complete below statement
    int ans =a>>b;

    //print the result
    cout << ans << endl;
}

// { Driver Code Starts.
    
int main() {
	
	int t; cin>>t;
	while(t--){
	    int a, b;
	    cin>>a>>b;
	    utility(a, b);
	}
	
}  // } Driver Code Ends