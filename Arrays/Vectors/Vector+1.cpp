#include<iostream>
using namespace std;
class Solution {
    public:
        vector<int> plusOne(vector<int> &digits) {
            reverse(digits.begin(), digits.end());
            vector<int> ans;
            int carry = 1;
            for (int i = 0; i < digits.size(); i++) {
                int sum = digits[i] + carry;
                ans.push_back(sum%10);
                carry = sum / 10;
            }
            while (carry) {
                ans.push_back(carry%10);
                carry /= 10;
            }
            while (ans[ans.size() - 1] == 0 && ans.size() > 1) {
                ans.pop_back();
            }
            reverse(ans.begin(), ans.end());
            reverse(digits.begin(), digits.end());
            return ans;
        }
};
int main()
{
 vector<int> test1;
 vector<int> test2;
 test1.insert(1,2,3,7);
 Solution obj1;
 test2=obj1.plusOne(test1)
 return 0;
 }
