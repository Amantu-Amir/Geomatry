#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define pb push_back
#define F first
#define S second
#define all(v) v.begin(),v.end()
#define Mid(b,e) b+(e-b)/2
#define inf 2147483647

//---------------------------------------------------------------------------//
//Timus: 314795JS

//knight moves
//ll X[8] = {2, 1, -1, -2, -2, -1, 1, 2}; 	
//ll Y[8] = {1, 2, 2, 1, -1, -2, -2, -1}; 
//ll dx[]={1,-1,0,0};
//ll dy[]={0,0,1,-1};
void yesNo(bool ck){cout<<(ck? "YES\n":"NO\n");}
ll toInt(string s){stringstream ss;ss<<s;int n;ss>>n;return n;}
string toString(ll n){stringstream ss;ss<<n;string s;ss>>s;return s;}
string UPPER(string s){transform(all(s),s.begin(),::toupper);return s;}
string LOWER(string s){transform(all(s),s.begin(),::tolower);return s;}
bool isDigit(char ch){if(ch>=48 && ch<=57) return true; else return false;}
vector<ll>removeDup(vector<ll>v){sort(all(v)); v.resize(distance(v.begin(),unique(all(v))));return v;}
bool isVowel(char ch){ch=toupper(ch);if(ch=='A'||ch=='U'||ch=='I'||ch=='O'||ch=='E'){return true;}return false;}
bool isCons(char ch){if(isalpha(ch) && !isVowel(ch)){return true;} return false;}

//------------------------------------------------------------------------------//

const ll p=29;
const ll N=2e6+50;
const ll mod=1e9+7;


ll nCr(ll n,ll r){
	ll res=1;
	if(r>(n-r)){
		r=n-r;
	}
	for(ll i=0; i<r; i++){
		res*=(n-i);
		res/=(i+1);
	}
	return res;
}


int main(){

	//freopen("C:/Users/Aman/Documents/output.txt", "w", stdout);
	//freopen("C:/Users/Aman/Documents/input.txt", "r", stdin);
	//ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

	ll t=1; cin>>t;
	for(ll T=1; T<=t; T++){
		ll n; cin>>n;
		ll x[n+5],y[n+5];
		for(ll i=0; i<n; i++){
			cin>>x[i]>>y[i];
		}
		vector<pair<double,double>>mp;
		for(ll i=0; i<n; i++){
			for(ll j=i+1; j<n; j++){
				double mid_x=(x[i]+x[j])/2.0;
				double mid_y=(y[i]+y[j])/2.0;
				mp.pb({mid_x,mid_y});
			}
		}
		sort(all(mp));
		ll res=0,siz=mp.size(),cnt=1;
		for(ll i=0; i<(siz-1); i++){
			if(mp[i]==mp[i+1]){
				cnt++;
			}
			else{
				if(cnt>1){
					res+=nCr(cnt,2);
				}
				cnt=1;
			}
		}
		cout<<"Case "<<T<<": "<<res<<"\n";
	}
	return 0;
}

