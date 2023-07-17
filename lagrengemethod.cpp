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
class lagrange{

    private :
        
        double xd ;
    public:
        void usolve()
        {
            int n ; cin >> n ;
            vector<double> x(n),y(n) ;
            for(int i =0 ; i<n ; i++)
                cin >> x[i] >> y[i] ;
            cin >> xd ;
            double funtion_value = 0 ;
            for(int i =0 ; i<n ; i++)
            {
                double temp = 1 ;
                for(int j =0 ; j<n ; j++)
                {
                    if(i != j) temp = temp*(xd - x[j])/(x[i] - x[j]) ;
                }
                funtion_value += (temp*y[i]) ;
            }
            cout << "the value of f(x) is = " << funtion_value << e ;
        }
};
void   solve()
{
    lagrange x = lagrange() ;
    x.usolve() ;
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
