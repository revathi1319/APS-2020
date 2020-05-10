#include <stdio.h>
#include <stdlib.h>
int a,s=0;
struct node
{
    int data;
    struct node *lt;
    struct node *rt;
};
struct node* create(struct node *root,int item)
{
    if(root==NULL)
    {
        root=(struct node *)malloc(sizeof(struct node));
        root->lt=root->rt=NULL;
        root->data=item;
        return root;
    }
    else
    {
        if(item<root->data)
        root->lt=create(root->lt,item);
        if(item>root->data)
        root->rt=create(root->rt,item);
    }
    return(root);
}
struct node* search(struct node *root,int item)
{
if(root==NULL)
{
    printf("data not found\n");
}

     else if(root->data==item)
    {
        printf("data found\n");
        return root;
    }

    else
    {
        if(item<root->data)
        root->lt=search(root->lt,item);
        //printf("%d\t",root->data);
        if(item>root->data)
        root->rt=search(root->rt,item);
    }
    return(root);
}

struct node* findmin(struct node *root)
{
    struct node *temp=root;
    while(temp->lt!=NULL)
    {
        temp=temp->lt;
    }
    return temp;
}
struct node* del(struct node *root,int item)
{
    if(root==NULL)
    return root;

           else if(item<root->data)
        root->lt=del(root->lt,item);
      else  if(item>root->data)
        root->rt=del(root->rt,item);
else
{
if(root->lt==NULL && root->rt==NULL)
{
    free(root);
    root=NULL;
    return root;
}
else if(root->lt==NULL && root->rt!=NULL)
{
    struct node *temp=root->rt;

    free(root);
    return temp;
}
else if(root->rt==NULL && root->lt!=NULL)
{
    struct node *temp=root->lt;
   free(root);
    return temp;
}
else
{
    struct node *temp=findmin(root->rt);
   // printf("%d\n",temp->data);
    root->data=temp->data;
root->rt=del(root->rt,temp->data);
    return root;
}

}
return root;
}
struct node* ans(struct node *root,int item)
{
if(root==NULL)
{
    printf("data not found\n");
}

     else if(root->data==item)
    {
        //printf("data found\n");
        return root;
    }

    else
    {
        if(item<root->data)
        root->lt=ans(root->lt,item);
        printf("%d\t",root->data);
        if(item>root->data)
        root->rt=ans(root->rt,item);
    }
    return(root);
}

void inorder(struct node *root)
{
    if(root!=NULL)
    {
        inorder(root->lt);
        printf("%d\t",root->data);
        inorder(root->rt);
                s=s+root->data;

    }
}
int maxdepth(struct node *root)
{int ldepth,rdepth;
    if(root==NULL)
    return 0;
    else
    {
        ldepth=maxdepth(root->lt);
       // ldepth++;
        rdepth=maxdepth(root->rt);
        //rdepth++;
if(ldepth>rdepth)
return(ldepth+1);
else
return(rdepth+1);
    }
}
int main()
{
    struct node *root;
    root=NULL;
   int c,item,h;
   for(;;)
   {
       printf("1.insert\n2.serach\n3.display\n4.delete\n5.sum\n"
              "6.Height\n7.Ancestors\nenter choice:");
       scanf("%d",&c);
    switch(c)
    {
        case 1:
        printf("Enter data:");
        scanf("%d",&item);
       root=create(root,item);
        break;
        case 2:if(root==NULL)
        {
            printf("tree is empty\n");

        }
        else{
        printf("Enter element:");
        scanf("%d",&item);
        root=search(root,item);
        }
        break;
        case 3:inorder(root);
        printf("\n");
        break;
        case 4:printf("Enter key to delete:");
        scanf("%d",&item);
        root=del(root,item);
        break;
        case 5:s=0;
        inorder(root);
        printf("\nSUM:%d\n",s);
        break;
        case 6:h=maxdepth(root);
        printf("%d is the height\n",h);
        break;
        case 7:if(root==NULL)
        {
            printf("tree is empty\n");

        }
        else{
        printf("Enter element:");
        scanf("%d",&item);
        root=ans(root,item);
        }
        printf("\n");
        break;

    }
   }
    return 0;
}
