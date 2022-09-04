# Phone directory
![made-with-python](https://img.shields.io/badge/Made%20with-Python-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given a list of contacts contact[] of length n where each contact is a string which exist in a phone directory and a query string s. The task is to implement a search query for the phone directory. Run a search query for each prefix p of the query string s (i.e. from  index 1 to |s|) that prints all the distinct contacts which have the same prefix as p in lexicographical increasing order. Please refer the explanation part for better understanding.

**Note:** If there is no match between query and contacts, print "0".

__Example:__
```
Input:
n = 3
contact[] = {"geeikistest", "geeksforgeeks",
"geeksfortest"}
s = "geeips"
Output:
geeikistest geeksforgeeks geeksfortest
geeikistest geeksforgeeks geeksfortest
geeikistest geeksforgeeks geeksfortest
geeikistest
0
0
Explaination: By running the search query on
contact list for "g" we get: "geeikistest",
"geeksforgeeks" and "geeksfortest".
By running the search query on contact list
for "ge" we get: "geeikistest" "geeksforgeeks"
and "geeksfortest".
By running the search query on contact list
for "gee" we get: "geeikistest" "geeksforgeeks"
and "geeksfortest".
By running the search query on contact list
for "geei" we get: "geeikistest".
No results found for "geeip", so print "0".
No results found for "geeips", so print "0".
```
__Your Task__

You do not need to read input or print anything. Your task is to complete the function **displayContacts()** which takes n, contact[ ] and s as input parameters and returns a list of list of strings for required prefixes. If some prefix has no matching contact return "0" on that list.

__Expected Time Complexity:__ O(|s| * n * max|contact[i]|)

__Expected Auxiliary Space:__ O(n * max|contact[i]|)

__Constraints:__
- 1 ≤ n ≤ 50
- 1 ≤ |contact[i]| ≤ 50
- 1 ≤ |s| ≤ 6

### Solution
```py
class Solution:
    def displayContacts(self, n, contact, s):
        def check(ind, letter, word):
            return ind < len(word) and word[ind] == letter
        contact = sorted(set(contact))
        res = []
        temp = []
        for ind, letter in enumerate(s):
            temp = []
            for word in contact:
                if check(ind, letter, word):
                    temp.append(word)
            if not temp:
                res.append([0])
            else:
                res.append(temp)
            contact[:] = temp
        return res

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        n = int(input())
        contact = input().split()
        s = input()
        ob = Solution()
        ans = ob.displayContacts(n, contact, s)
        for i in range(len(s)):
            for val in ans[i]:
                print(val, end=" ")
            print()
```

