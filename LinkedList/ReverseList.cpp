/*Both Solutions beats 100%*/

//Recursion method
class Solution
{
public:
    ListNode *reverseList(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
        {
            return head;
        }
        ListNode *newNode = reverseList(head->next);
        head->next->next = head;
        head->next = NULL;
        return newNode;
    }
};

// Traverse Method
class Solution
{
public:
    ListNode *reverseList(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
        {
            return head;
        }
        ListNode *dummy = NULL;
        while (head != NULL)
        {
            ListNode *temp = head->next;
            head->next = dummy;
            dummy = head;
            head = temp;
        }
        return dummy;
    }
};