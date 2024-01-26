// https://leetcode.com/problems/linked-list-cycle/description/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (head == NULL) return false;
        ListNode * slow = head;
        ListNode * fast = head;
        while (slow && fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) return true;
        }
        return false;
    }
};

/*IMPORTANT NOTES - 
1. this concept is also known as the Floyd Cycle or Hare and tortoise
2. very important to remember that the order in which the conditions inside the loop are written can give you runtime error
 - example - checking existence of fast->next before checking existence of fast itself will lead to error*/
