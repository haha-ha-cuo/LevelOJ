#include <iostream>
#include <stdlib.h>

using namespace std;

class Tree{
    public:
    int val;
    Tree* children[5000];
    int ptr=0;

    void push_back(Tree* t){
        children[ptr++] = t;
    }

    bool empty(){
        if(ptr == 0){
            return true;
        }else{
            return false;
        }
    }
};

void createTree(Tree*current,Tree *t,int index){
    if(index == current->val){
        current->push_back(t);
        return;
    }
    for(int i=0;i < current->ptr;i++){
        createTree(current->children[i],t,index);
    }
}

int cnt=0;

void count(Tree* current){
    if(current->empty()){
        cnt++;
        return;
    }
    for(int i=0;i < current->ptr;i++){
        count(current->children[i]);
    }
}

void freeall(Tree* current){
    if(current->empty()){
        free(current);
        return;
    }
    for(int i=0;i < current->ptr;i++){
        free(current->children[i]);
    }
    free(current);
}

int main(){
    int n;
    cin>>n;
    Tree* T;
    T=new Tree();
    T->val = 1;

    for(int i=0;i<n-1;i++){
        int index,val;
        cin>>index>>val;
        Tree *temp;
        temp=new Tree();
        temp->val = val;
        createTree(T, temp, index);
    }

    count(T);
    freeall(T);
    cout<<cnt;
    return 0;
}