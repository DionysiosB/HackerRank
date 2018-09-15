#include <iostream>
#include <vector>

struct cross{long row, col, radius;};

bool overlap(cross A, cross B){

    long sr = A.radius + B.radius;
    long rd = A.row - B.row; if(rd < 0){rd = -rd;}
    long cd = A.col - B.col; if(cd < 0){cd = -cd;}

    if(A.row == B.row){return (cd <= sr);}
    if(A.col == B.col){return (rd <= sr);}

    long r = (A.radius < B.radius) ? A.radius : B.radius;
    long R = (A.radius > B.radius) ? A.radius : B.radius;
    if(rd <= r && cd <= R){return true;}
    if(rd <= R && cd <= r){return true;}
    return false;
}


int main(){

    long n, m; scanf("%ld %ld", &n, &m);
    std::vector<std::string> t(n);
    for(long p = 0; p < n; p++){std::cin >> t[p];}
    std::vector<cross> vc;

    for(long rr = 0; rr < n; rr++){
        for(long cc = 0; cc < m; cc++){
            if(t[rr][cc] == 'B'){continue;}
            for(long rad = 0; rad < n && rad < m; rad++){
                if((rr - rad >= 0) && (rr + rad < n) && (cc - rad >= 0) && (cc + rad < m)&& (t[rr - rad][cc] == 'G') && (t[rr + rad][cc] == 'G') && (t[rr][cc - rad] == 'G') && (t[rr][cc + rad] == 'G')){
                    cross cur; cur.row = rr; cur.col = cc; cur.radius = rad; vc.push_back(cur);
                }
                else{break;}
            }
        }
    }

    //for(long p = 0; p < vc.size(); p++){printf("(%ld,%ld)->%ld\n", vc[p].row, vc[p].col, vc[p].radius);}

    long mx(0);
    for(long a = 0; a < vc.size(); a++){
        for(long b = a + 1; b < vc.size(); b++){
            if(overlap(vc[a], vc[b])){continue;}
            long area = (4 * vc[a].radius + 1) * (4 * vc[b].radius + 1);
            //if(area > mx){printf("*** (%ld,%ld)->%ld  +  (%ld,%ld)->%ld\n", vc[a].row, vc[a].col, vc[a].radius, vc[b].row, vc[b].col, vc[b].radius);}
            mx = (mx > area) ? mx : area;
        }
    }

    printf("%ld\n", mx);

    return 0;
}
