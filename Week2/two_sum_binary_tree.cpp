int Solution::t2Sum(TreeNode* A, int B) {
   stack<TreeNode*> s1;
   stack<TreeNode*> s2;
   TreeNode *root=A;
   while(root)
   {
       s1.push(root);
       root=root->left;
   }
   root=A;
    while(root)
   {
       s2.push(root);
       root=root->right;
   }
   while(!s1.empty()&&!s2.empty())
   {
      TreeNode *lefttop=s1.top();
      TreeNode *righttop=s2.top();
      if(lefttop->val+righttop->val==B&&lefttop!=righttop)
      {
          return true;
      }
      else if(lefttop->val+righttop->val>b)
      {
          s2.pop();
          righttop=righttop->left;
          while(righttop)
          {
              s2.push(righttop);
              righttop=righttop->right;
          }
      }
      else
      {
        s1.pop();
        lefttop=lefttop->right;
        while(lefttop)
        {
            s1.push(lefttop);
            lefttop=lefttop->left;
        }
      }
   }
   return 0;
}
