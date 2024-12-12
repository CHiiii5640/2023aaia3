class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *ans=new ListNode(); //�ǳƦn�s������
        ListNode *now=ans; //�{�b�n�B�z�nnode
        int carry=0;
        while(l1 != nullptr || l2!= nullptr)//��list1�x���ƻs�� ans �� now��
        {
            if(l1==nullptr)
            {
                int here=l2->val +carry;
                carry=here/10;
                now->next=new ListNode(here%10); // �s�ǳƤ@�ӭ�
                now=now->next;//���U�@��
                // l1=l1->next;//���U�@��
                l2=l2->next;
            }
            else if(l2==nullptr)
            {
                int here=l1->val +carry;
                carry=here/10;
                now->next=new ListNode(here%10); // �s�ǳƤ@�ӭ�
                now=now->next;//���U�@��
                l1=l1->next;//���U�@��
                // l2=l2->next;
            }
            else
            {
                int here=l1->val+ l2->val +carry;
                carry=here/10;
                now->next=new ListNode(here%10); // �s�ǳƤ@�ӭ�
                now=now->next;//���U�@��
                l1=l1->next;//���U�@��
                l2=l2->next;
            }
            if(carry>0)
                now->next=new ListNode(carry);
        }
        return ans->next;
    }
};
