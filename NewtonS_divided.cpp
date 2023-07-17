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
class Newtons_dibide
{
public:
   
    double precalcu(int n , double value , double x[])
    {
        double temp = 1 ;
        for(int i =0 ; i<n ; i++)
            temp*= (value - x[i]) ;
        return temp ;
    }

    void newtons(){
        int n ; cin >> n ;
        double x[n+1] , y[n+1][n+1] ;

        for(int i =0 ; i<n ; i++)
            cin >> x[i] >> y[i][0] ;

        double value ; cin >> value ;  

        //divided differece 
        for(int i = 1; i<n ; i++)
        {
            for(int j =0 ; j<n-1 ; j++)
                y[j][i] = (y[j][i-1] - y[j+1][i-1]) / (x[0] - x[i+j]) ;
        }

        double function_value  = y[0][0] ;

        for(int i =1 ; i<n ; i++)
            function_value += (y[0][i]* precalcu(i , value , x)) ;

        cout << "the value is " << function_value << e ;
    }
};
void   solve()
{
    int n = 0 , m = 0 , k = 0 , ans = 0 , cnt  = 0 ;
    Newtons_dibide x = Newtons_dibide() ;
    x.newtons() ;
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
