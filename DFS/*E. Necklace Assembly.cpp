#include<bits/stdc++.h>
using namespace std;

#define fo(i,n) for(int i=0;i<n;i++)
#define fo1(i,n) for(int i=1;i<=n;i++)
#define pb push_back
#define mp make_pair
#define int long long
const int N=1e5+1;
int mod=1000000007;


int power(int a,int b) {int ans=1; while(b){if(b&1)ans=(ans*a)%mod;b/=2;a=(a*a)%mod;}return ans;}
int bit(int n){if(n==0)return 0;int k=1,b=0;while((n/k)!=0){k*=2;b++;}return b-1;}

int n,t,k,m,x,y,flag=1;
string s;




int32_t main(){

	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
 	
    cin>>t;
    while(t--){
 		cin>>n>>k>>s;

 		vector<int>cnt(26);
 		for(char c:s)cnt[c-'a']++;

 		for(int len=n;len>=1;len--){
 			vector<int>cy_sz;
 			vector<int>vis(len);

 			fo(i,len){
 				if(vis[i])continue;

 				int j=(i+k)%len;
 				vis[i]=1;
 				cy_sz.pb(1);

 				while(!vis[j]){
 					cy_sz.back()++;
 					vis[j]=1;
 					j=(j+k)%len;
 				}
 			}

 			sort(cy_sz.begin(),cy_sz.end());
 			vector<int>curr_cnt(cnt);
 			sort(curr_cnt.begin(),curr_cnt.end());

 			bool ok=true;

 			while(!cy_sz.empty()){
 				if(curr_cnt.back()<cy_sz.back()){
 					ok=false;
 					break;
 				}
 				else{
 					curr_cnt.back()-=cy_sz.back();
 					cy_sz.pop_back();
 					sort(curr_cnt.begin(),curr_cnt.end());
 				}
 			}
 			if(ok){
 				cout<<len<<endl;
 				break;
 			}
 		}
    }


    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    return 0;
} 
