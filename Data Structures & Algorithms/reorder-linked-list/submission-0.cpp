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
    void reorderList(ListNode* head) {
        ListNode* root = head;
        vector<int> arr;
        while(head!=nullptr){
            arr.push_back(head->val);
            head=head->next;
        }
        int size = arr.size();
        head=root;
        bool one = true;
        int i=0;
        while(head!=nullptr){
            if(one){
                head->val = arr[i];
                one = false;
                head=head->next;
            }
            else if(head!=nullptr){
                head->val = arr[size-i-1];
                one = true;
                head=head->next;
                i++;
            }
        }
    }
};