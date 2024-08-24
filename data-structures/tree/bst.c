#include "bst.h"
#include "../utils/utils.h"

void createBST(BST **bst, bst_fn_constructor constructor, bst_fn_destructor destructor, bst_fn_comparator comparator)
{
    (*bst) = malloc(sizeof(BST));
    (*bst)->root = NULL;
    (*bst)->size = 0;
    (*bst)->constructor = constructor;
    (*bst)->destructor = destructor;
    (*bst)->comparator = comparator;

}

Node* createNode(void* data, bst_fn_constructor constructor)
{
    Node *node = malloc(sizeof(Node));
    node->left = NULL;
    node->right = NULL;
    node->data = constructor(data);
    return node;
}

Node* insert_helper(BST *bst, Node *node, void* data)
{
    if (node == NULL){
        bst->size++;
        node = createNode(data, bst->constructor);
    }

    else if (bst->comparator(data, node->data) < 0){
        node->left = insert_helper(bst, node->left, data);
    }
    else {
        node->right = insert_helper(bst, node->right, data);
    }

    return node;
}

void insert(BST *bst, void* data)
{
    bst->root = insert_helper(bst, bst->root, data);
}

int find_helper(BST *bst, Node* node,void *data){
    if(node == NULL){
        return 0;
    }
    if(bst->comparator(data,node->data)<0){
        return find_helper(bst,node->left,data);
    }
    else if(bst->comparator(data,node->data)>0){
        return find_helper(bst,node->right,data);
    }
    return 1;
}

int find(BST *bst, void* data)
{
    return find_helper(bst, bst->root, data);
}

void inOrder(Node *node)
{
    if (node != NULL){
        inOrder(node->left);
        printf("%d -> ", *(int*) node->data);
        inOrder(node->right);
    }
}

/*
int main()
{
    BST *bst;
    createBST(&bst, int_constructor, int_destructor, int_comparator);
    int valores[5] = {1, 2, 3, 4, 5};
    int value = 2;
    for (short int i = 0; i < 5; ++i){
        insert(bst, &valores[i]);
    }

    return 0;
}

*/
