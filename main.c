#include <stdio.h>
#include <stdlib.h>
struct treenode{
struct treenode*leftptr;
struct treenode*rightPtr;
int data;
};
typedef struct treenode treenode;
typedef struct treenode* treenodeptr;

void insert(treenodeptr*treeptr,int value)
{
    if(*treeptr==NULL)
    {
        *treeptr=malloc(sizeof(treenode));
        (*treeptr)->data=value;
        (*treeptr)->leftptr=NULL;
        (*treeptr)->rightPtr=NULL;
    }
    else
        {
            if(value>((*treeptr)->data))
            {
                insert(&((*treeptr)->rightPtr),value);
            }
            else if (value<((*treeptr)->data))
                 {
                insert(&((*treeptr)->leftptr),value);
            }
}
}

void inOrder( treenodeptr treePtr )
 {
if ( treePtr != NULL ) {
inOrder( treePtr->leftptr);
printf( "%3d", treePtr->data );
inOrder( treePtr->rightPtr );
}
 }

int main()
{
treenodeptr rootptr=NULL;
int i;
int item;
int a[7]={6,7,4,12,2,5,11};
for(i=0;i<7;++i)
{
    insert(&rootptr,a[i]);
}
inOrder(rootptr);
    return 0;
}
