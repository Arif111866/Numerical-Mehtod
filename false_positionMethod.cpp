#include <bits/stdc++.h>
using namespace std ;
class falsepossition{
    private :
        double lower , root , upper , epsilon = 0.00001 ;
        double f(double x){
            return x*x*x -x*x + 2 ;
        }
    public :
        void solve()
        {
            while(1)
            {
                lower = -9 + rand()%10 ;
                upper = rand()%10 ;
                if(f(upper)*f(lower) <= 0){
                    if(lower > upper) swap(lower , upper) ;
                    break ;
                }
            }
            double preroot = 10000.0 ;
            while(1)
            {
                root = upper - (f(upper)*(upper- lower)) / (f(upper)- f(lower)) ;
                if(f(root)*f(lower) <= 0) upper = root ;
                else if(f(root) == 0.0) break ;
                else lower = root ;

                if(abs((root- preroot)/root) <= epsilon) break ;
                preroot = root ;
            }
            cout << "the root is " << root << endl ;
            cout << f(root) ;
        }
};
int main(){
    falsepossition x = falsepossition() ;
    x.solve() ;
    return 0 ;
}