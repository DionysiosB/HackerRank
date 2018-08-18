#include <cstdio>
#include <set>


int main(){

    long n; scanf("%ld", &n);
    std::multiset<double> m;
    for(long p = 0; p < n; p++){
        double x; scanf("%lf", &x);
        m.insert(x);
        std::multiset<double>::iterator mit = m.begin();
        std::advance(mit, p / 2);
        if(p % 2){
            double a = *mit;
            double b = *(++mit);
            printf("%.1lf\n", (a + b) / 2);
        }
        else{printf("%.1lf\n", (*mit));}
    }

    return 0;
}
