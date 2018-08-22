import java.io.*;
import java.util.*;
import java.text.*;

public class Solution {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        BigInteger a = scan.nextBigInteger();
        BigInteger b = scan.nextBigInteger();

        BigInteger sum =  a.add(b); 
        BigInteger product =  a.multiply(b); 

        System.out.println(sum); 
        System.out.println(product);
    }
}
