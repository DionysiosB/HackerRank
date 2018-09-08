#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n; std::string a, b;
        std::cin >> n >> a >> b;
        bool possible(true); long cnt(0);
        for(long p = 0; p < n; p++){
            if( ((a[p] == '1') && (b[p] == '1')) || ((p > 0) && (a[p] == '1') && (b[p - 1] == '1'))){if(cnt & 1){possible = false; break;}}
            cnt += (a[p] == '0'); cnt %= 2;
            cnt += (b[p] == '0'); cnt %= 2;
            //std::cout << p << " -> " << cnt << std::endl;
        }
        if(cnt & 1){possible = false;}

        //std::cout << a << std::endl << b << std::endl;
        std::cout << (possible ? "YES" : "NO") << std::endl;
    }

    return 0;
}
