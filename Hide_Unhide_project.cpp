#include<iostream>
#include<string.h>

using namespace std;
 void Hide();
 void Un_Hide();
int main()
{   int choice;
cout<<"\n\n\n\t\t please Enter Your Choice\n\n"<<endl;

 cout<<"\t\t 1. Hide"<<endl;
 cout<<"\t\t 2. Un-Hide\n\n";
 cin>>choice;
 switch(choice)
 {
     case 1: Hide();
     break;
     case 2: Un_Hide();
     break;
     default:
     cout<<"\t\t Enter Valid Choice\n";
 }
    return 0;
}
void Un_Hide()
{
 cout<<"\t\t Enter folder name you want to unhide\n";
    string fol;
    cin>>fol;
    string cmd="attrib -h -s ";
    cmd+=fol;
    char hidecmd[cmd.length()+1];
    for(int i=0; i<cmd.length(); i++)
   { 
       hidecmd[i]=cmd[i];
   }
     system(hidecmd);
}

void Hide()
{
    cout<<"\t\t Enter folder name you want to hide\n";
    string fol;
    cin>>fol;
    string cmd="attrib +h +s ";
    cmd+=fol;
    char hidecmd[cmd.length()+1];
    for(int i=0; i<cmd.length(); i++)
    
    {
        hidecmd[i]=cmd[i];
    }

    system(hidecmd);
}