#include <cstdio>
#include <vector>
#include <map>
#include <cmath>
#include <algorithm>
typedef long long ll;

int main() {
    
    const double R = 1.96;
    ll n; scanf("%lld", &n);
    std::vector<ll> x(n);
    
    ll mdcnt(0), mode(0); std::map<ll, ll> m;
    double sx(0), sxx(0);
    for(long p = 0; p < n; p++){
        scanf("%lld", &x[p]);
        sx += x[p];
        sxx += x[p] * x[p];
        ++m[x[p]];
        if(m[x[p]] > mdcnt){mode = x[p]; mdcnt = m[x[p]];}
        else if(m[x[p]] == mdcnt){mode = (mode < x[p]) ? mode : x[p];}
    }
    
    double mean = sx / n;
    double std = sqrt(sxx / n - mean * mean);
    double lower = mean - R * std / sqrt(n);
    double upper = mean + R * std / sqrt(n);
    
    sort(x.begin(), x.end());
    double median = 0.5 * (x[(n - 1) / 2] + x[n / 2]);
    
    printf("%.1lf\n%.1lf\n%lld\n%.1lf\n%.1lf %.1lf\n", mean, median, mode, std, lower, upper);
    
    return 0;
}
