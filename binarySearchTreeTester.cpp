#include <iostream>
#include <iomanip>
#include "binarySearchTree.h"

using namespace std;

void print( int& x );
void update( int& x );

int main( ) {
	bSearchTreeType<int> treeRoot;

	treeRoot.insert( 78 );
	treeRoot.insert( 32 );
	treeRoot.insert( 89 );
	treeRoot.insert( 46 );
	treeRoot.insert( 28 );
	treeRoot.insert( 60 );
	treeRoot.insert( 98 );
	treeRoot.insert( 53 );

	cout << "Tree nodes in inorder: " << setw( 6 );
	treeRoot.inorderTraversal( print );

	cout << endl << "Tree nodes in preorder: " << setw( 5 );
	treeRoot.preorderTraversal( print );

	cout << endl << "Tree nodes in postorder: " << setw( 4 );
	treeRoot.postorderTraversal( print );

	cout << endl << endl;

	cout << "Tree Height: " << treeRoot.treeHeight( ) << endl;

	cout << "Number or Nodes: " << treeRoot.treeNodeCount( ) << endl;
	cout << "Number or Leaves: " << treeRoot.treeLeavesCount( ) << endl;

	return 0;
}

void print( int& x ) {
	cout << "idx:" << x << "  ";
}

void update( int& x ) {
	x *= 2;
}