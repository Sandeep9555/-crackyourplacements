void sortList(Node *head)
{
    int cnt[3] = {0, 0, 0};
    Node *ptr = head;

    while (ptr != NULL)
    {
        cnt[ptr->data] += 1;
        ptr = ptr->next;
    }

    ptr = head;
    int idx = 0;

    while (ptr != NULL)
    {
        if (cnt[idx] == 0)
        {
            idx++;
        }
        else
        {
            ptr->data = idx;
            cnt[idx] -= 1;
            ptr = ptr->next;
        }
    }
}
