#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    
    int n; std::cin >> n;
    std::vector<int> a(n);
    for(int p = 0; p < n; p++){std::cin >> a[p];}
    sort(a.begin(), a.end());
    double q1, q2, q3;
    int u(n / 2);
    if(n % 2){
        q2 = a[n / 2];
        
        if(u % 2){q1 = a[u / 2];}
        else{q1 = (a[u / 2 - 1] + a[u / 2]) / 2.0;}
        
        if(u % 2){q3 = a[n / 2 + u / 2 + 1];}
        else{q3 = (a[n / 2 + u / 2] + a[n / 2 + u / 2 + 1]) / 2.0;}
    }
    else {
        q2 = 0.5 * (a[n/2 - 1] + a[n/2]);
        
        if(u % 2){q1 = a[u / 2];}
        else{q1 = (a[u / 2 - 1] + a[u / 2]) / 2.0;}
        
        if(u % 2){q3 = a[n / 2 + u / 2];}
        else{q3 = (a[n / 2 + u / 2] + a[n / 2 + u / 2 - 1]) / 2.0;}
    }
    
    printf("%.0lf\n%.0lf\n%.0lf\n", q1, q2, q3);
    
    return 0;
}
