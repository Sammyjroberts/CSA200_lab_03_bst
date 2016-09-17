#ifndef BST_H
#define BST_H
#include <string>		
#include <iostream>
using namespace std;

template <class R>
class Node
{
    template <class T>
	friend class BST;
public:
    Node() : rlink(nullptr), llink(nullptr){}
    Node(R d): data(d), rlink(nullptr), llink(nullptr){}
    ~Node() {
        rlink = nullptr;
        llink = nullptr;
    }
private:
    R data;
    Node *rlink, *llink;
};

template <class T>
class BST
{
public:
    //Default constructor
    BST();
		
    //Destructor
    ~BST();
    
    //Deallocates the memory space occupied by the BST
    void  destroyTree();
    
	// Declaration function insert 
	// (Only one declaration for both recursive and non-recursive)
	// Inserts a given item in the BST
    void insert(T data);
    void inorderTraversal() const;
	
	// Declaration function totalNodes
    //	totalNodes
    int totalNodes() const;
	
private:
	Node<T> *root; //Pointer to the root
    
    //Destroy the BST to which p points
	void destroyTree(Node<T>* &p);
	
	// Declaration overloaded function insert (recursive)
    void insert(Node<T>* &root, T data);
	// Inserts a new node in the tree

	// Declaration overloaded function inorderTraversal
	// Prints the inorder traversal of the BT to which p points
    void inorderTraversal(const Node<T> *p) const;
	// Declaration overloaded function totalNodes
    int totalNodes(Node<T>* root) const;

};

#endif