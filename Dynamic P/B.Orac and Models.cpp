#include<bits/stdc++.h>
using namespace std;

#define fo(i,n) for(int i=0;i<n;i++)
#define fo1(i,n) for(int i=1;i<=n;i++)
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define all(v) v.begin(),v.end()
#define int long long
const int N=2e5+99;
int mod=1000000007;
const int inf=1e9+1;


int power(int a,int b) {int ans=1; while(b){if(b&1)ans=(ans*a)%mod;b/=2;a=(a*a)%mod;}return ans;}
int bit(int n){if(n==0)return 0;int k=1,b=0;while((n/k)!=0){k*=2;b++;}return b-1;}

int n,t,k,m,x,y,z,flag=1;
//string s;


void solve(){
    
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
        cin>>n;
        vector<int>s(n+1);
        fo1(i,n)cin>>s[i];
        vector<int>dp(n+1);
        fo1(i,n)dp[i]=1;
        fo1(i,n){
            for(int j=i*2;j<=n;j+=i){
                if(s[i]<s[j])dp[j]=max(dp[j],dp[i]+1);
            }
        }
        int ans=0;
        fo1(i,n)ans=max(ans,dp[i]);
        cout<<ans<<endl;
    }
    

    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    return 0;
}
