#include <bits/stdc++.h>
using namespace std ;

class newtonrapsonmethod{
    private :
        double epsilon = 0.0001 ;
        
        double f(double x){
            return x*x*x + x*x -1 ;
        }
        double df(double x){
            return 3*x*x + 2*x ;
        }

    public :
        double preroot = 100 ;
        void solve(){
            double root ;
            while(1){
                root = rand() ;
                if(df(root) !=0) break ;
            }
            while(1){
                if(df(root) == 0) root++ ;
                root = root - f(root)/df(root) ;

                if(f(root) == 0) break ;
                if(abs((root - preroot)/root) <= epsilon) break ;
                preroot = root ;
            }
            cout << "The root is " << root << endl ;
            cout << f(root) ;
        }
};
int main()
{
    newtonrapsonmethod x = newtonrapsonmethod() ;
    x.solve() ;
}