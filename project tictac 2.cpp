 #include<bits/stdc++.h>
using namespace std;
int flag=0,fla=0;
int u,l;
int cpy[3][3];
void searchh(int *u,int *l)
{
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
        {
          if(cpy[i][j]==2)
          {
              *u=i;
              *l=j;
              cpy[i][j]=NULL;
          }
        }


}
bool check(int board[][3],int i,int j)
{

if(board[i][j]==NULL&&i>=0&&i<3&&j>=0&&j<3)
return true;
else return false;
}

void put(int board[][3],int k,int l)
{
board[k][l]=2;
}


void display(int board[][3]){
cout<<endl;
for(int i=0;i<=2;i++){
for(int j=0;j<=2;j++)
{
cout<<board[i][j];
if(j<2)
cout<<" | ";
}if(i<2)
cout<<endl<<"----------"<<endl;
}}


int checkwin(int board[][3],int me,int bot)
{
    if(board[0][0]==me && board[0][1]==me && board[0][2]==me) return me;
    else if(board[1][0]==me && board[1][1]==me && board[1][2]==me) return me;
    else if(board[2][0]==me && board[2][1]==me && board[2][2]==me) return me;
    else if(board[0][0]==me && board[1][0]==me && board[2][0]==me) return me;
    else if(board[0][1]==me && board[1][1]==me && board[2][1]==me) return me;
    else if(board[0][2]==me && board[1][2]==me && board[2][2]==me) return me;
    else if(board[0][0]==me && board[1][1]==me && board[2][2]==me) return me;
    else if(board[0][2]==me && board[1][1]==me && board[2][0]==me) return me;


    else if(board[0][0]==bot && board[0][1]==bot && board[0][2]==bot) return bot;
    else if(board[1][0]==bot && board[1][1]==bot && board[1][2]==bot) return bot;
    else if(board[2][0]==bot && board[2][1]==bot && board[2][2]==bot) return bot;
    else if(board[0][0]==bot && board[1][0]==bot && board[2][0]==bot) return bot;
    else if(board[0][1]==bot && board[1][1]==bot && board[2][1]==bot) return bot;
    else if(board[0][2]==bot && board[1][2]==bot && board[2][2]==bot) return bot;
    else if(board[0][0]==bot && board[1][1]==bot && board[2][2]==bot) return bot;
    else if(board[0][2]==bot && board[1][1]==bot && board[2][0]==bot) return bot;

else return 3;
}
int main()
{
    int u1,u2,u3,u4,u5,u6,u7,u8,u9,l1,l2,l3,l4,l5,l6,l7,l8,l9;
int i,j,board[3][3],me=2,bot=1,turn=2,hmt=0,k,l;
for(int i=0;i<=2;i++)
for(int j=0;j<=2;j++)
board[i][j]=NULL;
for(int i=0;i<3;i++)
    for(int j=0;j<3;j++)
    cpy[i][j]=NULL;
cout<<endl;
///---------**-----------

while(1)
{
    cout<<endl;
display(board);
 cout<<endl;
if(turn==me)
{
cout<<endl<<"player terms so fill value "<<endl;
cout<<"enter row no. and column no. ->> ";
cin>>k>>l;
cout<<endl;
    int h=check(board,k,l);
if(h==true)
{
    cout<<endl;
board[k][l]=2;
cpy[k][l]=2;
turn=bot;
/*if(hmt==0)
{
    u=k,l=l;
}*/
hmt++;
}
else
cout<<endl<<"you enter wrong position enter again "<<endl;
}
else if(turn==bot)
{
//cout<<endl<<"bot terms so fill value ";
//cout<<endl<<"enter row no. and column no. ->> ";
//cin>>k>>l;
//cout<<endl;
/*if(hmt==1)
{
    int u,l;
   searchh(&u,&l)

}*/
cout<<endl<<" hmt "<<hmt;
if(hmt==1)
{
    char y;
       int kwo,lwo;
    searchh(&u1,&l1);
    cout<<endl<<"u1 & l1 "<<u1<<" "<<l1<<endl;
    if(u1==1&&l1==1)
    {
     y:
   kwo=rand();
   lwo=rand();
   if(u1!=kwo&&l1!=lwo)
    board[kwo][lwo]=1;
   else goto y;
   u5=kwo,l5=lwo;
    }
    else
    board[1][1]=1,u5=1,l5=1;

}
else if(hmt==3)
{
//if(check(board,k,l)==true)
    cout<<"true in bot "<<endl;
    searchh(&u2,&l2);
    cout<<endl<<"u2 & l2 "<<u2<<" "<<l2<<endl;
            if(u1==0&&l1==0)
            {
                if(u2==0&&l2==1&&board[0][2]==NULL)
                board[0][2]=1,u6=0,l6=2,cout<<"dinesh";
                else if(u2==0&&l2==2&&board[0][1]==NULL)
                board[0][1]=1,u6=0,l6=1;
                else if(u2==1&&l2==0&&board[2][0]==NULL)
                board[2][0]=1,u6=2,l6=0;
                else if(u2==2&&l2==0&&board[1][0]==NULL)
                board[1][0]=1,u6=1,l6=0;
                else if(u2==1&&l2==1&&board[2][2]==NULL)
                board[2][2]=1,u6=2,l6=2;
                else if(u2==2&&l2==2&&board[1][1]==NULL)
                board[1][1]=1,u6=1,l6=1;
                ///      ******************* special case
                else if(u2==1&&l2==2&&board[0][2]==NULL)
                board[0][2]=1,u6=0,l6=2;
                else if(u2==2&&l2==1&&board[2][0]==NULL)
                board[2][0]=1,u6=2,l6=0;
                ///****************************** most special cases **********************
                else if(u2==2&&l2==2&&board[1][1]!=NULL)
                board[1][2]=1,u6=1,l6=2;
            }
            else if(u1==0&&l1==1)
            {
                if(u2==0&&l2==0&&board[0][2]==NULL)
                board[0][2]=1,u6=0,l6=2;
                else if(u2==0&&l2==2&&board[0][0]==NULL)
                board[0][0]=1,u6=0,l6=0;
                else if(u2==1&&l2==0&&board[0][0]==NULL)/// hello dinesh whatsup
                board[0][0]=1,u6=0,l6=0;
                else if(u2==1&&l2==2&&board[0][2]==NULL)
                board[0][2]=1,u6=0,l6=2;
                else if(u2==2&&l2==0&&board[0][0]==NULL)
                board[0][0]=1,u6=0,l6=0;
                else if(u2==2&&l2==2&&board[0][2]==NULL)
                board[0][2]=1,u6=0,l6=2;
                else if(u2==1&&l2==1&&board[2][1]==NULL)
                board[2][1]=1,u6=2,l6=1;
                else if(u2==2&&l2==1&&board[1][1]==NULL)
                board[1][1]=1,u6=1,l6=1;

                ///      ******************* special case********************************
                //else if(u2==1&&l2==0&&board[0][0]==NULL)
                //board[0][0]=1,u6=0,l6=0;
                //else if(u2==1&&l2==2&&board[0][2]==NULL)
                //board[0][2]=1,u6=0,l6=2;
                ///****************************** most special cases **********************
                else if(u2==2&&l2==1&&board[1][1]!=NULL)
                board[2][2]=1,u6=2,l6=2;


            }
            else if(u1==0&&l1==2)
            {
                if(u2==0&&l2==1&&board[0][0]==NULL)
                board[0][0]=1,u6=0,l6=0;
                else if(u2==0&&l2==0&&board[0][1]==NULL)
                board[0][1]=1,u6=0,l6=1;
                else if(u2==1&&l2==2&&board[2][2]==NULL)
                board[2][2]=1,u6=0,l6=0;
                else if(u2==2&&l2==2&&board[1][2]==NULL)
                board[1][2]=1,u6=1,l6=2;
                else if(u2==1&&l2==1&&board[2][0]==NULL)
                board[2][0]=1,u6=2,l6=0;
                else if(u2==2&&l2==0&&board[1][1]==NULL)
                board[1][1]=1,u6=1,l6=1;
                ///      ******************* special case*****************************

                else if(u2==2&&l2==1&&board[2][2]==NULL)
                board[2][2]=1,u6=2,l6=2;
                else if(u2==1&&l2==0&&board[0][0]==NULL)
                board[0][0]=1,u6=0,l6=0;
                ///****************************** most special cases **********************
                else if(u2==2&&l2==0&&board[1][1]!=NULL)
                board[1][0]=1,u6=1,l6=0;

            }
            else if(u1==1&&l1==0)
            {
                if(u2==0&&l2==0&&board[2][0]==NULL)
                board[2][0]=1,u6=2,l6=0;
                else if(u2==2&&l2==0&&board[0][0]==NULL)
                board[0][0]=1,u6=0,l6=0;
                else if(u2==1&&l2==1&&board[1][2]==NULL)
                board[1][2]=1,u6=1,l6=2;
                else if(u2==1&&l2==2&&board[1][1]==NULL)
                board[1][1]=1,u6=1,l6=1;
                else if(u2==0&&l2==2&&board[0][0]==NULL)
                board[0][0]=1,u6=0,l6=0;
                else if(u2==2&&l2==2&&board[2][0]==NULL)
                board[2][0]=1,u6=2,l6=0;
                ///      ******************* special case************************************
                else if(u2==0&&l2==1&&board[0][0]==NULL)
                board[0][0]=1,u6=0,l6=0;
                else if(u2==2&&l2==1&&board[2][0]==NULL)
                board[2][0]=1,u6=2,l6=0;
                ///****************************** most special cases **********************
                else if(u2==1&&l2==2&&board[1][1]!=NULL)
                board[0][0]=1,u6=0,l6=0;

            }
            else if(u1==1&&l1==1)
            {
                if(u2==0&&l2==1&&board[2][1]==NULL)
                board[2][1]=1,u6=2,l6=1;
                else if(u2==2&&l2==1&&board[0][1]==NULL)
                board[0][1]=1,u6=0,l6=1;
                else if(u2==1&&l2==0&&board[1][2]==NULL)
                board[1][2]=1,u6=1,l6=2;
                else if(u2==1&&l2==2&&board[1][0]==NULL)
                board[1][0]=1,u6=1,l6=0;
                else if(u2==0&&l2==0&&board[2][2]==NULL)
                board[2][2]=1,u6=2,l6=2;
                else if(u2==2&&l2==2&&board[0][0]==NULL)
                board[0][0]=1,u6=0,l6=0;
                else if(u2==0&&l2==2&&board[2][0]==NULL)
                board[2][0]=1,u6=2,l6=0;
                else if(u2==2&&l2==0&&board[0][2]==NULL)
                board[0][2]=1,u6=0,l6=2;


            }else if(u1==1&&l1==2)
            {
                if(u2==1&&l2==1&&board[1][0]==NULL)
                board[1][0]=1,u6=1,l6=0;
                else if(u2==1&&l2==0&&board[1][1]==NULL)
                board[1][1]=1,u6=1,l6=1;
                else if(u2==0&&l2==2&&board[2][2]==NULL)
                board[2][2]=1,u6=2,l6=2;
                else if(u2==2&&l2==2&&board[0][2]==NULL)
                board[0][2]=1,u6=0,l6=2;
                ///      ******************* special case************************************
                else if(u2==0&&l2==1&&board[0][2]==NULL)
                board[0][2]=1,u6=0,l6=2;
                else if(u2==2&&l2==1&&board[2][2]==NULL)
                board[2][2]=1,u6=2,l6=2;
                ///****************************** most special cases **********************
                else if(u2==1&&l2==0&&board[1][1]!=NULL)
                board[2][0]=1,u6=2,l6=0;
                else if(u2==0&&l2==0&&board[0][2]==NULL)
                board[0][2]=1,u6=0,l6=2;
                else if(u2==2&&l2==0&&board[2][2]==NULL)
                board[2][2]=1,u6=2,l6=2;
            }
            else if(u1==2&&l1==0)
            {

                if(u2==2&&l2==1&&board[2][2]==NULL)
                board[2][2]=1,u6=2,l6=2;
                else if(u2==2&&l2==2&&board[2][1]==NULL)
                board[2][1]=1,u6=2,l6=1;
                else if(u2==1&&l2==0&&board[0][0]==NULL)
                board[0][0]=1,u6=0,l6=0;
                else if(u2==0&&l2==0&&board[1][0]==NULL)
                board[1][0]=1,u6=1,l6=0;
                else if(u2==1&&l2==1&&board[0][2]==NULL)
                board[0][2]=1,u6=0,l6=2;
                else if(u2==0&&l2==2&&board[1][1]==NULL)
                board[1][1]=1,u6=1,l6=1;
                ///      ******************* special case*****************************

                else if(u2==0&&l2==1&&board[0][0]==NULL)
                board[0][0]=1,u6=0,l6=0;
                else if(u2==1&&l2==2&&board[2][2]==NULL)
                board[2][2]=1,u6=2,l6=2;
                ///****************************** most special cases **********************
                else if(u2==0&&l2==2&&board[1][1]!=NULL)
                board[1][0]=1,u6=1,l6=0;
            }
            else if(u1==2&&l1==1)
            {

                if(u2==2&&l2==0&&board[2][2]==NULL)
                board[2][2]=1,u6=2,l6=2;
                else if(u2==2&&l2==2&&board[2][0]==NULL)
                board[2][0]=1,u6=2,l6=0;
                else if(u2==0&&l2==0&&board[2][0]==NULL)
                board[2][0]=1,u6=2,l6=0;
                else if(u2==1&&l2==1&&board[0][1]==NULL)
                board[0][1]=1,u6=0,l6=1;
                else if(u2==0&&l2==1&&board[1][1]==NULL)
                board[1][1]=1,u6=1,l6=1;
                ///      ******************* special case************************************
                else if(u2==1&&l2==0&&board[2][0]==NULL)
                board[2][0]=1,u6=2,l6=0;
                else if(u2==1&&l2==2&&board[2][2]==NULL)
                board[2][2]=1,u6=2,l6=2;
                ///****************************** most special cases **********************
                else if(u2==0&&l2==1&&board[1][1]!=NULL)
                board[0][0]=1,u6=0,l6=0;
                else if(u2==0&&l2==2&&board[2][2]==NULL)
                board[2][2]=1,u6=2,l6=2;
                //else if(u2==0&&l2==0&&board[2][0]==NULL)
                //board[2][0]=1,u6=2,l6=0;
            }
            else if(u1==2&&l1==2)
            {

                if(u2==2&&l2==0&&board[2][1]==NULL)
                board[2][1]=1,u6=2,l6=1;
                else if(u2==2&&l2==1&&board[2][0]==NULL)
                board[2][0]=1,u6=2,l6=0;
                else if(u2==0&&l2==2&&board[1][2]==NULL)
                board[1][2]=1,u6=1,l6=2;
                else if(u2==1&&l2==2&&board[0][2]==NULL)
                board[0][2]=1,u6=0,l6=2;
                else if(u2==1&&l2==1&&board[0][0]==NULL)
                board[0][0]=1,u6=0,l6=0;
                else if(u2==0&&l2==0&&board[1][1]==NULL)
                board[1][1]=1,u6=1,l6=1;
                ///      ******************* special case*****************************

                else if(u2==0&&l2==1&&board[0][2]==NULL)
                board[0][2]=1,u6=0,l6=2;
                else if(u2==1&&l2==0&&board[2][0]==NULL)
                board[2][0]=1,u6=2,l6=0;
                ///****************************** most special cases **********************
                else if(u2==0&&l2==0&&board[1][1]!=NULL)
                board[1][2]=1,u6=1,l6=2;
            }
}
else if(hmt==5)
{
searchh(&u3,&l3);

    cout<<endl<<"u3 & l3 "<<u3<<" "<<l3<<endl;
        ///**************************************the combination of u1 l1 with u3 l3************----------->>>>>

            ///******************************************************************************************/////////
            if(u5==0&&l5==0)
            {
                cout<<"1";
                if(u6==0&&l6==1&&board[0][2]==NULL)
                board[0][2]=1,flag=1;
                else if(u6==0&&l6==2&&board[0][1]==NULL)
                board[0][1]=1,flag=1;
                else if(u6==1&&l6==0&&board[2][0]==NULL)
                board[2][0]=1,flag=1;
                else if(u6==2&&l6==0&&board[1][0]==NULL)
                board[1][0]=1,flag=1;
                else if(u6==1&&l6==1&&board[2][2]==NULL)
                board[2][2]=1,flag=1;
                else if(u6==2&&l6==2&&board[1][1]==NULL)
                board[1][1]=1,flag=1;
               /* ///      ******************* special case
                else if(u6==1&&l6==2&&board[0][2]==NULL)
                board[0][2]=1,flag=1;
                else if(u6==2&&l6==1&&board[2][0]==NULL)
                board[2][0]=1,flag=1;
                ///****************************** most special cases **********************
                else if(u6==2&&l6==2&&board[1][1]!=NULL)
                board[1][2]=1,flag=1;*/
            }
            else if(u5==0&&l5==1)
            {
                cout<<"2";
                if(u6==0&&l6==0&&board[0][2]==NULL)
                board[0][2]=1,flag=1;
                else if(u6==0&&l6==2&&board[0][0]==NULL)
                board[0][0]=1,flag=1;
                else if(u6==1&&l6==0&&board[1][2]==NULL)
                board[1][2]=1,flag=1;
                else if(u6==1&&l6==2&&board[1][0]==NULL)
                board[1][0]=1,flag=1;
                else if(u6==2&&l6==0&&board[2][2]==NULL)
                board[2][2]=1,flag=1;
                else if(u6==2&&l6==2&&board[2][0]==NULL)
                board[2][0]=1,flag=1;
                else if(u6==1&&l6==1&&board[2][1]==NULL)
                board[2][1]=1,flag=1;
                else if(u6==2&&l6==1&&board[1][1]==NULL)
                board[1][1]=1,flag=1;

                /*///      ******************* special case********************************
                else if(u6==1&&l6==0&&board[0][0]==NULL)
                board[0][0]=1,flag=1;
                else if(u6==1&&l6==2&&board[0][2]==NULL)
                board[0][2]=1,flag=1;
                ///****************************** most special cases **********************
                else if(u6==2&&l6==1&&board[1][1]!=NULL)
                board[2][2]=1,flag=1;*/


            }
            else if(u5==0&&l5==2)
            {
                cout<<"3";
                if(u6==0&&l6==1&&board[0][0]==NULL)
                board[0][0]=1,flag=1;
                else if(u6==0&&l6==0&&board[0][1]==NULL)
                board[0][1]=1,flag=1;
                else if(u6==1&&l6==2&&board[2][2]==NULL)
                board[1][0]=1,flag=1;
                else if(u6==2&&l6==2&&board[1][2]==NULL)
                board[1][2]=1,flag=1;
                else if(u6==1&&l6==1&&board[2][0]==NULL)
                board[2][0]=1,flag=1;
                else if(u6==2&&l6==0&&board[1][1]==NULL)
                board[1][1]=1,flag=1;
               /* ///      ******************* special case*****************************

                else if(u6==2&&l6==1&&board[2][2]==NULL)
                board[2][2]=1,flag=1;
                else if(u6==1&&l6==0&&board[0][0]==NULL)
                board[0][0]=1,flag=1;
                ///****************************** most special cases **********************
                else if(u6==2&&l6==0&&board[1][1]!=NULL)
                board[1][0]=1,flag=1;*/

            }
            else if(u5==1&&l5==0)
            {
                cout<<"4";
                if(u6==0&&l6==0&&board[2][0]==NULL)
                board[2][0]=1,flag=1;
                else if(u6==2&&l6==0&&board[0][0]==NULL)
                board[0][0]=1,flag=1;
                else if(u6==1&&l6==1&&board[1][2]==NULL)
                board[1][2]=1,flag=1;
                else if(u6==1&&l6==2&&board[1][1]==NULL)
                board[1][1]=1,flag=1;
                /*///      ******************* special case************************************
                else if(u6==0&&l6==1&&board[0][0]==NULL)
                board[0][0]=1,flag=1;
                else if(u6==2&&l6==1&&board[2][0]==NULL)
                board[2][0]=1,flag=1;
                ///****************************** most special cases **********************
                else if(u6==1&&l6==2&&board[1][1]!=NULL)
                board[0][0]=1,flag=1;*/

            }
            else if(u5==1&&l5==1)
            {
                cout<<"6455";
                if(u6==0&&l6==1&&board[2][1]==NULL)
                board[2][1]=1,flag=1,cout<<"6456";
                else if(u6==2&&l6==1&&board[0][1]==NULL)
                board[0][1]=1,flag=1,cout<<"6455";
                else if(u6==1&&l6==0&&board[1][2]==NULL)
                board[1][2]=1,flag=1,cout<<"6455";
                else if(u6==1&&l6==2&&board[1][0]==NULL)
                board[1][0]=1,flag=1,cout<<"6455";
                else if(u6==0&&l6==0&&board[2][2]==NULL)
                board[2][2]=1,flag=1,cout<<"6455";
                else if(u6==2&&l6==2&&board[0][0]==NULL)
                board[0][0]=1,flag=1,cout<<"6455";
                else if(u6==0&&l6==2&&board[2][0]==NULL)
                board[2][0]=1,flag=1,cout<<"6455";
                else if(u6==2&&l6==0&&board[0][2]==NULL)
                board[0][2]=1,flag=1,cout<<"6455";


            }else if(u5==1&&l5==2)
            {
                cout<<"7";
                if(u6==1&&l6==1&&board[1][0]==NULL)
                board[1][0]=1,flag=1;
                else if(u6==1&&l6==0&&board[1][1]==NULL)
                board[1][1]=1,flag=1;
                else if(u6==0&&l6==2&&board[2][2]==NULL)
                board[2][2]=1,flag=1;
                else if(u6==2&&l6==2&&board[0][2]==NULL)
                board[0][2]=1,flag=1;
               /* ///      ******************* special case************************************
                else if(u6==0&&l6==1&&board[0][2]==NULL)
                board[0][2]=1,u6=0,l6=2,flag=1;
                else if(u6==2&&l6==1&&board[2][2]==NULL)
                board[2][2]=1,flag=1;
                ///****************************** most special cases **********************
                else if(u6==1&&l6==0&&board[1][1]!=NULL)
                board[2][0]=1,flag=1;*/
            }
            else if(u5==2&&l5==0)
            {
                 cout<<"8";
                if(u6==2&&l6==1&&board[2][2]==NULL)
                board[2][2]=1,flag=1;
                else if(u6==2&&l6==2&&board[2][1]==NULL)
                board[2][1]=1,flag=1;
                else if(u6==1&&l6==0&&board[0][0]==NULL)
                board[0][0]=1,flag=1;
                else if(u6==0&&l6==0&&board[1][0]==NULL)
                board[1][0]=1,flag=1;
                else if(u6==1&&l6==1&&board[0][2]==NULL)
                board[0][2]=1,flag=1;
                else if(u6==0&&l6==2&&board[1][1]==NULL)
                board[1][1]=1,flag=1;
               /* ///      ******************* special case*****************************

                else if(u6==0&&l6==1&&board[0][0]==NULL)
                board[0][0]=1,flag=1;
                else if(u6==1&&l6==2&&board[2][2]==NULL)
                board[2][2]=1,flag=1;
                ///****************************** most special cases **********************
                else if(u6==0&&l6==2&&board[1][1]!=NULL)
                board[1][0]=1,flag=1;*/
            }
            else if(u5==2&&l5==1)
            {
                 cout<<"9";
                if(u6==2&&l6==0&&board[2][2]==NULL)
                board[2][2]=1,flag=1;
                else if(u6==2&&l6==2&&board[2][0]==NULL)
                board[2][0]=1,flag=1;
                else if(u6==1&&l6==1&&board[0][1]==NULL)
                board[0][1]=1,flag=1;
                else if(u6==0&&l6==1&&board[1][1]==NULL)
                board[1][1]=1,flag=1;
               /* ///      ******************* special case************************************
                else if(u6==1&&l6==0&&board[2][0]==NULL)
                board[2][0]=1,flag=1;
                else if(u6==1&&l6==2&&board[2][2]==NULL)
                board[2][2]=1,flag=1;
                ///****************************** most special cases **********************
                else if(u6==0&&l6==1&&board[1][1]!=NULL)
                board[0][0]=1,flag=1;*/
            }
            else if(u5==2&&l5==2)
            {
                  cout<<"10";
                if(u6==2&&l6==0&&board[2][1]==NULL)
                board[2][1]=1,flag=1;
                else if(u6==2&&l6==1&&board[2][0]==NULL)
                board[2][0]=1,flag=1;
                else if(u6==0&&l6==2&&board[1][2]==NULL)
                board[1][2]=1,flag=1;
                else if(u6==1&&l6==2&&board[0][2]==NULL)
                board[0][2]=1,flag=1;
                else if(u6==1&&l6==1&&board[0][0]==NULL)
                board[0][0]=1,flag=1;
                else if(u6==0&&l6==0&&board[1][1]==NULL)
                board[1][1]=1,flag=1;
               /* ///      ******************* special case*****************************

                else if(u6==0&&l6==1&&board[0][2]==NULL)
                board[0][2]=1,flag=1;
                else if(u6==1&&l6==0&&board[2][0]==NULL)
                board[2][0]=1,flag=1;
                ///****************************** most special cases **********************
                else if(u6==0&&l6==0&&board[1][1]!=NULL)
                board[1][2]=1,u6=1,l6=2,flag=1;*/
            }
            ///******************************************************************************************/////////
           if(flag!=1)
           {
            if(u3==0&&l3==0)
            {
                cout<<"1";
                if(u1==0&&l1==1&&board[0][2]==NULL)
                board[0][2]=1,u7=0,l7=2;
                else if(u1==0&&l1==2&&board[0][1]==NULL)
                board[0][1]=1,u7= 0,l7= 1;
                else if(u1==1&&l1==0&&board[2][0]==NULL)
                board[2][0]=1,u7= 2,l7=0 ;
                else if(u1==2&&l1==0&&board[1][0]==NULL)
                board[1][0]=1,u7= 1,l7=0 ;
                else if(u1==1&&l1==1&&board[2][2]==NULL)
                board[2][2]=1,u7= 2,l7=2 ;
                else if(u1==2&&l1==2&&board[1][1]==NULL)
                board[1][1]=1,u7= 1,l7= 1 ;
                else if(u1==1&&l1==2&&board[2][0]==NULL)
                board[2][0]=1,u7= 2,l7= 0 ;
                else if(u1==2&&l1==1&&board[0][2]==NULL)
                board[0][2]=1,u7= 0,l7= 2 ;
                //cout<<"10";
                else if(u2==0&&l2==1&&board[0][2]==NULL)
                board[0][2]=1,u7= 0,l7= 2;
                else if(u2==0&&l2==2&&board[0][1]==NULL)
                board[0][1]=1,u7= 0,l7= 1;
                else if(u2==1&&l2==0&&board[2][0]==NULL)
                board[2][0]=1,u7= 2,l7= 0;
                else if(u2==2&&l2==0&&board[1][0]==NULL)
                board[1][0]=1,u7=1 ,l7=0 ;
                else if(u2==1&&l2==1&&board[2][2]==NULL)
                board[2][2]=1,u7=2 ,l7= 2;
                else if(u2==2&&l2==2&&board[1][1]==NULL)
                board[1][1]=1,u7= 1,l7=1 ;

            }
            else if(u3==0&&l3==1)
            {
                cout<<"2";
                if(u1==0&&l1==0&&board[0][2]==NULL)
                board[0][2]=1,u7=0 ,l7=2 ;
                else if(u1==0&&l1==2&&board[0][0]==NULL)
                board[0][0]=1,u7=0 ,l7= 0;
                else if(u1==1&&l1==0&&board[1][2]==NULL)
                board[1][2]=1,u7= 1,l7= 2;
                else if(u1==1&&l1==2&&board[1][0]==NULL)
                board[1][0]=1,u7= 1,l7= 0;
                else if(u1==2&&l1==0&&board[2][2]==NULL)
                board[2][2]=1,u7= 2,l7= 2;
                else if(u1==2&&l1==2&&board[2][0]==NULL)
                board[2][0]=1,u7= 2,l7= 0;
                else if(u1==1&&l1==1&&board[2][1]==NULL)
                board[2][1]=1,u7= 2,l7=1 ;
                else if(u1==2&&l1==1&&board[1][1]==NULL)
                board[1][1]=1,u7= 1,l7=1 ;
                //cout<<"11";
                else if(u2==0&&l2==0&&board[0][2]==NULL)
                board[0][2]=1,u7=0 ,l7=2 ;
                else if(u2==0&&l2==2&&board[0][0]==NULL)
                board[0][0]=1,u7=0 ,l7= 0;
                else if(u2==1&&l2==0&&board[1][2]==NULL)
                board[1][2]=1,u7= 1,l7= 2;
                else if(u2==1&&l2==2&&board[1][0]==NULL)
                board[1][0]=1,u7= 1,l7=0 ;
                else if(u2==2&&l2==0&&board[2][2]==NULL)
                board[2][2]=1,u7= 2,l7= 2;
                else if(u2==2&&l2==2&&board[2][0]==NULL)
                board[2][0]=1,u7= 2,l7= 0;
                else if(u2==1&&l2==1&&board[2][1]==NULL)
                board[2][1]=1,u7= 2,l7= 1;
                else if(u2==2&&l2==1&&board[1][1]==NULL)
                board[1][1]=1,u7=1 ,l7= 1;


            }
            else if(u3==0&&l3==2)
            {
                cout<<"3";
                if(u1==0&&l1==1&&board[0][0]==NULL)
                board[0][0]=1,u7=0 ,l7=0 ;
                else if(u1==0&&l1==0&&board[0][1]==NULL)
                board[0][1]=1,u7= 0,l7= 1;
                else if(u1==1&&l1==2&&board[2][2]==NULL)
                board[1][0]=1,u7= 2,l7=2 ;
                else if(u1==2&&l1==2&&board[1][2]==NULL)
                board[1][2]=1,u7= 1,l7=2 ;
                else if(u1==1&&l1==1&&board[2][0]==NULL)
                board[2][0]=1,u7= 2,l7=0 ;
                else if(u1==2&&l1==0&&board[1][1]==NULL)
                board[1][1]=1,u7=1 ,l7= 1;
                else if(u1==1&&l1==0&&board[0][0]==NULL)
                board[0][0]=1,u7=0 ,l7= 0;
                else if(u1==2&&l1==1&&board[2][2]==NULL)
                board[2][2]=1,u7=2 ,l7= 2;
                //cout<<"12";
                else if(u2==0&&l2==1&&board[0][0]==NULL)
                board[0][0]=1,u7=0 ,l7=0 ;
                else if(u2==0&&l2==0&&board[0][1]==NULL)
                board[0][1]=1,u7= 0,l7=1 ;
                else if(u2==1&&l2==2&&board[2][2]==NULL)
                board[1][0]=1,u7=2 ,l7=2 ;
                else if(u2==2&&l2==2&&board[1][2]==NULL)
                board[1][2]=1,u7= 1,l7=2 ;
                else if(u2==1&&l2==1&&board[2][0]==NULL)
                board[2][0]=1,u7=2 ,l7=0 ;
                else if(u2==2&&l2==0&&board[1][1]==NULL)
                board[1][1]=1,u7=1 ,l7=1 ;

            }
            else if(u3==1&&l3==0)
            {
                cout<<"4";
                if(u1==0&&l1==0&&board[2][0]==NULL)
                board[2][0]=1,u7= 2,l7=0 ;
                else if(u1==2&&l1==0&&board[0][0]==NULL)
                board[0][0]=1,u7= 0,l7= 0;
                else if(u1=1&&l1==1&&board[1][2]==NULL)
                board[1][2]==1,u7= 1,l7=2 ;
                else if(u1=1&&l1==2&&board[1][1]==NULL)
                board[1][1]=1,u7= 1,l7=1 ;
                if(u1==0&&l1==2&&board[0][0]==NULL)
                board[0][0]=1,u7= 0,l7=0 ;
                if(u1==2&&l1==2&&board[2][0]==NULL)
                board[2][0]=1,u7= 2,l7=0 ;
                //cout<<"13";
                else if(u2==0&&l2==0&&board[2][0]==NULL)
                board[2][0]=1,u7=2 ,l7=0 ;
                else if(u2==2&&l2==0&&board[0][0]==NULL)
                board[0][0]=1,u7=0 ,l7= 0;
                else if(u2==1&&l2==1&&board[1][2]==NULL)
                board[1][2]=1,u7= 1,l7=2 ;
                else if(u2==1&&l2==2&&board[1][1]==NULL)
                board[1][1]=1,u7= 1,l7= 1;

            }
            else if(u3==1&&l3==1)
            {
                cout<<"5";
                if(u1==0&&l1==1&&board[2][1]==NULL)
                board[2][1]=1,u7=2 ,l7=1 ;
                else if(u1==2&&l1==1&&board[0][1]==NULL)
                board[0][1]=1,u7=0 ,l7=1 ;
                else if(u1==1&&l1==0&&board[1][2]==NULL)
                board[1][2]=1,u7=1 ,l7=2 ;
                else if(u1==1&&l1==2&&board[1][0]==NULL)
                board[1][0]=1,u7=1 ,l7=0 ;
                else if(u1==0&&l1==0&&board[2][2]==NULL)
                board[2][2]=1,u7=2 ,l7=2 ;
                else if(u1==2&&l1==2&&board[0][0]==NULL)
                board[0][0]=1,u7=0 ,l7=0 ;
                else if(u1==0&&l1==2&&board[2][0]==NULL)
                board[2][0]=1,u7= 2,l7=0 ;
                else if(u1==2&&l1==0&&board[0][2]==NULL)
                board[0][2]=1,u7=0 ,l7= 2;
                //cout<<"15";
                else if(u2==0&&l2==1&&board[2][1]==NULL)
                board[2][1]=1,u7= 2,l7=1 ;
                else if(u2==2&&l2==1&&board[0][1]==NULL)
                board[0][1]=1,u7= 0,l7=1 ;
                else if(u2==1&&l2==0&&board[1][2]==NULL)
                board[1][2]=1,u7= 1,l7=2 ;
                else if(u2==1&&l2==2&&board[1][0]==NULL)
                board[1][0]=1,u7=1 ,l7=0 ;
                else if(u2==0&&l2==0&&board[2][2]==NULL)
                board[2][2]=1,u7= 2,l7=2 ;
                else if(u2==2&&l2==2&&board[0][0]==NULL)
                board[0][0]=1,u7= 0,l7= 0;
                else if(u2==0&&l2==2&&board[2][0]==NULL)
                board[2][0]=1,u7= 2,l7= 0;
                else if(u2==2&&l2==0&&board[0][2]==NULL)
                board[0][2]=1,u7= 0,l7= 2;

            }else if(u3==1&&l3==2)
            {
                cout<<"6";
                if(u1==1&&l1==1&&board[1][0]==NULL)
                board[1][0]=1,u7= 1,l7=0 ;
                else if(u1==1&&l1==0&&board[1][1]==NULL)
                board[1][1]=1,u7=1 ,l7= 1;
                else if(u1==0&&l1==2&&board[2][2]==NULL)
                board[2][2]=1,u7= 2,l7=2 ;
                else if(u1==2&&l1==2&&board[0][2]==NULL)
                board[0][2]=1,u7=0 ,l7= 2;
                else if(u1==0&&l1==0&&board[0][2]==NULL)
                board[0][2]=1,u7=0,l7=2;
                else if(u1==2&&l1==0&&board[2][1]==NULL)
                board[2][1]=1,u7=2,l7=1;
                //cout<<"16";
                else if(u2==1&&l2==1&&board[1][0]==NULL)
                board[1][0]=1,u7= 1,l7=0;
                else if(u2==1&&l2==0&&board[1][1]==NULL)
                board[1][1]=1,u7= 1,l7= 1;
                else if(u2==0&&l2==2&&board[2][2]==NULL)
                board[2][2]=1,u7= 2,l7=2;
                else if(u2==2&&l2==2&&board[0][2]==NULL)
                board[0][2]=1,u7=0 ,l7=2;
                else if(u2==0&&l2==0&&board[0][2]==NULL)
                board[0][2]=1,u7=0,l7=2;
                else if(u2==2&&l2==0&&board[2][1]==NULL)
                board[2][1]=1,u7=2,l7=1;

            }
            else if(u3==2&&l3==0)
            {
                 cout<<"7";
                if(u1==2&&l1==1&&board[2][2]==NULL)
                board[2][2]=1,u7= 2,l7=2  ;
                else if(u1==2&&l1==2&&board[2][1]==NULL)
                board[2][1]=1,u7= 2,l7=1 ;
                else if(u1==1&&l1==0&&board[0][0]==NULL)
                board[0][0]=1,u7=0 ,l7= 0;
                else if(u1==0&&l1==0&&board[1][0]==NULL)
                board[1][0]=1,u7= 1,l7= 0;
                else if(u1==1&&l1==1&&board[0][2]==NULL)
                board[0][2]=1,u7= 0,l7= 2;
                else if(u1==0&&l1==2&&board[1][1]==NULL)
                board[1][1]=1,u7= 1,l7= 1;
                else if(u1==1&&l1==2&&board[2][2]==NULL)
                board[2][2]=1,u7= 2,l7= 2;
                else if(u1==0&&l1==1&&board[0][0]==NULL)
                board[0][0]=1,u7= 0,l7= 0;
                //cout<<"17";
                else if(u2==2&&l2==1&&board[2][2]==NULL)
                board[2][2]=1,u7= 2,l7=2 ;
                else if(u2==2&&l2==2&&board[2][1]==NULL)
                board[2][1]=1,u7= 2,l7=1 ;
                else if(u2==1&&l2==0&&board[0][0]==NULL)
                board[0][0]=1,u7= 0,l7=0 ;
                else if(u2==0&&l2==0&&board[1][0]==NULL)
                board[1][0]=1,u7= 1,l7= 0;
                else if(u2==1&&l2==1&&board[0][2]==NULL)
                board[0][2]=1,u7= 0,l7=2 ;
                else if(u2==0&&l2==2&&board[1][1]==NULL)
                board[1][1]=1,u7= 1,l7= 1;

            }
            else if(u3==2&&l3==1)
            {
                 cout<<"8";
                if(u1==2&&l1==0&&board[2][2]==NULL)
                board[2][2]=1,u7=2 ,l7=2 ;
                else if(u1==2&&l1==2&&board[2][0]==NULL)
                board[2][0]=1,u7= 2,l7=0 ;
                else if(u1==1&&l1==1&&board[0][1]==NULL)
                board[0][1]=1,u7= 0,l7= 1;
                else if(u1==0&&l1==1&&board[1][1]==NULL)
                board[1][1]=1,u7=1 ,l7=1 ;
                else if(u1==1&&l1==0&&board[0][1]==NULL)
                board[0][1]=1,u7= 0,l7= 1;
                else if(u1==1&&l1==2&&board[0][0]==NULL)
                board[1][1]=1,u7=1 ,l7=1 ;
                else if(u1==0&&l1==0&&board[1][0]==NULL)
                board[1][0]=1,u7=1,l7=0 ;
                else if(u1==0&&l1==0&&board[2][0]==NULL)
                board[2][0]=1,u7=2 ,l7=2 ;
                //cout<<"18";
                else if(u2==2&&l2==0&&board[2][2]==NULL)
                board[2][2]=1,u7= 2,l7=2 ;
                else if(u2==2&&l2==2&&board[2][0]==NULL)
                board[2][0]=1,u7= 2,l7=0 ;
                else if(u2==1&&l2==1&&board[0][1]==NULL)
                board[0][1]=1,u7= 0,l7=1 ;
                else if(u2==0&&l2==1&&board[1][1]==NULL)
                board[1][1]=1,u7=1 ,l7= 1;
                else if(u2==0&&l2==2&&board[2][2]==NULL)
                board[2][2]=1,u7=2 ,l7= 2;
                else if(u2==0&&l2==2&&board[1][2]==NULL)
                board[1][2]=1,u7=1 ,l7= 2;

            }
            else if(u3==2&&l3==2)
            {
                  cout<<"9";
                if(u1==2&&l1==0&&board[2][1]==NULL)
                board[2][1]=1,u7= 2,l7=1 ;
                else if(u1==2&&l1==1&&board[2][0]==NULL)
                board[2][0]=1,u7= 2,l7=0 ;
                else if(u1==0&&l1==2&&board[1][2]==NULL)
                board[1][2]=1,u7=1 ,l7=2 ;
                else if(u1==1&&l1==2&&board[0][2]==NULL)
                board[0][2]=1,u7= 0,l7=2 ;
                else if(u1==1&&l1==1&&board[0][0]==NULL)
                board[0][0]=1,u7=0 ,l7= 0;
                else if(u1==0&&l1==0&&board[1][1]==NULL)
                board[1][1]=1,u7=1 ,l7=1 ;
                else if(u1==0&&l1==1&&board[2][0]==NULL)
                board[2][0]=1,u7=2 ,l7=0 ;
                else if(u1==1&&l1==0&&board[1][1]==NULL)
                board[0][2]=1,u7=0 ,l7=2 ;
                //cout<<"19";
                else if(u2==2&&l2==0&&board[2][1]==NULL)
                board[2][1]=1,u7= 2,l7=1 ;
                else if(u2==2&&l2==1&&board[2][0]==NULL)
                board[2][0]=1,u7= 2,l7= 0;
                else if(u2==0&&l2==2&&board[1][2]==NULL)
                board[1][2]=1,u7= 1,l7=2,cout<<"kumar" ;
                else if(u2==1&&l2==2&&board[0][2]==NULL)
                board[0][2]=1,u7= 0,l7= 2;
                else if(u2==1&&l2==1&&board[0][0]==NULL)
                board[0][0]=1,u7= 0,l7= 0;
                else if(u2==0&&l2==0&&board[1][1]==NULL)
                board[1][1]=1,u7=1 ,l7=1 ;
            }
            ///***************************the combination of u2 l2 with u3 l3***************----------------->>>>

}
}
   /* if(((u1==0&&l1==0)&&(u2==0&&l2==1)||(u2==0&&l2==0)&&(u1==0&&l1==1))&&board[0][2]==NULL)     -->>1
    board[0][2]==1;
    else if(((u1==1&&l1==0)&&(u2==1&&l2==1)||(u2==1&&l2==0)&&(u1==1&&l1==1))&&board[1][2]==NULL)-->>2
    board[1][2]=1;
    else if(((u1==2&&l1==0)&&(u2==2&&l2==1)||(u2==2&&l2==0)&&(u1==2&&l1==1))&&board[2][2]==NULL)-->>3
    board[2][2]=1;
    else if(((u1==0&&l1==0)&&(u2==1&&l2==0)||(u2==0&&l2==0)&&(u1==1&&l1==0))&&board[2][0]==NULL)-->>4
    board[2][0]=1;
    else if(((u1==0&&l1==1)&&(u2==1&&l2==1)||(u2==0&&l2==1)&&(u1==1&&l1==1))&&board[2][1]==NULL)-->>5
    board[2][1]=1;
    else if(((u1==0&&l1==2)&&(u2==1&&l2==2)||(u2==0&&l2==2)&&(u1==1&&l1==2))&&board[2][2]==NULL)-->>6
    board[2][2]=1;
    else if(((u1==0&&l1==2)&&(u2==0&&l2==1)||(u2==0&&l2==2)&&(u1==0&&l1==1))&&board[0][0]==NULL)-->>7
    board[0][0]=1;
    else if(((u1==1&&l1==2)&&(u2==1&&l2==1)||(u2==1&&l2==2)&&(u1==1&&l1==1))&&board[1][0]==NULL)-->>8
    board[1][0]=1;
    else if(((u1==2&&l1==2)&&(u2==2&&l2==1)||(u2==2&&l2==2)&&(u1==2&&l1==1))&&board[2][0]==NULL)-->>9
    board[2][0]=1;
    else if(((u1==2&&l1==0)&&(u2==1&&l2==0)||(u2==2&&l2==0)&&(u1==1&&l1==0))&&board[0][0]==NULL)-->>10
    board[0][0]=1;
    else if(((u1==2&&l1==1)&&(u2==1&&l2==1)||(u2==2&&l2==1)&&(u1==1&&l1==1))&&board[0][1]==NULL)-->>11
    board[0][1]=1;
    else if(((u1==2&&l1==2)&&(u2==1&&l2==2)||(u2==2&&l2==2)&&(u1==1&&l1==2))&&board[0][2]==NULL)-->>12
    board[0][2]=1;
        ///-------------------************      CENTER      **************-------------------------///
    else if(((u1==0&&l1==0)&&(u2==0&&l2==2)||(u2==0&&l2==0)&&(u1==0&&l1==2))&&board[0][1]==NULL)-->>13
    board[0][1]==1;
    else if(((u1==1&&l1==0)&&(u2==1&&l2==2)||(u2==1&&l2==0)&&(u1==1&&l1==2))&&board[1][1]==NULL)-->>14
    board[1][1]=1;
    else if(((u1==2&&l1==0)&&(u2==2&&l2==2)||(u2==2&&l2==0)&&(u1==2&&l1==2))&&board[2][1]==NULL)-->>15
    board[2][1]=1;
    else if(((u1==0&&l1==0)&&(u2==2&&l2==0)||(u2==0&&l2==0)&&(u1==2&&l1==0))&&board[1][0]==NULL)-->>16
    board[1][0]=1;
    else if(((u1==0&&l1==1)&&(u2==2&&l2==1)||(u2==0&&l2==1)&&(u1==2&&l1==1))&&board[1][1]==NULL)-->>17
    board[1][1]=1;
    else if(((u1==0&&l1==2)&&(u2==2&&l2==2)||(u2==0&&l2==2)&&(u1==2&&l1==2))&&board[1][2]==NULL)-->>18
    board[1][2]=1;
    ///-------------------************         CROSS        **************-------------------------///
    else if(((u1==0&&l1==0)&&(u2==1&&l2==1)||(u2==0&&l2==0)&&(u1==1&&l1==1))&&board[2][2]==NULL)-->>19
    board[2][2]=1;
    else if(((u1==2&&l1==2)&&(u2==1&&l2==1)||(u2==2&&l2==2)&&(u1==1&&l1==1))&&board[0][0]==NULL)-->>20
    board[0][0]=1;
    else if(((u1==2&&l1==0)&&(u2==1&&l2==1)||(u2==2&&l2==0)&&(u1==1&&l1==1))&&board[0][2]==NULL)-->>21
    board[0][2]=1;
    else if(((u1==0&&l1==2)&&(u2==1&&l2==1)||(u2==0&&l2==2)&&(u1==1&&l1==1))&&board[2][0]==NULL)-->>22
    board[2][0]=1;
     ///-------------------************    CROSS CENTER     **************-------------------------///
    else if(((u1==0&&l1==0)&&(u2==2&&l2==2)||(u2==0&&l2==0)&&(u1==2&&l1==2))&&board[1][1]==NULL)-->>23
    board[1][1]=1;
    else if(((u1==2&&l1==0)&&(u2==0&&l2==2)||(u2==2&&l2==0)&&(u1==0&&l1==2))&&board[1][1]==NULL)-->>24
    board[1][1]=1;
     ///-------------------************    remaining cases    **************-------------------------///
    else if()
    }
}*/
else if(hmt==7)
{
 searchh(&u4,&l4);
 cout<<endl<<"u4 & l4 "<<u4<<" "<<l4<<endl;
 if(u7==0&&l7==0)
 {
     if(u6==0&&l6==1&&board[0][2]==NULL)
     board[0][2]=1,fla=1;
     else if(u6==0&&l6==2&&board[0][1]==NULL)
     board[0][1]=1,fla=1;
     else if(u6==1&&l6==0&&board[2][0]==NULL)
     board[2][0]=1,fla=1;
     else if(u6==2&&l6==0&&board[1][0]==NULL)
     board[1][0]=1,fla=1;
     else if(u6==1&&l6==1&&board[2][2]==NULL)
     board[2][2]=1,fla=1;
     else if(u6==2&&l6==2&&board[1][1]==NULL)
     board[1][1]=1,fla=1;
     ///****************************************************************************************
     else if(u5==0&&l5==1&&board[0][2]==NULL)
     board[0][2]=1,fla=1;
     else if(u5==0&&l5==2&&board[0][1]==NULL)
     board[0][1]=1,fla=1;
     else if(u5==1&&l5==0&&board[2][0]==NULL)
     board[2][0]=1,fla=1;
     else if(u5==2&&l5==0&&board[1][0]==NULL)
     board[1][0]=1,fla=1;
     else if(u5==1&&l5==1&&board[2][2]==NULL)
     board[2][2]=1,fla=1;
     else if(u5==2&&l5==2&&board[1][1]==NULL)
     board[1][1]=1,fla=1;

 }
 else if(u7==0&&l7==1)
 {
  if(u6==0&&l6==0&&board[0][2]==NULL)
     board[0][2]=1,fla=1;
     else if(u6==0&&l6==2&&board[0][0]==NULL)
     board[0][0]=1,fla=1;
     else if(u6==1&&l6==1&&board[2][1]==NULL)
     board[2][1]=1,fla=1;
     else if(u6==2&&l6==1&&board[1][1]==NULL)
     board[1][1]=1,fla=1;
     /*else if(u6==1&&l6==1&&board[2][2]==NULL)
     board[2][2]=1,fla=1;
     else if(u6==2&&l6==2&&board[1][1]==NULL)
     board[1][1]=1,fla=1;*/
     ///****************************************************************************************
     else if(u5==0&&l5==0&&board[0][2]==NULL)
     board[0][2]=1,fla=1;
     else if(u5==0&&l5==2&&board[0][0]==NULL)
     board[0][0]=1,fla=1;
     /*else if(u5==1&&l5==0&&board[2][0]==NULL)
     board[2][0]=1,fla=1;
     else if(u5==2&&l5==0&&board[1][0]==NULL)
     board[1][0]=1,fla=1;*/
     else if(u5==1&&l5==1&&board[2][1]==NULL)
     board[2][1]=1,fla=1;
     else if(u5==2&&l5==1&&board[1][1]==NULL)
     board[1][1]=1,fla=1;
 }
 else if(u7==0&&l7==2)
 {
  if(u6==0&&l6==0&&board[0][1]==NULL)
     board[0][1]=1,fla=1;
     else if(u6==0&&l6==1&&board[0][0]==NULL)
     board[0][0]=1,fla=1;
     else if(u6==1&&l6==2&&board[2][2]==NULL)
     board[2][2]=1,fla=1;
     else if(u6==2&&l6==2&&board[1][2]==NULL)
     board[1][2]=1,fla=1;
     else if(u6==1&&l6==1&&board[2][0]==NULL)
     board[2][0]=1,fla=1;
     else if(u6==2&&l6==2&&board[1][1]==NULL)
     board[1][1]=1,fla=1;
     ///****************************************************************************************
     else if(u5==0&&l5==0&&board[0][1]==NULL)
     board[0][1]=1,fla=1;
     else if(u5==0&&l5==1&&board[0][0]==NULL)
     board[0][0]=1,fla=1;
     else if(u5==1&&l5==2&&board[2][2]==NULL)
     board[2][2]=1,fla=1;
     else if(u5==2&&l5==2&&board[1][2]==NULL)
     board[1][2]=1,fla=1;
     else if(u5==1&&l5==1&&board[2][0]==NULL)
     board[2][0]=1,fla=1;
     else if(u5==2&&l5==2&&board[1][1]==NULL)
     board[1][1]=1,fla=1;
 }
 else if(u7==1&&l7==0)
 {
  if(u6==0&&l6==0&&board[2][0]==NULL)
     board[2][0]=1,fla=1;
     else if(u6==2&&l6==0&&board[0][0]==NULL)
     board[0][0]=1,fla=1;
     else if(u6==1&&l6==1&&board[1][2]==NULL)
     board[1][2]=1,fla=1;
     else if(u6==1&&l6==2&&board[1][1]==NULL)
     board[1][1]=1,fla=1;
     /*else if(u6==1&&l6==1&&board[2][2]==NULL)
     board[2][2]=1,fla=1;
     else if(u6==2&&l6==2&&board[1][1]==NULL)
     board[1][1]=1,fla=1;*/
     ///****************************************************************************************
     else if(u5==0&&l5==0&&board[2][0]==NULL)
     board[2][0]=1,fla=1;
     else if(u5==2&&l5==0&&board[0][0]==NULL)
     board[0][0]=1,fla=1;
     /*else if(u5==1&&l5==0&&board[2][0]==NULL)
     board[2][0]=1,fla=1;
     else if(u5==2&&l5==0&&board[1][0]==NULL)
     board[1][0]=1,fla=1;*/
     else if(u5==1&&l5==1&&board[1][2]==NULL)
     board[1][2]=1,fla=1;
     else if(u5==1&&l5==2&&board[1][1]==NULL)
     board[1][1]=1,fla=1;
 }
 else if(u7==1&&l7==1)
 {
  if(u6==0&&l6==0&&board[2][2]==NULL)
     board[2][2]=1,fla=1;
     else if(u6==2&&l6==2&&board[0][0]==NULL)
     board[0][0]=1,fla=1;
     else if(u6==0&&l6==1&&board[2][1]==NULL)
     board[2][1]=1,fla=1;
     else if(u6==2&&l6==1&&board[0][1]==NULL)
     board[0][1]=1,fla=1;
     else if(u6==1&&l6==0&&board[1][2]==NULL)
     board[1][2]=1,fla=1;
     else if(u6==1&&l6==2&&board[1][0]==NULL)
     board[1][0]=1,fla=1;
     else if(u6==2&&l6==0&&board[0][2]==NULL)
     board[0][2]=1,fla=1;
     else if(u6==0&&l6==2&&board[2][0]==NULL)
     board[2][0]=1,fla=1;

     ///****************************************************************************************
     else if(u5==0&&l5==0&&board[2][2]==NULL)
     board[2][2]=1,fla=1;
     else if(u5==2&&l5==2&&board[0][0]==NULL)
     board[0][0]=1,fla=1;
     else if(u5==0&&l5==1&&board[2][1]==NULL)
     board[2][1]=1,fla=1;
     else if(u5==2&&l5==1&&board[0][1]==NULL)
     board[0][1]=1,fla=1;
     else if(u5==1&&l5==0&&board[1][2]==NULL)
     board[1][2]=1,fla=1;
     else if(u5==1&&l5==2&&board[1][0]==NULL)
     board[1][0]=1,fla=1;
     else if(u5==2&&l5==0&&board[0][2]==NULL)
     board[0][2]=1,fla=1;
     else if(u5==0&&l5==2&&board[2][0]==NULL)
     board[2][0]=1,fla=1;
 }
  else if(u7==1&&l7==2)
 {
  if(u6==2&&l6==2&&board[0][2]==NULL)
     board[0][2]=1,fla=1;
     else if(u6==0&&l6==2&&board[2][2]==NULL)
     board[2][2]=1,fla=1;
     else if(u6==1&&l6==1&&board[1][0]==NULL)
     board[1][0]=1,fla=1;
     else if(u6==1&&l6==0&&board[1][1]==NULL)
     board[1][1]=1,fla=1;
     /*else if(u6==1&&l6==1&&board[2][2]==NULL)
     board[2][2]=1,fla=1;
     else if(u6==2&&l6==2&&board[1][1]==NULL)
     board[1][1]=1,fla=1;*/
     ///****************************************************************************************
     else if(u5==2&&l5==2&&board[0][2]==NULL)
     board[0][2]=1,fla=1;
     else if(u5==0&&l5==2&&board[2][2]==NULL)
     board[2][2]=1,fla=1;
     else if(u5==1&&l5==1&&board[1][0]==NULL)
     board[1][0]=1,fla=1;
     else if(u5==1&&l5==0&&board[1][1]==NULL)
     board[1][1]=1,fla=1;
 }
 else if(u7==2&&l7==0)
 {
  if(u6==0&&l6==0&&board[1][0]==NULL)
     board[1][0]=1,fla=1;
     else if(u6==1&&l6==0&&board[0][0]==NULL)
     board[0][0]=1,fla=1;
     else if(u6==1&&l6==1&&board[0][2]==NULL)
     board[0][2]=1,fla=1;
     else if(u6==0&&l6==2&&board[1][1]==NULL)
     board[1][1]=1,fla=1;
     else if(u6==2&&l6==1&&board[2][2]==NULL)
     board[2][2]=1,fla=1;
     else if(u6==2&&l6==2&&board[2][1]==NULL)
     board[2][1]=1,fla=1;
     ///**************************************************
     else if(u5==0&&l5==0&&board[1][0]==NULL)
     board[1][0]=1,fla=1;
     else if(u5==1&&l5==0&&board[0][0]==NULL)
     board[0][0]=1,fla=1;
     else if(u5==1&&l5==1&&board[0][2]==NULL)
     board[0][2]=1,fla=1;
     else if(u5==0&&l5==2&&board[1][1]==NULL)
     board[1][1]=1,fla=1;
     else if(u5==2&&l5==1&&board[2][2]==NULL)
     board[2][2]=1,fla=1;
     else if(u5==2&&l5==2&&board[2][1]==NULL)
     board[2][1]=1,fla=1;
 }
 else if(u7==2&&l7==1)
 {
  if(u6==2&&l6==0&&board[2][2]==NULL)
     board[2][2]=1,fla=1;
     else if(u6==2&&l6==2&&board[2][0]==NULL)
     board[2][0]=1,fla=1;
     else if(u6==1&&l6==1&&board[0][1]==NULL)
     board[0][1]=1,fla=1;
     else if(u6==0&&l6==1&&board[1][1]==NULL)
     board[1][1]=1,fla=1;
    ///*********************************************
    else if(u5==2&&l5==0&&board[2][2]==NULL)
     board[2][2]=1,fla=1;
     else if(u5==2&&l5==2&&board[2][0]==NULL)
     board[2][0]=1,fla=1;
     else if(u5==1&&l5==1&&board[0][1]==NULL)
     board[0][1]=1,fla=1;
     else if(u5==0&&l5==1&&board[1][1]==NULL)
     board[1][1]=1,fla=1;
 }
 if(u7==2&&l7==2)
 {
     if(u6==1&&l6==2&&board[0][2]==NULL)
     board[0][2]=1,fla=1;
     else if(u6==0&&l6==2&&board[1][2]==NULL)
     board[1][2]=1,fla=1;
     else if(u6==2&&l6==1&&board[2][0]==NULL)
     board[2][0]=1,fla=1;
     else if(u6==2&&l6==0&&board[2][1]==NULL)
     board[2][1]=1,fla=1;
     else if(u6==1&&l6==1&&board[0][0]==NULL)
     board[0][0]=1,fla=1;
     else if(u6==0&&l6==0&&board[1][1]==NULL)
     board[1][1]=1,fla=1;
     ///****************************************************************************************
     else if(u5==1&&l5==2&&board[0][2]==NULL)
     board[0][2]=1,fla=1;
     else if(u5==0&&l5==2&&board[1][2]==NULL)
     board[1][2]=1,fla=1;
     else if(u5==2&&l5==1&&board[2][0]==NULL)
     board[2][0]=1,fla=1;
     else if(u5==2&&l5==0&&board[2][1]==NULL)
     board[2][1]=1,fla=1;
     else if(u5==1&&l5==1&&board[0][0]==NULL)
     board[0][0]=1,fla=1;
     else if(u5==0&&l5==0&&board[1][1]==NULL)
     board[1][1]=1,fla=1;
 }
 if(fla!=1)
 {
       if(u4==0&&l4==0)
            {
                cout<<"1000";
                if(u1==0&&l1==1&&board[0][2]==NULL)
                board[0][2]=1;
                else if(u1==0&&l1==2&&board[0][1]==NULL)
                board[0][1]=1;
                else if(u1==1&&l1==0&&board[2][0]==NULL)
                board[2][0]=1;
                else if(u1==2&&l1==0&&board[1][0]==NULL)
                board[1][0]=1;
                else if(u1==1&&l1==1&&board[2][2]==NULL)
                board[2][2]=1;
                else if(u1==2&&l1==2&&board[1][1]==NULL)
                board[1][1]=1;
                else if(u2==0&&l2==1&&board[0][2]==NULL)
                board[0][2]=1;
                else if(u2==0&&l2==2&&board[0][1]==NULL)
                board[0][1]=1;
                else if(u2==1&&l2==0&&board[2][0]==NULL)
                board[2][0]=1;
                else if(u2==2&&l2==0&&board[1][0]==NULL)
                board[1][0]=1;
                else if(u2==1&&l2==1&&board[2][2]==NULL)
                board[2][2]=1;
                else if(u2==2&&l2==2&&board[1][1]==NULL)
                board[1][1]=1;
                else if(u3==0&&l3==1&&board[0][2]==NULL)
                board[0][2]=1;
                else if(u3==0&&l3==2&&board[0][1]==NULL)
                board[0][1]=1;
                else if(u3==1&&l3==0&&board[2][0]==NULL)
                board[2][0]=1;
                else if(u3==2&&l3==0&&board[1][0]==NULL)
                board[1][0]=1;
                else if(u3==1&&l3==1&&board[2][2]==NULL)
                board[2][2]=1;
                else if(u3==2&&l3==2&&board[1][1]==NULL)
                board[1][1]=1;
                else
        {
            cout<<"HeLLO";char x;
               for(int q=0;q<3;q++){
               for(int z=0;z<3;z++)
        {
              if(board[q][z]==NULL)
              {
              board[q][z]=1;
              goto x;
              }
        }
            x:
            break;
        }
        }
            }
            else if(u4==0&&l4==1)
            {cout<<"20000";
                if(u1==0&&l1==0&&board[0][2]==NULL)
                board[0][2]=1;
                else if(u1==0&&l1==2&&board[0][0]==NULL)
                board[0][0]=1;
                else if(u1==1&&l1==0&&board[1][2]==NULL)
                board[1][2]=1;
                else if(u1==1&&l1==2&&board[2][0]==NULL)
                board[2][0]=1;
                else if(u1==2&&l1==0&&board[2][2]==NULL)
                board[2][2]=1;
                else if(u1==2&&l1==2&&board[2][0]==NULL)
                board[2][0]=1;
                else if(u1==1&&l1==1&&board[2][1]==NULL)
                board[2][1]=1;
                else if(u1==2&&l1==1&&board[1][1]==NULL)
                board[1][1]=1;
                else if(u2==0&&l2==0&&board[0][2]==NULL)
                board[0][2]=1;
                else if(u2==0&&l2==2&&board[0][0]==NULL)
                board[0][0]=1;
                else if(u2==1&&l2==0&&board[1][2]==NULL)
                board[1][2]=1;
                else if(u2==1&&l2==2&&board[1][0]==NULL)
                board[1][0]=1;
                else if(u2==2&&l2==0&&board[2][2]==NULL)
                board[2][2]=1;
                else if(u2==2&&l2==2&&board[2][0]==NULL)
                board[2][0]=1;
                else if(u2==1&&l2==1&&board[2][1]==NULL)
                board[2][1]=1;
                else if(u2==2&&l2==1&&board[1][1]==NULL)
                board[1][1]=1;
                else if(u3==0&&l3==0&&board[0][2]==NULL)
                board[0][2]=1;
                else if(u3==0&&l3==2&&board[0][0]==NULL)
                board[0][0]=1;
                else if(u3==1&&l3==0&&board[1][2]==NULL)
                board[1][2]=1;
                else if(u3==1&&l3==2&&board[1][0]==NULL)
                board[1][0]=1;
                else if(u3==2&&l3==0&&board[2][2]==NULL)
                board[2][2]=1;
                else if(u3==2&&l3==2&&board[2][0]==NULL)
                board[2][0]=1;
                else if(u3==1&&l3==1&&board[2][1]==NULL)
                board[2][1]=1;
                else if(u3==2&&l3==1&&board[1][1]==NULL)
                board[1][1]=1;
                else
        {
            cout<<"HeLLO";char x1;
               for(int q=0;q<3;q++){
               for(int z=0;z<3;z++)
        {
              if(board[q][z]==NULL)
              {
              board[q][z]=1;
              goto x1;
              }
        }
            x1:
            break;
        }
        }

            }
            else if(u4==0&&l4==2)
            {cout<<"30000";
                if(u1==0&&l1==1&&board[0][0]==NULL)
                board[0][0]=1;
                else if(u1==0&&l1==0&&board[0][1]==NULL)
                board[0][1]=1;
                else if(u1==1&&l1==2&&board[2][2]==NULL)
                board[1][0]=1;
                else if(u1==2&&l1==2&&board[1][2]==NULL)
                board[1][2]=1;
                else if(u1==1&&l1==1&&board[2][0]==NULL)
                board[2][0]=1;
                else if(u1==2&&l1==0&&board[1][1]==NULL)
                board[1][1]=1;
                else if(u2==0&&l2==1&&board[0][0]==NULL)
                board[0][0]=1;
                else if(u2==0&&l2==0&&board[0][1]==NULL)
                board[0][1]=1;
                else if(u2==1&&l2==2&&board[2][2]==NULL)
                board[1][0]=1;
                else if(u2==2&&l2==2&&board[1][2]==NULL)
                board[1][2]=1;
                else if(u2==1&&l2==1&&board[2][0]==NULL)
                board[2][0]=1;
                else if(u2==2&&l2==0&&board[1][1]==NULL)
                board[1][1]=1;
                else if(u3==0&&l3==1&&board[0][0]==NULL)
                board[0][0]=1;
                else if(u3==0&&l3==0&&board[0][1]==NULL)
                board[0][1]=1;
                else if(u3==1&&l3==2&&board[2][2]==NULL)
                board[1][0]=1;
                else if(u3==2&&l3==2&&board[1][2]==NULL)
                board[1][2]=1;
                else if(u3==1&&l3==1&&board[2][0]==NULL)
                board[2][0]=1;
                else if(u3==2&&l3==0&&board[1][1]==NULL)
                board[1][1]=1;
                else
        {
            cout<<"HeLLO";char x2;
               for(int q=0;q<3;q++){
               for(int z=0;z<3;z++)
        {
              if(board[q][z]==NULL)
              {
              board[q][z]=1;
              goto x2;
              }
        }
            x2:
            break;
        }
        }

            }
            else if(u4==1&&l4==0)
            {cout<<"40000";
                if(u1==0&&l1==0&&board[2][0]==NULL)
                board[2][0]=1;
                else if(u1==2&&l1==0&&board[0][0]==NULL)
                board[0][0]=1;
                else if(u1==1&&l1==1&&board[1][2]==NULL)
                board[1][2]=1;
                else if(u1==1&&l1==2&&board[1][1]==NULL)
                board[1][1]=1;
                else if(u2==0&&l2==0&&board[2][0]==NULL)
                board[2][0]=1;
                else if(u2==2&&l2==0&&board[0][0]==NULL)
                board[0][0]=1;
                else if(u2==1&&l2==1&&board[1][2]==NULL)
                board[1][2]=1;
                else if(u2==1&&l2==2&&board[1][1]==NULL)
                board[1][1]=1;
                else if(u3==0&&l3==0&&board[2][0]==NULL)
                board[2][0]=1;
                else if(u3==2&&l3==0&&board[0][0]==NULL)
                board[0][0]=1;
                else if(u3==1&&l3==1&&board[1][2]==NULL)
                board[1][2]=1;
                else if(u3==1&&l3==2&&board[1][1]==NULL)
                board[1][1]=1;
                else
        {
            cout<<"HeLLO";char x3;
               for(int q=0;q<3;q++){
               for(int z=0;z<3;z++)
        {
              if(board[q][z]==NULL)
              {
              board[q][z]=1;
              goto x3;
              }
        }
            x3:
            break;
        }
        }

            }
            else if(u4==1&&l4==1)
            {cout<<"50000";
                if(u1==0&&l1==1&&board[2][1]==NULL)
                board[2][1]=1;
                else if(u1==2&&l1==1&&board[0][1]==NULL)
                board[0][1]=1;
                else if(u1==1&&l1==0&&board[1][2]==NULL)
                board[1][2]=1;
                else if(u1==1&&l1==2&&board[1][0]==NULL)
                board[1][0]=1;
                else if(u1==0&&l1==0&&board[2][2]==NULL)
                board[2][2]=1;
                else if(u1==2&&l1==2&&board[0][0]==NULL)
                board[0][0]=1;
                else if(u1==0&&l1==2&&board[2][0]==NULL)
                board[2][0]=1;
                else if(u1==2&&l1==0&&board[0][2]==NULL)
                board[0][2]=1;
                else if(u2==0&&l2==1&&board[2][1]==NULL)
                board[2][1]=1;
                else if(u2==2&&l2==1&&board[0][1]==NULL)
                board[0][1]=1;
                else if(u2==1&&l2==0&&board[1][2]==NULL)
                board[1][2]=1;
                else if(u2==1&&l2==2&&board[1][0]==NULL)
                board[1][0]=1;
                else if(u2==0&&l2==0&&board[2][2]==NULL)
                board[2][2]=1;
                else if(u2==2&&l2==2&&board[0][0]==NULL)
                board[0][0]=1;
                else if(u2==0&&l2==2&&board[2][0]==NULL)
                board[2][0]=1;
                else if(u2==2&&l2==0&&board[0][2]==NULL)
                board[0][2]=1;
                else if(u3==0&&l3==1&&board[2][1]==NULL)
                board[2][1]=1;
                else if(u3==2&&l3==1&&board[0][1]==NULL)
                board[0][1]=1;
                else if(u3==1&&l3==0&&board[1][2]==NULL)
                board[1][2]=1;
                else if(u3==1&&l3==2&&board[1][0]==NULL)
                board[1][0]=1;
                else if(u3==0&&l3==0&&board[2][2]==NULL)
                board[2][2]=1;
                else if(u3==2&&l3==2&&board[0][0]==NULL)
                board[0][0]=1;
                else if(u3==0&&l3==2&&board[2][0]==NULL)
                board[2][0]=1;
                else if(u3==2&&l3==0&&board[0][2]==NULL)
                board[0][2]=1;
                else
        {
            cout<<"HeLLO";char x4;
               for(int q=0;q<3;q++){
               for(int z=0;z<3;z++)
        {
              if(board[q][z]==NULL)
              {
              board[q][z]=1;
              goto x4;
              }
        }
            x4:
            break;
        }
        }


            }else if(u4==1&&l4==2)
            {
                cout<<"60000";
                if(u1==1&&l1==1&&board[1][0]==NULL)
                board[1][0]=1;
                else if(u1==1&&l1==0&&board[1][1]==NULL)
                board[1][1]=1;
                else if(u1==0&&l1==2&&board[2][2]==NULL)
                board[2][2]=1;
                else if(u1==2&&l1==2&&board[0][2]==NULL)
                board[0][2]=1;
                 else if(u2==1&&l2==1&&board[1][0]==NULL)
                board[1][0]=1;
                else if(u2==1&&l2==0&&board[1][1]==NULL)
                board[1][1]=1;
                else if(u2==0&&l2==2&&board[2][2]==NULL)
                board[2][2]=1;
                else if(u2==2&&l2==2&&board[0][2]==NULL)
                board[0][2]=1;
                else if(u3==1&&l3==1&&board[1][0]==NULL)
                board[1][0]=1;
                else if(u3==1&&l3==0&&board[1][1]==NULL)
                board[1][1]=1;
                else if(u3==0&&l3==2&&board[2][2]==NULL)
                board[2][2]=1;
                else if(u3==2&&l3==2&&board[0][2]==NULL)
                board[0][2]=1;
                else
        {
            cout<<"HeLLO";char x5;
               for(int q=0;q<3;q++){
               for(int z=0;z<3;z++)
        {
              if(board[q][z]==NULL)
              {
              board[q][z]=1;
              goto x5;
              }
        }
            x5:
            break;
        }
        }
            }
            else if(u4==2&&l4==0)
            {
                cout<<"70000";
                if(u1==2&&l1==1&&board[2][2]==NULL)
                board[2][2]=1;
                else if(u1==2&&l1==2&&board[2][1]==NULL)
                board[2][1]=1;
                else if(u1==1&&l1==0&&board[0][0]==NULL)
                board[0][0]=1;
                else if(u1==0&&l1==0&&board[1][0]==NULL)
                board[1][0]=1;
                else if(u1==1&&l1==1&&board[0][2]==NULL)
                board[0][2]=1;
                else if(u1==0&&l1==2&&board[1][1]==NULL)
                board[1][1]=1;
                else if(u2==2&&l2==1&&board[2][2]==NULL)
                board[2][2]=1;
                else if(u2==2&&l2==2&&board[2][1]==NULL)
                board[2][1]=1;
                else if(u2==1&&l2==0&&board[0][0]==NULL)
                board[0][0]=1;
                else if(u2==0&&l2==0&&board[1][0]==NULL)
                board[1][0]=1;
                else if(u2==1&&l2==1&&board[0][2]==NULL)
                board[0][2]=1;
                else if(u2==0&&l2==2&&board[1][1]==NULL)
                board[1][1]=1;
                else if(u3==2&&l3==1&&board[2][2]==NULL)
                board[2][2]=1;
                else if(u3==2&&l3==2&&board[2][1]==NULL)
                board[2][1]=1;
                else if(u3==1&&l3==0&&board[0][0]==NULL)
                board[0][0]=1;
                else if(u3==0&&l3==0&&board[1][0]==NULL)
                board[1][0]=1;
                else if(u3==1&&l3==1&&board[0][2]==NULL)
                board[0][2]=1;
                else if(u3==0&&l3==2&&board[1][1]==NULL)
                board[1][1]=1;
                else
        {
            cout<<"HeLLO";char x6;
               for(int q=0;q<3;q++){
               for(int z=0;z<3;z++)
        {
              if(board[q][z]==NULL)
              {
              board[q][z]=1;
              goto x6;
              }
        }
            x6:
            break;
        }
        }

            }
            else if(u4==2&&l4==1)
            {cout<<"80000";

                if(u1==2&&l1==0&&board[2][2]==NULL)
                board[2][2]=1;
                else if(u1==2&&l1==2&&board[2][0]==NULL)
                board[2][0]=1;
                else if(u1==1&&l1==1&&board[0][1]==NULL)
                board[0][1]=1;
                else if(u1==0&&l1==1&&board[1][1]==NULL)
                board[1][1]=1;
                else if(u1==0&&l1==0&&board[2][0]==NULL)
                board[2][0]=1;
                else if(u1==1&&l1==0&&board[2][0]==NULL)
                board[2][0]=1;
                else if(u1==0&&l1==2&&board[2][2]==NULL)
                board[2][2]=1;
                else if(u1==0&&l1==2&&board[1][2]==NULL)
                board[1][2]=1;
                else if(u2==2&&l2==0&&board[2][2]==NULL)
                board[2][2]=1;
                else if(u2==2&&l2==2&&board[2][0]==NULL)
                board[2][0]=1;
                else if(u2==1&&l2==1&&board[0][1]==NULL)
                board[0][1]=1;
                else if(u2==0&&l2==1&&board[1][1]==NULL)
                board[1][1]=1;
                else if(u3==2&&l3==0&&board[2][2]==NULL)
                board[2][2]=1;
                else if(u3==2&&l3==2&&board[2][0]==NULL)
                board[2][0]=1;
                else if(u3==1&&l3==1&&board[0][1]==NULL)
                board[0][1]=1;
                else if(u3==0&&l3==1&&board[1][1]==NULL)
                board[1][1]=1;
                else if(u3==0&&l3==0&&board[1][0]==NULL)
                board[1][0]=1;
                else if(u3==0&&l3==0&&board[2][0]==NULL)
                board[2][0]=1;
                else
        {
            cout<<"HeLLO";char x7;
               for(int q=0;q<3;q++){
               for(int z=0;z<3;z++)
        {
              if(board[q][z]==NULL)
              {
              board[q][z]=1;
              goto x7;
              }
        }
            x7:
            break;
        }
        }

            }
            else if(u4==2&&l4==2)
            {
                cout<<"90000";
                if(u1==2&&l1==0&&board[2][1]==NULL)
                board[2][1]=1;
                else if(u1==2&&l1==1&&board[2][0]==NULL)
                board[2][0]=1;
                else if(u1==0&&l1==2&&board[1][2]==NULL)
                board[1][2]=1;
                else if(u1==1&&l1==2&&board[0][2]==NULL)
                board[0][2]=1;
                else if(u1==1&&l1==1&&board[0][0]==NULL)
                board[0][0]=1;
                else if(u1==0&&l1==0&&board[1][1]==NULL)
                board[1][1]=1;
                else if(u2==2&&l2==0&&board[2][1]==NULL)
                board[2][1]=1;
                else if(u2==2&&l2==1&&board[2][0]==NULL)
                board[2][0]=1;
                else if(u2==0&&l2==2&&board[1][2]==NULL)
                board[1][2]=1;
                else if(u2==1&&l2==2&&board[0][2]==NULL)
                board[0][2]=1;
                else if(u2==1&&l2==1&&board[0][0]==NULL)
                board[0][0]=1;
                else if(u2==0&&l2==0&&board[1][1]==NULL)
                board[1][1]=1;
                else if(u3==2&&l3==0&&board[2][1]==NULL)
                board[2][1]=1;
                else if(u3==2&&l3==1&&board[2][0]==NULL)
                board[2][0]=1;
                else if(u3==0&&l3==2&&board[1][2]==NULL)
                board[1][2]=1;
                else if(u3==1&&l3==2&&board[0][2]==NULL)
                board[0][2]=1;
                else if(u3==1&&l3==1&&board[0][0]==NULL)
                board[0][0]=1;
                else if(u3==0&&l3==0&&board[1][1]==NULL)
                board[1][1]=1;
                else
        {
            cout<<"HeLLO";char x8;
               for(int q=0;q<3;q++){
               for(int z=0;z<3;z++)
        {
              if(board[q][z]==NULL)
              {
              board[q][z]=1;
              goto x8;
              }
        }
            x8:
            break;
        }
        }
            }
 }
        }
turn=me;
hmt++;
}
//board[k][l]=1;

//else
//cout<<"you enter wrong position enter again "<<endl;
int y=checkwin(board,2,1);
if(y==me)
{
    display(board);
    cout<<endl<<endl<<"player wins the game ";

exit(1);
}
else if(y==bot){
        display(board);
cout<<endl<<endl<<"bots wins the game ";
exit(1);
}
else if(hmt==9)
{
cout<<"the match has been drawn ";
display(board);
exit(1);
}
}
}

