#include<iostream>
using namespace std;
void discount(float totprice);


main(){
float totprice;
discount(totprice);



}




void discount(float totprice)
{ 
float totalprice;
float discount;
float rquantity;
float tred= 2.00;

float twhite=4.10;

float ttulips=2.50;
float tpred;
float tpwhite;
float tptulips;

cout<<"Enter quantity of red rose    "<<endl;
cin>>rquantity;
tpred =rquantity*tred;
cout<<"Enter quantity of white rose    "<<endl;
cin>>rquantity;
tpwhite =rquantity*twhite;
cout<<"Enter quantity of Tuilips    "<<endl;
cin>>rquantity;
tptulips =rquantity*ttulips;
totalprice = tpred+tpwhite+tptulips;

if(totalprice >200){
discount =(20*totalprice)/100;
cout<<"Your total price after discount is   :"<<discount<<endl;}
cout<<"Your total price in dollars is "<<totalprice;



}
