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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        vector<int> arr;
        ListNode* root = head;
        while(head!=nullptr){
            arr.push_back(head->val);
            head=head->next;
        }
        int size=arr.size()-n;
        int i=1;
        if(size==0) return root->next;
        head = root;
        while(head!=nullptr){
            if(i==size){
                head->next=head->next->next;
            }
            head=head->next;
            i++;
        }
        return root;
    }
};