#include<bits/stdc++.h>
using namespace std;

#define fo(i,n) for(int i=0;i<n;i++)
#define fo1(i,n) for(int i=1;i<=n;i++)
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define int long long
const int N=2e5+1;
int mod=1000000007;


int power(int a,int b) {int ans=1; while(b){if(b&1)ans=(ans*a)%mod;b/=2;a=(a*a)%mod;}return ans;}
int bit(int n){if(n==0)return 0;int k=1,b=0;while((n/k)!=0){k*=2;b++;}return b-1;}

int n,t,k,m,x,y,flag=1;
string s;

void solve(){
    	cin>>n>>k>>s;
    	sort(s.begin(),s.end());
    	if(s[0]!=s[k-1]){
    		cout<<s[k-1];
    	}
    	else if(s[k]!=s[n-1]){
    		cout<<s[0];
    		for(int i=k;i<n;i++)cout<<s[i];
    	}
    	else{
    		cout<<s[0];
    		int a;
    		if((n-k)%k==0)a=(n-k)/k;
    		else a=((n-k)/k)+1;
    		for(int i=0;i<a;i++)cout<<s[k];
    	}
    	cout<<endl;
}

int32_t main(){

	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
 	cin>>t;
 	while(t--){
 		solve();
 	}


    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    return 0;
} 
