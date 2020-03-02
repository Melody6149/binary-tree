#include "BinaryTree.h"
#include "raylib.h"


BinaryTree::BinaryTree()
{}
void BinaryTree::insert(int a_nValue)
{
	if (m_pRoot->getData = nullptr);
	{
		m_pRoot->setData = a_nValue;
		
	}
	While()
}
TreeNode * BinaryTree::find(int a_nValue)
{
	return nullptr;
}
bool BinaryTree::findNode(int a_nSearchValue, TreeNode ** ppOutNode, TreeNode ** ppOutParent)
{
	return false;
}

void BinaryTree::draw(TreeNode * selected)
{
draw(m_pRoot, 640, 680, 640, selected);
}



void BinaryTree::draw(TreeNode * pNode, int x,int y, int horizontalSpacing, TreeNode * selected)
{
	horizontalSpacing /= 2;

	if (pNode)
	{
		if (pNode->hasLeft())
		{
			DrawLine(x, y, x - horizontalSpacing, y - 80, RED);
			draw(pNode->getLeft(), x - horizontalSpacing, y - 80, horizontalSpacing, selected);
		}
		if (pNode->hasRight())
		{
			DrawLine(x, y, x + horizontalSpacing, y - 80, RED);
			draw(pNode->getRight(), x + horizontalSpacing, y - 80, horizontalSpacing, selected);
		}
		pNode->draw(x, y, (selected == pNode));
	}
}
