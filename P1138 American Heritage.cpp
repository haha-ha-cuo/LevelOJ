#include <cstddef>
#include <iostream>
#include <string>
#include <utility>

using namespace std;

class Tree{
    public:
    char val=' ';
    Tree* right;
    Tree* left;
};

int i = 0;

pair<string,string> split(string str,char ch){
    string right,left;
    size_t pos=0;
    while((pos = str.find(ch))!=string::npos){
        left = str.substr(0,pos);
        str.erase(0,pos+1);
    }
    right = str;
    return {left,right};
}

void create(Tree* t,string inorder,string preorder){
    if(inorder.size()==1){
        t->val = inorder[0];
        t->left=new Tree();
        t->right=new Tree();
        i++;
        return;
    }else if(inorder.size()==0){
        return;
    }
    auto[left,right] = split(inorder,preorder[i]);
    t->val=preorder[i];
    t->left=new Tree();
    t->right=new Tree();
    i++;
    create(t->left,left,preorder);
    create(t->right,right,preorder);
}

string ans="";

void postorder(Tree *t){
    if(t->left->val==' ' && t->right->val == ' '){
        ans+=t->val;
        delete t;
        return;
    };

    if(t->left->val != ' '){
        postorder(t->left);
    }

    if(t->right->val != ' '){
        postorder(t->right);
    }

    ans+=t->val;
    delete t;
}

int main(){
    string inorder,preorder;
    cin>>inorder>>preorder;
    Tree* t;
    t = new Tree();
    create(t,inorder,preorder);
    postorder(t);
    cout<<ans;
    return 0;
}