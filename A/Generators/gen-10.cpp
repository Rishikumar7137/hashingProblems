#include "testlib.h"
#include <bits/stdc++.h>
using namespace std;
 
int main(int argc, char* argv[]){
	registerGen(argc, argv, 1);
	int t = rnd.next(10, 10);
	int min_n = atoi(argv[1]);
	int max_n = atoi(argv[1]);
	cout << t << endl;
	while(t--){
		int n = rnd.next(min_n, max_n);
		cout<<n<<endl;
		for(int i=0;i<n;i++){
		    char x = 'a' + rnd.next(0, 25);
		    cout << x;
		}
		cout<<endl;
	}
    return 0;
}
