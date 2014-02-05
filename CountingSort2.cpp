#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long n(0); scanf("%ld", &n);
    std::vector<long> array(n, 0);
    for(int k = 0; k < n; k++){scanf("%ld", &array[k]);}
    std::sort(array.begin(), array.end());
    for(int k = 0; k < n; k++){printf("%ld ", array[k]);}; puts("");

    return 0;
}
