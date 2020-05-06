struct node *reverse (struct node *head, int k)
{ 
    struct node* curr=head;
    struct node* prev=NULL;
    struct node* p1=curr;
    while(curr!=NULL)
    {
        struct node* temp=curr;
        int k1=k-1;
        while(k1 && temp->next!=NULL)
        {
            temp=temp->next;
            k1--;
        }
        struct node* last=temp->next;
        while(last!=temp)
        {
            struct node* next1=curr->next;
            curr->next=last;
            last=curr;
            curr=next1;
        }
        if(prev==NULL)
        {
            head=temp;
        prev=p1;
        p1=curr;
        }
        else
        {
            prev->next=temp;
            prev=p1;
            p1=curr;
        }
    }
    return head;
}

