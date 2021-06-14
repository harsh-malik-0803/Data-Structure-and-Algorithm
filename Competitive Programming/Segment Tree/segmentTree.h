
void build_Tree(int* arr,int *tree,int start,int end,int treenode){
    if(start==end){
        return;
    }
    int mid= (start+mid)/2;
    build_Tree(arr,tree,start,mid,2*treenode);
    build_Tree(arr,tree,mid+1,end,2*treenode+1);
    
    tree[treenode]=tree[2*treenode]+ tree[2*treenode+1];
}

void update_tree(int*arr ,int *tree,int start,int end,int treenode,int idx,int value){
    
    if(start==end){
        arr[idx]=value;
        tree[treenode]=value;
        return;
    }
    int mid=(start+end)/2;
    if(mid> idx) 
    update_tree(arr,tree,start,mid,treenode,idx,value);

    else
    update_tree(arr,tree,mid+1,end,treenode,idx,value);

    tree[treenode]=tree[2*treenode]+tree[2*treenode+1];
}

int query(int*tree,int start,int end,int left,int right,int treenode){

    // completely inside
    if(start>=left && end <= right)
    return tree[treenode];

    // completely outside
    if(start>right || end<left){
        return 0;
    }

    // partially inside and outside
    int mid=(start+end)/2;

    int ans1=query(tree,start,mid,left,right,2*treenode);
    int ans2=query(tree,mid+1,end,left,right,2*treenode+1);
    
    return ans1+ans2;
}

