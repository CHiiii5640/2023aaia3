class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *ans=new ListNode(); //�ǳƦn�s������
        ListNode *now=ans; //�{�b�n�B�z�nnode
        while(l1 != nullptr)//��list1�x���ƻs�� ans �� now��
        {
            now->next=new ListNode(l1->val); // �s�ǳƤ@�ӭ�
            now=now->next;//���U�@��
            l1=l1->next;//���U�@��
        }
        return ans->next;
    }
};
