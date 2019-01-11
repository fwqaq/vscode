#include <stdio.h>
#include <stdlib.h>
int i=0,min;
int j=1;
int x=1;
typedef struct BiNode {
	int nData;
	struct BiNode * lchild, * rchild;
} BiNode, * BiTree;
int createBiTreeByString (BiTree * p, int m, int n, int hp){	


	if((hp-(j++)*m)<=0||(hp-(x++)*n)>0){
		
		 i++;
		 	    
	}	
		if((hp-(j++)*m)>0||(hp-(x++)*n)<=0){
		
		 i++;
		 	    
	}
		if((hp-(j++)*m)<=0||(hp-(x++)*n)<=0){
		
		 i=i+2;
		 	    
	}
	else{
		*p = (BiNode *) malloc (sizeof(BiNode));
	    (*p)->nData = hp;
	    BiTree *lp=p;
     	(*p) ->lchild = (*p)->rchild = NULL;
		createBiTreeByString( & ((*p)->lchild), m,n, hp-(j++)*m);
		createBiTreeByString( & ((*p)->rchild), m,n, hp-(x++)*n);
	}	
	return 0; 
}

void InOrderTraverse (BiTree  p, void (*visit) (int) ) {//中根遍历 OK
 	if ( p == NULL )
	return;

	InOrderTraverse(p->lchild, visit); // 遍历左子树	
    (*visit)(p->nData); // 访问根结点
	InOrderTraverse (p->rchild, visit); // 遍历右子树	
  


}
void print(int ch) {
	printf("%d ",ch);
}
int main()
{
	int m,n,hp;
	scanf("%d %d %d",&m,&n,&hp);
	BiTree  pRoot   = NULL; 	
 createBiTreeByString (&pRoot,m,n,hp);
    //printf("%d",GetLeaves(pRoot)); 
    		InOrderTraverse(pRoot, print);	
    printf("%d",i);
     
	return 0;
 } 
