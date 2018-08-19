#include <cstdio>

int main(){
    
    int t; scanf("%d",&t);
    
    while(t--){
        int x, y; scanf("%d%d",&x,&y);
        x %= 4; y %= 4;
        puts(((x==0) || (x==3) || (y==0) || (y==3)) ? "First" : "Second");
    }
    
    return 0;
}
