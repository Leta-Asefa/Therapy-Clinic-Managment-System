#include<iostream>
#include<fstream>
#include<cstring>
#include<iomanip>
using namespace std;

const int price_45_min=450;
const int price_60_min=550;
const int custmax=10000;
const int tp10=1000;
const int tp12=1200;
const int tp15=1500;
const int tp20=2000;
const int tp25=2500;
const int ma10=1000;
const int ma12=1200;
const int ma15=1500;
const int ma17=1700;

struct withdrawal_info{

string date;
int amount;
string reason;

}withdrawal[custmax];

struct reflexology_customers
{
int price;
string massager;
string date;

}reflex[custmax];
struct patient_customers
{
    int id;
    string name;
    int age;
    string sex;
    int phone;
    int total;
    int credit;
    string assesment;
    string recommended_treatments;
    string focusing_areas;
    string date_of_first_price;
    int first_cash_price;
    int first_cbe_price;
    string day_1;
    string day_2;
    string day_3;
    string day_4;
    string day_5;
    string day_6;
    string day_7;
    string day_8;
    string day_9;
    string day_10;
    string day_11;
    string day_12;
    string day_13;
    string day_14;
    string day_15;
    string day_16;
    string day_17;
    string day_18;
    string day_19;
    string day_20;
    string date_1;
    string date_2;
    string date_3;
    string date_4;
    string date_5;
    string date_6;
    string date_7;
    string date_8;
    string date_9;
    string date_10;
    string date_11;
    string date_12;
    string date_13;
    string date_14;
    string date_15;
    string date_16;
    string date_17;
    string date_18;
    string date_19;
    string date_20;
    string date_1_prescription;
    string date_2_prescription;
    string date_3_prescription;
    string date_4_prescription;
    string date_5_prescription;
    string date_6_prescription;
    string date_7_prescription;
    string date_8_prescription;
    string date_9_prescription;
    string date_10_prescription;
    string date_11_prescription;
    string date_12_prescription;
    string date_13_prescription;
    string date_14_prescription;
    string date_15_prescription;
    string date_16_prescription;
    string date_17_prescription;
    string date_18_prescription;
    string date_19_prescription;
    string date_20_prescription;
    string date_1_attendance;
    string date_2_attendance;
    string date_3_attendance;
    string date_4_attendance;
    string date_5_attendance;
    string date_6_attendance;
    string date_7_attendance;
    string date_8_attendance;
    string date_9_attendance;
    string date_10_attendance;
    string date_11_attendance;
    string date_12_attendance;
    string date_13_attendance;
    string date_14_attendance;
    string date_15_attendance;
    string date_16_attendance;
    string date_17_attendance;
    string date_18_attendance;
    string date_19_attendance;
    string date_20_attendance;
    int date_1_cash_price;
    int  date_2_cash_price;
    int  date_3_cash_price;
    int  date_4_cash_price;
    int  date_5_cash_price;
    int  date_6_cash_price;
    int  date_7_cash_price;
    int  date_8_cash_price;
    int  date_9_cash_price;
    int date_10_cash_price;
    int date_11_cash_price;
    int date_12_cash_price;
    int date_13_cash_price;
    int date_14_cash_price;
    int date_15_cash_price;
    int  date_16_cash_price;
    int  date_17_cash_price;
    int date_18_cash_price;
    int date_19_cash_price;
    int date_20_cash_price;
    int date_1_cbe_price;
    int  date_2_cbe_price;
    int  date_3_cbe_price;
    int  date_4_cbe_price;
    int  date_5_cbe_price;
    int  date_6_cbe_price;
    int  date_7_cbe_price;
    int  date_8_cbe_price;
    int  date_9_cbe_price;
    int date_10_cbe_price;
    int date_11_cbe_price;
    int date_12_cbe_price;
    int date_13_cbe_price;
    int date_14_cbe_price;
    int date_15_cbe_price;
    int  date_16_cbe_price;
    int  date_17_cbe_price;
    int date_18_cbe_price;
    int date_19_cbe_price;
    int date_20_cbe_price;

}patient[custmax];


int main ()
{


    char option;
    int  CustId;



    do{ system("cls");

    cout<<"\n\n\t\t\tENTER THE ID : ";
    cin>>CustId;



ifstream open("pp.txt",ios::in);
if(open.is_open())
{
    string line;
    int x=0;
    int temp=0;
    stringstream ss;
    while(getline(open,line))
    {
        ss.clear();
        ss<<line;
        ss>>temp;
        patient[x].id=temp;

        getline(open,line);
        patient[x].name=line;

        getline(open,line);
        ss.clear();
        ss<<line;
        ss>>temp;
        patient[x].age=temp;

        getline(open,line);
         patient[x].sex=line;

         getline(open,line);
        ss.clear();
        ss<<line;
        ss>>temp;
        patient[x].phone=temp;

        getline(open,line);
        ss.clear();
        ss<<line;
        ss>>temp;
        patient[x].total=temp;

        getline(open,line);
        ss.clear();
        ss<<line;
        ss>>temp;
        patient[x].credit=temp;

       getline(open,line);
       patient[x].assesment=line;

        getline(open,line);
         patient[x].recommended_treatments=line;

        getline(open,line);
         patient[x].focusing_areas=line;

        getline(open,line);
         patient[x].date_of_first_price=line;

       getline(open,line);
        ss.clear();
        ss<<line;
        ss>>temp;
        patient[x].first_cash_price=temp;

        getline(open,line);
        ss.clear();
        ss<<line;
        ss>>temp;
        patient[x].first_cbe_price=temp;

        getline(open,line);
         patient[x].day_1=line;

         getline(open,line);
         patient[x].day_2=line;

         getline(open,line);
         patient[x].day_3=line;

          getline(open,line);
         patient[x].day_4=line;

          getline(open,line);
         patient[x].day_5=line;

          getline(open,line);
         patient[x].day_6=line;

          getline(open,line);
         patient[x].day_7=line;

          getline(open,line);
         patient[x].day_8=line;

          getline(open,line);
         patient[x].day_9=line;

          getline(open,line);
         patient[x].day_10=line;

          getline(open,line);
         patient[x].day_11=line;

          getline(open,line);
         patient[x].day_12=line;

          getline(open,line);
         patient[x].day_13=line;

          getline(open,line);
         patient[x].day_14=line;

          getline(open,line);
         patient[x].day_15=line;

          getline(open,line);
         patient[x].day_16=line;

          getline(open,line);
         patient[x].day_17=line;

          getline(open,line);
         patient[x].day_18=line;

          getline(open,line);
         patient[x].day_19=line;

          getline(open,line);
         patient[x].day_20=line;


            getline(open,line);
         patient[x].date_1=line;

            getline(open,line);
         patient[x].date_2=line;

            getline(open,line);
         patient[x].date_3=line;

            getline(open,line);
         patient[x].date_4=line;

            getline(open,line);
         patient[x].date_5=line;

            getline(open,line);
         patient[x].date_6=line;

            getline(open,line);
         patient[x].date_7=line;

            getline(open,line);
         patient[x].date_8=line;

            getline(open,line);
         patient[x].date_9=line;

            getline(open,line);
         patient[x].date_10=line;

            getline(open,line);
         patient[x].date_11=line;

            getline(open,line);
         patient[x].date_12=line;

            getline(open,line);
         patient[x].date_13=line;

            getline(open,line);
         patient[x].date_14=line;

            getline(open,line);
         patient[x].date_15=line;

            getline(open,line);
         patient[x].date_16=line;

            getline(open,line);
         patient[x].date_17=line;

            getline(open,line);
         patient[x].date_18=line;

            getline(open,line);
         patient[x].date_19=line;

            getline(open,line);
         patient[x].date_20=line;

        getline(open,line);
         patient[x].date_1_prescription=line;

            getline(open,line);
         patient[x].date_2_prescription=line;

            getline(open,line);
         patient[x].date_3_prescription=line;

            getline(open,line);
         patient[x].date_4_prescription=line;

            getline(open,line);
         patient[x].date_5_prescription=line;

            getline(open,line);
         patient[x].date_6_prescription=line;

            getline(open,line);
         patient[x].date_7_prescription=line;

            getline(open,line);
         patient[x].date_8_prescription=line;

            getline(open,line);
         patient[x].date_9_prescription=line;

            getline(open,line);
         patient[x].date_10_prescription=line;

            getline(open,line);
         patient[x].date_11_prescription=line;

            getline(open,line);
         patient[x].date_12_prescription=line;

            getline(open,line);
         patient[x].date_13_prescription=line;

            getline(open,line);
         patient[x].date_14_prescription=line;

            getline(open,line);
         patient[x].date_15_prescription=line;

            getline(open,line);
         patient[x].date_16_prescription=line;

            getline(open,line);
         patient[x].date_17_prescription=line;

            getline(open,line);
         patient[x].date_18_prescription=line;

            getline(open,line);
         patient[x].date_19_prescription=line;

            getline(open,line);
         patient[x].date_20_prescription=line;

        getline(open,line);
         patient[x].date_1_attendance=line;

            getline(open,line);
         patient[x].date_2_attendance=line;

            getline(open,line);
         patient[x].date_3_attendance=line;

            getline(open,line);
         patient[x].date_4_attendance=line;

            getline(open,line);
         patient[x].date_5_attendance=line;

            getline(open,line);
         patient[x].date_6_attendance=line;

            getline(open,line);
         patient[x].date_7_attendance=line;

            getline(open,line);
         patient[x].date_8_attendance=line;

            getline(open,line);
         patient[x].date_9_attendance=line;

            getline(open,line);
         patient[x].date_10_attendance=line;

            getline(open,line);
         patient[x].date_11_attendance=line;

            getline(open,line);
         patient[x].date_12_attendance=line;

            getline(open,line);
         patient[x].date_13_attendance=line;

            getline(open,line);
         patient[x].date_14_attendance=line;

            getline(open,line);
         patient[x].date_15_attendance=line;

            getline(open,line);
         patient[x].date_16_attendance=line;

            getline(open,line);
         patient[x].date_17_attendance=line;

            getline(open,line);
         patient[x].date_18_attendance=line;

            getline(open,line);
         patient[x].date_19_attendance=line;

            getline(open,line);
         patient[x].date_20_attendance=line;


            getline(open,line);
        ss.clear();
        ss<<line;
        ss>>temp;
        patient[x].date_1_cash_price=temp;


            getline(open,line);
        ss.clear();
        ss<<line;
        ss>>temp;
        patient[x].date_2_cash_price=temp;

            getline(open,line);
        ss.clear();
        ss<<line;
        ss>>temp;
        patient[x].date_3_cash_price=temp;

            getline(open,line);
        ss.clear();
        ss<<line;
        ss>>temp;
        patient[x].date_4_cash_price=temp;

            getline(open,line);
        ss.clear();
        ss<<line;
        ss>>temp;
        patient[x].date_5_cash_price=temp;

            getline(open,line);
        ss.clear();
        ss<<line;
        ss>>temp;
        patient[x].date_6_cash_price=temp;

            getline(open,line);
        ss.clear();
        ss<<line;
        ss>>temp;
        patient[x].date_7_cash_price=temp;

            getline(open,line);
        ss.clear();
        ss<<line;
        ss>>temp;
        patient[x].date_8_cash_price=temp;

            getline(open,line);
        ss.clear();
        ss<<line;
        ss>>temp;
        patient[x].date_9_cash_price=temp;

            getline(open,line);
        ss.clear();
        ss<<line;
        ss>>temp;
        patient[x].date_10_cash_price=temp;

            getline(open,line);
        ss.clear();
        ss<<line;
        ss>>temp;
        patient[x].date_11_cash_price=temp;

            getline(open,line);
        ss.clear();
        ss<<line;
        ss>>temp;
        patient[x].date_12_cash_price=temp;

            getline(open,line);
        ss.clear();
        ss<<line;
        ss>>temp;
        patient[x].date_13_cash_price=temp;

            getline(open,line);
        ss.clear();
        ss<<line;
        ss>>temp;
        patient[x].date_14_cash_price=temp;

            getline(open,line);
        ss.clear();
        ss<<line;
        ss>>temp;
        patient[x].date_15_cash_price=temp;

            getline(open,line);
        ss.clear();
        ss<<line;
        ss>>temp;
        patient[x].date_16_cash_price=temp;

            getline(open,line);
        ss.clear();
        ss<<line;
        ss>>temp;
        patient[x].date_17_cash_price=temp;

            getline(open,line);
        ss.clear();
        ss<<line;
        ss>>temp;
        patient[x].date_18_cash_price=temp;

            getline(open,line);
        ss.clear();
        ss<<line;
        ss>>temp;
        patient[x].date_19_cash_price=temp;

            getline(open,line);
        ss.clear();
        ss<<line;
        ss>>temp;
        patient[x].date_20_cash_price=temp;

            getline(open,line);
        ss.clear();
        ss<<line;
        ss>>temp;
        patient[x].date_1_cbe_price=temp;

            getline(open,line);
        ss.clear();
        ss<<line;
        ss>>temp;
        patient[x].date_2_cbe_price=temp;

            getline(open,line);
        ss.clear();
        ss<<line;
        ss>>temp;
        patient[x].date_3_cbe_price=temp;

            getline(open,line);
        ss.clear();
        ss<<line;
        ss>>temp;
        patient[x].date_4_cbe_price=temp;

            getline(open,line);
        ss.clear();
        ss<<line;
        ss>>temp;
        patient[x].date_5_cbe_price=temp;

            getline(open,line);
        ss.clear();
        ss<<line;
        ss>>temp;
        patient[x].date_6_cbe_price=temp;

            getline(open,line);
        ss.clear();
        ss<<line;
        ss>>temp;
        patient[x].date_7_cbe_price=temp;

            getline(open,line);
        ss.clear();
        ss<<line;
        ss>>temp;
        patient[x].date_8_cbe_price=temp;

            getline(open,line);
        ss.clear();
        ss<<line;
        ss>>temp;
        patient[x].date_9_cbe_price=temp;

            getline(open,line);
        ss.clear();
        ss<<line;
        ss>>temp;
        patient[x].date_10_cbe_price=temp;

            getline(open,line);
        ss.clear();
        ss<<line;
        ss>>temp;
        patient[x].date_11_cbe_price=temp;

            getline(open,line);
        ss.clear();
        ss<<line;
        ss>>temp;
        patient[x].date_12_cbe_price=temp;

            getline(open,line);
        ss.clear();
        ss<<line;
        ss>>temp;
        patient[x].date_13_cbe_price=temp;

            getline(open,line);
        ss.clear();
        ss<<line;
        ss>>temp;
        patient[x].date_14_cbe_price=temp;

            getline(open,line);
        ss.clear();
        ss<<line;
        ss>>temp;
        patient[x].date_15_cbe_price=temp;

            getline(open,line);
        ss.clear();
        ss<<line;
        ss>>temp;
        patient[x].date_16_cbe_price=temp;

            getline(open,line);
        ss.clear();
        ss<<line;
        ss>>temp;
        patient[x].date_17_cbe_price=temp;

            getline(open,line);
        ss.clear();
        ss<<line;
        ss>>temp;
        patient[x].date_18_cbe_price=temp;

            getline(open,line);
        ss.clear();
        ss<<line;
        ss>>temp;
        patient[x].date_19_cbe_price=temp;

            getline(open,line);
        ss.clear();
        ss<<line;
        ss>>temp;
        patient[x].date_20_cbe_price=temp;



        x++;
    }



}

else{cout<<"the file is not opened";}

open.close();

    for(int x=0;x<custmax;x++)
    {
        if(patient[x].id=CustId)
            { cout<<"\n\n\n\t\t\t"<<patient[x].focusing_areas;
                break; }
    }

cin.ignore();
cin.get();


            }while(true);

}
