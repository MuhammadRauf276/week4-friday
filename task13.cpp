#include<iostream>
using namespace std;
void userdays(float freetime);


main(){

int free;
userdays(free);
}


void userdays(float freetime)

{
float days;
cout<<"Enter  your holidays days  "<<endl;
cin>>days;

float working;
float timegames;
working = 365-days;
timegames=(working*63 + 127*days);
float normtime =30000;
float difference1 ;
difference1 = (normtime - timegames);
int thour;
thour = (difference1/60);

if(thour>=50){
cout <<" Tom sleep well   "<<thour<<"  Less for play";

} 
if(thour <50){
cout <<"Tom will run away   "<<thour<<"  hours  for play";

}
      }



