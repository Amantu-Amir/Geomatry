#include<bits/stdc++.h>
#define pb push_back
#define F first
#define S second
#define all(v) v.begin(),v.end()
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const int N=1e6;

void solve(ll x1,ll y1,ll x2,ll y2,ll a1,ll b1,ll a2,ll b2){
	ll A1=y2-y1;
	ll B1=x1-x2;
	ll C1=(A1*x1)+(B1*y1);

	ll A2=b2-b1;
	ll B2=a1-a2;
	ll C2=(A2*a1)+(B2*b1);

	ll det=(A1*B2)-(A2*B1);
	if(det==0){
		cout<<"NO\n";
	}
	else{
		ll x=(B2*C1-B1*C2)/det;
		ll y=(A1*C2-A2*C1)/det;
		if(x>=min(x1,x2) and x<=max(x1,x2) and y>=min(b1,b2) and y<=max(b1,b2)){
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
	}
}

int main(){

	//freopen("output.txt", "w", stdout);
	//freopen("input.txt", "r", stdin);
	//ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

	ll t=1; cin>>t;
	while(t--){
		ll ar[10];
		for(ll i=0; i<8; i++){
			cin>>ar[i];
		}
		solve(ar[0],ar[1],ar[2],ar[3],ar[4],ar[5],ar[6],ar[7]);
	}

	return 0;
}

