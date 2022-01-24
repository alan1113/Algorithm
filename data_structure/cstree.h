#ifndef CSTREE
#define CSTREE
#define MAX_TREE_SIZE 100

template <typename T>
class CSnode
{
public:
    T data;
    CSnode<T> *firstchild, *rightchild;
};
template <typename T>
class cstree
{
public:
    CSnode<T> *root;
};

#endif