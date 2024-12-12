class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *ans=new ListNode(); //準備好新的答案
        ListNode *now=ans; //現在要處理好node
        while(l1 != nullptr)//把list1ㄉ都複製到 ans 的 now裡
        {
            now->next=new ListNode(l1->val); // 新準備一個值
            now=now->next;//換下一筆
            l1=l1->next;//換下一筆
        }
        return ans->next;
    }
};
