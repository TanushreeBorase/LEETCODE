class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode*slow = head;
        ListNode*fast = head;

        while(true){
            if(fast->next==NULL) return (slow);
            if(fast->next->next==NULL)return (slow->next);
            fast = fast->next->next;
            slow = slow->next;

        }
        return head;
    }
};
