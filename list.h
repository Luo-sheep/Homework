typedef int ElemType;
#define MAXSIZE 100

struct _seqlist{
    ElemType elem[MAXSIZE];
    int last;
};
typedef struct _seqlist SeqList;