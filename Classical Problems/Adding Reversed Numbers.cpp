// ADDREV - Adding Reversed Numbers
// Link: https://www.spoj.com/problems/ADDREV/
// ID: 42
// Added by:	adrian
// Date:	2004-06-06
// Time limit:	5s
// Source limit:50000B
// Memory limit:1536MB
// Cluster:	Cube (Intel G860)
// Languages:	All
// Resource:	ACM Central European Programming Contest, Prague 1998


/* Solved by: imskr (https://www.spoj.com/users/imskr/)
   TIME: 0.02
   MEM:  16M
   LANG: C++14  */

#include<bits/stdc++.h>
#include<string>
using namespace std;
string revsum(string n1, string n2){
	// reverse of first string n1.
	// reverse of second string n2.
	reverse(n1.begin(), n1.end());
	reverse(n2.begin(), n2.end());

	// adding both reverse numbers by converting to int then converting back to string.
	string sum = to_string(stoi(n1)+stoi(n2));

	// reverse sum.
	reverse(sum.begin(), sum.end());

	// getting rid of trailing zeroes.
	sum.erase(0, sum.find_first_not_of('0'));

	// returning string.
	return sum;
}
int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
		string n1, n2;
		cin>>n1>>n2;
		cout<<revsum(n1, n2)<<endl;
	}
	return 0;
}
