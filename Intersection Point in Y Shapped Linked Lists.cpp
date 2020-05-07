int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    int n1=0,n2=0;
    Node* temp=head1;
    Node* temp1=head2;
    while(temp!=NULL)
    {
        n1++;
        temp=temp->next;
    }
    while(temp1!=NULL)
    {
        n2++;
        temp1=temp1->next;
    }
    int ans=abs(n1-n2);
    if(n1<n2)
    {
        Node* temp=head1;
        head1=head2;
        head2=temp;
        swap(n1,n2);
    }
    Node* temp3=head1;
    Node* temp4=head2;
    while(ans--)
    {
        temp3=temp3->next;
    }
    while(temp3!=NULL && temp4!=NULL && temp3!=temp4)
    {
        temp3=temp3->next;
        temp4=temp4->next;
    }
    if(temp3!=NULL && temp4!=NULL)
    {
        return temp3->data;
    }
    return -1;
}

