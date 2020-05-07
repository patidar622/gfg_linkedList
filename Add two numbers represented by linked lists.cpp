Node* addTwoLists(Node* first, Node* second) {
    Node* head1=first;
    Node* head2=second;
    int carry=0;
    Node* head=NULL;
    Node* temp1=NULL;
    while(head1!=NULL && head2!=NULL)
    {
        int ans=(head1->data+head2->data+carry);
        carry=ans/10;
        Node* temp=new Node(ans%10);
        if(head==NULL)
        {
            head=temp;
            temp1=head;
        }
        else
        {
            temp1->next=temp;
            temp1=temp1->next;
        }
        head1=head1->next;
        head2=head2->next;
    }
    while(head1!=NULL)
    {
        int ans=head1->data+carry;
        carry=ans/10;
        Node* temp=new Node(ans%10);
         if(head==NULL)
        {
            head=temp;
            temp1=head;
        }
        else
        {
            temp1->next=temp;
            temp1=temp;
        }
        head1=head1->next;
    }
     while(head2!=NULL)
    {
        int ans=head2->data+carry;
        carry=ans/10;
        Node* temp=new Node(ans%10);
         if(head==NULL)
        {
            head=temp;
            temp1=head;
        }
        else
        {
            temp1->next=temp;
            temp1=temp;
        }
        head2=head2->next;
    }
    if(carry>0)
    {
        Node* temp=new Node(carry);
         if(head==NULL)
        {
            head=temp;
            temp1=head;
        }
        else
        {
            temp1->next=temp;
            temp1=temp;
        }
    }
    return head;
}
