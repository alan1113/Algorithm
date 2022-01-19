#ifndef CTREE
#define CTREE
#define MAX_TREE_SIZE 100
template <typename T>
class Cheader{
    public:
    T data;
    Cnode<T> firstchild;
};
template <typename T>
class Cnode{
    public:
    T child;
    Cnode<T> *next;
};
template <typename T>
class Ctree{
    public:
    Cheader<T> nodes[MAX_TREE_SIZE];
    int r,n;
};
#endif