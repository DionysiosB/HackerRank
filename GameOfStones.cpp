#include <cstdio>
#include <vector>

int main(){

    const int N = 100;
    const int A = 2;
    const int B = 3;
    const int C = 5;
    std::vector<bool> firstPlayerWins(N + 1, 0);
    for(int p = 0; p <= N; p++){
        firstPlayerWins[p] = (p >= A && !firstPlayerWins[p - A]) || (p >= B && !firstPlayerWins[p - B])|| (p >= C && !firstPlayerWins[p - C]);
    }

    int t; scanf("%d\n", &t);

    while(t--){
        int x; scanf("%d\n", &x);
        puts(firstPlayerWins[x] ? "First" : "Second");
    }

    return 0;
}
