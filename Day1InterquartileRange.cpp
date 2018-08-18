#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    
    int n; std::cin >> n;
    std::vector<double> v(n);
    std::vector<double> f(n);
    
    for(int p = 0; p < n; p++){std::cin >> v[p];}
    for(int p = 0; p < n; p++){std::cin >> f[p];}
    
    std::vector<double> a;
    for(int p = 0; p < n; p++){for(int q = 0; q < f[p]; q++){a.push_back(v[p]);}}
    sort(a.begin(), a.end());
    
    int u = a.size() % 4;
    int m = a.size() / 4;
    double ans(0.0);
    if(u == 0){ans = 0.5 * (a[3 * m - 1] + a[3 * m]) - 0.5 * (a[m - 1] + a[m]);}
    if(u == 1){ans = a[3 * m] - a[m];}
    if(u == 2){ans = a[3 * m + 1] - a[m];}
    if(u == 3){ans = a[3 * m + 2] - a[m];}
    printf("%.1lf\n", ans);
    
    return 0;
}
