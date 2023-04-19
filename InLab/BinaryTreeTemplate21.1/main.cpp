#include <iostream>
#include "BinaryTree.h"
using namespace std;

int main(){
  //create instance of binary tree
  BinaryTree<int> tree;

  //insert some values
  cout << "Inserting nodes" << endl;
  tree.insertNode(5);
  tree.insertNode(6);
  tree.insertNode(10);
  tree.insertNode(11);
  tree.insertNode(13);

  //display the nodes
  cout << "Here are the values in the tree: " << endl;
  tree.displayInOrder();
  cout << endl;

  //delete the 6 node
  cout << "Deleting 6..." << endl;
  tree.remove(6);

  //delete 11
  cout << "Deleting 11..." << endl;
  tree.remove(11);

  //display the nodes again
  cout << "Here is the new list: " << endl;
  tree.displayInOrder();
  cout << endl;

  return 0;
}