//https://leetcode.com/problems/reverse-linked-list/description/

        // recursive : T = O(n) and M = O(n)
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (!head) return NULL;
        ListNode* nextnode = head;
        if (head -> next) {
            nextnode = reverseList(head->next);
            head->next -> next = head;
        }
        head->next = NULL;
        return nextnode;
    }
};

      //iterative : 

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == NULL) return head;
        if (head->next == NULL) return head;
        //this approach will require you to initialise 3 pointers
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* Next;
        while (curr) {
            Next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = Next;
        }
        return prev;
    }
};
