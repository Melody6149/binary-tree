| Melody Eastin |
| :---      |
| s198012   |
| Code design and data structures |
| Binary Tree Documentation |

# 1. Requirements

- Create a binary tree that can add remove and search for nodes. It must display the binary tree. It must use raylib to display the binary tree.

## II. Design

- The programe makes a binary tree and can add things to it and remove things from it. It can also display the binary tree on the raylib window.

1. ### Object Information

    **File**: main.ccp
        Description: This is where all the functions are called to make the binary tree.

    **File**: TreeNode.h
        Description: holds the functions used for the tree nodes

            Name: TreeNode
                Decription: Constructor used to make a node
            
            Name: hasLeft
                Description: Used to see if the node has a child node on the left of it.

            Name: hasRight
                Description: Used to see if the node has a child node on the right of it.

            Name: setDate
                Description: used to set the data in a node

            Name: setLeft
                Description: used to set the left child of the node

            Name: setRight
                Description: used to set the right child of the node

            Name: draw
                Description: used to draw a node

            Name: m_value
                Description: stores the data the node is storing

            Name: m_left
                Description: stores the left child

            Name: m_right
                Description: stores the right child

    **File**: BinaryTree.h
        Description: Holds the functions for the binary tree

            Name: isEmpty
                Description: used to see if the node is empty

            Name: insert
                Descripion: used to insert a node

            Name: remove
                Description: used to delete a node

            Name: find
                Description: used to find a node

            Name: draw
                Description: used to draw the binary tree

            Name: BinaryTree
                Description: constructor used to make the binary tree

            Name: findNode
                Description: used to find a node

            Name: m_pRoot
                Description: stores the root of the binary tree
