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

  
}