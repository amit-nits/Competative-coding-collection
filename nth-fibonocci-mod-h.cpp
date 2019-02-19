
  /*
                       _oo0oo_
                      o8888888o
                      88" . "88
                      (| -_- |)
                      0\  =  /0
                    ___/`---'\___
                  .' \|     |// '.
                 / \|||  :  |||// \
                / _||||| -:- |||||- \
               |   | \\  -  /// |   |
               | \_|  ''\---/''  |_/ |
               \  .-\__  '-'  ___/-. /
             ___'. .'  /--.--\  `. .'___
          ."" '<  `.___\_<|>_/___.' >' "".
         | | :  `- \`.;`\ _ /`;.`/ - ` : | |
         \  \ `_.   \_ __\ /__ _/   .-` /  /
     =====`-.____`.___ \_____/___.-`___.-'=====
                       `=---='
 
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ 
  Amit Dwivedi  NIT Silchar 
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/   
#include "bits/stdc++.h"
using namespace std;
 
/*#ifndef ONLINE_JUDGE
    bool debug = false;
#else
    bool debug = true;
#endif*/
 
typedef long long unsigned llu;
typedef long long ll;
typedef long ld;
 
//definition
#define vi vector < int >
#define vld vector < ld >
#define vll vector < ll >
#define pii pair <int, int>
#define pll pair<ll, ll>
#define vpii vector< pii >
#define vpll vector< pll > 
#define gc getchar//_unlocked
#define pc putchar//_unlocked
#define rr freopen("input.txt", "r", stdin)
#define wr freopen("output.txt", "w", stdout)
 
//important constants
#define MOD 1000000007
#define INF 1LL<<57LL
#define MAX 1000000
#define pi 3.14159265358979
#define ESP (1e-9)
 
//looping_
#define loop(i,a) for(i=0;i<a;i++)
#define eloop(i,a) for(i=0;i<=a;i++)
#define rloop(i,a,n) for(i=a;i<n;i++)
#define reloop(i,a,n) for(i=a;i<=n;i++)
#define decloop(i,n,a) for(i=n;i>a;i--)
#define edecloop(i,n,a) for(i=n;i>=a;i--)
#define tr(container, it) for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)
#define sv() int t; cin>>t; while(t--)
//input output
#define sd(n) scanf("%d",&n)
#define sld(n) scanf("%ld",&n)
#define slld(n) scanf("%lld",&n)
#define pfd(n) printf("%d",n)
#define pfld(n) printf("%ld",n)
#define pflld(n) printf("%lld",n)
 
#define f first
#define s second
#define sz size()
#define clr clear()
#define len length()
#define pb push_back
#define mp make_pair
#define gcd(a,b)  __gcd(a,b)
#define all(vi) vi.begin(), vi.end()
#define mem(i,n) memset(i,n,sizeof(i))
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL)
 
#define imax numeric_limits<int>::max()
#define imin numeric_limits<int>::min()
#define ldmax numeric_limits<ld>::max()
#define ldmin numeric_limits<ld>::min()
#define lldmax numeric_limits<lld>::max()
#define lldmin numeric_limits<lld>::min()
//end of definition
 
//fast input
 
int scan_d()        {register int c=gc();int x=0;for(;(c<48 || c>57);c = gc());for(;c>47 && c<58;c = gc()){x = (x<<1) + (x<<3) + c - 48;}return x;}
ld scan_ld()        {register ld c=gc();ld x=0;for(;(c<48 || c>57);c = gc());for(;c>47 && c<58;c = gc()){x = (x<<1) + (x<<3) + c - 48;}return x;}
ll scan_ll()        {register ll c=gc();ll x=0;for(;(c<48 || c>57);c = gc());for(;c>47 && c<58;c = gc()){x = (x<<1) + (x<<3) + c - 48;}return x;}
llu scan_llu()        {register llu c=gc();llu x=0;for(;(c<48 || c>57);c = gc());for(;c>47 && c<58;c = gc()){x = (x<<1) + (x<<3) + c - 48;}return x;}
 
//end of fast input
 
//fast output
 
//no line break
void print_d(int n)     {if(n<0){n=-n;putchar('-');}int i=10;char output_buffer[10];do{output_buffer[--i]=(n%10)+'0';n/=10;}while(n);do{putchar(output_buffer[i]);}while(++i<10);}
void print_ld(ld n)     {if(n<0){n=-n;putchar('-');}int i=11;char output_buffer[11];do{output_buffer[--i]=(n%10)+'0';n/=10;}while(n);do{putchar(output_buffer[i]);}while(++i<11);}
void print_lld(ll n)     {if(n<0){n=-n;putchar('-');}int i=21;char output_buffer[21];do{output_buffer[--i]=(n%10)+'0';n/=10;}while(n);do{putchar(output_buffer[i]);}while(++i<21);}
void print_llu(llu n)     {int i=21;char output_buffer[21];do{output_buffer[--i]=(n%10)+'0';n/=10;}while(n);do{putchar(output_buffer[i]);}while(++i<21);}
 
//new line
void println_d(int n)     {if(n<0){n=-n;putchar('-');}int i=10;char output_buffer[11];output_buffer[10]='\n';do{output_buffer[--i]=(n%10)+'0';n/=10;}while(n);do{putchar(output_buffer[i]);}while(++i<11);}
void println_ld(ld n)     {if(n<0){n=-n;putchar('-');}int i=11;char output_buffer[12];output_buffer[11]='\n';do{output_buffer[--i]=(n%10)+'0';n/=10;}while(n);do{putchar(output_buffer[i]);}while(++i<12);}
void println_lld(ll n)     {if(n<0){n=-n;putchar('-');}int i=21;char output_buffer[22];output_buffer[21]='\n';do{output_buffer[--i]=(n%10)+'0';n/=10;}while(n);do{putchar(output_buffer[i]);}while(++i<22);}
void println_llu(llu n)     {int i=21;char output_buffer[22];output_buffer[21]='\n';do{output_buffer[--i]=(n%10)+'0';n/=10;}while(n);do{putchar(output_buffer[i]);}while(++i<22);}
 
//special char
char sp;
void printsp_d(int n)     {if(n<0){n=-n;putchar('-');}int i=10;char output_buffer[11];output_buffer[10]=sp;do{output_buffer[--i]=(n%10)+'0';n/=10;}while(n);do{putchar(output_buffer[i]);}while(++i<11);}
void printsp_ld(ld n)     {if(n<0){n=-n;putchar('-');}int i=11;char output_buffer[12];output_buffer[11]=sp;do{output_buffer[--i]=(n%10)+'0';n/=10;}while(n);do{putchar(output_buffer[i]);}while(++i<12);}
void printsp_lld(ll n)     {if(n<0){n=-n;putchar('-');}int i=21;char output_buffer[22];output_buffer[21]=sp;do{output_buffer[--i]=(n%10)+'0';n/=10;}while(n);do{putchar(output_buffer[i]);}while(++i<22);}
void printsp_llu(llu n)     {int i=21;char output_buffer[22];output_buffer[21]=sp;do{output_buffer[--i]=(n%10)+'0';n/=10;}while(n);do{putchar(output_buffer[i]);}while(++i<22);}


//end of fast output

ll power(ll x, ll y, ll p) 
{ 
    ll res = 1;      // Initialize result 
  
    x = x % p;  // Update x if it is more than or  
                // equal to p 
  
    while (y > 0) 
    { 
        // If y is odd, multiply x with result 
        if (y & 1) 
            res = (res*x) % p; 
  
        // y must be even now 
        y = y>>1; // y = y/2 
        x = (x*x) % p;   
    } 
    return res; 
} 
pair<ll,pair<ll,ll> > egcd(ll a, ll b)        //solves ax + by = gcd(a,b) = g
  {                //returns (g,(x,y))
    pair<ll,pair<ll,ll> > ret;

    if (a==0)
    {
      ret.f = b ;
      ret.s.f = 0 ;
      ret.s.s = 1 ;
    }
    else
    {
      ll g, x, y;
      pair<ll,pair<ll,ll> > temp = egcd( b%a, a) ;
      g = temp.f;
      x = temp.s.f;
      y = temp.s.s;
      ret.f = g;
      ret.s.f = y - (b/a)*x ;
      ret.s.s = x;
    }

    return ret;
  }

  ll modinv(ll den, ll m)
  {
    pair<ll,pair<ll,ll> > ans = egcd(den, m) ;
    if (ans.f == 1)
    {
      return (ans.s.f+m) % m ;
    }
  }


  ll moddiv(ll num, ll den, ll m)    // den and m must be coprime
  {
    return (num * modinv(den,m) ) % m ;
  }
map<ll,ll> F; 
ll fib(ll n) 
{ 
    // Base cases 
    if (n == 0) 
        return 0; 
    if (n == 1 || n == 2){
       F.insert(pair<ll,ll>(n,1)); return 1;
    }
  
    // If fib(n) is already computed 
    if (F.find(n)!=F.end()){ 
        auto it=F.find(n); return it->second;
  }
    if(n & 1){
      ll k=(n+1)/2,d=((fib(k)*fib(k)%MOD+fib(k-1)*fib(k-1)%MOD)%MOD);
      F.insert(pair<ll,ll>(n,d));
    }
    else{
      ll k=n/2,d=((2*(fib(k-1))%MOD+fib(k))%MOD)*fib(k)%MOD;
      F.insert(pair<ll,ll>(n,d));
    }

   
    auto it=F.find(n); return it->second;
} 

int main()
{
    // rr;
    // wr;
  sv()
  {
    ll n; n=scan_ll();
    ll xx=power(2,n,MOD);
    ll p=(xx-fib(n+1)+MOD)%MOD;
    ll q=xx;
    println_lld(((moddiv(p,q,MOD)+MOD)%MOD));
  }
    return 0;
}
