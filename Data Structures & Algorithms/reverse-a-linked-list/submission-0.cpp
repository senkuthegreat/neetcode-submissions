/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* root = head;
        ListNode* ans = head;
        vector<int> arr;
        while(head!=nullptr){
            arr.push_back(head->val);
            head=head->next;
        }
        int size = arr.size();
        int i=0;
        while(root!=nullptr){
            root->val=arr[size-i-1];
            root=root->next;
            i++;
        }
        return ans;
    }
};