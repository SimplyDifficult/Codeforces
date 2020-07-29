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
    	cin>>n>>m;
    	vector<string>v(n);
    	fo(i,n)cin>>v[i];

    	string ans=v[0];

    	fo(i,m){
    		char save=ans[i];

    		for(char c='a';c<='z';c++){
    			ans[i]=c;
    			flag=1;
    			fo(j,n){
    				int cnt=0;
    				fo(l,m){
    					if(v[j][l]!=ans[l])cnt++;
    				}
    				if(cnt>1){flag=0;break;}
    			}
    			if(flag){cout<<ans<<endl;return;}
    		}
    		ans[i]=save;
    	}
    	cout<<-1<<endl;
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
