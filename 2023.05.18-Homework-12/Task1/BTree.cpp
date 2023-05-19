#include "BTree.h"

void BTree::Insert(Node*& root, Node* node)
{
	if (root == nullptr)
	{
		root = node;
		return;
	}
	if (root->data > node->data)
	{
		return Insert(root->left, node);
	}
	if (root->data < node->data)
	{
		return Insert(root->right, node);
	}
	if (root->data == node->data)
	{
		return;
	}
}

void BTree::Print(std::ostream& stream, Node*& root, int depth)
{
	if (root == nullptr)
	{
		return;
	}
	Print(stream, root->right, depth + 1);
	for (int i = 0; i < depth; ++i)
	{
		stream << "\t";
	}
	stream << root->data << std::endl;
	Print(stream, root->left, depth + 1);
}

Node*& BTree::GetNode(Node*& root, int element)
{
	if (root == nullptr || root->data == element)
	{
		return root;
	}
	if (root->data > element)
	{
		return GetNode(root->left, element);
	}
	if (root->data < element)
	{
		return GetNode(root->right, element);
	}
}

Node* BTree::Extract(Node*& root)
{
	Node* extracted = root;
	if (root->right != nullptr) {
		Node* temp = root->right;
		while (temp->left != nullptr) {
			temp = temp->left;
		}
		if (root->left != nullptr) {
			temp->left = root->left;
		}
		root = root->right;
	}
	else {
		if (root->left != nullptr) {
			root = root->left;
		}
		else {
			root = nullptr;
		}
	}
	return extracted;
}

void BTree::Add(int data)
{
	Insert(root, new Node(data));
}

void BTree::Remove(int data)
{
	Node*& node = GetNode(root, data);
	if (node != nullptr)
	{
		Node* extracted = Extract(node);
		delete extracted;
	}
}

bool BTree::Contains(int data)
{
	return (GetNode(root, data) != nullptr);
}

std::ostream& operator<<(std::ostream& stream, BTree& tree)
{
	stream << "__________________" << std::endl;
	if (tree.root == nullptr)
	{
		stream << "EMPTY" << std::endl;
	}
	else
	{
		tree.Print(stream, tree.root);
	}
	stream << "__________________" << std::endl;
	return stream;
}