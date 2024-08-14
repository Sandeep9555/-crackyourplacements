struct Node
{
    int data;
    Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
* /
    class Solution
{
public:
    Node *reverse(Node *head)
    {
        Node *prev = NULL;
        Node *curr = head;
        while (curr != NULL)
        {
            Node *next_node = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next_node;
        }
        return prev;
    }

    Node *compute(Node *head)
    {
        head = reverse(head);
        Node *curr = head;
        int ma = head->data;
        Node *prev = head;
        head = head->next;
        while (head)
        {
            if (head->data >= ma)
            {
                ma = head->data;
                prev = head;
                head = head->next;
            }
            else
            {
                prev->next = head->next;
                head = prev->next;
            }
        }
        head = reverse(curr);
        return head;
    }
};
