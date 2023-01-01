#include<iostream>
#include<windows.h>
using namespace std;
void b();
void gotoxy(int x,int y);





 main()
{
system("cls");
void b();
}
void b()

{gotoxy(21,4); 
   cout<<"##    "<<endl;
gotoxy(21,5);
    cout<<"#    #"<<endl;
 gotoxy(21,6);
cout<<"#      #   "<<endl;
gotoxy(21,7);
cout<<"#  ##   #   "<<endl;
gotoxy(21,8);
cout<<"#        #   "<<endl;
gotoxy(21,9);
cout<<"#         #   "<<endl;
}

void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}




