#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define all(v) v.begin(),v.end()
const int MOD = 1e9 + 7, MX = 1e18, MN = -1e18, N = 2e5 + 10;
vector<pair<int,int>> mov = {{1,0},{-1,0},{0,1},{0,-1}	,{1,1},{1,-1},{-1,1},{-1,-1} };
 
signed main(){
	fast
	int t=1;
	cin>>t;
	while(t--){
		int n;
		cin >> n;
		string s;
		cin >> s;
		int ans = 0, j = 0;
		map<int,int> mp;
		for (int i = 1; i <= s.size(); i++){
			if (mp[s[i-1]] != 0) {
				j = mp[s[i-1]]-1;
			}
			mp[s[i-1]] = i+1;
			ans += i - j;
		}
		cout << ans << endl;
	}
}
