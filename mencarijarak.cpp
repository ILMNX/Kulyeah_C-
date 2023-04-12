#include <iostream>
#include <cmath> 

using namespace std;

double jarak(double x1, double y1, double x2, double y2) {
    double dx = x2 - x1;
    double dy = y2 - y1;
    double d = sqrt(dx*dx + dy*dy); 
    return d;
}

int main() {
    double x1, y1, x2, y2;
    
    cin >> x1>>y1>>x2>>y2;
    
    cout<< jarak(x1, y1, x2, y2) << endl;
    return 0;
}

