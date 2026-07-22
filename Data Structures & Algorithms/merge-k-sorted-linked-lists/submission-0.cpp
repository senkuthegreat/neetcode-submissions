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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> arr;
        int size=lists.size();
        for(int i=0;i<size;i++){
            while(lists[i]!=nullptr){
                arr.push_back(lists[i]->val);
                lists[i]=lists[i]->next;
            }
        }
        sort(arr.begin(),arr.end());
        size=arr.size();
        ListNode* head = new ListNode;
        ListNode* ans = head;
        for(int i=0;i<size;i++){
            head->next = new ListNode;
            head = head->next;
            head->val = arr[i];
        }
        return ans->next;
    }
};