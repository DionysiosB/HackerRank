#include <cstdio>
#include <iostream>
#include <vector>

struct point{long x, y, z;};

long threeDet(point A, point B, point C){return A.x * (B.y * C.z - B.z * C.y) - A.y * (B.x * C.z - B.z * C.x) + A.z * (B.x * C.y - B.y * C.x);}


int main(){

    int T; scanf("%d\n", &T);

    while(T--){
        
        const int numPoints = 4;
        std::vector<point> pointVec(numPoints);
        for(int p = 0; p < numPoints; p++){
            scanf("%ld %ld %ld\n", &pointVec[p].x, &pointVec[p].y, &pointVec[p].z);
        }

        long finalDet = - threeDet(pointVec[1], pointVec[2], pointVec[3]) + threeDet(pointVec[0], pointVec[2], pointVec[3]) - threeDet(pointVec[0], pointVec[1], pointVec[3]) + threeDet(pointVec[0], pointVec[1], pointVec[2]);

        if(finalDet == 0){puts("YES");}
        else{puts("NO");}


    }

    return 0;
}
