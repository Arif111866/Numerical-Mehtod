#include <bits/stdc++.h>
using namespace std;
class SecantMethod {
private:
    double epsilon = 0.001;

    double f(double x) {
        return (x * x) + (5 * x) + 6;
    }
public:
    void solve() {
        double root, preroot = 1000 ;
        root = rand()%10 ;
        root *=-1 ;
        while(1){
            double newroot = root - (f(root)*(root- preroot))/(f(root) - f(preroot)) ;
            if(abs((newroot- root)/root) <= epsilon)
                break ;
            preroot = root ;
            root = newroot ;
        }
        cout << "the root is " << root << endl ;
        cout << f(root) << endl ;
    } 
};

int main() {
    SecantMethod x = SecantMethod() ;
    x.solve();
    return 0;
}