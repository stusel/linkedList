// linkedList.h
// Author Moritz Stötzner
// created 03.12.18

// structs
typedef struct tNODE
{
    struct tNODE* pNext;
    void* pData;
} tNode;

typedef struct
{
    tNode* pFirst;
    tNode* pCurr;
} tList

// prototypes
tList* createList();
int insertFirst(tList* pl, void* pNewData);
void* getFirst(tList* pl);
void* getNext(tList* pl)
int removeFirst(tList* pl);
int deleteList(tList* pl);
