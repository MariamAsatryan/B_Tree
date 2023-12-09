#include <iostream>
#include "B_Tree.h"

class BTreeNode
{
public:
	virtual void Insert(int val) {};
	virtual void Remove(int val) {};
	virtual int FindValue(int val) {};
public:
    int capacity; 
private:
	virtual void SplitChild() {};
	virtual void MergeChild(int index) {};
	virtual bool IsLeaf(BTreeNode is_leaf) {};
	virtual void Traverse() {};
private:	
	int* value; 
	int curr_num = 0; 
	bool is_leaf;
};
int main() {

	return 0;
}
