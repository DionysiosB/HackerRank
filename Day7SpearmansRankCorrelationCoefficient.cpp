#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

bool pairCompare(std::pair<double, double> a, std::pair<double, double> b){
    if(a.second < b.second) return true;
    else if(a.second == b.second) return (a.first < b.first);
    return false;
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
    
    long n; std::cin >> n;
    std::vector<std::pair<double, double> > a(n);
    std::vector<std::pair<double, double> > b(n);
    
    for(double p = 0; p < n; p++){double x; std::cin >> x; a[p] = std::make_pair(p, x);}
    for(double p = 0; p < n; p++){double x; std::cin >> x; b[p] = std::make_pair(p, x);}
    
    sort(a.begin(), a.end(), pairCompare); sort(b.begin(), b.end(), pairCompare);
    
    for(int p = 0; p < n; p++){a[p].second = p + 1; b[p].second = p + 1;}
    
    sort(a.begin(), a.end()); sort(b.begin(), b.end());
    
    std::vector<double> u(n); std::vector<double> v(n);
    for(int p = 0; p < n; p++){u[p] = a[p].second; v[p] = b[p].second;}
    double cor = getCov(u, v) / sqrt(getCov(u, u) * getCov(v, v));
    printf("%.3lf\n", cor);
    
    return 0;
}
