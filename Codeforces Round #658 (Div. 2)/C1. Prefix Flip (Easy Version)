#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define fo(i,n) for(ll i=0;i<n;i++)
#define fo1(i,n) for(ll i=1;i<=n;i++)
ll N=100001;
ll mod=1000000007;

ll t,n,x,k,m;
string s;
int flag=0;

void solve(){
	cin>>n;
	string a,b;
	cin>>a>>b;
	vector<int>ans;
	for(ll i=n-1;i>=0;i--){
		if(a[i]==b[i]){k++;continue;}
		else{
			ans.push_back(i+1);
			ans.push_back(1);
			ans.push_back(i+1);
		}
	}
	if(ans.empty())cout<<0;
	else{
		cout<<ans.size()<<" ";
		fo(i,ans.size())cout<<ans[i]<<" ";
	}
	cout<<endl;
	return;
}

int main(){

	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
 	
 	cin>>t;
 	while(t--){
 		solve();
 	}


    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    return 0;
}
