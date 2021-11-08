//Author: Sahil Anand
//Problem Link: https://leetcode.com/problems/linked-list-cycle/
class Solution
{
public:
    //slow pointer and fast pointer (Tortoise Algorithm)
    /*
    ALGORITHM:-
    ->move slow pointer by one step
    ->move fast pointer by two step
    ->if there exists a cycle than both will coinside at some point as none will reach to the NULL
    */
    bool hasCycle(ListNode *head)
    {
        if (head == NULL || head->next == NULL) 
        {
            return false;
        }
        ListNode *slow = head;
        ListNode *fast = head;
        while (fast->next != NULL && fast->next->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
            if (fast == slow)
            {
                return true;
            }
        }
        return false;
    }
};