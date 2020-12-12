#include <iostream>
#include <conio.h>
using namespace std;
int main(){
  string X,O;
 string name;
  cout <<"Enter the name of X player" <<endl;
 cin>>X;
  cout<<"Enter the name of O player"  <<endl;
  cin>>O;
 for(;;){
  cout<<"Who will play first "<< X<<" or "<<O<<"?"<<endl;

  cin>>name;
  if(name == X || name == O)
  {
      break;
  }
  else{
    cout<<"Name Error please enter correct name again , ";
}
 }
string arr[3][3]={".",".",".",".",".",".",".",".","."};
  for(int i=0;i<3;i++)
  {
        for(int j=0;j<3;j++){


        cout<<arr[i][j]<<" ";
        }cout<<endl;
  }
  string nst =name;
  string n=X;
  string m=O;
  int w;
  if (name == X)
   w =1;
else {w=2;}
int count=0;
for(int q=2;q<110;)
{
    int i ,j;

//********************************************************************************************
for(;;){
cout<< " Enter a row number from 0 to 2"<<endl;
cin>>i;
if (i>=0 && i<3)
    {
        break;

}
else {
    cout<<"Error ";
    continue;
}}
//***********************************************************************************************

for(;;){
cout<<"Enter column nunmber from 0 to 2"<<endl;
cin>>j;
if (j>=0 && j<3)
    {
        break;

}
else{
    cout<<"Error ";
    continue;
}}
//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

  if (arr[i][j]=="X" || arr[i][j]=="O")
{
    cout<<"Error Number already exist , ";
    continue;
}

//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
if(nst == X ){
    arr[i][j]="X";}
  else{
        arr[i][j]="O";
        }
  //&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
  for(int i=0;i<3;i++)
  {
        for(int j=0;j<3;j++){


        cout<<arr[i][j]<<" ";
        }cout<<endl;

  }
   count=count+1;//****************************************************  "X"   ==
if(w==1)
    {
        if(q%2==0)
            nst=O;
        else{nst=X;}

    }
    else if(w==2){
            if(q%2==0)
            nst=X;
        else{nst=O;}}

//*******************************************************************
if(arr[0][0]=="X" && arr[1][1]=="X" && arr[2][2]=="X"){cout <<"winner is "<<X;break;}
if(arr[0][0]=="O" && arr[1][1]=="O" && arr[2][2]=="O"){cout <<"winner is "<<O;break;}



else if(arr[0][0]=="X" &&   arr[0][2]=="X"  &&  arr[0][1]=="X" ){cout <<"winner is "<<X;break;}
else if(arr[1][0]=="X" &&   arr[1][1]=="X"  &&  arr[1][2]=="X" ){cout <<"winner is "<<X;break;}
else if(arr[2][0]=="X" &&   arr[2][1]=="X"  &&  arr[2][2]=="X" ){cout <<"winner is "<<X;break;}
else if(arr[0][0]=="O" &&   arr[0][2]=="O"  &&  arr[0][1]=="O" ){cout <<"winner is " <<O;break;}
else if(arr[1][0]=="O" &&   arr[1][1]=="O"  &&  arr[1][2]=="O" ){cout <<"winner is "<<O;break;}
else if(arr[2][0]=="O" &&   arr[2][1]=="O"  &&  arr[2][2]=="O" ){cout <<"winner is "<<O;break;}


else if(arr[0][0]=="X" &&arr[1][0]=="X" &&arr[2][0]=="X"){cout <<"winner is "<<X;break;}
else if(arr[0][1]=="X" &&arr[1][1]=="X" &&arr[2][1]=="X"){cout <<"winner is "<<X;break;}
else if(arr[0][2]=="X" &&arr[1][2]=="X" &&arr[2][2]=="X"){cout <<"winner is "<<X;break;}
else if(arr[0][0]=="O" &&arr[1][0]=="O" &&arr[2][0]=="O"){cout <<"winner is "<<O;break;}
else if(arr[0][1]=="O" &&arr[1][1]=="O" &&arr[2][1]=="O"){cout <<"winner is "<<O;break;}
else if(arr[0][2]=="O" &&arr[1][2]=="O" &&arr[2][2]=="O"){cout <<"winner is "<<O;break;}
else if(count ==8){cout<<"Its a draw";break;}


//************************************************
 q++;}
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//#########################################
string st;
for(;;){
cout<<endl<<"Do you want to play again (Y/N)??"<<endl;
cin>>st;

if(st == "Y"){

     main();
}
else if(st == "N"){
        break;
        }
else {cout<<"Error, kindly give command one more time "; continue;}
}
return 0;
}



