# Java Date and Day
![made-with-java](https://img.shields.io/badge/Made%20with-Java-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Java Calendar class is an abstract class that provides methods for converting date between a specific instant in time and a set of calendar fields such as MONTH, YEAR, HOUR, etc.

Given the date, month and year. Find what weekday it was.

__Example 1:__
```
Input:
Date = 17
Month = 03
Year = 2017
Output:
FRIDAY
Explanation:
On 17th of March 2017 day is Friday
```
__Example 2:__
```
Input:
Date = 29
Month = 11
Year = 2021
Output:
MONDAY
Explanation:
Monday was the day on 29th November 2021
```
__Your Task__

You don't need to read input or print anything. Your task is to complete the function **findDay()** which takes three integers Date, Month, Year as input parameters and returns the weekday in a string variable (weekday should be in uppercase).

__Constraints:__
- 2000 <= Year <= 3000

### Solution
```java
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
```