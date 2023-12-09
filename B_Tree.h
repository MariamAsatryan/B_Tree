#pragma once
//Besides BTreeNode class do we need BTree class which will include root?
// we need BTree,so we can pass it to user!

class BTreeNode
{
public:
	virtual void Insert(int val) = 0;
	virtual void Remove(int val) = 0;
	virtual int FindValue(int val) = 0;
public:
	int capacity;
private:
	virtual void SplitChild() = 0; //what arguments should we pass to this function?
	virtual void MergeChild(int index) = 0; 
	virtual bool IsLeaf(BTreeNode is_leaf) = 0;
	virtual void Traverse() = 0; //what if we make seperate class for 
	                             //Traverse and 3 methods for it's 3 versions?
private:
	// how to initialize these variables?
	//do we need make capacity for every node? or it's just for parent node? 
	                //if it's not then how the user decides children node's capacity 
	                
	int* value; //pointer to array
	int curr_num; 
	bool is_leaf;
};



class Traverse {
private:
	//Postorder
	virtual void PostOrder() = 0;
	//PreOrder
	virtual void PreOrder() = 0;
	//InOrder
	virtual void InOrder() = 0;
};

class Search {
public:

};

