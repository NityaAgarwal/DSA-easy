//https://leetcode.com/problems/merge-two-sorted-lists/description/

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (!list1 && !list2) return NULL;
        if (!list1) return list2;
        if (!list2) return list1;
        ListNode* curr1 = list1;
        ListNode* curr2 = list2;
        if (list1 -> val < list2 -> val) {
            list1 -> next = mergeTwoLists(list1->next, list2);
            return list1;
        }
        //else
        list2->next = mergeTwoLists(list1, list2->next);
        return list2;
    }
};
