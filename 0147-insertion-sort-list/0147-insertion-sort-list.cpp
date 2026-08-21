class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        if (head == NULL || head->next == NULL)
            return head;

        ListNode dummy(0);
        dummy.next = head;

        ListNode* curr = head->next;
        head->next = NULL;

        while (curr != NULL) {
            ListNode* nextNode = curr->next;

            ListNode* prev = &dummy;

            while (prev->next != NULL && prev->next->val < curr->val) {
                prev = prev->next;
            }

            curr->next = prev->next;
            prev->next = curr;

            curr = nextNode;
        }

        return dummy.next;
    }
};