class Solution {
public:
    bool isPalindrome(string s) {
        // string f = s.tolower();
        // reverse(f.begin(), f.end());
        int first = 0;
        int second = s.size() - 1;
        bool ans = true;
        while(first<second){
            if(!isalnum(s[first])) { first++; continue; }
            if(!isalnum(s[second])) { second--; continue; }
            if(tolower(s[first]) == tolower(s[second])){
                second--;
                first++;
            } else {
                ans = false;
                break;
            }
        }
        return ans;
    }
};
