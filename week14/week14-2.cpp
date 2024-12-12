class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *ans=new ListNode(); //準備好新的答案
        ListNode *now=ans; //現在要處理好node
        int carry=0;
        while(l1 != nullptr && l2!= nullptr)//把list1ㄉ都複製到 ans 的 now裡
        {
            int here=l1->val+ l2->val +carry;
            carry=here/10;
            now->next=new ListNode(here%10); // 新準備一個值
            now=now->next;//換下一筆
            l1=l1->next;//換下一筆
            l2=l2->next;
        }
        return ans->next;
    }
};
