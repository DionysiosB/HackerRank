#include <cstdio>

int main(){
    
    double input(0); scanf("%lf", &input);
    
    if(input <= 4){printf("%.2lf\n", 2 * input);}
    else{printf("%.2lf\n", 8);}
    
    return 0;
}
