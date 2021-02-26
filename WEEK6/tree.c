typedef struct node
{
    int number;
    struct node *left;
    struct node *right;
}
node;

bool search (node *tree)
{
    if (tree == NULL)
    {
        return 1;
    }
    else if (node *tree > 50)
    {
        return search (tree->left)
    }
    else if (node *tree < 50)
    {
        return search (tree->right)
    }
    else
    {
        return 0;
    }
}
