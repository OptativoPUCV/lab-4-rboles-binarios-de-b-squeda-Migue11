#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "treemap.h"

typedef struct TreeNode TreeNode;


struct TreeNode {
    Pair* pair;
    TreeNode * left;
    TreeNode * right;
    TreeNode * parent;
};

struct TreeMap {
    TreeNode * root;
    TreeNode * current;
    int (*lower_than) (void* key1, void* key2);
};

int is_equal(TreeMap* tree, void* key1, void* key2){
    if(tree->lower_than(key1,key2)==0 &&  
        tree->lower_than(key2,key1)==0) return 1;
    else return 0;
}


TreeNode * createTreeNode(void* key, void * value) {
    TreeNode * new = (TreeNode *)malloc(sizeof(TreeNode));
    if (new == NULL){
        return NULL;
    }
    new->pair = (Pair *)malloc(sizeof(Pair));
    new->pair->key = key;
    new->pair->value = value;
    new->parent = new->left = new->right = NULL;
    return new;
}

TreeMap * createTreeMap(int (*lower_than) (void* key1, void* key2)) {
    // TreeMap * tree = (TreeMap *)malloc(sizeof(TreeMap));
    // if (tree == NULL){
    //     return NULL;
    // }    
    // tree->root = NULL;
    // tree->current = NULL;
    // tree->lower_than = lower_than;
    // return tree;
    return NULL;
}


void insertTreeMap(TreeMap * tree, void* key, void * value){

    // TreeNode *current = tree->root; // asignamos al current el root del arbol

    // while (1){
    //     if (is_equal(tree, key, current->pair->key)){ // retornamos si es que ya existe
    //         return;
    //     }

    //     if (tree->lower_than(key, current->pair->key)){
    //         if (current->left == NULL){ // si el hijo izquierdo es nulo, creamos el nodo
    //             current->left = createTreeNode(key, value);
    //             current->left->parent = current; // asignamos el padre al nuevo nodo
    //             tree->current = current->left; // asignamos el current al nuevo nodo (hijo izquierdo)
    //             return;
    //         }
    //         current = current->left;
    //     }else {
    //         if (current->right == NULL) { // aqui creamos el nodo si el hijo derecho es nulo
    //             current->right = createTreeNode(key, value); // creamos el nodo
    //             current->right->parent = current; // asignamos el padre al nuevo nodo
    //             tree->current = current->right; // asignamos el current al nuevo nodo (hijo derecho)
    //             return;
    //         }
    //         current = current->right;
    //     }
    // }
}
       

TreeNode * minimum(TreeNode * x){
    // if(x == NULL){
    //     return NULL;
    // }
    // while(x->left != NULL){
    //     x = x->left;
    // }
    // return x;
    return NULL;
}


void removeNode(TreeMap * tree, TreeNode* node){
    return;
}

void eraseTreeMap(TreeMap * tree, void* key){
    // if (tree == NULL || tree->root == NULL){
    //     return;
    // }

    // if (searchTreeMap(tree, key) == NULL){
    //     return;
    // }
    // TreeNode* node = tree->current;
    // removeNode(tree, node);

}




Pair * searchTreeMap(TreeMap * tree, void* key) {
//     if (tree == NULL || tree->root == NULL){
//         return NULL;
//     }
//     TreeNode* current = tree->root;
//     while(current != NULL){
//         if(is_equal(tree, key, current->pair->key)){ // haremos el ciclo hasta que la key sea igual a la key del nodo actual
//             tree->current = current;
//             return current->pair;
//         }else if(tree->lower_than(key, current->pair->key)){
//             current = current->left;
//         }else{
//             current = current->right;
//         }    
//     }

}


Pair * upperBound(TreeMap * tree, void* key){

}


Pair * firstTreeMap(TreeMap * tree) {
//     if (tree == NULL || tree->root == NULL){
//         return NULL;
//     }
//     tree->current = minimum(tree->root);
//     return tree->current->pair;

}

 Pair * nextTreeMap(TreeMap * tree){
//     if (tree == NULL || tree->current == NULL){
//         return NULL;
//     }
//     if(tree->current->right != NULL){ 
//         tree->current = minimum(tree->current->right);
//         return tree->current->pair;
//     }else{ 
//         TreeNode* current = tree->current;
//         while(current->parent != NULL && current == current->parent->right){
//             current = current->parent;
//         }
//         tree->current = current->parent; 
//         return tree->current->pair;
//     }
}   
