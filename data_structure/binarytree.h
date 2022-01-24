#ifndef BITREE
#define BITREE
template <typename T>
class BInode
{
public:
    T data;
    BInode<T> *lchild,*rchild;
};

#endif