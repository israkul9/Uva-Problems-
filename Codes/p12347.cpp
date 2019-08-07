//Bismillah_hir_rahmanir_rahim

#include<bits/stdc++.h>
using namespace std;


struct node
{
    int data;
    struct node *left;
    struct node *right;

};


typedef struct node aNode;

aNode *root;


void InsertTree (int value)
{
    aNode *temp = (aNode*)malloc(sizeof(aNode));
    temp->data = value;
    temp->left = NULL;
    temp->right = NULL;


    if(root == NULL)
    {
        root = temp;
    }
    else
    {

        aNode *t = root;

        while(true)
        {

            if(temp->data <= t->data)
            {
                /// left_sub_tree


                if(t->left == NULL)
                {
                    t->left = temp;
                    break;
                }
                else
                {

                    t = t->left;
                }


            }
            else
            {

                ///right_sub_tree

                if(t->right == NULL)
                {
                    t->right = temp;
                    break;
                }
                else
                {
                    t = t->right;
                }


            }

        }

    }

}


void PostOrderPrint( aNode *Root_Node )
{
    if(Root_Node != NULL)
    {
        PostOrderPrint(Root_Node->left);
        PostOrderPrint(Root_Node->right);
        cout<< Root_Node->data <<endl;

    }
}



int main()
{

    int a;
    root = NULL;


    while(cin>>a)
    {

        InsertTree(a);

    }
    PostOrderPrint(root);


    return 0;
}

