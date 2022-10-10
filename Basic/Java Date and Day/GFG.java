import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.time.LocalDate;

class Solution {
    String findDay(int Day, int Month, int Year) {
        LocalDate my_date = LocalDate.of(Year, Month, Day);
        return my_date.getDayOfWeek().name();
    }
}

class GFG {
    public static void main(String args[]) throws IOException {
        BufferedReader read = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        while (t-- > 0) {
            String input_line[] = read.readLine().trim().split(" ");
            String day = input_line[0];
            String month = input_line[1];
            String year = input_line[2];
            int yyyy = Integer.parseInt(year);
            int mm = Integer.parseInt(month);
            int dd = Integer.parseInt(day);
            Solution ob = new Solution();
            System.out.println(ob.findDay(dd, mm, yyyy));
        }
    }
}