/*Bismillahir Rahmanir Raheem-In the name of Allah."
 code of MD ARIFUL ISLAM */

#include<bits/stdc++.h>
#define        int long long int 
#define        INF 1e9
#define        PI 3.141592653
#define        PB push_back 
#define        F first
#define        S second
#define        MP(x, y) push_back(make_pair(x, y))
#define        srt(v) sort(v.begin(), v.end())
#define        all(x) x.begin(), x.end()
#define        rsrt(v) reverse(v.begin(), v.end())
#define        no cout << "NO" << endl
#define        yes cout << "YES" << "\n"
#define        e "\n" 
#define        pair  vector< pair <int ,int> >
#define        deb(args...){string _s = #args;replace(_s.begin(), _s.end(), ',', ' ');stringstream _ss(_s);istream_iterator<string> _it(_ss);err(_it, args);}

using namespace std;


template <typename T>
ostream &operator<<(ostream &os, const vector<T> &v){ 
os << '{';
 for (const auto &x : v) os << " " << x; return os << '}';
}


void err(istream_iterator<string> it) {}
template <typename T, typename... Args>

void err(istream_iterator<string> it, T a, Args... args)
{
    cerr << *it << " = " << a << endl;
    err(++it, args...);
}
class Trapezoidal
{
    public :
    double function(double x)
    {
        return 1/(1+x*x);
    }
    void solvee()
    {
        double a , b ;
        cin >> a >> b ;
        int n ; cin >> n ;

        double h = (b-a)/n ;
        double function_value = function(a)+function(b) ;
        for(int  i = 1; i<n ; i++)
            function_value += 2*function((a+i*h)) ;

        function_value = function_value*h/2 ;
        cout << "the value is " << function_value << e ;
    }
};
void   solve()
{
    int n = 0 , m = 0 , k = 0 , ans = 0 , cnt  = 0 ;
    Trapezoidal x = Trapezoidal() ;
    x.solvee() ; 
}
int32_t main()
{ 

    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int test_case =1; 
    // cin >> test_case ; 
    int c = 0 ;
    while( test_case --)
    {
      // c ++ ; cout << "Case " << c << ": " ;
       solve() ;   
    }
}
//vector<int>::iterator lower, upper;
//lower = lower_bound(v.begin(), v.end(), value) - v.begin() ;
//upper = upper_bound(v.begin(), v.end(), value) - v.begin() ; -->
