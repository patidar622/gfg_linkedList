int ans=0;
int find_solution(Node* root)
{
    if(root==NULL)
    return 0;
    
    int l1=find_solution(root->left);
    int r1=find_solution(root->right);
    
    ans=max(ans,l1+r1+1);
    return max(l1,r1)+1;
}
int diameter(Node* node) {
    ans=0;
    find_solution(node);
    return ans;
}

