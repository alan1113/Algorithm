#ifndef PTREE
#define PTREE
#define MAX_TREE_SIZE 100
template <typename T>
class Pnode{
    public:
    T data;
    int parent;
};
template <typename T>
class Ptree{
    public:
    Pnode<T> nodes[MAX_TREE_SIZE];
    int r,n;
};
#endif