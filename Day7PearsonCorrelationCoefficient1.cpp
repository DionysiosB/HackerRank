#include <iostream>
#include <vector>
#include <cmath>

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
    
    
    int n; std::cin >> n;
    std::vector<double> x(n);
    std::vector<double> y(n);
    
    for(int p = 0; p < n; p++){std::cin >> x[p];}
    for(int p = 0; p < n; p++){std::cin >> y[p];}
    
    double cor = getCov(x, y) / sqrt(getCov(x, x) * getCov(y, y));
    printf("%.3lf\n", cor);
    
    return 0;
}
