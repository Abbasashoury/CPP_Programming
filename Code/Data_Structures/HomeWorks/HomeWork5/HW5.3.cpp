#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int value)
    {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

class BST
{
private:
    Node *root;

    Node *insertRec(Node *node, int value)
    {
        if (node == nullptr)
        {
            return new Node(value);
        }

        if (value < node->data)
        {
            node->left = insertRec(node->left, value);
        }
        else if (value > node->data)
        {
            node->right = insertRec(node->right, value);
        }
        return node;
    }

    bool searchRec(Node *node, int value)
    {
        if (node == nullptr)
        {
            return false;
        }

        if (node->data == value)
        {
            return true;
        }
        else if (value < node->data)
        {
            return searchRec(node->left, value);
        }
        else
        {
            return searchRec(node->right, value);
        }
    }

    Node *findMin(Node *node)
    {
        while (node && node->left != nullptr)
        {
            node = node->left;
        }
        return node;
    }

    Node *deleteRec(Node *node, int value)
    {
        if (node == nullptr)
        {
            return nullptr;
        }

        if (value < node->data)
        {
            node->left = deleteRec(node->left, value);
        }
        else if (value > node->data)
        {
            node->right = deleteRec(node->right, value);
        }
        else
        {
            if (node->left == nullptr)
            {
                Node *temp = node->right;
                delete node;
                return temp;
            }
            else if (node->right == nullptr)
            {
                Node *temp = node->left;
                delete node;
                return temp;
            }

            Node *temp = findMin(node->right);
            node->data = temp->data;
            node->right = deleteRec(node->right, temp->data);
        }

        return node;
    }

    void inorderRec(Node *node)
    {
        if (node != nullptr)
        {
            inorderRec(node->left);
            cout << node->data << " ";
            inorderRec(node->right);
        }
    }

    void deleteTree(Node *node)
    {
        if (node != nullptr)
        {
            deleteTree(node->left);
            deleteTree(node->right);
            delete node;
        }
    }

public:
    BST()
    {
        root = nullptr;
    }

    ~BST()
    {
        deleteTree(root);
    }

    void insert(int value)
    {
        root = insertRec(root, value);
    }

    bool search(int value)
    {
        return searchRec(root, value);
    }

    void remove(int value)
    {
        root = deleteRec(root, value);
    }

    bool update(int oldValue, int newValue)
    {
        if (!search(oldValue))
        {
            return false;
        }

        remove(oldValue);
        insert(newValue);
        return true;
    }

    void printTree()
    {
        inorderRec(root);
        cout << endl;
    }
};

int main()
{
    BST tree;

    cout << "Insert values:\n";
    tree.insert(50);
    tree.insert(30);
    tree.insert(20);
    tree.insert(40);
    tree.insert(70);
    tree.insert(60);
    tree.insert(80);

    cout << "BST after insertion (Inorder Traversal):\n";
    tree.printTree();

    int key = 40;

    cout << "\nSearch " << key << ":\n";
    if (tree.search(key))
        cout << key << " found in BST\n";
    else
        cout << key << " not found in BST\n";

    cout << "\nDelete 20:\n";
    tree.remove(20);
    cout << "BST after deleting 20:\n";
    tree.printTree();

    cout << "\nDelete 30:\n";
    tree.remove(30);
    cout << "BST after deleting 30:\n";
    tree.printTree();

    cout << "\nDelete 50:\n";
    tree.remove(50);
    cout << "BST after deleting 50:\n";
    tree.printTree();

    cout << "\nUpdate 60 -> 65:\n";
    if (tree.update(60, 65))
        cout << "Update successful\n";
    else
        cout << "Update failed\n";

    cout << "BST after update:\n";
    tree.printTree();

    cout << "\nSearch 100:\n";
    if (tree.search(100))
        cout << "100 found in BST\n";
    else
        cout << "100 not found in BST\n";

    return 0;
}