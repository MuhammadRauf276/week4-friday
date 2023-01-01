#include<iostream>
#include<windows.h>
using namespace std;
void printmenu(float user1st);
void compare(float agg1,string name1,float agg2,string name2);




main()
{
system("cls");
int choose;
float user1;
float aggregate1,aggregate2;

string name1,name2,goback;
float matric;
 float intermediate;
float ecat;
float matrics =1100;
float intermediates =1100;
float ecats =400;

while(true){

printmenu(user1);


cout <<"choose number  1,2,3,4,5  :";
cin>>choose;
if(choose ==1){
system("cls");
cout <<"You Choice 1 "<<endl;
cout<<"Enter Your name is   ";
cin >>name1;
cout << "Enter your Matric marks out of(1100)   ";
cin >>matric;
cout << "Enter your fsc marks (out of 1100)     ";
cin>>intermediate;
cout << "Enter your Ecat marks (out of 400)    ";
cin>>ecat;
aggregate1=(30*matric/matrics)+(30*intermediate/intermediates)+(40*ecat/ecats);
cout<<"Press  k   to go back ";
cin>>goback;

printmenu(user1);
cout <<"choose number  1,2,3,4,5  :";
cin>>choose;
}
if(choose ==2){
system("cls");
cout <<"You Choice 2 "<<endl;

cout<<"Enter Your name is    ";
cin >>name2;
cout << "Enter your Matric marks out of(1100)";
cin >>matric;
cout << "Enter your fsc marks (out of 1100)";
cin>>intermediate;
cout << "Enter your Ecat marks (out of 400)";
cin>>ecat;
aggregate2=(30*matric/matrics)+(30*intermediate/intermediates)+(40*ecat/ecats);
cout<<"Press  k   to go back ";
cin>>goback;

printmenu(user1);
cout <<"choose number  1,2,3,4,5  :";
cin>>choose;
}
if(choose==3){
system("cls");
cout <<"You Choice 3   "<<endl;
cout<<"Your name "<<name1<<"   aggregate is "<<aggregate1<<endl;
cout<<"Press  k   to go back ";
cin>>goback;

printmenu(user1);
cout <<"choose number  1,2,3,4,5  :";
cin>>choose;
}
if(choose==4){
system("cls");
cout <<"You Choice 4 "<<endl;
cout<<"Your name "<<name2<<"   aggregate is "<<aggregate2<<endl;
cout<<"Press  k   to go back ";
cin>>goback;

printmenu(user1);
cout <<"choose number  1,2,3,4,5  :";
cin>>choose;

}
if(choose ==5){
system("cls");
cout <<"You Choice 5 "<<endl;

compare(aggregate1,name1,aggregate2,name2);
cout<<"Press  k   to go back ";
cin>>goback;

printmenu(user1);
cout <<"choose number  1,2,3,4,5  :";
cin>>choose;
}

}
}

void printmenu(float user1st)
{system("cls");
cout<<"############################################"<<endl;
cout<<"#                                          #"<<endl;
cout<<"# Welcome to Uet Admission Mangment System #"<<endl;
cout<<"#                                          #"<<endl;
cout<<"############################################"<<endl;
cout<<"                                            "<<endl;
cout<<"                                          "<<endl;
cout<<"                                            "<<endl;
cout <<"Press 1 to Enter ist student detail  : "<<endl;
cout <<"Press 2 to Enter 2nd student detail  : "<<endl;
cout <<"Press 3 to calculate aggregate of 1 student   : "<<endl;
cout <<"Press 4 to calculate aggregate of 2nd student   : "<<endl;
cout <<"Press 5 to check student rollnumber  student detail  : "<<endl;

          }


void compare(float agg1,string name1,float agg2,string name2)
{
if(agg1>agg2){
cout<<"Roll no is 1st. Your name is "<<name1<<"  Your roll no is "<<agg1<<endl;
}
if(agg2>agg1){
cout<<"Roll no is ist . your name is "<<name2<<"  Your aggregate is "<<agg2<<endl;
}

}

                                                 
