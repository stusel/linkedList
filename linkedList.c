// linkedList.c
// Author Moritz Stötzner
// created 03.12.18

// includes
#include <stdlib.h>
#include <malloc.h>
#include "linkedList.h"

tList* createList()
{
    tList* pList = malloc(sizeof(tList));
    
    if (pList)
    {
        pList->pFirst = pList->pCurr = NULL;
    }
    
    return pList;
}

int insertFirst(tList* pl, void* pNewData)
{
    tList* ptmp = malloc(sizeof(tNode));
    
    if (ptmp)
    {
        ptmp->pData = pNewData;
        if (pl->pFirst)
        {
            ptmp->pNext = pl->pFirst;
            pl->pFirst = ptmp;
        }
        else
        {
            pl->pFirst = ptmp;
            ptmp->pNext = NULL;
        }
        
        return (int) (long) ptmp;
    }
}

void* getFirst(tList pl)
{
    void* pret = NULL;
    
    if
}
