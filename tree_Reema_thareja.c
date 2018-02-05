#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<windows.h>
#include<math.h>
#include<stdlib.h>

struct node
{

    int info;
    struct node *left;
    struct node *right;
};
struct node *root;
void create_node()
{
    struct node *root;
    root=NULL;
}
struct node *insert_element(struct node *root,int num)
{
    struct node *ptr,*preptr,*next_ptr;
    ptr=(struct node *)malloc(sizeof(struct node*));
    ptr->left=NULL;
    ptr->info=num;
    ptr->right=NULL;
    if(root==NULL)
    {
        root=ptr;
        root->right=NULL;
        root->left=NULL;
    }
    else
    {
        next_ptr=NULL;
         preptr=root;
        while(preptr!=NULL)
        {
            next_ptr=preptr;
            if(num<preptr->info)
             {
                 preptr=preptr->left;
             }
             else {preptr=preptr->right;
        }

    }
    if(num<next_ptr->info){next_ptr->left=ptr;}
    else {next_ptr->right=ptr;}
}
return root;
}
void preorder_traversal()
{
    struct node*root;
      if(root==NULL)
    {
        printf("there is no element");
    }
    if(root!=NULL)
    {
        printf("%d\n",root->info);
        preorder_traversal(root->left);
        preorder_traversal(root->right);
    }
}


void postorder_traversal()
{
    struct node*root;
    if(root==NULL)
    {
        printf("there is no element");
    }
    if(root!=NULL)
    {
        postorder_traversal(root->left);
        postorder_traversal(root->right);
        printf("%d\n",root->info);
    }
}
void inorder_traversal()
{
    struct node *root;
      if(root==NULL)
    {
        printf("there is no element");
    }
    if(root!=NULL)
    {

        inorder_traversal(root->left);
        printf("%d\n",root->info);
         inorder_traversal(root->right);

    }

}

int main()
{

    int option,val;
    struct node *root;
    void create_node();
     root=insert_element(root,6);
       root=insert_element(root,2);
        root=insert_element(root,1);
         root=insert_element(root,67);
          root=insert_element(root,22);
           root=insert_element(root,24);
           root=insert_element(root,221);

    do
    {
        printf("\n  ******* MAIN MENU ********");
        printf("\n 1.insert element");
        printf("\n 2.preorder traversal");
        printf("\n 3.postorder traversal");
        printf("\n 4.inorder traversal");
        printf("\n 5.EXIT");
        printf("\n*****Enter your option: \n");
        scanf("%d",&option);
        switch(option)
        {
        case 1:
            printf("\n Enter the value of tree");
            scanf("%d",&val);
            insert_element(root,val);
            break;
        case 2:
            printf("\n The elements of tree are");
            preorder_traversal();
            break;
        case 3:
             printf("\n The elements of tree are");
            postorder_traversal();
            break;
        case 4:
             printf("\n The elements of tree are");
            inorder_traversal();
            break;
        }

    }
    while(option!=5);
        return 0;

}



























