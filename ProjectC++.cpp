#include<iostream>
#include<conio.h>
#include<fstream>
#include<stdlib.h>
#include<chrono>//second
#include<thread>//sleeping
#include<windows.h>
using namespace std;
int s=0,d=1000;
void id();
void menu();
void intro();
void constr();
void Seq();
void Sel();
void Rep();
void arry();
void Oned();
void Twod();
void Threed();
void strin();
void fun();
void funpro();
void str();
void ptr();
void cost();
void templ();
void ftemp();
void ctemp();
void exp();
void madeby();

void intr()
{
    int s=0,d=1000;
    while(s<1)
    {
        s++;
        system("cls");
        cout<<"\n";
        cout<<"\n \n \t \t \t \t \t---------------------------------->. ||  NAMASTE  || .<----------------------------------\n \n";
        Sleep(d);
        cout<<"\n                     \t \t \t                                 Welcome to everyone in our\n \n";
        Sleep(d);
        cout<<"\n                                    \t \t \t                      C++ Tutorial \n";
        cout<<"                                    \t  \t                          |__________________| \n \n";
        Sleep(d);
        cout<<"\n  ------------------------>.   Press key to move forward ";
        getch();
        system("cls");
        id();
    }
}
   void id()
   {
       ifstream infile,pasfile;
       string user,password,id ,pass;
       infile.open("record.txt");
       pasfile.open("rec.txt");
       system("cls");
       cout<<"\n \n \t \t \t \t \t---------------------------------->. ||  LOGIN || .<----------------------------------\n \n";
       cout<<"\n \t \t                                          Enter Username  : ";
       cin>>id;
       while(getline(infile,user))
       {
           if(id==user)
            {
            cout<<"\n \t \t                                          Enter password  : ";
            cin>>password;
            while(getline(pasfile,pass))
            {
                if(pass==password)

        cout<<"\n \n                                    \t \t \t                      Login Successfully \n";
        cout<<"                                    \t  \t                          |__________________________| \n \n";
        cout<<"\n  ------------------------>.   Press key to move forward  ";
        getch();
                    }
            }
       }
       infile.close();
       pasfile.close();
        system("cls");
        menu();
   }
   void menu()
   {
       int mn,funch,sq;
       char ch;
       int s=0,d=1000;
             while(s<1)
    {
        s++;
     cout<<"\n \t \t \t     \n                                                                             C++ Tutorial \n";
     cout<<"\t--------------------------------------------------------------------------------------------------------------------------------------------------------------\n  \n";
     Sleep(d);
     cout<<"\t \t \t                                  ...................  Index  ......................\n \n";
     Sleep(d);
     cout<<"\n \t \t                    1    Introduction to C++                             \t \t 7    Concept of OOPs \n ";
     cout<<"\n \t \t                    2    Control Structure                               \t \t 8    Constructor and Destructor \n";
     cout<<"\n \t \t                    3    Array                                           \t \t 9    Operator and Function Overloading \n";
     cout<<"\n \t \t                    4    Function                                        \t \t 10   Templates\n";
     cout<<"\n \t \t                    5    Structure and Union                             \t \t 11   File handling \n";
     cout<<"\n \t \t                    6    Pointer                                         \t \t 12   Exception handling \n  \n";
     Sleep(d);
     cout<<"\n \n \t \t \t           13------------>>>> Back                                 \t \t 14------------>>>> Exit \n  \n";
     Sleep(d);
    }
     cout<<" \n \n \t \t  \t \t                                     Enter Your Choice :   ";
     cin>>mn;
       switch(mn)
      {
           case 1:system("cls");intro();break;
           case 2:system("cls");constr();break;
           case 3:system("cls");arry();break;
           case 4:system("cls");fun();break;
           case 5:system("cls");str();break;
           case 6:system("cls");ptr();break;
           case 8:system("cls");cost();break;
          case 10:system("cls");templ();break;
          case 12:system("cls");exp();break;
          case 13:system("cls");intr();break;
          case 14:madeby();break;
               default :cout<<"\n \t \t                           *** Invalid Choice ***  .........>>>>>   Do you want to try again ? (y/n) ";
               cin>>ch;
               if(ch=='y')
               { system("cls");
                menu();
               }
               else if(ch=='n')
               {
                   system("cls");
                   madeby();
               }
               else
               {
                   exit(1);
               }
       }
   }
   void intro()  //Introduction to C++
   {
       int rep;
       ifstream infile;
       string str;
       infile.open("intro.txt");
       while(getline(infile,str))
       {
           cout<<str<<"\n";
       }
       infile.close();
       cout<<"\n \n \t \t \t           1------------>>>> Back                                 \t \t 2------------>>>> Exit \n  \n";
    Sleep(d);
     cout<<" \n \n \t \t  \t \t                                     Enter Your Choice :   ";
     cin>>rep;
  if(rep==1)
  {
  system("cls");
  menu();
  }
  else if(rep==2){
    madeby();
  }
  else{
    cout<<"Invalid Choice ";
    exit(0);
  }
   }
      void constr()  //Control Structure
{
    int sq;
    char ch;
    system("cls");
  ifstream infile;
  string str;
  infile.open("constr.txt");
  while(getline(infile,str))
  {
      cout<<str<<"\n";
  }
  infile.close();
  Sleep(d);
           cout<<"\n \n \t                    1    Sequence Control Structure  \t                    2    Selection Control Structure  \t                    3    Iteration Control Structure ";
           Sleep(d);
           cout<<"\n \n \t \t \t           4------------>>>> Back                                 \t \t 5------------>>>> Exit \n  \n";
           Sleep(d);
     cout<<" \n \n \t \t  \t \t                                     Enter Your Choice :   ";
     cin>>sq;
     switch(sq)
     {
         case 1:system("cls");Seq(); break;
         case 2:system("cls");Sel(); break;
         case 3:system("cls");Rep(); break;
         case 4:system("cls");menu(); break;
         case 5:system("cls");madeby(); break;
         default :cout<<"\n \t \t                           *** Invalid Choice ***  .........>>>>>   Do you want to try again ? (y/n) ";
               cin>>ch;
               if(ch=='y')
               { system("cls");
                constr();
               }
               else if(ch=='n')
               {
                   system("cls");
                   madeby();
               }
               else
               {
                   exit(1);
               }
     }
}
void Seq()  // Sequence Control Structure
{
    int seq;
    system("cls");
    ifstream infile;
  string str;
  infile.open("sequential.txt");
  while(getline(infile,str))
  {
      cout<<str<<"\n";
  }
  infile.close();
  cout<<"\n \n \t \t \t           1------------>>>> Back                                 \t \t 2------------>>>> Exit \n  \n";
          Sleep(d);
     cout<<" \n \n \t \t  \t \t                                     Enter Your Choice :   ";
     cin>>seq;
  if(seq==1)
  {system("cls");
  constr();
  }
  else if(seq==2){
    madeby();
  }
  else{
    cout<<"Invalid Choice ";
    exit(0);
  }
}
void Sel()     // Selection Control Structure
{
    int sel;
    system("cls");
    ifstream infile;
   string str;
  infile.open("Selection Structure.txt");
  while(getline(infile,str))
  {
      cout<<str<<"\n";
  }
  infile.close();
  cout<<"\n \n \t \t \t           1------------>>>> Back                                 \t \t 2------------>>>> Exit \n  \n";
          Sleep(d);
     cout<<" \n \n \t \t  \t \t                                     Enter Your Choice :   ";
     cin>>sel;
  if(sel==1)
  {
      system("cls");
  constr();
  }
  else if(sel==2){
    madeby();
  }
  else{
    cout<<"Invalid Choice ";
    exit(0);
  }
}
void Rep()        // Repetative Control Structure
  {
      int rep;
      system("cls");
      ifstream infile;
  string str;
  infile.open("Repeatative control Structure.txt");
  while(getline(infile,str))
  {
      cout<<str<<"\n";
  }
  infile.close();
  cout<<"\n \n \t \t \t           1------------>>>> Back                                 \t \t 2------------>>>> Exit \n  \n";
    Sleep(d);
     cout<<" \n \n \t \t  \t \t                                     Enter Your Choice :   ";
     cin>>rep;
  if(rep==1)
  {system("cls");
  constr();
  }
  else if(rep==2){
    madeby();
  }
  else{
    cout<<"Invalid Choice ";
    exit(0);
  }
}
     void arry()   //  Array
{
    int tem;
    char ch;
    system("cls");
  ifstream infile;
  string str;
  infile.open("array.txt");
  while(getline(infile,str))
  {
      cout<<str<<"\n";
  }
  infile.close();
  Sleep(d);
           cout<<"\n \n \t                    1    One-D Array  \t                    2    Two-D Array  \t                    3    Three-D Array  \t                   4     String \t \t ";
           Sleep(d);
           cout<<"\n \n \t \t \t           5------------>>>> Back                                 \t \t 6------------>>>> Exit \n  \n";
           Sleep(d);
     cout<<" \n \n \t \t  \t \t                                     Enter Your Choice :   ";
     cin>>tem;
     switch(tem)
     {
         case 1:system("cls");Oned(); break;
         case 2:system("cls");Twod(); break;
         case 3:system("cls");Threed(); break;
         case 4:system("cls");strin(); break;
         case 5:system("cls");menu(); break;
         case 6:system("cls");madeby(); break;
         default :cout<<"\n \t \t                           *** Invalid Choice ***  .........>>>>>   Do you want to try again ? (y/n) ";
               cin>>ch;
               if(ch=='y')
               { system("cls");
                arry();
               }
               else if(ch=='n')
               {
                   system("cls");
                   madeby();
               }
               else
               {
                   exit(1);
               }
     }
}
void Oned()    //  1-D Array
{
    int seq;
    system("cls");
    ifstream infile;
    string st;
    infile.open("1Darray.txt");
    while (getline(infile,st))
    {
        cout<<st<<endl;
    }
    infile.close();
    cout<<"\n \n \t \t \t           1------------>>>> Back                                 \t \t 2------------>>>> Exit \n  \n";
          Sleep(d);
     cout<<" \n \n \t \t  \t \t                                     Enter Your Choice :   ";
     cin>>seq;
  if(seq==1)
  {system("cls");
  arry();
  }
  else if(seq==2){
    madeby();
  }
  else{
    cout<<"Invalid Choice ";
    exit(0);
  }
}
void Twod()   //  3-D Array
{
    int seq;
    system("cls");
    ifstream infile;
    string st;
    infile.open("2Darray.txt");
    while(getline(infile,st))
    {
        cout<<st<<endl;
    }
    infile.close();
    cout<<"\n \n \t \t \t           1------------>>>> Back                                 \t \t 2------------>>>> Exit \n  \n";
          Sleep(d);
     cout<<" \n \n \t \t  \t \t                                     Enter Your Choice :   ";
     cin>>seq;
  if(seq==1)
  {system("cls");
  arry();
  }
  else if(seq==2){
    madeby();
  }
  else{
    cout<<"Invalid Choice ";
    exit(0);
  }
}
void Threed()   //  3-D Array
{
    int seq;
    system("cls");
    ifstream infile;
    string st;
    infile.open("3Darray.txt");
    while(getline(infile,st))
    {
        cout<<st<<endl;
    }
    infile.close();
    cout<<"\n \n \t \t \t           1------------>>>> Back                                 \t \t 2------------>>>> Exit \n  \n";
          Sleep(d);
     cout<<" \n \n \t \t  \t \t                                     Enter Your Choice :   ";
     cin>>seq;
  if(seq==1)
  {
  system("cls");
  arry();
  }
  else if(seq==2){
    madeby();
  }
  else{
    cout<<"Invalid Choice ";
    exit(0);
  }
}
void strin()   //  String
{
    int seq;
    system("cls");
    ifstream infile;
    string st;
    infile.open("string.txt");
    while(getline(infile,st))
    {
        cout<<st<<endl;
    }
    infile.close();
    cout<<"\n \n \t \t \t           1------------>>>> Back                                 \t \t 2------------>>>> Exit \n  \n";
          Sleep(d);
     cout<<" \n \n \t \t  \t \t                                     Enter Your Choice :   ";
     cin>>seq;
  if(seq==1)
  {
  system("cls");
  arry();
  }
  else if(seq==2){
    madeby();
  }
  else{
    cout<<"Invalid Choice ";
    exit(0);
  }
}
void fun()      //  Function
   {
       int funch;
       char ch;
       ifstream infile;
       string str;
       infile.open("fun.txt");
       while(getline(infile,str))
       {
           cout<<str<<"\n";
       }
       infile.close();
            cout<<"\n \n \t \t                                      1    Examples of each type of function";
           cout<<"\n \n \t \t \t           2------------>>>> Back                                 \t \t 3------------>>>> Exit \n  \n";
           Sleep(d);
     cout<<" \n \n \t \t  \t \t                                     Enter Your Choice :   ";
     cin>>funch;
     switch(funch)
     {
         case 1:system("cls");funpro(); break;
         case 2:system("cls");menu(); break;
         case 3:system("cls");madeby(); break;
         default :cout<<"\n \t \t                           *** Invalid Choice ***  .........>>>>>   Do you want to try again ? (y/n) ";
               cin>>ch;
               if(ch=='y')
               { system("cls");
                fun();
               }
               else if(ch=='n')
               {
                   system("cls");
                   madeby();
               }
               else
               {
                   exit(1);
               }
     }
   }
   void funpro()   // Function Examples
   {
       int rep;
       ifstream infile;
       string str;
       infile.open("funx.txt");
       while(getline(infile,str))
       {
           cout<<str<<"\n";
       }
       infile.close();
        cout<<"\n \n \t \t \t           1------------>>>> Back                                 \t \t 2------------>>>> Exit \n  \n";
    Sleep(d);
     cout<<" \n \n \t \t  \t \t                                     Enter Your Choice :   ";
     cin>>rep;
  if(rep==1)
  {system("cls");
  fun();
  }
  else if(rep==2){
    madeby();
  }
  else{
    cout<<"Invalid Choice ";
    exit(0);
  }
   }
   void str()
{
    int rep;
    ifstream infile;
    string str;
    infile.open("stru.txt");
    while(getline(infile,str))
    {
        cout<<str<<"\n";
    }
    infile.close();
     cout<<"\n \n \t \t \t           1------------>>>> Back                                 \t \t 2------------>>>> Exit \n  \n";
    Sleep(d);
     cout<<" \n \n \t \t  \t \t                                     Enter Your Choice :   ";
     cin>>rep;
  if(rep==1)
  {system("cls");
  menu();
  }
  else if(rep==2){
    madeby();
  }
  else{
    cout<<"Invalid Choice ";
    exit(0);
  }
}
void ptr()
{
    int rep;
    ifstream infile;
    string str;
    infile.open("pointer.txt");
    while(getline(infile,str))
    {
        cout<<str<<"\n";
    }
    infile.close();
    cout<<"\n \n \t \t \t           1------------>>>> Back                                 \t \t 2------------>>>> Exit \n  \n";
    Sleep(d);
     cout<<" \n \n \t \t  \t \t                                     Enter Your Choice :   ";
     cin>>rep;
  if(rep==1)
  {system("cls");
  menu();
  }
  else if(rep==2){
    madeby();
  }
  else{
    cout<<"Invalid Choice ";
    exit(0);
  }
}

    void templ()
{
    system("cls");
    char ch;
  ifstream infile;
  string str;
  infile.open("temp.txt");
  while(getline(infile,str))
  {
      cout<<str<<"\n";
  }
  infile.close();
  Sleep(d);
    int tem;
           cout<<"\n \n \t \t                    1    Function Template  \t \t                    2    Class Template \n \n \t \t ";
           Sleep(d);
           cout<<"\n \n \t \t \t           3------------>>>> Back                                 \t \t 4------------>>>> Exit \n  \n";
           Sleep(d);
     cout<<" \n \n \t \t  \t \t                                     Enter Your Choice :   ";
     cin>>tem;
     switch(tem)
     {
         case 1:system("cls");ftemp(); break;
         case 2:system("cls");ctemp(); break;
         case 3:system("cls");menu(); break;
         case 4:system("cls");madeby(); break;
         default :cout<<"\n \t \t                           *** Invalid Choice ***  .........>>>>>   Do you want to try again ? (y/n) ";
               cin>>ch;
               if(ch=='y')
               { system("cls");
                templ();
               }
               else if(ch=='n')
               {
                   system("cls");
                   madeby();
               }
               else
               {
                   exit(1);
               }
     }
}
void ftemp()
{
    int seq;
    system("cls");
    ifstream infile;
  string str;
  infile.open("ft.txt");
  while(getline(infile,str))
  {
      cout<<str<<"\n";
  }
  infile.close();
  cout<<"\n \n \t \t \t           1------------>>>> Back                                 \t \t 2------------>>>> Exit \n  \n";
          Sleep(d);
     cout<<" \n \n \t \t  \t \t                                     Enter Your Choice :   ";
     cin>>seq;
  if(seq==1)
  {system("cls");
  templ();
  }
  else if(seq==2){
    madeby();
  }
  else{
    cout<<"Invalid Choice ";
    exit(0);
  }
}
void ctemp()
{
    int seq;
    system("cls");
    ifstream infile;
   string str;
  infile.open("ct.txt");
  while(getline(infile,str))
  {
      cout<<str<<"\n";
  }
  infile.close();
   cout<<"\n \n \t \t \t           1------------>>>> Back                                 \t \t 2------------>>>> Exit \n  \n";
          Sleep(d);
     cout<<" \n \n \t \t  \t \t                                     Enter Your Choice :   ";
     cin>>seq;
  if(seq==1)
  {system("cls");
  templ();
  }
  else if(seq==2){
    madeby();
  }
  else{
    cout<<"Invalid Choice ";
    exit(0);
  }
}
void cost()
{
    int seq;
    ifstream infile;
    string str;
    infile.open("construct.txt");
    while(getline(infile,str))
    {
        cout<<str<<"\n";
    }
    infile.close();
     cout<<"\n \n \t \t \t           1------------>>>> Back                                 \t \t 2------------>>>> Exit \n  \n";
          Sleep(d);
     cout<<" \n \n \t \t  \t \t                                     Enter Your Choice :   ";
     cin>>seq;
  if(seq==1)
  {
      system("cls");
  menu();
  }
  else if(seq==2){
    madeby();
  }
  else{
    cout<<"Invalid Choice ";
    exit(0);
  }
}
void exp()
{
    int seq;
    ifstream infile;
    string str;
    infile.open("exc.txt");
    while(getline(infile,str))
    {
        cout<<str<<"\n";
    }
    infile.close();
      cout<<"\n \n \t \t \t           1------------>>>> Back                                 \t \t 2------------>>>> Exit \n  \n";
          Sleep(d);
     cout<<" \n \n \t \t  \t \t                                     Enter Your Choice :   ";
     cin>>seq;
  if(seq==1)
  {
      system("cls");
  menu();
  }
  else if(seq==2){
    madeby();
  }
  else{
    cout<<"Invalid Choice ";
    exit(0);
  }
}
   void madeby()
   {
       system("cls");
                   cout<<"\n \t \t \t     \n                                                                      Made By";
                   cout<<"\n\t                     ------------------------------------------------------------------------------------------";
                   cout<<"\n \t \t                                                    Name        Roll \n \n";
                   cout<<"\n \t \t                                                 Ruchi Sinha     20 \n ";
                   cout<<"\n \t \t                                                 Sakshi Raj      18 \n ";
                   cout<<"\n \t \t                                                 Sonam Singh     05 \n ";
                   cout<<"\n \t \t                                                 Sapna Singh     10\n ";
                   cout<<"\n \t \t                                                 Nitya Nandani   07\n ";
                   cout<<"\t                      ------------------------------------------------------------------------------------------\n";
                   cout<<" \n \t \t                    ...................  Thank You For using this software  ......................\n";
   }
   int main()
    {
        intr();
    }


