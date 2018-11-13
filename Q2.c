/*Q2
Please implement a program that lists the nodes of a random binary tree by nodes at the same depth.
For example, the following tree:

                 2
				/ \
			   1    3
              / \  / \
			 0  7 9   1
would output
(2)
(1), (3)
(0), (7), (9), (1)

			 
*/

struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
 };
int height(struct TreeNode* p)
{
   if(p== null)return 0;
   else {
     int lh=height(p->left);
     int rh=height(p->right);
     if( lh > rh) { return (lh +1); }
     else { return ( rh+1 ); }
	}
}
int tree(struct TreeNode* p, int h) {
    if(p==null) return;
    h=height(p);
}

