class Solution {
public:
    ListNode* reverseKGroup(ListNode* head,int k) {
        int n=0;
        for(ListNode* t=head;t;t=t->next) n++;
        int a=k*(n/k);
        ListNode* temp=head;
        stack<int> st;
        int count=0,b=k;
        while(count<a)
        {
            ListNode* ltemp=temp;
            while(b>0)
            {
                st.push(temp->val);
                temp=temp->next;
                b--;
            }
            temp=ltemp;
            while(!st.empty())
            {
                temp->val=st.top();
                st.pop();
                temp=temp->next;
            }
            count+=k;
            b=k;
        }
        return head;
    }
};