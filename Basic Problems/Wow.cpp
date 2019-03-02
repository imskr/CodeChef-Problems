// SMPWOW - Wow
// Link: https://www.spoj.com/problems/SMPWOW/
// ID: 15711
//Added by:	kuszi
//Date:	2013-08-26
//Time limit:	  1s
//Source limit:	50000B
//Memory limit:	1536MB
//Cluster:	  Cube (Intel G860)
//Languages:	All except: ASM64
// Resource:	ACM Central European Programming Contest, Prague 1998


/* Solved by: imskr (https://www.spoj.com/users/imskr/)
   TIME: 0.00
   MEM:  16M
   LANG: C++14  */

#include <iostream>
#include <string>
using namespace std;

int main() {
	// your code goes here
	int x;
	char c='o';
	cin>>x;
	cout<<"W"<<string(x, c)<<"w"<<endl;
	return 0;
}
