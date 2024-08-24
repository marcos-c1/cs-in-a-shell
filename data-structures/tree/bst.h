#ifndef BST_H_
#define BST_H_

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>


typedef void* (*bst_fn_constructor) (void*); 
typedef void (*bst_fn_destructor)(void*);
typedef int (*bst_fn_comparator)(const void*, const void*);

typedef struct Node
{
    struct Node *left;
    struct Node *right;
    void* data;
}Node;

typedef struct BST
{
    Node *root;
    size_t size;
    bst_fn_constructor constructor;
    bst_fn_destructor destructor;
    bst_fn_comparator comparator;
}BST;

/*
 * @brief Creates a new BST
 * @return The pointer to the BST
 */
void createBST(BST **bst, bst_fn_constructor constructor, bst_fn_destructor destructor, bst_fn_comparator comparator);

/* @brief Creates a new Node
* @return The Node itself
 */
Node* createNode(void* data, bst_fn_constructor constructor);

/* @brief A helper function to insert nodes on leaf
* @return The Node itself
*/
Node* insert_helper(BST *bst, Node *node, void* data);

/* @brief Calls the helper insertion function
*/
void insert(BST *bst, void* data);

/* @brief A helper function to find an node
* @return returns true if the node was found else false
*/
int find_helper(BST *bst, Node* node,void *data);

/* @brief Calls the helper finder function
* @return returns true if the node was found else false
*/
int find(BST *bst, void* data);

/* @brief in-order
*/
void inOrder(Node *node);

#endif