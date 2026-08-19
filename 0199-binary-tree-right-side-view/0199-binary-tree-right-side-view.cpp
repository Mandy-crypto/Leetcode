class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> result;
        if (!root) return result;
        
        // Stack stores pairs of (node, level)
        stack<pair<TreeNode*, int>> st;
        st.push({root, 0});
        
        while (!st.empty()) {
            auto [node, level] = st.top();
            st.pop();
            
            if (level == result.size()) {
                result.push_back(node->val);
            }
            
            // Push left first so right is processed first (LIFO)
            if (node->left) {
                st.push({node->left, level + 1});
            }
            if (node->right) {
                st.push({node->right, level + 1});
            }
        }
        
        return result;
    }
};