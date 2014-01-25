#include <cstdio>

int main() {
    
    int T(0); scanf("%d", &T);
    
    while(T--){
        int Px(0), Py(0), Qx(0), Qy(0); scanf("%d %d %d %d", &Px, &Py, &Qx, &Qy);
        printf("%d %d\n", 2 * Qx - Px, 2 * Qy - Py);
    }
    
    return 0;
}
