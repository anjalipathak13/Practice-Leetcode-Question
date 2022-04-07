class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
int l=letters[0];
    auto i=upper_bound(letters.begin(),letters.end(),target);
        return i==letters.end()?letters[0]:*i;
    }
};