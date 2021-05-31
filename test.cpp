#include"RBTree.h"
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> nums{ 15,23,77,24,50};
	RBTree<int> tree;
	for (auto num : nums)
	tree.insert(num);
	//tree.preOrder();
	cout << endl;
	//tree.inOrder();
	cout << endl;
	//tree.postOrder();
	cout << endl;
	//cout << "Search the Node with key 30: ";
	//cout << endl << tree.search(50)->key<< endl;
	//cout << "Delete Node with key 100"<<endl;
	//tree.remove(100);
	tree.preOrder();
	cout << endl;
	cout << "\ Details: \ n";
	tree.print();
	cin.get();
	return 0;
}