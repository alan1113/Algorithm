#ifndef TREE
#define TREE
#define MAX_TREE_SIZE 100
template <typename T>
class node{
    public:
    T data;
    int parent;
};
template <typename T>
class tree{
    public:
    node<T> nodes[MAX_TREE_SIZE];
    int r,n;
};
#endif