#include <iostream>
#include <vector>
#include <cmath>

double getMean(std::vector<double> a){
    
    double avg(0.0);
    for(int p = 0; p < a.size(); p++){avg += a[p];}
    avg /= a.size();
    return avg;
}


double getCov(std::vector<double> a, std::vector<double> b){
    
    long n = a.size();
    double avgA(0.0), avgB(0.0), avgProd(0.0);
    for(int p = 0; p < n; p++){
        avgA += a[p];
        avgB += b[p];
        avgProd += a[p] * b[p];
    }
    
    avgA /= n; avgB /= n; avgProd /= n;
    double res = avgProd - avgA * avgB;
    return res;
}


int main(){
    
    
    const int n = 5;
    std::vector<double> x(n);
    std::vector<double> y(n);
    for(int p = 0; p < n; p++){std::cin >> x[p] >> y[p];}
    
    double r1 = getCov(x, y) / getCov(x, x);
    double r0 = getMean(y) - r1 * getMean(x);
    
    const double xtest = 80.0;
    double ytest = r0 + r1 * xtest;
    printf("%.3lf\n", ytest);
    
    return 0;
}
