#include <cstdio>
#include <vector>

int main(){

    long n, k; scanf("%ld %ld\n", &n, &k);
    std::vector<long> mod(k, 0);
    while(n--){long a; scanf("%ld", &a); ++mod[a % k];}
    long total = (mod[0] > 0);
    for(int p = 1; p <= k / 2; p++){total += (mod[p] > mod[k - p]) ? mod[p] : mod[k - p];}
    if(k % 2 == 0 && mod[k / 2] > 0){total -= mod[k/2]; ++total;}
    if(k == 1){total = 1;}
    printf("%ld\n", total);

    return 0;
}
