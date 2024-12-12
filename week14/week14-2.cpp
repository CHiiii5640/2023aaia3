class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *ans=new ListNode(); //�ǳƦn�s������
        ListNode *now=ans; //�{�b�n�B�z�nnode
        int carry=0;
        while(l1 != nullptr && l2!= nullptr)//��list1�x���ƻs�� ans �� now��
        {
            int here=l1->val+ l2->val +carry;
            carry=here/10;
            now->next=new ListNode(here%10); // �s�ǳƤ@�ӭ�
            now=now->next;//���U�@��
            l1=l1->next;//���U�@��
            l2=l2->next;
        }
        return ans->next;
    }
};
