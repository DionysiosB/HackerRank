#include <cstdio>

int main() {
    
    int T; scanf("%d\n", &T); 
    while(T--){
        int N, K; scanf("%d %d\n", &N, &K);
        for(int p = 0; p < N; p++){
            int s; scanf("%d", &s);
            if(s <= 0){--K;}
        }
        if(K > 0){puts("YES");} else {puts("NO");}
    }
    
    return 0;
}
