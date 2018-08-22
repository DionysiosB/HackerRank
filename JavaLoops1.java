import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        final int D = 10;
        Scanner in = new Scanner(System.in);
        int N = in.nextInt();
        for(int p = 1; p <= D; p++){System.out.println(N + " x " + p + " = " + (N * p));}
    }
}
