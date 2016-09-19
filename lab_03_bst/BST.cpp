/*
 Roberts, Sammy
 CS A200
 September 19, 2016
 
 lab_03_bst
 */
#include "BST.h"
//Default constructor
template <class T>
Node<T>::Node() {
    llink = nullptr;
    rlink = nullptr;
}
template <class T>
Node<T>::~Node() {
    llink = nullptr;
    rlink = nullptr;
}
template <class T>
BST<T>::BST()
{
    root = nullptr;
}

//Destructor
template <class T>
BST<T>::~BST() {
    destroyTree(root);
}

//Deallocates the memory space occupied by the BST
template <class T>
void  BST<T>::destroyTree()
{
    destroyTree(root);
}

// Declaration function insert
// (Only one declaration for both recursive and non-recursive)
// Inserts a given item in the BST
template <class T>
void BST<T>::insert(T data) {
    insert(root, data);
//        try {
//            if(this->root == nullptr) {
//                root = new Node<T>;
                //root->data = data
//            }
//            else {
//                Node<T> *traverser = root;
//                Node<T> *prev = nullptr;
//    
//                while(traverser != nullptr) {
//                    if (traverser->data > data) {
//                        prev = traverser;
//                        traverser = traverser->llink;
//                    }
//                    else if(traverser->data < data) {
//                        prev = traverser;
//                        traverser = traverser->rlink;
//                    }
//                    else {
//                        throw invalid_argument("");
//                    }
//                }
//    
//                if (prev->data > data) {
//                    prev->llink = new Node<T>;
//                    prev->llink->data = data;
//                }
//                else if(prev->data < data) {
//                    prev->rlink = new Node<T>;
//                    prev->rlink->data = data
//                }
//    
//                prev = nullptr;
//                traverser = nullptr;
//                delete prev;
//                delete traverser;
//            }
//        }
//        catch(invalid_argument e) {
//            cout << "Duplicate" << endl;
//        }
}
template <class T>
void BST<T>::inorderTraversal() const
{
    if (root == nullptr)
        cerr << "There is no tree.";
    else
    {
        inorderTraversal(root);
    }
}

// Declaration function totalNodes
//	totalNodes
template <class T>
int BST<T>::totalNodes() const
{
    if (root == nullptr)
        return 0;
    else
        return totalNodes(root);
}
template <class T>
void BST<T>::inorderTraversal(const Node<T> *p) const {
    if(p != nullptr) {
        inorderTraversal(p->llink);
        cout << p->data << " ";
        inorderTraversal(p->rlink);
    }
}
// Declaration overloaded function totalNodes
template <class T>
int BST<T>::totalNodes(Node<T>* root) const {
    int i = 0;
    if(root !=nullptr) {
        i+=1;
        if(root->rlink != nullptr) {
            i+=totalNodes(root->rlink);
        }
        if(root->llink != nullptr) {
            i+=totalNodes(root->llink);
        }
    }
    
    return i;
}
//recursive insert
template <class T>
void BST<T>::insert(Node<T>* &root, T data){
    if(root == nullptr) {
        
        root = new Node<T>;
        root->data = data;
    }
    else if(root->data < data) {
        insert(root->rlink, data);
    }
    else if(root->data > data) {
        insert(root->llink, data);
    }
    else {
        cout << "dupe";
    }

}
template <class T>
void BST<T>::destroyTree(Node<T>* &p) {
    if(p != nullptr)
    {
        destroyTree(p->llink);
        destroyTree(p->rlink);
        delete p;
        p = nullptr;
    }
}
