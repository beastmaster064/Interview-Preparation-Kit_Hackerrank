

/* 
The structure of the node is

typedef struct node {

	int freq;
    char data;
    node * left;
    node * right;
    
} node;

*/


void decode_huff(node * root, string s) {
    
    string decode;
    node* t=root;

    for(int i=0;i<s.size();i++){

        if(s[i]=='1')
            t=t->right;
        else
            t=t->left;

        if(t->right==nullptr && t->left==nullptr){
            decode.push_back(t->data);
            t=root;
        }    
    }

    cout<<decode;
}


