#include <bits/stdc++.h>
using namespace std;

    class point
    {
    private:
        int x, y;
        
    public:
        // point(){
        //     x = y = 0;
        // }
         point() : x{0}, y{0} {// c++11 method of default constructor
   cout << "Default Constructor" <<endl;
         } 
        point (int p, int q) : x{p}, y{q} {
            cout << "Parametrizid constructor" <<endl;
        }

        void show(){
        cout << x <<","<< y <<endl;
        }
        
    };
    int main(){
    
        point p ;
        point p1(2 , 5);
        p.show();
        p1.show();

    return 0;
    }