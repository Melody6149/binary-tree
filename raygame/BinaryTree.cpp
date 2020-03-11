#include "BinaryTree.h"
#include "raylib.h"


BinaryTree::BinaryTree()
{}
BinaryTree::~BinaryTree()
{
}
bool BinaryTree::isEmpty()
{
	if (m_pRoot == nullptr)
	{
		return true;
	}
	if (m_pRoot != nullptr)
	{
		return false;
	}
}
void BinaryTree::insert(int a_nValue)
{
	if (isEmpty())
	{
		m_pRoot = new TreeNode(a_nValue);
		return;
	}
		TreeNode* current = m_pRoot;
		TreeNode* parentnode = m_pRoot;
		current = m_pRoot;
		while (current != nullptr)
		{
			if (a_nValue < current->getData())
			{
				parentnode = current;
				current = current->getLeft();
				
			}
			else if (a_nValue > current->getData())
			{
				parentnode = current;
				current = current->getRight();
				
			}
			else if (a_nValue == current->getData())
			{
				return;
			}
		}
		if (a_nValue < parentnode->getData())
		{
			current = new TreeNode(a_nValue);
			parentnode->setLeft(current);
		}
		if (a_nValue > parentnode->getData())
		{
			current = new TreeNode(a_nValue);
			parentnode->setRight(current);
		}
}

TreeNode * BinaryTree::find(int a_nValue)
{
	
	return nullptr;
}
bool BinaryTree::findNode(int a_nSearchValue, TreeNode ** ppOutNode, TreeNode ** ppOutParent)
{
	//Set the current node to the root
	TreeNode* current = m_pRoot;
	TreeNode* parent = m_pRoot;
	//While the current node is not null
	while(current != nullptr)
	{
		if (a_nSearchValue = current->getData)
		{
			*ppOutNode = current;
			*ppOutParent = current;
			return true;
			//If the search value equals the current node value,
			//Return the current node and its parent
		}
		
		//Otherwise
		else if (a_nSearchValue < current->getData)
		{
			//If the search value is less than the current node
				//Set the current node to the left child
			parent == current;
			current == current->getLeft();
		}
		else if (a_nSearchValue > current->getData)
		{
			//Otherwise
				//Set the current node to the right child
			parent == current;
			current == current->getRight();
		}
			
	//End while
	//If the loop exits, then a match was not found, so return false
	}
	return false;
}
void BinaryTree::remove(int a_nValue)
{
	TreeNode* current;
	TreeNode* parent;
	TreeNode* minimum;
	TreeNode* parentminimum;
	if (findNode(a_nValue, &current, &parent))
	{
		if (current->getRight != nullptr)
		{
			while (minimum->getLeft != nullptr)
			{
				parentminimum = minimum;
				minimum = current->getLeft;
			}
			current->setData(minimum->getData);
			if (current == parent->getLeft())
			{
				
			}
		}
	}
}

void BinaryTree::draw(TreeNode * selected)
{
draw(m_pRoot, 640, 100, 640, selected);
}



void BinaryTree::draw(TreeNode * pNode, int x,int y, int horizontalSpacing, TreeNode * selected)
{
	horizontalSpacing /= 2;

	if (pNode)
	{
		if (pNode->hasLeft())
		{
			DrawLine(x, y, x - horizontalSpacing, y + 80, RED);
			draw(pNode->getLeft(), x - horizontalSpacing, y + 80, horizontalSpacing, selected);
		}
		if (pNode->hasRight())
		{
			DrawLine(x, y, x + horizontalSpacing, y + 80, RED);
			draw(pNode->getRight(), x + horizontalSpacing, y + 80, horizontalSpacing, selected);
		}
		pNode->draw(x, y, (selected == pNode));
	}
}
