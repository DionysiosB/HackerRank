import java.util.*;
import java.io.*;

class Solution{
    public static void main(String []argh){
        Scanner in = new Scanner(System.in);
        int t=in.nextInt();
        for(int i=0;i<t;i++){
            int a = in.nextInt();
            int b = in.nextInt();
            int n = in.nextInt();
            int cur = a;
            int add = b;
            for(int p = 0; p < n; p++){cur += add; System.out.print(cur + " "); add *= 2;}
            System.out.println("");
        }
        in.close();
    }
}
