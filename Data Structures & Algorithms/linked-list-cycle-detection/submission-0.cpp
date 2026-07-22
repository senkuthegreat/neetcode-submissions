/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 static const int __ = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* twox = head;
        while(twox!=nullptr && twox->next!=nullptr){
            head=head->next;
            twox=twox->next->next;
            if(twox==head) return true;
        }
        return false;
    }
};