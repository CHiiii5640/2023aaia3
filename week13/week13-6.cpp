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
        vector<int> a;
        while(head!=nullptr)
        {
            a.push_back(head->val);
            head=head->next;
        }
        ListNode *ans=new ListNode();
        ListNode *now=ans;
        int N=a.size();
        for(int i=N-1;i>=0;i--)
        {
            now->next=new ListNode(a[i]);
            now=now->next;
        }
        return ans->next;
    }
};
