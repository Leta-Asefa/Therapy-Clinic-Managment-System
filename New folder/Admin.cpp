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





void   fulfil(int CustId)
{ int counter=0;

    for(int x=0;x<custmax;x++)
    {
        if(patient[x].id==CustId)
        {counter++;
        cout<<"\n"<<setw(6)<<"ID"<<"  "<<setw(20)<<"NAME"<<"  "<<setw(4)<<"AGE"<<"  "<<setw(6)<<"SEX"<<"  "<<setw(14)<<"PHONE\n";
        cout<<setw(6)<<patient[x].id<<"  "<<setw(20)<<patient[x].name<<"  "<<setw(4)<<patient[x].age<<"  "<<setw(6)<<patient[x].sex<<"  "<<setw(14)<<patient[x].phone;
        cout<<"\n--------------------------------------------------------------------------------------------------------------------------------";
        cout<<"\n\nENTER THE ASSESMENT : ";
        cin.ignore();
        getline(cin,patient[x].assesment);
        cout<<"\nENTER THE RECOMMENDED TREATMENTS : ";
        getline(cin,patient[x].recommended_treatments);
        cout<<"\nENTER THE FOCUSING AREAS : ";
        getline(cin,patient[x].focusing_areas);
        system("cls");


            cout<<"\n\n\n\t\t\tPRESCRIPTION AND APPOINTMENT";

      cout<<"\n\n\t\tENTER THE DAY : ";    getline(cin,patient[x].day_1); cout<<"\n\t\tENTER THE DATE : ";    getline(cin,patient[x].date_1);  cout<<"\t\tPRESCRIPTION : ";  getline(cin,patient[x].date_1_prescription);    cout<<"\n\n";

      cout<<"\n\n\t\tENTER THE DAY : ";    getline(cin,patient[x].day_2); cout<<"\n\t\tENTER THE DATE : ";    getline(cin,patient[x].date_2);  cout<<"\t\tPRESCRIPTION : ";  getline(cin,patient[x].date_2_prescription);    cout<<"\n\n";

      cout<<"\n\n\t\tENTER THE DAY : ";    getline(cin,patient[x].day_3); cout<<"\n\t\tENTER THE DATE : ";    getline(cin,patient[x].date_3);  cout<<"\t\tPRESCRIPTION : ";  getline(cin,patient[x].date_3_prescription);    cout<<"\n\n";

      cout<<"\n\n\t\tENTER THE DAY : ";    getline(cin,patient[x].day_4); cout<<"\n\t\tENTER THE DATE : ";    getline(cin,patient[x].date_4);  cout<<"\t\tPRESCRIPTION : ";  getline(cin,patient[x].date_4_prescription);    cout<<"\n\n";

      cout<<"\n\n\t\tENTER THE DAY : ";    getline(cin,patient[x].day_5); cout<<"\n\t\tENTER THE DATE : ";    getline(cin,patient[x].date_5);  cout<<"\t\tPRESCRIPTION : ";  getline(cin,patient[x].date_5_prescription);    cout<<"\n\n";

      cout<<"\n\n\t\tENTER THE DAY : ";    getline(cin,patient[x].day_6); cout<<"\n\t\tENTER THE DATE : ";    getline(cin,patient[x].date_6);  cout<<"\t\tPRESCRIPTION : ";  getline(cin,patient[x].date_6_prescription);    cout<<"\n\n";

      cout<<"\n\n\t\tENTER THE DAY : ";    getline(cin,patient[x].day_7); cout<<"\n\t\tENTER THE DATE : ";    getline(cin,patient[x].date_7);  cout<<"\t\tPRESCRIPTION : ";  getline(cin,patient[x].date_7_prescription);    cout<<"\n\n";

      cout<<"\n\n\t\tENTER THE DAY : ";    getline(cin,patient[x].day_8); cout<<"\n\t\tENTER THE DATE : ";    getline(cin,patient[x].date_8);  cout<<"\t\tPRESCRIPTION : ";  getline(cin,patient[x].date_8_prescription);    cout<<"\n\n";

      cout<<"\n\n\t\tENTER THE DAY : ";    getline(cin,patient[x].day_9); cout<<"\n\t\tENTER THE DATE : ";    getline(cin,patient[x].date_9);  cout<<"\t\tPRESCRIPTION : ";  getline(cin,patient[x].date_9_prescription);    cout<<"\n\n";

      cout<<"\n\n\t\tENTER THE DAY : ";    getline(cin,patient[x].day_10); cout<<"\n\t\tENTER THE DATE : ";    getline(cin,patient[x].date_10);  cout<<"\t\tPRESCRIPTION : ";  getline(cin,patient[x].date_10_prescription);    cout<<"\n\n";

      cout<<"\n\n\t\tENTER THE DAY : ";    getline(cin,patient[x].day_11); cout<<"\n\t\tENTER THE DATE : ";    getline(cin,patient[x].date_11);  cout<<"\t\tPRESCRIPTION : ";  getline(cin,patient[x].date_11_prescription);    cout<<"\n\n";

      cout<<"\n\n\t\tENTER THE DAY : ";    getline(cin,patient[x].day_12); cout<<"\n\t\tENTER THE DATE : ";    getline(cin,patient[x].date_12);  cout<<"\t\tPRESCRIPTION : ";  getline(cin,patient[x].date_12_prescription);    cout<<"\n\n";

      cout<<"\n\n\t\tENTER THE DAY : ";    getline(cin,patient[x].day_13); cout<<"\n\t\tENTER THE DATE : ";    getline(cin,patient[x].date_13);  cout<<"\t\tPRESCRIPTION : ";  getline(cin,patient[x].date_13_prescription);    cout<<"\n\n";

      cout<<"\n\n\t\tENTER THE DAY : ";    getline(cin,patient[x].day_14); cout<<"\n\t\tENTER THE DATE : ";    getline(cin,patient[x].date_14);  cout<<"\t\tPRESCRIPTION : ";  getline(cin,patient[x].date_14_prescription);    cout<<"\n\n";

      cout<<"\n\n\t\tENTER THE DAY : ";    getline(cin,patient[x].day_15); cout<<"\n\t\tENTER THE DATE : ";    getline(cin,patient[x].date_15);  cout<<"\t\tPRESCRIPTION : ";  getline(cin,patient[x].date_15_prescription);    cout<<"\n\n";

      cout<<"\n\n\t\tENTER THE DAY : ";    getline(cin,patient[x].day_16); cout<<"\n\t\tENTER THE DATE : ";    getline(cin,patient[x].date_16);  cout<<"\t\tPRESCRIPTION : ";  getline(cin,patient[x].date_16_prescription);    cout<<"\n\n";

      cout<<"\n\n\t\tENTER THE DAY : ";    getline(cin,patient[x].day_17); cout<<"\n\t\tENTER THE DATE : ";    getline(cin,patient[x].date_17);  cout<<"\t\tPRESCRIPTION : ";  getline(cin,patient[x].date_17_prescription);    cout<<"\n\n";

      cout<<"\n\n\t\tENTER THE DAY : ";    getline(cin,patient[x].day_18); cout<<"\n\t\tENTER THE DATE : ";    getline(cin,patient[x].date_18);  cout<<"\t\tPRESCRIPTION : ";  getline(cin,patient[x].date_18_prescription);    cout<<"\n\n";

      cout<<"\n\n\t\tENTER THE DAY : ";    getline(cin,patient[x].day_19); cout<<"\n\t\tENTER THE DATE : ";    getline(cin,patient[x].date_19);  cout<<"\t\tPRESCRIPTION : ";  getline(cin,patient[x].date_19_prescription);    cout<<"\n\n";

      cout<<"\n\n\t\tENTER THE DAY : ";    getline(cin,patient[x].day_20); cout<<"\n\t\tENTER THE DATE : ";    getline(cin,patient[x].date_20);  cout<<"\t\tPRESCRIPTION : ";  getline(cin,patient[x].date_20_prescription);    cout<<"\n\n";


        }
}
if(counter==0)
{
    cout<<"\n\n\n\t\t\t\tNO PATIENT IS RECORDED BY THIS ID NUMBER";
}
cin.ignore();
cin.get();
}

 void search_patient(int CustId)
 {
     int counter=0;

    for(int x=0;x<custmax;x++)
    {
        if(patient[x].id==CustId)
        {counter++;
        cout<<"\n\t\t\t"<<setw(6)<<"ID"<<"  "<<setw(20)<<"NAME"<<"  "<<setw(4)<<"AGE"<<"  "<<setw(6)<<"SEX"<<"  "<<setw(14)<<"PHONE\n";
        cout<<"\t\t\t"<<setw(6)<<patient[x].id<<"  "<<setw(20)<<patient[x].name<<"  "<<setw(4)<<patient[x].age<<"  "<<setw(6)<<patient[x].sex<<"  "<<setw(14)<<patient[x].phone;
        cout<<"\n--------------------------------------------------------------------------------------------------------------------------------";
        cout<<"\n\n\n\t\t ASSESMENT : ";
        cout<<patient[x].assesment;
        cout<<"\n\n\n\t\t TREATMENTS : ";
        cout<<patient[x].recommended_treatments;
        cout<<"\n\n\n\t\t FOCUSING AREAS : ";
        cout<<patient[x].focusing_areas;
        cout<<"\n\n\n--------------------------------------------------------------------------------------------------------------------------------\n";

        cout<<"\t\t\t\t"<<setw(10)<<"DAY"<<"   "<<setw(15)<<"DATE"<<"   "<<setw(5)<<"PRESCRIPTION";
        cout<<"\n---------------------------------------------------------------------------------------------------------------------------------\n";
        cout<<"\t\t\t\t"<<setw(10)<<patient[x].day_1<<"   "<<setw(15)<<patient[x].date_1<<"   "<<setw(5)<<patient[x].date_1_prescription<<"\n";
        cout<<"\t\t\t\t"<<setw(10)<<patient[x].day_2<<"   "<<setw(15)<<patient[x].date_2<<"   "<<setw(5)<<patient[x].date_2_prescription<<"\n";
        cout<<"\t\t\t\t"<<setw(10)<<patient[x].day_3<<"   "<<setw(15)<<patient[x].date_3<<"   "<<setw(5)<<patient[x].date_3_prescription<<"\n";
        cout<<"\t\t\t\t"<<setw(10)<<patient[x].day_4<<"   "<<setw(15)<<patient[x].date_4<<"   "<<setw(5)<<patient[x].date_4_prescription<<"\n";
        cout<<"\t\t\t\t"<<setw(10)<<patient[x].day_5<<"   "<<setw(15)<<patient[x].date_5<<"   "<<setw(5)<<patient[x].date_5_prescription<<"\n";
        cout<<"\t\t\t\t"<<setw(10)<<patient[x].day_6<<"   "<<setw(15)<<patient[x].date_6<<"   "<<setw(5)<<patient[x].date_6_prescription<<"\n";
        cout<<"\t\t\t\t"<<setw(10)<<patient[x].day_7<<"   "<<setw(15)<<patient[x].date_7<<"   "<<setw(5)<<patient[x].date_7_prescription<<"\n";
        cout<<"\t\t\t\t"<<setw(10)<<patient[x].day_8<<"   "<<setw(15)<<patient[x].date_8<<"   "<<setw(5)<<patient[x].date_8_prescription<<"\n";
        cout<<"\t\t\t\t"<<setw(10)<<patient[x].day_9<<"   "<<setw(15)<<patient[x].date_9<<"   "<<setw(5)<<patient[x].date_9_prescription<<"\n";
        cout<<"\t\t\t\t"<<setw(10)<<patient[x].day_10<<"   "<<setw(15)<<patient[x].date_10<<"   "<<setw(5)<<patient[x].date_10_prescription<<"\n";
        cout<<"\t\t\t\t"<<setw(10)<<patient[x].day_11<<"   "<<setw(15)<<patient[x].date_11<<"   "<<setw(5)<<patient[x].date_11_prescription<<"\n";
        cout<<"\t\t\t\t"<<setw(10)<<patient[x].day_12<<"   "<<setw(15)<<patient[x].date_12<<"   "<<setw(5)<<patient[x].date_12_prescription<<"\n";
        cout<<"\t\t\t\t"<<setw(10)<<patient[x].day_13<<"   "<<setw(15)<<patient[x].date_13<<"   "<<setw(5)<<patient[x].date_13_prescription<<"\n";
        cout<<"\t\t\t\t"<<setw(10)<<patient[x].day_14<<"   "<<setw(15)<<patient[x].date_14<<"   "<<setw(5)<<patient[x].date_14_prescription<<"\n";
        cout<<"\t\t\t\t"<<setw(10)<<patient[x].day_15<<"   "<<setw(15)<<patient[x].date_15<<"   "<<setw(5)<<patient[x].date_15_prescription<<"\n";
        cout<<"\t\t\t\t"<<setw(10)<<patient[x].day_16<<"   "<<setw(15)<<patient[x].date_16<<"   "<<setw(5)<<patient[x].date_16_prescription<<"\n";
        cout<<"\t\t\t\t"<<setw(10)<<patient[x].day_17<<"   "<<setw(15)<<patient[x].date_17<<"   "<<setw(5)<<patient[x].date_17_prescription<<"\n";
        cout<<"\t\t\t\t"<<setw(10)<<patient[x].day_18<<"   "<<setw(15)<<patient[x].date_18<<"   "<<setw(5)<<patient[x].date_18_prescription<<"\n";
        cout<<"\t\t\t\t"<<setw(10)<<patient[x].day_19<<"   "<<setw(15)<<patient[x].date_19<<"   "<<setw(5)<<patient[x].date_19_prescription<<"\n";
        cout<<"\t\t\t\t"<<setw(10)<<patient[x].day_20<<"   "<<setw(15)<<patient[x].date_20<<"   "<<setw(5)<<patient[x].date_20_prescription<<"\n";
        break;
        }


 }
 if (counter==0)
 {
     cout<<"\n\n\n\t\t\t\t NO PATIENT IS ASSIGNED BY THIS ID";
 }
cin.ignore();
cin.get();
 }

 void daily_total_income()
 {
     char date[15];
     int counter45=0;
     int counter60=0;
     int counter_patient=0;
     int cash_total_patient_income=0;
     int cbe_total_patient_income=0;
     int total_withdrawal=0;

     cout<<"\n\n\n\t\t\tENTER THE DATE : ";
     cin.ignore();
     cin.getline(date,15);

     for(int x=0;x<custmax;x++)
     {
         ///-------------------------------------------------daily reflex income----------------------------
         if(reflex[x].date==date && reflex[x].price==price_45_min )
                counter45++;
         }

          for(int x=0;x<custmax;x++)
     {
              if(reflex[x].date==date && reflex[x].price==price_60_min )
               counter60++;
         }

         //--------------------------------------------------daily patient income----------------------------------

       for(int x=0;x<custmax;x++)
     {
        if(patient[x].id!=0){
         if(patient[x].date_of_first_price==date)
         {
             counter_patient++;

             cash_total_patient_income+=patient[x].first_cash_price;
             cbe_total_patient_income+=patient[x].first_cbe_price;

         }



         if(patient[x].date_1==date)
         {
             cash_total_patient_income+=patient[x].date_1_cash_price;
             cbe_total_patient_income+=patient[x].date_1_cbe_price;
         }





         if(patient[x].date_2==date)
         {
             cash_total_patient_income+=patient[x].date_2_cash_price;
             cbe_total_patient_income+=patient[x].date_2_cbe_price;
         }






         if(patient[x].date_3==date)
         {
             cash_total_patient_income+=patient[x].date_3_cash_price;
             cbe_total_patient_income+=patient[x].date_3_cbe_price;
         }






         if(patient[x].date_4==date)
         {
             cash_total_patient_income+=patient[x].date_4_cash_price;
             cbe_total_patient_income+=patient[x].date_4_cbe_price;
         }






         if(patient[x].date_5==date)
         {
             cash_total_patient_income+=patient[x].date_5_cash_price;
             cbe_total_patient_income+=patient[x].date_5_cbe_price;
         }






         if(patient[x].date_6==date)
         {
             cash_total_patient_income+=patient[x].date_6_cash_price;
             cbe_total_patient_income+=patient[x].date_6_cbe_price;
         }






         if(patient[x].date_7==date)
         {
             cash_total_patient_income+=patient[x].date_7_cash_price;
             cbe_total_patient_income+=patient[x].date_7_cbe_price;
         }






         if(patient[x].date_8==date)
         {
             cash_total_patient_income+=patient[x].date_8_cash_price;
             cbe_total_patient_income+=patient[x].date_8_cbe_price;
         }






         if(patient[x].date_9==date)
         {
             cash_total_patient_income+=patient[x].date_9_cash_price;
             cbe_total_patient_income+=patient[x].date_9_cbe_price;
         }






         if(patient[x].date_10==date)
         {
             cash_total_patient_income+=patient[x].date_10_cash_price;
             cbe_total_patient_income+=patient[x].date_10_cbe_price;
         }






         if(patient[x].date_11==date)
         {
             cash_total_patient_income+=patient[x].date_11_cash_price;
             cbe_total_patient_income+=patient[x].date_11_cbe_price;
         }






         if(patient[x].date_12==date)
         {
             cash_total_patient_income+=patient[x].date_12_cash_price;
             cbe_total_patient_income+=patient[x].date_12_cbe_price;
         }






         if(patient[x].date_13==date)
         {
             cash_total_patient_income+=patient[x].date_13_cash_price;
             cbe_total_patient_income+=patient[x].date_13_cbe_price;
         }






         if(patient[x].date_14==date)
         {
             cash_total_patient_income+=patient[x].date_14_cash_price;
             cbe_total_patient_income+=patient[x].date_14_cbe_price;
         }






         if(patient[x].date_15==date)
         {
             cash_total_patient_income+=patient[x].date_15_cash_price;
             cbe_total_patient_income+=patient[x].date_15_cbe_price;
         }






         if(patient[x].date_16==date)
         {
             cash_total_patient_income+=patient[x].date_16_cash_price;
             cbe_total_patient_income+=patient[x].date_16_cbe_price;
         }






         if(patient[x].date_17==date)
         {
             cash_total_patient_income+=patient[x].date_17_cash_price;
             cbe_total_patient_income+=patient[x].date_17_cbe_price;
         }






         if(patient[x].date_18==date)
         {
             cash_total_patient_income+=patient[x].date_18_cash_price;
             cbe_total_patient_income+=patient[x].date_18_cbe_price;
         }






         if(patient[x].date_19==date)
         {
             cash_total_patient_income+=patient[x].date_19_cash_price;
             cbe_total_patient_income+=patient[x].date_19_cbe_price;
         }






         if(patient[x].date_20==date)
         {
             cash_total_patient_income+=patient[x].date_20_cash_price;
             cbe_total_patient_income+=patient[x].date_20_cbe_price;
         }



        }

if(withdrawal[x].date==date)
    total_withdrawal+=withdrawal[x].amount;

     }

             //--------------------------------------------displaying ---------------------------------------------------------
        cout<<"\n\n\t\t\tFROM "<<counter_patient<<" PATIENTS ---"<<cash_total_patient_income+cbe_total_patient_income<<"  BIRR---\n\n";
        cout<<"\t\t\tFROM "<<counter45<<" (45 MIN)  ---" <<counter45 * 450<<"   BIRR---\n\n";
         cout<<"\t\t\tFROM "<<counter60<<" (60 MIN)  ---" <<counter60 * 550<<"   BIRR---\n\n";
        cout<<"\n\n\n\n\t\t\t\t---------------------------------------------------------------------\n";
        cout<<"\t\t\t\tTOTAL CUSTOMERS = "<<counter45 + counter60 + counter_patient<<"\t\tTOTAL DAILY INCOME = "<<cash_total_patient_income+cbe_total_patient_income+(counter45*price_45_min)+(counter60*price_60_min);
        cout<<"\n\n\t\t\t\tCASH = "<<(cash_total_patient_income+(counter45*price_45_min)+(counter60*price_60_min))-total_withdrawal<<"\t\t\tMOBILE BANKING = "<<cbe_total_patient_income;
        cout<<"\n\n\t\t\t\tTOTAL WITHDRAWAL = "<<total_withdrawal;
        cout<<"\n\t\t\t\t---------------------------------------------------------------------";


cin.get();

 }


void view_withdrawal()
{
     char date[15];
int counter=0;
      cout<<"\n\n\n\t\t\tENTER THE DATE : ";
                cin.ignore();
                cin.getline(date,15);
                system("cls");

               for(int x=0;x<custmax;x++)
                {
                    if(withdrawal[x].date==date)
                    {
                         cout<<"\n\n\t\t\t\t\tDATE : "<<withdrawal[x].date<<"\n\n\t\t\t\t\tAMOUNT : "<<withdrawal[x].amount<<"\n\n\t\t\t\t\tREASON : "<<withdrawal[x].reason<<"\n";
                            counter++;
                      }
              }

if(counter==0)
{
    cout<<"\n\n\n\n\n\t\t\t\tNO WITHDRAWAL IN THIS DAY";  }

    cin.get();

}

void salary()
{
    int tadesu_counter45=0,gech_counter45=0,rahel_counter45=0,betselot_counter45=0,tg_counter45=0;
    int tadesu_counter60=0,gech_counter60=0,rahel_counter60=0,betselot_counter60=0,tg_counter60=0;


    for(int x;x<custmax;x++)
    {
        if((reflex[x].massager=="TADESU" || reflex[x].massager=="tadesu") && reflex[x].price==price_45_min )
            tadesu_counter45++;
        if((reflex[x].massager=="TADESU" || reflex[x].massager=="tadesu") && reflex[x].price==price_60_min )
            tadesu_counter60++;


             if((reflex[x].massager=="GETACHEW" || reflex[x].massager=="getachew") && reflex[x].price==price_45_min )
            gech_counter45++;
        if((reflex[x].massager=="GETACHEW" || reflex[x].massager=="getachew") && reflex[x].price==price_60_min )
            gech_counter60++;

             if((reflex[x].massager=="RAHEL" || reflex[x].massager=="rahel") && reflex[x].price==price_45_min )
            rahel_counter45++;
        if((reflex[x].massager=="REHEL" || reflex[x].massager=="rahel") && reflex[x].price==price_60_min )
            rahel_counter60++;

             if((reflex[x].massager=="BETSELOT" || reflex[x].massager=="betselot") && reflex[x].price==price_45_min )
            betselot_counter45++;
         if((reflex[x].massager=="BETSELOT" || reflex[x].massager=="betselot") && reflex[x].price==price_45_min )
            betselot_counter60++;

             if((reflex[x].massager=="TIGST" || reflex[x].massager=="tigst") && reflex[x].price==price_45_min )
            tg_counter45++;
         if((reflex[x].massager=="TIGST" || reflex[x].massager=="tigst") && reflex[x].price==price_45_min )
            tg_counter60++;

    }
         //-----------------------------------------displaying--------------------------------------------------

            cout<<"\n\n\t\t"<<"TADESU (45 MIN ) = "<<tadesu_counter45<<" CUSTOMERS\t\t"<<"COMMISION :-  80 * "<<tadesu_counter45<<" = "<<tadesu_counter45*80<<"\n";
  cout<<"\n\t\t"<<"TADESU (60 MIN ) = "<<tadesu_counter60<<" CUSTOMERS\t\t"<<"COMMISION :-  110 * "<<tadesu_counter60<<" = "<<tadesu_counter60*110<<"\n";
cout<<"\t\t\t\t\t-----------------------------------------";
cout<<"\n\t\t\t\t\t\tTADESU (TOTAL COMMISION) = "<<(tadesu_counter45*80)+(tadesu_counter60*110);
cout<<"\n\t\t\t\t\t-----------------------------------------";


  cout<<"\n\n\t\t"<<"GETACHEW (45 MIN ) = "<<gech_counter45<<" CUSTOMERS\t"<<"COMMISION :-  80 * "<<gech_counter45<<" = "<<gech_counter45*80<<"\n";
  cout<<"\n\n\t\t"<<"GETACHEW (60 MIN ) = "<<gech_counter60<<" CUSTOMERS\t"<<"COMMISION :-  110 * "<<gech_counter60<<" = "<<gech_counter60*110<<"\n";
cout<<"\t\t\t\t\t-----------------------------------------";
cout<<"\n\t\t\t\t\t\GETACHEW (TOTAL COMMISION) = "<<(gech_counter45*80)+(gech_counter60*110);
cout<<"\n\t\t\t\t\t-----------------------------------------";

  cout<<"\n\n\t\t"<<"RAHEL (45 MIN ) = "<<rahel_counter45<<" CUSTOMERS\t\t"<<"COMMISION :-  80 * "<<rahel_counter45<<" = "<<rahel_counter45*80<<"\n";
  cout<<"\n\n\t\t"<<"RAHEL (60 MIN ) = "<<rahel_counter60<<" CUSTOMERS\t\t"<<"COMMISION :-  110 * "<<rahel_counter60<<" = "<<rahel_counter60*110<<"\n";
cout<<"\t\t\t\t\t-----------------------------------------";
cout<<"\n\t\t\t\t\t\RAHEL (TOTAL COMMISION) = "<<(rahel_counter45*80)+(rahel_counter60*110);
cout<<"\n\t\t\t\t\t-----------------------------------------";

  cout<<"\n\n\t\t"<<"BETSELOT (45 MIN ) = "<<betselot_counter45<<" CUSTOMERS\t"<<"COMMISION :-  80 * "<<betselot_counter45<<" = "<<betselot_counter45*80<<"\n";
  cout<<"\n\n\t\t"<<"BETSELOT (60 MIN ) = "<<betselot_counter60<<" CUSTOMERS\t"<<"COMMISION :-  110 * "<<betselot_counter60<<" = "<<betselot_counter60*110<<"\n";
cout<<"\t\t\t\t\t-----------------------------------------";
cout<<"\n\t\t\t\t\tBETSELOT (TOTAL COMMISION) = "<<(betselot_counter45*80)+(betselot_counter60*110);
cout<<"\n\t\t\t\t\t-----------------------------------------";

  cout<<"\n\n\t\t"<<"TIGIST (45 MIN ) = "<<tg_counter45<<" CUSTOMERS\t\t"<<"COMMISION :-  80 * "<<tg_counter45<<" = "<<tg_counter45*80<<"\n";
  cout<<"\n\n\t\t"<<"TIGIST (60 MIN ) = "<<tg_counter60<<" CUSTOMERS\t\t"<<"COMMISION :-  110 * "<<tg_counter60<<" = "<<tg_counter60*110<<"\n";
cout<<"\t\t\t\t\t-----------------------------------------";
cout<<"\n\t\t\t\t\t\TIGIST (TOTAL COMMISION) = "<<(tg_counter45*80)+(tg_counter60*110);
cout<<"\n\t\t\t\t\t-----------------------------------------";


cin.ignore();
cin.get();

}

void customers_attendance()
{


    char date[15];
    int counter=0;
    cout<<"\n\n\t\t\tENTER THE DATE : ";
    cin.ignore();
    cin.getline(date,15);

    for(int x=0;x<custmax;x++)
    {
        if(patient[x].date_1==date && patient[x].date_1_attendance=="\0")
            {cout<<"\n\n\t\tNAME : "<<patient[x].name<<"\t\t\tPHONE : "<<patient[x].phone<<"\n\n";   counter++;}

          if(patient[x].date_2==date && patient[x].date_2_attendance=="\0")
            {cout<<"\n\n\t\tNAME : "<<patient[x].name<<"\t\t\tPHONE : "<<patient[x].phone<<"\n\n";    counter++;}

          if(patient[x].date_3==date && patient[x].date_3_attendance=="\0")
            {cout<<"\n\n\t\tNAME : "<<patient[x].name<<"\t\t\tPHONE : "<<patient[x].phone<<"\n\n";   counter++;}

          if(patient[x].date_4==date && patient[x].date_4_attendance=="\0")
            {cout<<"\n\n\t\tNAME : "<<patient[x].name<<"\t\t\tPHONE : "<<patient[x].phone<<"\n\n";   counter++;}

          if(patient[x].date_5==date && patient[x].date_5_attendance=="\0")
            {cout<<"\n\n\t\tNAME : "<<patient[x].name<<"\t\t\tPHONE : "<<patient[x].phone<<"\n\n";   counter++;}

          if(patient[x].date_6==date && patient[x].date_6_attendance=="\0")
            {cout<<"\n\n\t\tNAME : "<<patient[x].name<<"\t\t\tPHONE : "<<patient[x].phone<<"\n\n";   counter++;}

          if(patient[x].date_7==date && patient[x].date_7_attendance=="\0")
            {cout<<"\n\n\t\tNAME : "<<patient[x].name<<"\t\t\tPHONE : "<<patient[x].phone<<"\n\n";   counter++;}

          if(patient[x].date_8==date && patient[x].date_8_attendance=="\0")
            {cout<<"\n\n\t\tNAME : "<<patient[x].name<<"\t\t\tPHONE : "<<patient[x].phone<<"\n\n";   counter++;}

          if(patient[x].date_9==date && patient[x].date_9_attendance=="\0")
            {cout<<"\n\n\t\tNAME : "<<patient[x].name<<"\t\t\tPHONE : "<<patient[x].phone<<"\n\n";   counter++;}

          if(patient[x].date_10==date && patient[x].date_10_attendance=="\0")
            {cout<<"\n\n\t\tNAME : "<<patient[x].name<<"\t\t\tPHONE : "<<patient[x].phone<<"\n\n";   counter++;}

          if(patient[x].date_11==date && patient[x].date_11_attendance=="\0")
            {cout<<"\n\n\t\tNAME : "<<patient[x].name<<"\t\t\tPHONE : "<<patient[x].phone<<"\n\n";   counter++;}

          if(patient[x].date_12==date && patient[x].date_12_attendance=="\0")
            {cout<<"\n\n\t\tNAME : "<<patient[x].name<<"\t\t\tPHONE : "<<patient[x].phone<<"\n\n";   counter++;}

          if(patient[x].date_13==date && patient[x].date_13_attendance=="\0")
            {cout<<"\n\n\t\tNAME : "<<patient[x].name<<"\t\t\tPHONE : "<<patient[x].phone<<"\n\n";   counter++;}

          if(patient[x].date_14==date && patient[x].date_14_attendance=="\0")
            {cout<<"\n\n\t\tNAME : "<<patient[x].name<<"\t\t\tPHONE : "<<patient[x].phone<<"\n\n";   counter++;}

          if(patient[x].date_15==date && patient[x].date_15_attendance=="\0")
            {cout<<"\n\n\t\tNAME : "<<patient[x].name<<"\t\t\tPHONE : "<<patient[x].phone<<"\n\n";   counter++;}

          if(patient[x].date_16==date && patient[x].date_16_attendance=="\0")
            {cout<<"\n\n\t\tNAME : "<<patient[x].name<<"\t\t\tPHONE : "<<patient[x].phone<<"\n\n";   counter++;}

          if(patient[x].date_17==date && patient[x].date_17_attendance=="\0")
            {cout<<"\n\n\t\tNAME : "<<patient[x].name<<"\t\t\tPHONE : "<<patient[x].phone<<"\n\n";   counter++;}

          if(patient[x].date_18==date && patient[x].date_18_attendance=="\0")
            {cout<<"\n\n\t\tNAME : "<<patient[x].name<<"\t\t\tPHONE : "<<patient[x].phone<<"\n\n";   counter++;}

          if(patient[x].date_19==date && patient[x].date_19_attendance=="\0")
            {cout<<"\n\n\t\tNAME : "<<patient[x].name<<"\t\t\tPHONE : "<<patient[x].phone<<"\n\n";   counter++;}

          if(patient[x].date_1==date && patient[x].date_1_attendance=="\0")
            {cout<<"\n\n\t\tNAME : "<<patient[x].name<<"\t\t\tPHONE : "<<patient[x].phone<<"\n\n";   counter++;}




    }
    if(counter==0)
    {
        cout<<"\n\n\t\t\t NO ABSENT TODAY";
    }
else{
    cout<<"\n\n\t\t\tTODAY'S ABSENT"; }
    cin.get();


}

void   reset_reflex_file()
{
    int option;
    cout<<"\n\n\n\t\t\t\tARE YOU SURE TO RESET ALL THIS MONTH REFLEXOLOGY CUSTOMERS INFO ? \n\t\t\t\t\t1.YES\t2.NO";

    cin>>option;
    switch(option)
    {
    case 1:
        system("cls");
        cout<<"\n\n\t\t\tMAKE SURE THAT THE RECEPTION COMPUTER PROGRAM IS CLOSED";
            cin.ignore();
            cin.get();

    for(int x=0;x<custmax;x++)
    {
        if(reflex[x].date!="\0")
        {
            reflex[x].date="";
            reflex[x].massager="";
            reflex[x].price=0;
        }


    }

    break;

    case 2:
        system("cls");
        cout<<"\n\n\n\t\t\tTO EXIT PRESS ANY KEY _ _ _ ";
        cin.ignore();
        cin.get();
        break;



}
}

void delete_patients_file(int custid)
{
    int counter=0;

    for(int x=0;x<custmax;x++)
    {
        if(patient[x].id==custid)
        {
            cout<<"\n\n\t\t\tMAKE SURE THAT THE RECEPTION COMPUTER PROGRAM IS CLOSED";
            cin.ignore();
            cin.get();



            patient[x].id=0;
            patient[x].name="";
            patient[x].age=0;
            patient[x].sex="";
            patient[x].phone=0;
            patient[x].total=0;
            patient[x].credit=0;
            patient[x].assesment="";
            patient[x].recommended_treatments="";
            patient[x].focusing_areas="";
            patient[x].date_of_first_price="";
            patient[x].first_cash_price=0;
            patient[x].first_cbe_price=0;
            patient[x].day_1="";
            patient[x].day_2="";
            patient[x].day_3="";
            patient[x].day_4="";
            patient[x].day_5="";
            patient[x].day_6="";
            patient[x].day_7="";
            patient[x].day_8="";
            patient[x].day_9="";
            patient[x].day_10="";
            patient[x].day_11="";
            patient[x].day_12="";
            patient[x].day_13="";
            patient[x].day_14="";
            patient[x].day_15="";
            patient[x].day_16="";
            patient[x].day_17="";
            patient[x].day_18="";
            patient[x].day_19="";
            patient[x].day_20="";
            patient[x].date_1="";
            patient[x].date_2="";
            patient[x].date_3="";
            patient[x].date_4="";
            patient[x].date_5="";
            patient[x].date_6="";
            patient[x].date_7="";
            patient[x].date_8="";
            patient[x].date_9="";
            patient[x].date_10="";
            patient[x].date_11="";
            patient[x].date_12="";
            patient[x].date_13="";
            patient[x].date_14="";
            patient[x].date_15="";
            patient[x].date_16="";
            patient[x].date_17="";
            patient[x].date_18="";
            patient[x].date_19="";
            patient[x].date_20="";
            patient[x].date_1_prescription="";
            patient[x].date_2_prescription="";
            patient[x].date_3_prescription="";
            patient[x].date_4_prescription="";
            patient[x].date_5_prescription="";
            patient[x].date_6_prescription="";
            patient[x].date_7_prescription="";
            patient[x].date_8_prescription="";
            patient[x].date_9_prescription="";
            patient[x].date_10_prescription="";
            patient[x].date_11_prescription="";
            patient[x].date_12_prescription="";
            patient[x].date_13_prescription="";
            patient[x].date_14_prescription="";
            patient[x].date_15_prescription="";
            patient[x].date_16_prescription="";
            patient[x].date_17_prescription="";
            patient[x].date_18_prescription="";
            patient[x].date_19_prescription="";
            patient[x].date_20_prescription="";
            patient[x].date_1_attendance="";
            patient[x].date_2_attendance="";
            patient[x].date_3_attendance="";
            patient[x].date_4_attendance="";
            patient[x].date_5_attendance="";
            patient[x].date_6_attendance="";
            patient[x].date_7_attendance="";
            patient[x].date_8_attendance="";
            patient[x].date_9_attendance="";
            patient[x].date_10_attendance="";
            patient[x].date_11_attendance="";
            patient[x].date_12_attendance="";
            patient[x].date_13_attendance="";
            patient[x].date_14_attendance="";
            patient[x].date_15_attendance="";
            patient[x].date_16_attendance="";
            patient[x].date_17_attendance="";
            patient[x].date_18_attendance="";
            patient[x].date_19_attendance="";
            patient[x].date_20_attendance="";
            patient[x].date_1_cash_price=0;
            patient[x].date_2_cash_price=0;
            patient[x].date_3_cash_price=0;
            patient[x].date_4_cash_price=0;
            patient[x].date_5_cash_price=0;
            patient[x].date_6_cash_price=0;
            patient[x].date_7_cash_price=0;
            patient[x].date_8_cash_price=0;
            patient[x].date_9_cash_price=0;
            patient[x].date_10_cash_price=0;
            patient[x].date_11_cash_price=0;
            patient[x].date_12_cash_price=0;
            patient[x].date_13_cash_price=0;
            patient[x].date_14_cash_price=0;
            patient[x].date_15_cash_price=0;
            patient[x].date_16_cash_price=0;
            patient[x].date_17_cash_price=0;
            patient[x].date_18_cash_price=0;
            patient[x].date_19_cash_price=0;
            patient[x].date_20_cash_price=0;
            patient[x].date_1_cbe_price=0;
            patient[x].date_2_cbe_price=0;
            patient[x].date_3_cbe_price=0;
            patient[x].date_4_cbe_price=0;
            patient[x].date_5_cbe_price=0;
            patient[x].date_6_cbe_price=0;
            patient[x].date_7_cbe_price=0;
            patient[x].date_8_cbe_price=0;
            patient[x].date_9_cbe_price=0;
            patient[x].date_10_cbe_price=0;
            patient[x].date_11_cbe_price=0;
            patient[x].date_12_cbe_price=0;
            patient[x].date_13_cbe_price=0;
            patient[x].date_14_cbe_price=0;
            patient[x].date_15_cbe_price=0;
            patient[x].date_16_cbe_price=0;
            patient[x].date_17_cbe_price=0;
            patient[x].date_18_cbe_price=0;
            patient[x].date_19_cbe_price=0;
            patient[x].date_20_cbe_price=0;

            counter++;

         break;

        }
    }

    if (counter==0)
    {
        cout<<"\n\n\n\t\t\tNO CUSTOMER IS ASSIGNED BY THIS ID ";
    }
    cout<<"\n\n\t\t\t---deleted successfully---\n\n\t\t\tpress any key . . . ";

    cin.get();
}

int main ()
{
int password;
int counter=0;

do{
    system("cls");
    system("color 7");

    cout<<"\n\n\n\n\t\t\t\t ENTER YOUR PASSWORD : ";
    cin>>password;

    counter++;

    if(counter!=0 && password!=1234)
 {

        system("color 4");
        cout<<"\n\n\t\t\t\t INCORRECT PASSWORD PLEASE TRY AGAIN .... ";
        cin.ignore();
        cin.get();
}


}while(password!=1234);


    char option;
    int  CustId;



    do{ system("cls");
    system("color f");



  cout<<"\n\n\n\n\n\t\t\t\t\t1.FULFIL THE NEW PATIENTS INFORMATION\n\n\n\t\t\t\t\t2. SEARCH CUSTOMERS USING ID\n\n\n\t\t\t\t\t3.DAILY TOTAL AND NET INCOME\n\n\n\t\t\t\t\t4.VIEW WITHDRAWALS\n\n\n\t\t\t\t\t5.EMPLOYEES' SALARY\n\n\n\t\t\t\t\t6.CUSTOMERS ATTENDANCE\n\n\n\t\t\t\t\t7.RESET REFLEXOLOGY DATA\n\n\n\t\t\t\t\t8.DELETE CUSTOMER'S INFO";

    cin>>option;



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


ifstream open_2("rr.txt",ios::in);
if(open_2.is_open())
{
    string line_2;
    int x_2=0;
    int temp_2=0;
    stringstream ss_2;

    while(getline(open_2,line_2))
    {ss_2.clear();
        ss_2<<line_2;
        ss_2>>temp_2;
        reflex[x_2].price=temp_2;


        getline(open_2,line_2);
        reflex[x_2].massager=line_2;




        getline(open_2,line_2);
        reflex[x_2].date=line_2;
        x_2++;

    }



}else{cout<<"\nthe file is not opened\n";}
open_2.close();



ifstream open_3("ww.txt",ios::in);
if(open_3.is_open())
{
    string line_3;
    int x_3=0;
    int temp_3=0;
    stringstream ss_3;

    while(getline(open_3,line_3))
    {


        withdrawal[x_3].date=line_3;


        ss_3.clear();
        getline(open_3,line_3);
        ss_3<<line_3;
        ss_3>>temp_3;
        withdrawal[x_3].amount=temp_3;


        getline(open_3,line_3);
        withdrawal[x_3].reason=line_3;

        x_3++;

    }







}else{cout<<"the file is not opened\n";}


open_3.close();





    switch(option)
    {
    case'1':

        system("cls");
        cout<<"\n\n\n\t\t\tENTER THE ID : ";
        cin>>CustId;
        fulfil(CustId);

        break;
    case'2':

        system("cls");
        cout<<"\n\n\n\t\t\tENTER THE ID : ";
        cin>>CustId;
        search_patient(CustId);
        break;
    case'3':

        system("cls");
        daily_total_income();
        break;
    case'4':

        system("cls");
view_withdrawal();
        break;
    case '5':

      system("cls");
      salary();
      break;
    case '6':
        system("cls");
        customers_attendance();
        break;
    case '7':
        system("cls");
        reset_reflex_file();
        break;
    case '8':
        system("cls");
        cout<<"\n\n\n\t\t\tENTER THE ID : ";
        cin>>CustId;
        delete_patients_file(CustId);
        break;

    }

ofstream file("pp.txt",ios::out);
for(int x=0;x<custmax;x++)
{

    if(patient[x].id!=0)
    {
        file<<patient[x].id<<"\n"<<patient[x].name<<"\n"<<patient[x].age<<"\n"<<patient[x].sex<<"\n"<<patient[x].phone<<"\n"<<patient[x].total<<"\n"<<patient[x].credit<<"\n"<<patient[x].assesment<<"\n"<<patient[x].recommended_treatments<<"\n"<<
            patient[x].focusing_areas<<"\n"<<patient[x].date_of_first_price<<"\n"<<patient[x].first_cash_price<<"\n"<<
            patient[x].first_cbe_price<<"\n"<<patient[x].day_1<<"\n"<<patient[x].day_2<<"\n"<<patient[x].day_3<<"\n"<<
            patient[x].day_4<<"\n"<<patient[x].day_5<<"\n"<<patient[x].day_6<<"\n"<<patient[x].day_7<<"\n"<<
            patient[x].day_8<<"\n"<<patient[x].day_9<<"\n"<<patient[x].day_10<<"\n"<<patient[x].day_11<<"\n"<<
            patient[x].day_12<<"\n"<<patient[x].day_13<<"\n"<<patient[x].day_14<<"\n"<<patient[x].day_15<<"\n"<<
            patient[x].day_16<<"\n"<<patient[x].day_17<<"\n"<<patient[x].day_18<<"\n"<<patient[x].day_19<<"\n"<<
            patient[x].day_20<<"\n"<<patient[x].date_1<<"\n"<<patient[x].date_2<<"\n"<<patient[x].date_3<<"\n"<<
            patient[x].date_4<<"\n"<<patient[x].date_5<<"\n"<<patient[x].date_6<<"\n"<<patient[x].date_7<<"\n"<<
            patient[x].date_8<<"\n"<<patient[x].date_9<<"\n"<<patient[x].date_10<<"\n"<<patient[x].date_11<<"\n"<<
            patient[x].date_12<<"\n"<<patient[x].date_13<<"\n"<<patient[x].date_14<<"\n"<<patient[x].date_15<<"\n"<<
            patient[x].date_16<<"\n"<<patient[x].date_17<<"\n"<<patient[x].date_18<<"\n"<<patient[x].date_19<<"\n"<<
            patient[x].date_20<<"\n"<<patient[x].date_1_prescription<<"\n"<<patient[x].date_2_prescription<<"\n"<<
            patient[x].date_3_prescription<<"\n"<<patient[x].date_4_prescription<<"\n"<<patient[x].date_5_prescription<<"\n"<<
            patient[x].date_6_prescription<<"\n"<<patient[x].date_7_prescription<<"\n"<<patient[x].date_8_prescription<<"\n"<<
            patient[x].date_9_prescription<<"\n"<<patient[x].date_10_prescription<<"\n"<<patient[x].date_11_prescription<<"\n"<<
            patient[x].date_12_prescription<<"\n"<<patient[x].date_13_prescription<<"\n"<<patient[x].date_14_prescription<<"\n"<<
            patient[x].date_15_prescription<<"\n"<<patient[x].date_16_prescription<<"\n"<<patient[x].date_17_prescription<<"\n"<<
            patient[x].date_18_prescription<<"\n"<<patient[x].date_19_prescription<<"\n"<<patient[x].date_20_prescription<<"\n"<<
            patient[x].date_1_attendance<<"\n"<<patient[x].date_2_attendance<<"\n"<<patient[x].date_3_attendance<<"\n"<<
            patient[x].date_4_attendance<<"\n"<<patient[x].date_5_attendance<<"\n"<<patient[x].date_6_attendance<<"\n"<<
            patient[x].date_7_attendance<<"\n"<<patient[x].date_8_attendance<<"\n"<<patient[x].date_9_attendance<<"\n"<<
            patient[x].date_10_attendance<<"\n"<<patient[x].date_11_attendance<<"\n"<<patient[x].date_12_attendance<<"\n"<<
            patient[x].date_13_attendance<<"\n"<<patient[x].date_14_attendance<<"\n"<<patient[x].date_15_attendance<<"\n"<<
            patient[x].date_16_attendance<<"\n"<<patient[x].date_17_attendance<<"\n"<<patient[x].date_18_attendance<<"\n"<<
            patient[x].date_19_attendance<<"\n"<<patient[x].date_20_attendance<<"\n"<<patient[x].date_1_cash_price<<"\n"<<
            patient[x].date_2_cash_price<<"\n"<<patient[x].date_3_cash_price<<"\n"<<patient[x].date_4_cash_price<<"\n"<<patient[x].date_5_cash_price<<"\n"<<
            patient[x].date_6_cash_price<<"\n"<<patient[x].date_7_cash_price<<"\n"<<patient[x].date_8_cash_price<<"\n"<<patient[x].date_9_cash_price<<"\n"<<
            patient[x].date_10_cash_price<<"\n"<<patient[x].date_11_cash_price<<"\n"<<patient[x].date_12_cash_price<<"\n"<<patient[x].date_13_cash_price<<"\n"<<
            patient[x].date_14_cash_price<<"\n"<<patient[x].date_15_cash_price<<"\n"<<patient[x].date_16_cash_price<<"\n"<<patient[x].date_17_cash_price<<"\n"<<
            patient[x].date_18_cash_price<<"\n"<<patient[x].date_19_cash_price<<"\n"<<patient[x].date_20_cash_price<<"\n"<<patient[x].date_1_cbe_price<<"\n"<<
            patient[x].date_2_cbe_price<<"\n"<<patient[x].date_3_cbe_price<<"\n"<<patient[x].date_4_cbe_price<<"\n"<<patient[x].date_5_cbe_price<<"\n"<<
            patient[x].date_6_cbe_price<<"\n"<<patient[x].date_7_cbe_price<<"\n"<<patient[x].date_8_cbe_price<<"\n"<<patient[x].date_9_cbe_price<<"\n"<<
            patient[x].date_10_cbe_price<<"\n"<<patient[x].date_11_cbe_price<<"\n"<<patient[x].date_12_cbe_price<<"\n"<<patient[x].date_13_cbe_price<<"\n"<<
            patient[x].date_14_cbe_price<<"\n"<<patient[x].date_15_cbe_price<<"\n"<<patient[x].date_16_cbe_price<<"\n"<<patient[x].date_17_cbe_price<<"\n"<<
            patient[x].date_18_cbe_price<<"\n"<<patient[x].date_19_cbe_price<<"\n"<<patient[x].date_20_cbe_price<<"\n";


    }

}
file.close();




ofstream file_2("rr.txt",ios::out);
for(int x=0;x<custmax;x++)
{
    if(reflex[x].price!=0)
    {
        file_2<<reflex[x].price<<"\n"<<reflex[x].massager<<"\n"<<reflex[x].date<<"\n";
    }
}
file_2.close();


ofstream file_3("ww.txt",ios::out);
for(int x=0;x<custmax;x++)
{
    if(withdrawal[x].amount!=0)
    {
        file_3<<withdrawal[x].date<<"\n"<<withdrawal[x].amount<<"\n"<<withdrawal[x].reason<<"\n";
    }
}
file_3.close();




    }while(option!='0');
}
