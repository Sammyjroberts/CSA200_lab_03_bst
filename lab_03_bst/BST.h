#ifndef BST_H
#define BST_H
#include <string>		
#include <iostream>
using namespace std;

template <class T>
class Node
{
    template <class R>
	friend class BST;
public:
    Node() : rlink(nullptr), llink(nullptr){}
    Node(T d): data(d), rlink(nullptr), llink(nullptr){}
	~Node(){}
private:
    T data;
    Node *rlink, *llink;
};

template <class R>
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
    void insert(R data);
    void inorderTraversal() const;
	
	// Declaration function totalNodes
    //	totalNodes
    int totalNodes() const;
	
private:
	Node<R> *root; //Pointer to the root
    
    //Destroy the BST to which p points
	void destroyTree(Node<R>* &p);
	
	// Declaration overloaded function insert (recursive)
    void insert(Node<R>* &root, R data);
	// Inserts a new node in the tree

	// Declaration overloaded function inorderTraversal
	// Prints the inorder traversal of the BT to which p points
    void inorderTraversal(const Node<R> *p) const;
	// Declaration overloaded function totalNodes
    int totalNodes(Node<R>* root) const;

};

#endif