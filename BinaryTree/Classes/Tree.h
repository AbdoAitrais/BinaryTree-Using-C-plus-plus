//
// Created by abdo on 12/20/2022.
//

#ifndef BINARYTREE_TREE_H
#define BINARYTREE_TREE_H
#include <iostream>


using namespace std;
template <typename Type>
class Node{
private:
    Type data;
public:
    Node();
    Node(Type );
    Type get_data();
    void set_data(Type data);
    Node<Type> * left;
    Node<Type> * right;
};

template <typename Type>
class Tree {
private:
    Node<Type> * root;
    void insert(Type , Node<Type> *);
    void showInorder(Node<Type> *);
    void showPreorder(Node<Type> *);
    void showPostorder(Node<Type> *);
    void  showNode(Node<Type> *arb,int niveau_courant);
    bool find(Type ,Node<Type> *);
    Node<Type> * minNode(Node<Type> * leaf);
    Node<Type> * deleteElement(Type , Node<Type> *);
public:
    Tree();
    void insert(Type);
    void deleteElement(Type );
    bool find(Type );
    void showInorder();
    void showPreorder();
    void showPostorder();
    void showGraphicTree();
};


#endif //BINARYTREE_TREE_H
