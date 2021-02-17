#include<iostream>
#include<string>
#include<sstream>
#include<cstdlib>
#include<string>
using namespace std;
/* 二叉表的结点定义 */
template<class ElemType>
struct BinaryTreeNode
{
       ElemType data;
       BinaryTreeNode<ElemType> *lchild, *rchild;
       BinaryTreeNode() : lchild(NULL), rchild(NULL){} //构造函数1，用于构造根结点
       BinaryTreeNode(const ElemType &item, BinaryTreeNode<ElemType> *Lptr = NULL, BinaryTreeNode<ElemType> *Rptr = NULL) //构造函数2，用于构造其他结点
       //函数参数表中的形参允许有默认值，但是带默认值的参数需要放后面
       {
           lchild = Lptr;
           rchild = Rptr;
           data = item;
       }

       ElemType getData(){ return data;}  //取得结点中的数据
       void Setlchild( BinaryTreeNode<ElemType> *link ){ lchild = link; }  //修改结点的左孩子域
       void Setrchild( BinaryTreeNode<ElemType> *link ){ rchild = link; }  //修改结点的右孩子域
       void SetData( ElemType value ){ data = value; }   //修改结点的data域
       BinaryTreeNode<ElemType> * Getlchild() const{ return lchild;} //获取左孩子结点
       BinaryTreeNode<ElemType> * Getrchild() const{ return rchild;} //获取右孩子结点

};

//二叉树
template<class ElemType>
class BinaryTree{
   private:

      BinaryTreeNode<ElemType> *root;   // 头指针
      void BinaryTreeDestroy_Cursive( BinaryTreeNode<ElemType> *T ); //销毁树（递归准备，private）

   public:
      //无参数的构造函数
      BinaryTree():root(NULL){}
      //带参数的构造函数
      BinaryTree(const ElemType &item){root = new BinaryTreeNode<ElemType>(item);}
      //拷贝构造函数

      //重载函数:赋值
      //LinkList<ElemType>& operator=(LinkList<ElemType> &List);
      //销毁树

      //销毁子树
      //bool ChildTreeDestroy(BinaryTreeNode<ElemType> * root, int flag);
      //清空链表
      //bool LinkQueueClear();
      //返回以元素值x为根结点的（子）二叉树的高度（递归）
      //int GetBinaryTreeHeight_Cursive( BinaryTreeNode<ElemType> *T, ElemType &x ) const;
     //统计结点个数
      //int BinaryTreeSize( BinaryTreeNode<ElemType> *T ) const;
      //统计度为2的结点个数
      //int CountDegreeTwo( BinaryTreeNode<ElemType> *T ) const;
      //判断二叉树是否为空
      bool BinaryTreeisEmpty() const{return root == NULL;}
      //获取根结点元素值
      ElemType GetRootData() const{ return root->data;}
      //给元素值为x的结点重新赋值
      //void Assign_NodeData( BinaryTreeNode<ElemType> * root, ElemType &x, ElemType &value );
      //查找值为x的结点的位置（递归）
      //void Location_Cursive( BinaryTreeNode<ElemType> * root, const ElemType &x, BinaryTreeNode<ElemType> * &location );
      //查找值为x的结点的孩子结点的指针（flag=0，左孩子；flag=1，右孩子）
      //BinaryTreeNode<ElemType> * Location_Child( BinaryTreeNode<ElemType> * parent, int flag ) const;
      //在以元素值x为根结点的位置插入子树（外壳，flag=0，左子树；flag=1，右子树）
      //bool Insert_ChildTree( BinaryTreeNode<ElemType> * parent, BinaryTreeNode<ElemType> * child, int flag );
      //设置根结点
      void SetRoot(BinaryTreeNode<ElemType> * p){ root = p;}
      //获取根结点
      BinaryTreeNode<ElemType> * GetRoot() const{ return root;}
      //获取父结点
      //void GetParent_Cursive(BinaryTreeNode<ElemType> * parent, ElemType &x, BinaryTreeNode<ElemType> * &result) const;
      //前序遍历
      bool PreOrderTraverse( BinaryTreeNode<ElemType> *T) const;  //前序遍历（递归）
      //中序遍历
      bool InOrderTraverse( BinaryTreeNode<ElemType> *T) const;  //中序遍历（递归）
      //后序遍历
      bool PostOrderTraverse( BinaryTreeNode<ElemType> *T) const;  //后序遍历（递归）
      //按树状打印出二叉树的形状（递归};
      //void Print_BinaryTree( BinaryTreeNode<ElemType> *root, int i ); //按树状打印出二叉树的形状（递归）
      //建立二叉树的存储结构
      BinaryTreeNode<ElemType>* CreateBinaryTree(ElemType x[], ElemType &empty, int &n);
      //二叉树的层数
     int GetTreeLayers( BinaryTreeNode<ElemType>*T );
     //二叉树度为2的节点个数
     int CountDegreeTwo( BinaryTreeNode<ElemType> *T ) const;
     //二叉树结点个数
     int BinaryTreeSize( BinaryTreeNode<ElemType> *T ) const;


};
int Max(int a,int b)
{
    if(a>b)
        return a;
    return b;
}
template<class ElemType>
void CreateTree(BinaryTree<ElemType> &T, ElemType &empty){
    ElemType  t[100];
    int num = 0;
    string s;
    getline(cin,s);
    for(int i=0;i<s.length();i++)
    {
        if(s[i]!=' ')
            t[num++]=s[i];
    }
    BinaryTreeNode<ElemType> *root;
    num = 0;
    root = T.CreateBinaryTree(t, empty, num);
    T.SetRoot(root);
}
template<class ElemType>
BinaryTreeNode<ElemType>* BinaryTree<ElemType>::CreateBinaryTree(ElemType x[], ElemType &empty, int &n){
        ElemType ch = x[n];
        n++;
        if (ch == empty)
        {
            return NULL;
        }
        else
        {
            BinaryTreeNode<ElemType> *Node = new BinaryTreeNode<ElemType>;
            Node->data = ch;
            Node->lchild = CreateBinaryTree(x, empty, n);
            Node->rchild = CreateBinaryTree(x, empty, n);
            return Node;
        }
}


template<class ElemType>
bool BinaryTree<ElemType>::PreOrderTraverse(BinaryTreeNode<ElemType> *T) const
{
    if(T!=NULL)
    {
        cout<<T->data<<' ';
        PreOrderTraverse(T->lchild);
        PreOrderTraverse(T->rchild);
    }
    return true;
}
template<class ElemType>
bool BinaryTree<ElemType>::InOrderTraverse(BinaryTreeNode<ElemType> *T) const
{
    if(T!=NULL)
    {

        InOrderTraverse(T->lchild);
        cout<<T->data<<' ';
        InOrderTraverse(T->rchild);
    }
    return true;
}
template<class ElemType>
bool BinaryTree<ElemType>::PostOrderTraverse(BinaryTreeNode<ElemType> *T) const
{
    if(T!=NULL)
    {
        PostOrderTraverse(T->lchild);
        PostOrderTraverse(T->rchild);
        cout<<T->data<<' ';
    }
    return true;
}
template<class ElemType>
int BinaryTree<ElemType>::GetTreeLayers( BinaryTreeNode<ElemType> *T )
{
         if(T==NULL)
            return 0;
         else if(T->Getlchild()==NULL&&T->Getrchild()==NULL)
            return 1;
         else
            return(Max(GetTreeLayers(T->Getlchild()),GetTreeLayers(T->Getrchild()))+1);
     }
template<class ElemType>
int BinaryTree<ElemType>::CountDegreeTwo( BinaryTreeNode<ElemType> *T ) const
{
    if(T==NULL)
        return 0;
    else if(T->Getlchild()!=NULL&&T->Getrchild()!=NULL)
        return(1+CountDegreeTwo(T->Getlchild())+CountDegreeTwo(T->Getrchild()));
    else
        return(CountDegreeTwo(T->Getlchild())+CountDegreeTwo(T->Getrchild()));

}
template<class ElemType>
int BinaryTree<ElemType>::BinaryTreeSize( BinaryTreeNode<ElemType> *T ) const
{
    if(T==NULL)
        return 0;
    return(1+BinaryTreeSize(T->Getlchild())+BinaryTreeSize(T->Getrchild()));
}
//获取结点所在位置
bool f=false;
template<class ElemType>
void location(BinaryTreeNode<ElemType>*T,ElemType x,BinaryTreeNode<ElemType>*&t)
{
   if(T!=NULL)
   {
       if(T->getData()==x)
        {
            t=T;
            f=true;
        }
       location(T->Getlchild(),x,t);
       location(T->Getrchild(),x,t);
   }
}
template<class ElemType>
void destroy_tree(BinaryTreeNode<ElemType>*&T)
{
    if(T){
    BinaryTreeNode<ElemType>*lc,*rc;
    lc=T->Getlchild();
    rc=T->Getrchild();
    delete T;
    destroy_tree(lc);
    destroy_tree(rc);
    }
}
template<class ElemType>
void Getchild(BinaryTreeNode<ElemType>*T,ElemType &x,int flag,BinaryTreeNode<ElemType>*&child)
{
    if(T!=NULL)
    {
        if(flag==0&&T->getData()==x&&T->Getlchild())
            child=T->Getlchild();
        if(flag==1&&T->getData()==x&&T->Getrchild())
            child=T->Getrchild();
        Getchild(T->Getlchild(),x,flag,child);
        Getchild(T->Getrchild(),x,flag,child);
    }
}
template<class ElemType>
bool DeleteChild(BinaryTreeNode<ElemType>*T, ElemType &x, int flag)
{
    BinaryTreeNode<ElemType>*S=NULL;
    BinaryTreeNode<ElemType>*child=NULL;
    location(T,x,S);
    if(S==NULL)//未找到x
    {
        return false;
    }
    Getchild(T,x,flag,child);
    if(flag==0)
        {
            if(S->lchild==NULL)
                return false;
            S->lchild=NULL;
        }
    else
        {
            if(S->rchild==NULL)
                return false;
            S->rchild=NULL;
        }
    destroy_tree(child);
    return true;
}
int main()
{
    char ch;
    cin>>ch;
    cin.get();
    BinaryTree<char>T;
    CreateTree(T,ch);
    char x;
    cin>>x;
    int flag;
    cin>>flag;
    bool y=DeleteChild(T.GetRoot(),x,flag);
    if(y)
    {
        cout<<"true"<<endl;
        T.PreOrderTraverse(T.GetRoot());
    cout<<endl;
    T.InOrderTraverse(T.GetRoot());
    cout<<endl;
    T.PostOrderTraverse(T.GetRoot());
    cout<<endl;
    }
    else
    {
        cout<<"false"<<endl;
        T.PreOrderTraverse(T.GetRoot());
    cout<<endl;
    T.InOrderTraverse(T.GetRoot());
    cout<<endl;
    T.PostOrderTraverse(T.GetRoot());
    cout<<endl;
    }
    return 0;
}

