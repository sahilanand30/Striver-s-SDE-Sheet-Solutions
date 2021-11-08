//Author: Sahil Anand
//Problem Link: https://leetcode.com/problems/palindrome-linked-list/
class Solution
{
public:
    bool isPalindrome(ListNode *head)
    {
        string s = "";
        while (head != NULL)
        {
            string tmp = to_string(head->val);
            s += tmp;
            head = head->next;
        }
        string p = s;
        reverse(p.begin(), p.end());
        if (p == s)
            return true;
        return false;
    }
};