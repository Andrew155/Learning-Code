//CPP 
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main() 
{ 
    int a, b, c;
    cin >> a >> b >> c;
    int denta = b*b - 4*a*c;
    if (denta < 0){
        cout << "NO SOLUTION";
    }else if(denta == 0){
        double x0 = -b/2*a;
        cout << fixed << setprecision(2) << x0 <<endl;
    }else if (denta > 0) {
        double x0 = (-b+sqrt(denta))/2*a;
        double x1 = (-b-sqrt(denta))/2*a;
        cout << fixed << setprecision(2) <<  x1 << " " <<  x0 <<endl;
    }
}