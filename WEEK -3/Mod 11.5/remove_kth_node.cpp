#include<bits/stdc++.h>
using namespace std;


// Abdullah Al Naim Vai
/*
class Solution
{
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        int count = 0;
        ListNode *tmp1 = head;
        while (tmp1 != NULL)
        {
            count++;
            tmp1 = tmp1->next;
        }
        if (count - n == 0)
        {
            head = head->next;
            return head;
        }
        ListNode *tmp = head;
        for (int i = 0; i < (count - n)-1; i++)
        {
            tmp = tmp->next;
        }
        if(tmp->next != NULL){
          tmp->next = tmp->next->next;
        }
        return head;
    }
};
*/
int main()
{
    

    return 0;
}