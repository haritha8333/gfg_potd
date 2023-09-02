//Leaf under budget

//Given a binary tree and a budget. Assume you are at the root of the tree(level 1), you need to maximise the count of leaf nodes you can visit in your budget if the cost of visiting a leaf node is equal to the level of that leaf node.

class Solution
{
public:
    int getCount(Node *root, int k)
    {
        //code here
        vector<pair<int,int>>v;
        pair<int,int>p;
        queue<Node*>q;
        q.push(root);
        int cnt=0;
        while(!q.empty()){
            // cnt++;
           
            // p.first=front
            
            int n=q.size();
            cnt++;
            for(int i=0;i<n;i++)
            {
                 Node* front=q.front();
            q.pop();
                if(front->left)
                q.push(front->left);
                
                if(front->right)
                q.push(front->right);
                
                if(front->left==NULL&&front->right==NULL&&k>=cnt){
                    // cout<<cnt<<" "<<front->data<<endl;
                        p.first=cnt;
                        p.second=front->data;
                        v.push_back(p);
                        k-=cnt;
                }
                // p.second=
            }
        }
        return v.size();
    //  sort(v.begin(),v.end())
    // for(int i=0)        
    }
};
