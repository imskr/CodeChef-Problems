// SMPDIV - Divisibility
// Link: https://www.spoj.com/problems/SMPDIV/
// ID: 15708

// Added by:	kuszi
// Date:	2013-08-26
// Time limit:	1s
// Source limit:50000B
// Memory limit:1536MB
// Cluster:	Cube (Intel G860)
// Languages:	All except: ASM64


/* Solved by: imskr (https://www.spoj.com/users/imskr/)
   TIME: 0.00
   MEM:  15M
   LANG: C++14  */

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
		int n, x, y;
		cin>>n>>x>>y;
		for(int i=1; i<n; i++){
			if(i%x==0 and i%y!=0){
				cout<<i<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
