import java.io.*;
import java.util.*;
import java.text.*;

public class Solution {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int month = in.nextInt();
        int day = in.nextInt();
        int year = in.nextInt();
        
        Calendar cal = new GregorianCalendar(Locale.US);
        cal.set(year, month-1, day);
        
        System.out.println(cal.getDisplayName(GregorianCalendar.DAY_OF_WEEK, Calendar.LONG, Locale.US).toUpperCase());
    }
}
