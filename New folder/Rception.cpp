#include<iostream>
#include<fstream>
#include<cstring>
#include<sstream>
using namespace std;

const int price_45_min=450;
const int price_60_min=550;
const int tp10=1000;
const int tp12=1200;
const int tp15=1500;
const int tp20=2000;
const int tp25=2500;
const int ma10=1000;
const int ma12=1200;
const int ma15=1500;
const int ma17=1700;

const int custmax=10000;



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





void reflexology()
{

    cout<<"\n\n\t\t\t1. 45 MIN\n\n\t\t\t2. 60 MIN";
    int option;
    cin>>option;
                system("cls");
    cout<<"\n\n\t\t\twho is going to massage ?";
    char name[70];
    char date[20];
    cin.ignore();
    cin.getline(name,70);
    cout<<"\n\t\t\tENTER THE DATE : ";
    cin.getline(date,20);

    switch(option)
    {
    case 1:
        for(int x=0;x<custmax;x++)
        {
            if(reflex[x].price==0)
            {
                reflex[x].price=price_45_min;
                reflex[x].massager=name;
                reflex[x].date=date ;
                break;
            }


            }
            break;
    case 2:

        for(int x=0;x<custmax;x++)
        {
            if(reflex[x].price==0)
            {
                reflex[x].price=price_60_min;
                reflex[x].massager=name;
                reflex[x].date=date ;
               break;
            }


            }
            break;

    }
}
void new_patient()
{
    int id;
    char name[70];
    int age;
    char sex[20];
    int phone;

        cout<<"\n\n\t\tID : ";
        cin>>id;
        cout<<"\t\tNAME : ";
        cin.ignore();
        cin.getline(name,70);
        cout<<"\t\tAGE : ";
        cin>>age;
        cout<<"\t\tSEX : ";
           cin.ignore();
        cin.getline(sex,20);
        cout<<"\t\tPHONE : ";
        cin>>phone;

    for(int x=0;x<custmax;x++)
        {
        if(patient[x].id==0)
        {
            patient[x].id=id;
            patient[x].name=name;
            patient[x].age=age;
            patient[x].sex=sex;
            patient[x].phone=phone;
            break;
        }

            }
            cout<<"\n\n\t\t----------------------SAVED SUCCESSFULLY ----------------------------";

            cin.get();
}
 void appointment_attendance(int CustId)
 {

        char attendance[15];
        int counter=0;
        string date;

     for(int x=0; x<custmax;x++)
     {
         if(patient[x].id==CustId)
         {
                cout<<"\n\n\n\t\t\tWHAT IS THE DATE TODAY ?\n\n\t\t\tENTER YOUR ANSWER LIKE THIS  ( EXAMPLE :     8/2/2015    not(08/02/2015 )\n\n\t\t\t\tDATE : ";
                cin.ignore();
                getline(cin,date);



                if(patient[x].date_1==date)
                {
                    cout<<"\n\n\t\t\tIF HE/SHE COMES ENTER '' present ''\n\n\t\t\tATTENDANCE : ";

                    cin.getline(attendance,15);
                    patient[x].date_1_attendance=attendance;
                    cout<<"\n\n\t\t\t YOU HAVE FINISHED TAKING ATTENDANCE SUCCESSFULLY\n\t\t\t\tTHANK YOU";
                    counter++;
                   break;
                }



                if(patient[x].date_2==date)
                {
                    cout<<"\n\n\t\t\tIF HE/SHE COMES ENTER '' present ''\n\n\t\t\tATTENDANCE : ";

                    cin.getline(attendance,15);
                    patient[x].date_2_attendance=attendance;
                    cout<<"\n\n\t\t\t YOU HAVE FINISHED TAKING ATTENDANCE SUCCESSFULLY\n\t\t\t\tTHANK YOU";
                    counter++;
                   break;
                }










                if(patient[x].date_3==date)
                {
                    cout<<"\n\n\t\t\tIF HE/SHE COMES ENTER '' present ''\n\n\t\t\tATTENDANCE : ";

                    cin.getline(attendance,15);
                    patient[x].date_3_attendance=attendance;
                    cout<<"\n\n\t\t\t YOU HAVE FINISHED TAKING ATTENDANCE SUCCESSFULLY\n\t\t\t\tTHANK YOU";
                    counter++;
                   break;
                }






                if(patient[x].date_4==date)
                {
                    cout<<"\n\n\t\t\tIF HE/SHE COMES ENTER '' present ''\n\n\t\t\tATTENDANCE : ";

                    cin.getline(attendance,15);
                    patient[x].date_4_attendance=attendance;
                    cout<<"\n\n\t\t\t YOU HAVE FINISHED TAKING ATTENDANCE SUCCESSFULLY\n\t\t\t\tTHANK YOU";
                    counter++;
                   break;
                }





                if(patient[x].date_5==date)
                {
                    cout<<"\n\n\t\t\tIF HE/SHE COMES ENTER '' present ''\n\n\t\t\tATTENDANCE : ";

                    cin.getline(attendance,15);
                    patient[x].date_5_attendance=attendance;
                    cout<<"\n\n\t\t\t YOU HAVE FINISHED TAKING ATTENDANCE SUCCESSFULLY\n\t\t\t\tTHANK YOU";
                    counter++;
                   break;
                }






                if(patient[x].date_6==date)
                {
                    cout<<"\n\n\t\t\tIF HE/SHE COMES ENTER '' present ''\n\n\t\t\tATTENDANCE : ";

                    cin.getline(attendance,15);
                    patient[x].date_6_attendance=attendance;
                    cout<<"\n\n\t\t\t YOU HAVE FINISHED TAKING ATTENDANCE SUCCESSFULLY\n\t\t\t\tTHANK YOU";
                    counter++;
                   break;
                }






                if(patient[x].date_7==date)
                {
                    cout<<"\n\n\t\t\tIF HE/SHE COMES ENTER '' present ''\n\n\t\t\tATTENDANCE : ";

                    cin.getline(attendance,15);
                    patient[x].date_7_attendance=attendance;
                    cout<<"\n\n\t\t\t YOU HAVE FINISHED TAKING ATTENDANCE SUCCESSFULLY\n\t\t\t\tTHANK YOU";
                    counter++;
                   break;
                }






                if(patient[x].date_8==date)
                {
                    cout<<"\n\n\t\t\tIF HE/SHE COMES ENTER '' present ''\n\n\t\t\tATTENDANCE : ";

                    cin.getline(attendance,15);
                    patient[x].date_8_attendance=attendance;
                    cout<<"\n\n\t\t\t YOU HAVE FINISHED TAKING ATTENDANCE SUCCESSFULLY\n\t\t\t\tTHANK YOU";
                    counter++;
                   break;
                }






                if(patient[x].date_9==date)
                {
                    cout<<"\n\n\t\t\tIF HE/SHE COMES ENTER '' present ''\n\n\t\t\tATTENDANCE : ";

                    cin.getline(attendance,15);
                    patient[x].date_9_attendance=attendance;
                    cout<<"\n\n\t\t\t YOU HAVE FINISHED TAKING ATTENDANCE SUCCESSFULLY\n\t\t\t\tTHANK YOU";
                    counter++;
                   break;
                }






                if(patient[x].date_10==date)
                {
                    cout<<"\n\n\t\t\tIF HE/SHE COMES ENTER '' present ''\n\n\t\t\tATTENDANCE : ";

                    cin.getline(attendance,15);
                    patient[x].date_10_attendance=attendance;
                    cout<<"\n\n\t\t\t YOU HAVE FINISHED TAKING ATTENDANCE SUCCESSFULLY\n\t\t\t\tTHANK YOU";
                    counter++;
                   break;
                }






                if(patient[x].date_11==date)
                {
                    cout<<"\n\n\t\t\tIF HE/SHE COMES ENTER '' present ''\n\n\t\t\tATTENDANCE : ";

                    cin.getline(attendance,15);
                    patient[x].date_11_attendance=attendance;
                    cout<<"\n\n\t\t\t YOU HAVE FINISHED TAKING ATTENDANCE SUCCESSFULLY\n\t\t\t\tTHANK YOU";
                    counter++;
                   break;
                }






                if(patient[x].date_12==date)
                {
                    cout<<"\n\n\t\t\tIF HE/SHE COMES ENTER '' present ''\n\n\t\t\tATTENDANCE : ";

                    cin.getline(attendance,15);
                    patient[x].date_12_attendance=attendance;
                    cout<<"\n\n\t\t\t YOU HAVE FINISHED TAKING ATTENDANCE SUCCESSFULLY\n\t\t\t\tTHANK YOU";
                    counter++;
                   break;
                }






                if(patient[x].date_13==date)
                {
                    cout<<"\n\n\t\t\tIF HE/SHE COMES ENTER '' present ''\n\n\t\t\tATTENDANCE : ";

                    cin.getline(attendance,15);
                    patient[x].date_13_attendance=attendance;
                    cout<<"\n\n\t\t\t YOU HAVE FINISHED TAKING ATTENDANCE SUCCESSFULLY\n\t\t\t\tTHANK YOU";
                    counter++;
                   break;
                }






                if(patient[x].date_14==date)
                {
                    cout<<"\n\n\t\t\tIF HE/SHE COMES ENTER '' present ''\n\n\t\t\tATTENDANCE : ";

                    cin.getline(attendance,15);
                    patient[x].date_14_attendance=attendance;
                    cout<<"\n\n\t\t\t YOU HAVE FINISHED TAKING ATTENDANCE SUCCESSFULLY\n\t\t\t\tTHANK YOU";
                    counter++;
                   break;
                }






                if(patient[x].date_15==date)
                {
                    cout<<"\n\n\t\t\tIF HE/SHE COMES ENTER '' present ''\n\n\t\t\tATTENDANCE : ";

                    cin.getline(attendance,15);
                    patient[x].date_15_attendance=attendance;
                    cout<<"\n\n\t\t\t YOU HAVE FINISHED TAKING ATTENDANCE SUCCESSFULLY\n\t\t\t\tTHANK YOU";
                    counter++;
                   break;
                }






                if(patient[x].date_16==date)
                {
                    cout<<"\n\n\t\t\tIF HE/SHE COMES ENTER '' present ''\n\n\t\t\tATTENDANCE : ";

                    cin.getline(attendance,15);
                    patient[x].date_16_attendance=attendance;
                    cout<<"\n\n\t\t\t YOU HAVE FINISHED TAKING ATTENDANCE SUCCESSFULLY\n\t\t\t\tTHANK YOU";
                    counter++;
                   break;
                }






                if(patient[x].date_17==date)
                {
                    cout<<"\n\n\t\t\tIF HE/SHE COMES ENTER '' present ''\n\n\t\t\tATTENDANCE : ";

                    cin.getline(attendance,15);
                    patient[x].date_17_attendance=attendance;
                    cout<<"\n\n\t\t\t YOU HAVE FINISHED TAKING ATTENDANCE SUCCESSFULLY\n\t\t\t\tTHANK YOU";
                    counter++;
                   break;
                }






                if(patient[x].date_18==date)
                {
                    cout<<"\n\n\t\t\tIF HE/SHE COMES ENTER '' present ''\n\n\t\t\tATTENDANCE : ";

                    cin.getline(attendance,15);
                    patient[x].date_18_attendance=attendance;
                    cout<<"\n\n\t\t\t YOU HAVE FINISHED TAKING ATTENDANCE SUCCESSFULLY\n\t\t\t\tTHANK YOU";
                    counter++;
                   break;
                }



                if(patient[x].date_19==date)
                {
                    cout<<"\n\n\t\t\tIF HE/SHE COMES ENTER '' present ''\n\n\t\t\tATTENDANCE : ";

                    cin.getline(attendance,15);
                    patient[x].date_19_attendance=attendance;
                    cout<<"\n\n\t\t\t YOU HAVE FINISHED TAKING ATTENDANCE SUCCESSFULLY\n\t\t\t\tTHANK YOU";
                    counter++;
                   break;
                }






                if(patient[x].date_20==date)
                {
                    cout<<"\n\n\t\t\tIF HE/SHE COMES ENTER '' present ''\n\n\t\t\tATTENDANCE : ";

                    cin.getline(attendance,15);
                    patient[x].date_20_attendance=attendance;
                    cout<<"\n\n\t\t\t YOU HAVE FINISHED TAKING ATTENDANCE SUCCESSFULLY\n\t\t\t\tTHANK YOU";
                    counter++;
                   break;
                }










 }

     }
     if (counter==0)
{
        cout<<"\n\n\t\t  no customer is assigned by this id";
          cin.get();
}

     cin.get();

     }
 void accept_first_price(int CustId)
 {
    int amount;
    int counter=0;
    char date[18];
    int payment_method;

    for(int x=0;x<custmax;x++)
    {
        if(patient[x].id==CustId)
        {
            cout<<"\n\n\n\t\t\tCHOOSE THE PAYMENT METHOD \n\n\t\t\t\t1.CASH\n\t\t\t\t2.MOBILE BANKING";

            cin>>payment_method;

            if(payment_method==1)
            {
                cout<<"\n\n\n\t\t\tENTER THE AMOUNT : ";
                cin>>amount;
                cout<<"\n\n\t\t\tENTER THE DATE : ";
                cin.ignore();
                cin.getline(date,18);
                cout<<"\n\n\t\t\t SAVED SUCCESSFULY";
                patient[x].first_cash_price=amount;
                patient[x].date_of_first_price=date;


                counter++;
                break;
            }
            else if(payment_method==2)
            {
               cout<<"\n\n\n\t\t\tENTER THE AMOUNT : ";
                cin>>amount;
                cout<<"\n\n\t\t\tENTER THE DATE : ";
                cin.ignore();
                cin.getline(date,18);
                cout<<"\n\n\t\t\t SAVED SUCCESSFULY";
                patient[x].first_cbe_price=amount;
                patient[x].date_of_first_price=date;


                counter++;
                break;
            }

        }

    }
    if(counter==0)
    {
        cout<<"\n\n\n\t\t\tNO CUSTOMER IS ASSIGNED BY THIS ID NUMBER";
    }

    cin.get();
 }
void find_total(int CustId)
{
    int total=0;
    int counter=0;
     for(int x=0;x<custmax;x++)
    {
        if(patient[x].id==CustId)
        {
             total+=400; //for card
//--------------------------------------------------11111111111111111111111111------------------------------------------------------


            if( patient[x].date_1_prescription=="tp 10" || patient[x].date_1_prescription=="TP 10" || patient[x].date_1_prescription=="tp10" || patient[x].date_1_prescription=="TP10" )
            total+=tp10;
            if( patient[x].date_1_prescription=="tp 12" || patient[x].date_1_prescription=="TP 12" || patient[x].date_1_prescription=="tp12" || patient[x].date_1_prescription=="TP12" )
            total+=tp12;
            if( patient[x].date_1_prescription=="tp 15" || patient[x].date_1_prescription=="TP 15" || patient[x].date_1_prescription=="tp15" || patient[x].date_1_prescription=="TP15" )
            total+=tp15;
             if( patient[x].date_1_prescription=="tp 20" || patient[x].date_1_prescription=="TP 20" || patient[x].date_1_prescription=="tp20" || patient[x].date_1_prescription=="TP20" )
            total+=tp20;
             if( patient[x].date_1_prescription=="tp 25" || patient[x].date_1_prescription=="TP 25" || patient[x].date_1_prescription=="tp25" || patient[x].date_1_prescription=="TP25" )
            total+=tp25;


             if( patient[x].date_1_prescription=="ma 10" || patient[x].date_1_prescription=="MA 10" || patient[x].date_1_prescription=="ma10" || patient[x].date_1_prescription=="MA10" )
            total+=ma10;
            if( patient[x].date_1_prescription=="ma 12" || patient[x].date_1_prescription=="MA 12" || patient[x].date_1_prescription=="ma12" || patient[x].date_1_prescription=="MA12" )
            total+=ma12;
            if( patient[x].date_1_prescription=="ma 15" || patient[x].date_1_prescription=="MA 15" || patient[x].date_1_prescription=="ma15" || patient[x].date_1_prescription=="MA15" )
            total+=ma15;
            if( patient[x].date_1_prescription=="ma 17" || patient[x].date_1_prescription=="MA 17" || patient[x].date_1_prescription=="ma17" || patient[x].date_1_prescription=="MA17" )
            total+=ma17;

              if( patient[x].date_1_prescription=="rx 45" || patient[x].date_1_prescription=="RX 45" || patient[x].date_1_prescription=="rx45" || patient[x].date_1_prescription=="RX45" )
            total+=price_45_min;
            if( patient[x].date_1_prescription=="rx 55" || patient[x].date_1_prescription=="RX 55" || patient[x].date_1_prescription=="rx55" || patient[x].date_1_prescription=="RX55" )
            total+=price_60_min;



counter++;

//----------------------------------------------------------222222222222222222222222-----------------------------------------------------

            if( patient[x].date_2_prescription=="tp 10" || patient[x].date_2_prescription=="TP 10" || patient[x].date_2_prescription=="tp10" || patient[x].date_2_prescription=="TP10" )
            total+=tp10;
            if( patient[x].date_2_prescription=="tp 12" || patient[x].date_2_prescription=="TP 12" || patient[x].date_2_prescription=="tp12" || patient[x].date_2_prescription=="TP12" )
            total+=tp12;
            if( patient[x].date_2_prescription=="tp 15" || patient[x].date_2_prescription=="TP 15" || patient[x].date_2_prescription=="tp15" || patient[x].date_2_prescription=="TP15" )
            total+=tp15;
             if( patient[x].date_2_prescription=="tp 20" || patient[x].date_2_prescription=="TP 20" || patient[x].date_2_prescription=="tp20" || patient[x].date_2_prescription=="TP20" )
            total+=tp20;
             if( patient[x].date_2_prescription=="tp 25" || patient[x].date_2_prescription=="TP 25" || patient[x].date_2_prescription=="tp25" || patient[x].date_2_prescription=="TP25" )
            total+=tp25;


             if( patient[x].date_2_prescription=="ma 10" || patient[x].date_2_prescription=="MA 10" || patient[x].date_2_prescription=="ma10" || patient[x].date_2_prescription=="MA10" )
            total+=ma10;
            if( patient[x].date_2_prescription=="ma 12" || patient[x].date_2_prescription=="MA 12" || patient[x].date_2_prescription=="ma12" || patient[x].date_2_prescription=="MA12" )
            total+=ma12;
            if( patient[x].date_2_prescription=="ma 15" || patient[x].date_2_prescription=="MA 15" || patient[x].date_2_prescription=="ma15" || patient[x].date_2_prescription=="MA15" )
            total+=ma15;
            if( patient[x].date_2_prescription=="ma 17" || patient[x].date_2_prescription=="MA 17" || patient[x].date_2_prescription=="ma17" || patient[x].date_2_prescription=="MA17" )
            total+=ma17;

              if( patient[x].date_2_prescription=="rx 45" || patient[x].date_2_prescription=="RX 45" || patient[x].date_2_prescription=="rx45" || patient[x].date_2_prescription=="RX45" )
            total+=price_45_min;
            if( patient[x].date_2_prescription=="rx 55" || patient[x].date_2_prescription=="RX 55" || patient[x].date_2_prescription=="rx55" || patient[x].date_2_prescription=="RX55" )
            total+=price_60_min;


//-------------------------------------------33333333333333333333333333333333-------------------------------------------------------


            if( patient[x].date_3_prescription=="tp 10" || patient[x].date_3_prescription=="TP 10" || patient[x].date_3_prescription=="tp10" || patient[x].date_3_prescription=="TP10" )
            total+=tp10;
            if( patient[x].date_3_prescription=="tp 12" || patient[x].date_3_prescription=="TP 12" || patient[x].date_3_prescription=="tp12" || patient[x].date_3_prescription=="TP12" )
            total+=tp12;
            if( patient[x].date_3_prescription=="tp 15" || patient[x].date_3_prescription=="TP 15" || patient[x].date_3_prescription=="tp15" || patient[x].date_3_prescription=="TP15" )
            total+=tp15;
             if( patient[x].date_3_prescription=="tp 20" || patient[x].date_3_prescription=="TP 20" || patient[x].date_3_prescription=="tp20" || patient[x].date_3_prescription=="TP20" )
            total+=tp20;
             if( patient[x].date_3_prescription=="tp 25" || patient[x].date_3_prescription=="TP 25" || patient[x].date_3_prescription=="tp25" || patient[x].date_3_prescription=="TP25" )
            total+=tp25;


             if( patient[x].date_3_prescription=="ma 10" || patient[x].date_3_prescription=="MA 10" || patient[x].date_3_prescription=="ma10" || patient[x].date_3_prescription=="MA10" )
            total+=ma10;
            if( patient[x].date_3_prescription=="ma 12" || patient[x].date_3_prescription=="MA 12" || patient[x].date_3_prescription=="ma12" || patient[x].date_3_prescription=="MA12" )
            total+=ma12;
            if( patient[x].date_3_prescription=="ma 15" || patient[x].date_3_prescription=="MA 15" || patient[x].date_3_prescription=="ma15" || patient[x].date_3_prescription=="MA15" )
            total+=ma15;
            if( patient[x].date_3_prescription=="ma 17" || patient[x].date_3_prescription=="MA 17" || patient[x].date_3_prescription=="ma17" || patient[x].date_3_prescription=="MA17" )
            total+=ma17;

              if( patient[x].date_3_prescription=="rx 45" || patient[x].date_3_prescription=="RX 45" || patient[x].date_3_prescription=="rx45" || patient[x].date_3_prescription=="RX45" )
            total+=price_45_min;
            if( patient[x].date_3_prescription=="rx 55" || patient[x].date_3_prescription=="RX 55" || patient[x].date_3_prescription=="rx55" || patient[x].date_3_prescription=="RX55" )
            total+=price_60_min;


//---------------------------------------------------------44444444444--------------------------------------------------------------------

            if( patient[x].date_4_prescription=="tp 10" || patient[x].date_4_prescription=="TP 10" || patient[x].date_4_prescription=="tp10" || patient[x].date_4_prescription=="TP10" )
            total+=tp10;
            if( patient[x].date_4_prescription=="tp 12" || patient[x].date_4_prescription=="TP 12" || patient[x].date_4_prescription=="tp12" || patient[x].date_4_prescription=="TP12" )
            total+=tp12;
            if( patient[x].date_4_prescription=="tp 15" || patient[x].date_4_prescription=="TP 15" || patient[x].date_4_prescription=="tp15" || patient[x].date_4_prescription=="TP15" )
            total+=tp15;
             if( patient[x].date_4_prescription=="tp 20" || patient[x].date_4_prescription=="TP 20" || patient[x].date_4_prescription=="tp20" || patient[x].date_4_prescription=="TP20" )
            total+=tp20;
             if( patient[x].date_4_prescription=="tp 25" || patient[x].date_4_prescription=="TP 25" || patient[x].date_4_prescription=="tp25" || patient[x].date_4_prescription=="TP25" )
            total+=tp25;


             if( patient[x].date_4_prescription=="ma 10" || patient[x].date_4_prescription=="MA 10" || patient[x].date_4_prescription=="ma10" || patient[x].date_4_prescription=="MA10" )
            total+=ma10;
            if( patient[x].date_4_prescription=="ma 12" || patient[x].date_4_prescription=="MA 12" || patient[x].date_4_prescription=="ma12" || patient[x].date_4_prescription=="MA12" )
            total+=ma12;
            if( patient[x].date_4_prescription=="ma 15" || patient[x].date_4_prescription=="MA 15" || patient[x].date_4_prescription=="ma15" || patient[x].date_4_prescription=="MA15" )
            total+=ma15;
            if( patient[x].date_4_prescription=="ma 17" || patient[x].date_4_prescription=="MA 17" || patient[x].date_4_prescription=="ma17" || patient[x].date_4_prescription=="MA17" )
            total+=ma17;

              if( patient[x].date_4_prescription=="rx 45" || patient[x].date_4_prescription=="RX 45" || patient[x].date_4_prescription=="rx45" || patient[x].date_4_prescription=="RX45" )
            total+=price_45_min;
            if( patient[x].date_4_prescription=="rx 55" || patient[x].date_4_prescription=="RX 55" || patient[x].date_4_prescription=="rx55" || patient[x].date_4_prescription=="RX55" )
            total+=price_60_min;


//---------------------------------------------------555555555555555555555555555555-----------------------------------------------------------------

             if( patient[x].date_5_prescription=="tp 10" || patient[x].date_5_prescription=="TP 10" || patient[x].date_5_prescription=="tp10" || patient[x].date_5_prescription=="TP10" )
            total+=tp10;
            if( patient[x].date_5_prescription=="tp 12" || patient[x].date_5_prescription=="TP 12" || patient[x].date_5_prescription=="tp12" || patient[x].date_5_prescription=="TP12" )
            total+=tp12;
            if( patient[x].date_5_prescription=="tp 15" || patient[x].date_5_prescription=="TP 15" || patient[x].date_5_prescription=="tp15" || patient[x].date_5_prescription=="TP15" )
            total+=tp15;
            if( patient[x].date_5_prescription=="tp 20" || patient[x].date_5_prescription=="TP 20" || patient[x].date_5_prescription=="tp20" || patient[x].date_5_prescription=="TP20" )
            total+=tp20;
            if( patient[x].date_5_prescription=="tp 25" || patient[x].date_5_prescription=="TP 25" || patient[x].date_5_prescription=="tp25" || patient[x].date_5_prescription=="TP25" )
            total+=tp25;


             if( patient[x].date_5_prescription=="ma 10" || patient[x].date_5_prescription=="MA 10" || patient[x].date_5_prescription=="ma10" || patient[x].date_5_prescription=="MA10" )
            total+=ma10;
            if( patient[x].date_5_prescription=="ma 12" || patient[x].date_5_prescription=="MA 12" || patient[x].date_5_prescription=="ma12" || patient[x].date_5_prescription=="MA12" )
            total+=ma12;
            if( patient[x].date_5_prescription=="ma 15" || patient[x].date_5_prescription=="MA 15" || patient[x].date_5_prescription=="ma15" || patient[x].date_5_prescription=="MA15" )
            total+=ma15;
            if( patient[x].date_5_prescription=="ma 17" || patient[x].date_5_prescription=="MA 17" || patient[x].date_5_prescription=="ma17" || patient[x].date_5_prescription=="MA17" )
            total+=ma17;

              if( patient[x].date_5_prescription=="rx 45" || patient[x].date_5_prescription=="RX 45" || patient[x].date_5_prescription=="rx45" || patient[x].date_5_prescription=="RX45" )
            total+=price_45_min;
            if( patient[x].date_5_prescription=="rx 55" || patient[x].date_5_prescription=="RX 55" || patient[x].date_5_prescription=="rx55" || patient[x].date_5_prescription=="RX55" )
            total+=price_60_min;


//----------------------------------------------6666666666666666666666666666666----------------------------------------------------------------


              if( patient[x].date_6_prescription=="tp 10" || patient[x].date_6_prescription=="TP 10" || patient[x].date_6_prescription=="tp10" || patient[x].date_6_prescription=="TP10" )
            total+=tp10;
            if( patient[x].date_6_prescription=="tp 12" || patient[x].date_6_prescription=="TP 12" || patient[x].date_6_prescription=="tp12" || patient[x].date_6_prescription=="TP12" )
            total+=tp12;
            if( patient[x].date_6_prescription=="tp 15" || patient[x].date_6_prescription=="TP 15" || patient[x].date_6_prescription=="tp15" || patient[x].date_6_prescription=="TP15" )
            total+=tp15;
             if( patient[x].date_6_prescription=="tp 20" || patient[x].date_6_prescription=="TP 20" || patient[x].date_6_prescription=="tp20" || patient[x].date_6_prescription=="TP20" )
            total+=tp20;
             if( patient[x].date_6_prescription=="tp 25" || patient[x].date_6_prescription=="TP 25" || patient[x].date_6_prescription=="tp25" || patient[x].date_6_prescription=="TP25" )
            total+=tp25;


             if( patient[x].date_6_prescription=="ma 10" || patient[x].date_6_prescription=="MA 10" || patient[x].date_6_prescription=="ma10" || patient[x].date_6_prescription=="MA10" )
            total+=ma10;
            if( patient[x].date_6_prescription=="ma 12" || patient[x].date_6_prescription=="MA 12" || patient[x].date_6_prescription=="ma12" || patient[x].date_6_prescription=="MA12" )
            total+=ma12;
            if( patient[x].date_6_prescription=="ma 15" || patient[x].date_6_prescription=="MA 15" || patient[x].date_6_prescription=="ma15" || patient[x].date_6_prescription=="MA15" )
            total+=ma15;
            if( patient[x].date_6_prescription=="ma 17" || patient[x].date_6_prescription=="MA 17" || patient[x].date_6_prescription=="ma17" || patient[x].date_6_prescription=="MA17" )
            total+=ma17;

              if( patient[x].date_6_prescription=="rx 45" || patient[x].date_6_prescription=="RX 45" || patient[x].date_6_prescription=="rx45" || patient[x].date_6_prescription=="RX45" )
            total+=price_45_min;
            if( patient[x].date_6_prescription=="rx 55" || patient[x].date_6_prescription=="RX 55" || patient[x].date_6_prescription=="rx55" || patient[x].date_6_prescription=="RX55" )
            total+=price_60_min;


//-----------------------------------------------777777777777777777777777777777777777777----------------------------------------------------------------



               if( patient[x].date_7_prescription=="tp 10" || patient[x].date_7_prescription=="TP 10" || patient[x].date_7_prescription=="tp10" || patient[x].date_7_prescription=="TP10" )
            total+=tp10;
            if( patient[x].date_7_prescription=="tp 12" || patient[x].date_7_prescription=="TP 12" || patient[x].date_7_prescription=="tp12" || patient[x].date_7_prescription=="TP12" )
            total+=tp12;
            if( patient[x].date_7_prescription=="tp 15" || patient[x].date_7_prescription=="TP 15" || patient[x].date_7_prescription=="tp15" || patient[x].date_7_prescription=="TP15" )
            total+=tp15;
             if( patient[x].date_7_prescription=="tp 20" || patient[x].date_7_prescription=="TP 20" || patient[x].date_7_prescription=="tp20" || patient[x].date_7_prescription=="TP20" )
            total+=tp20;
             if( patient[x].date_7_prescription=="tp 25" || patient[x].date_7_prescription=="TP 25" || patient[x].date_7_prescription=="tp25" || patient[x].date_7_prescription=="TP25" )
            total+=tp25;


             if( patient[x].date_7_prescription=="ma 10" || patient[x].date_7_prescription=="MA 10" || patient[x].date_7_prescription=="ma10" || patient[x].date_7_prescription=="MA10" )
            total+=ma10;
            if( patient[x].date_7_prescription=="ma 12" || patient[x].date_7_prescription=="MA 12" || patient[x].date_7_prescription=="ma12" || patient[x].date_7_prescription=="MA12" )
            total+=ma12;
            if( patient[x].date_7_prescription=="ma 15" || patient[x].date_7_prescription=="MA 15" || patient[x].date_7_prescription=="ma15" || patient[x].date_7_prescription=="MA15" )
            total+=ma15;
            if( patient[x].date_7_prescription=="ma 17" || patient[x].date_7_prescription=="MA 17" || patient[x].date_7_prescription=="ma17" || patient[x].date_7_prescription=="MA17" )
            total+=ma17;

              if( patient[x].date_7_prescription=="rx 45" || patient[x].date_7_prescription=="RX 45" || patient[x].date_7_prescription=="rx45" || patient[x].date_7_prescription=="RX45" )
            total+=price_45_min;
            if( patient[x].date_7_prescription=="rx 55" || patient[x].date_7_prescription=="RX 55" || patient[x].date_7_prescription=="rx55" || patient[x].date_7_prescription=="RX55" )
            total+=price_60_min;


//---------------------------------------88888888888888888888888888888--------------------------------------------------------------------------------------


              if( patient[x].date_8_prescription=="tp 10" || patient[x].date_8_prescription=="TP 10" || patient[x].date_8_prescription=="tp10" || patient[x].date_8_prescription=="TP10" )
            total+=tp10;
            if( patient[x].date_8_prescription=="tp 12" || patient[x].date_8_prescription=="TP 12" || patient[x].date_8_prescription=="tp12" || patient[x].date_8_prescription=="TP12" )
            total+=tp12;
            if( patient[x].date_8_prescription=="tp 15" || patient[x].date_8_prescription=="TP 15" || patient[x].date_8_prescription=="tp15" || patient[x].date_8_prescription=="TP15" )
            total+=tp15;
             if( patient[x].date_8_prescription=="tp 20" || patient[x].date_8_prescription=="TP 20" || patient[x].date_8_prescription=="tp20" || patient[x].date_8_prescription=="TP20" )
            total+=tp20;
             if( patient[x].date_8_prescription=="tp 25" || patient[x].date_8_prescription=="TP 25" || patient[x].date_8_prescription=="tp25" || patient[x].date_8_prescription=="TP25" )
            total+=tp25;


             if( patient[x].date_8_prescription=="ma 10" || patient[x].date_8_prescription=="MA 10" || patient[x].date_8_prescription=="ma10" || patient[x].date_8_prescription=="MA10" )
            total+=ma10;
            if( patient[x].date_8_prescription=="ma 12" || patient[x].date_8_prescription=="MA 12" || patient[x].date_8_prescription=="ma12" || patient[x].date_8_prescription=="MA12" )
            total+=ma12;
            if( patient[x].date_8_prescription=="ma 15" || patient[x].date_8_prescription=="MA 15" || patient[x].date_8_prescription=="ma15" || patient[x].date_8_prescription=="MA15" )
            total+=ma15;
            if( patient[x].date_8_prescription=="ma 17" || patient[x].date_8_prescription=="MA 17" || patient[x].date_8_prescription=="ma17" || patient[x].date_8_prescription=="MA17" )
            total+=ma17;

              if( patient[x].date_8_prescription=="rx 45" || patient[x].date_8_prescription=="RX 45" || patient[x].date_8_prescription=="rx45" || patient[x].date_8_prescription=="RX45" )
            total+=price_45_min;
            if( patient[x].date_8_prescription=="rx 55" || patient[x].date_8_prescription=="RX 55" || patient[x].date_8_prescription=="rx55" || patient[x].date_8_prescription=="RX55" )
            total+=price_60_min;


//-------------------------------------------------------9999999999999999999999999999999999999----------------------------------------------------------------


              if( patient[x].date_9_prescription=="tp 10" || patient[x].date_9_prescription=="TP 10" || patient[x].date_9_prescription=="tp10" || patient[x].date_9_prescription=="TP10" )
            total+=tp10;
            if( patient[x].date_9_prescription=="tp 12" || patient[x].date_9_prescription=="TP 12" || patient[x].date_9_prescription=="tp12" || patient[x].date_9_prescription=="TP12" )
            total+=tp12;
            if( patient[x].date_9_prescription=="tp 15" || patient[x].date_9_prescription=="TP 15" || patient[x].date_9_prescription=="tp15" || patient[x].date_9_prescription=="TP15" )
            total+=tp15;
             if( patient[x].date_9_prescription=="tp 20" || patient[x].date_9_prescription=="TP 20" || patient[x].date_9_prescription=="tp20" || patient[x].date_9_prescription=="TP20" )
            total+=tp20;
             if( patient[x].date_9_prescription=="tp 25" || patient[x].date_9_prescription=="TP 25" || patient[x].date_9_prescription=="tp25" || patient[x].date_9_prescription=="TP25" )
            total+=tp25;


             if( patient[x].date_9_prescription=="ma 10" || patient[x].date_9_prescription=="MA 10" || patient[x].date_9_prescription=="ma10" || patient[x].date_9_prescription=="MA10" )
            total+=ma10;
            if( patient[x].date_9_prescription=="ma 12" || patient[x].date_9_prescription=="MA 12" || patient[x].date_9_prescription=="ma12" || patient[x].date_9_prescription=="MA12" )
            total+=ma12;
            if( patient[x].date_9_prescription=="ma 15" || patient[x].date_9_prescription=="MA 15" || patient[x].date_9_prescription=="ma15" || patient[x].date_9_prescription=="MA15" )
            total+=ma15;
            if( patient[x].date_9_prescription=="ma 17" || patient[x].date_9_prescription=="MA 17" || patient[x].date_9_prescription=="ma17" || patient[x].date_9_prescription=="MA17" )
            total+=ma17;

              if( patient[x].date_9_prescription=="rx 45" || patient[x].date_9_prescription=="RX 45" || patient[x].date_9_prescription=="rx45" || patient[x].date_9_prescription=="RX45" )
            total+=price_45_min;
            if( patient[x].date_9_prescription=="rx 55" || patient[x].date_9_prescription=="RX 55" || patient[x].date_9_prescription=="rx55" || patient[x].date_9_prescription=="RX55" )
            total+=price_60_min;


            //------------------------------------------------------10 10 10 10 10-------------------------------------------------------------


              if( patient[x].date_10_prescription=="tp 10" || patient[x].date_10_prescription=="TP 10" || patient[x].date_10_prescription=="tp10" || patient[x].date_10_prescription=="TP10" )
            total+=tp10;
            if( patient[x].date_10_prescription=="tp 12" || patient[x].date_10_prescription=="TP 12" || patient[x].date_10_prescription=="tp12" || patient[x].date_10_prescription=="TP12" )
            total+=tp12;
            if( patient[x].date_10_prescription=="tp 15" || patient[x].date_10_prescription=="TP 15" || patient[x].date_10_prescription=="tp15" || patient[x].date_10_prescription=="TP15" )
            total+=tp15;
             if( patient[x].date_10_prescription=="tp 20" || patient[x].date_10_prescription=="TP 20" || patient[x].date_10_prescription=="tp20" || patient[x].date_10_prescription=="TP20" )
            total+=tp20;
             if( patient[x].date_10_prescription=="tp 25" || patient[x].date_10_prescription=="TP 25" || patient[x].date_10_prescription=="tp25" || patient[x].date_10_prescription=="TP25" )
            total+=tp25;


             if( patient[x].date_10_prescription=="ma 10" || patient[x].date_10_prescription=="MA 10" || patient[x].date_10_prescription=="ma10" || patient[x].date_10_prescription=="MA10" )
            total+=ma10;
            if( patient[x].date_10_prescription=="ma 12" || patient[x].date_10_prescription=="MA 12" || patient[x].date_10_prescription=="ma12" || patient[x].date_10_prescription=="MA12" )
            total+=ma12;
            if( patient[x].date_10_prescription=="ma 15" || patient[x].date_10_prescription=="MA 15" || patient[x].date_10_prescription=="ma15" || patient[x].date_10_prescription=="MA15" )
            total+=ma15;
            if( patient[x].date_10_prescription=="ma 17" || patient[x].date_10_prescription=="MA 17" || patient[x].date_10_prescription=="ma17" || patient[x].date_10_prescription=="MA17" )
            total+=ma17;

              if( patient[x].date_10_prescription=="rx 45" || patient[x].date_10_prescription=="RX 45" || patient[x].date_10_prescription=="rx45" || patient[x].date_10_prescription=="RX45" )
            total+=price_45_min;
            if( patient[x].date_10_prescription=="rx 55" || patient[x].date_10_prescription=="RX 55" || patient[x].date_10_prescription=="rx55" || patient[x].date_10_prescription=="RX55" )
            total+=price_60_min;

//---------------------------------------11-11-11-11-11-11-11-11----------------------------------------------------------------------------

              if( patient[x].date_11_prescription=="tp 10" || patient[x].date_11_prescription=="TP 10" || patient[x].date_11_prescription=="tp10" || patient[x].date_11_prescription=="TP10" )
            total+=tp10;
            if( patient[x].date_11_prescription=="tp 12" || patient[x].date_11_prescription=="TP 12" || patient[x].date_11_prescription=="tp12" || patient[x].date_11_prescription=="TP12" )
            total+=tp12;
            if( patient[x].date_11_prescription=="tp 15" || patient[x].date_11_prescription=="TP 15" || patient[x].date_11_prescription=="tp15" || patient[x].date_11_prescription=="TP15" )
            total+=tp15;
             if( patient[x].date_11_prescription=="tp 20" || patient[x].date_11_prescription=="TP 20" || patient[x].date_11_prescription=="tp20" || patient[x].date_11_prescription=="TP20" )
            total+=tp20;
             if( patient[x].date_11_prescription=="tp 25" || patient[x].date_11_prescription=="TP 25" || patient[x].date_11_prescription=="tp25" || patient[x].date_11_prescription=="TP25" )
            total+=tp25;


             if( patient[x].date_11_prescription=="ma 10" || patient[x].date_11_prescription=="MA 10" || patient[x].date_11_prescription=="ma10" || patient[x].date_11_prescription=="MA10" )
            total+=ma10;
            if( patient[x].date_11_prescription=="ma 12" || patient[x].date_11_prescription=="MA 12" || patient[x].date_11_prescription=="ma12" || patient[x].date_11_prescription=="MA12" )
            total+=ma12;
            if( patient[x].date_11_prescription=="ma 15" || patient[x].date_11_prescription=="MA 15" || patient[x].date_11_prescription=="ma15" || patient[x].date_11_prescription=="MA15" )
            total+=ma15;
            if( patient[x].date_11_prescription=="ma 17" || patient[x].date_11_prescription=="MA 17" || patient[x].date_11_prescription=="ma17" || patient[x].date_11_prescription=="MA17" )
            total+=ma17;

              if( patient[x].date_11_prescription=="rx 45" || patient[x].date_11_prescription=="RX 45" || patient[x].date_11_prescription=="rx45" || patient[x].date_11_prescription=="RX45" )
            total+=price_45_min;
            if( patient[x].date_11_prescription=="rx 55" || patient[x].date_11_prescription=="RX 55" || patient[x].date_11_prescription=="rx55" || patient[x].date_11_prescription=="RX55" )
            total+=price_60_min;


//-----------------------------------------------12-12-12-12-12-12-12----------------------------------------------------------------------------------------

               if( patient[x].date_12_prescription=="tp 10" || patient[x].date_12_prescription=="TP 10" || patient[x].date_12_prescription=="tp10" || patient[x].date_12_prescription=="TP10" )
            total+=tp10;
            if( patient[x].date_12_prescription=="tp 12" || patient[x].date_12_prescription=="TP 12" || patient[x].date_12_prescription=="tp12" || patient[x].date_12_prescription=="TP12" )
            total+=tp12;
            if( patient[x].date_12_prescription=="tp 15" || patient[x].date_12_prescription=="TP 15" || patient[x].date_12_prescription=="tp15" || patient[x].date_12_prescription=="TP15" )
            total+=tp15;
             if( patient[x].date_12_prescription=="tp 20" || patient[x].date_12_prescription=="TP 20" || patient[x].date_12_prescription=="tp20" || patient[x].date_12_prescription=="TP20" )
            total+=tp20;
             if( patient[x].date_12_prescription=="tp 25" || patient[x].date_12_prescription=="TP 25" || patient[x].date_12_prescription=="tp25" || patient[x].date_12_prescription=="TP25" )
            total+=tp25;


             if( patient[x].date_12_prescription=="ma 10" || patient[x].date_12_prescription=="MA 10" || patient[x].date_12_prescription=="ma10" || patient[x].date_12_prescription=="MA10" )
            total+=ma10;
            if( patient[x].date_12_prescription=="ma 12" || patient[x].date_12_prescription=="MA 12" || patient[x].date_12_prescription=="ma12" || patient[x].date_12_prescription=="MA12" )
            total+=ma12;
            if( patient[x].date_12_prescription=="ma 15" || patient[x].date_12_prescription=="MA 15" || patient[x].date_12_prescription=="ma15" || patient[x].date_12_prescription=="MA15" )
            total+=ma15;
            if( patient[x].date_12_prescription=="ma 17" || patient[x].date_12_prescription=="MA 17" || patient[x].date_12_prescription=="ma17" || patient[x].date_12_prescription=="MA17" )
            total+=ma17;

              if( patient[x].date_12_prescription=="rx 45" || patient[x].date_12_prescription=="RX 45" || patient[x].date_12_prescription=="rx45" || patient[x].date_12_prescription=="RX45" )
            total+=price_45_min;
            if( patient[x].date_12_prescription=="rx 55" || patient[x].date_12_prescription=="RX 55" || patient[x].date_12_prescription=="rx55" || patient[x].date_12_prescription=="RX55" )
            total+=price_60_min;

//--------------------------------13-------------13--------13-13---------------------------13-------------13--------------------------------


             if( patient[x].date_13_prescription=="tp 10" || patient[x].date_13_prescription=="TP 10" || patient[x].date_13_prescription=="tp10" || patient[x].date_13_prescription=="TP10" )
            total+=tp10;
            if( patient[x].date_13_prescription=="tp 12" || patient[x].date_13_prescription=="TP 12" || patient[x].date_13_prescription=="tp12" || patient[x].date_13_prescription=="TP12" )
            total+=tp12;
            if( patient[x].date_13_prescription=="tp 15" || patient[x].date_13_prescription=="TP 15" || patient[x].date_13_prescription=="tp15" || patient[x].date_13_prescription=="TP15" )
            total+=tp15;
             if( patient[x].date_13_prescription=="tp 20" || patient[x].date_13_prescription=="TP 20" || patient[x].date_13_prescription=="tp20" || patient[x].date_13_prescription=="TP20" )
            total+=tp20;
             if( patient[x].date_13_prescription=="tp 25" || patient[x].date_13_prescription=="TP 25" || patient[x].date_13_prescription=="tp25" || patient[x].date_13_prescription=="TP25" )
            total+=tp25;


             if( patient[x].date_13_prescription=="ma 10" || patient[x].date_13_prescription=="MA 10" || patient[x].date_13_prescription=="ma10" || patient[x].date_13_prescription=="MA10" )
            total+=ma10;
            if( patient[x].date_13_prescription=="ma 12" || patient[x].date_13_prescription=="MA 12" || patient[x].date_13_prescription=="ma12" || patient[x].date_13_prescription=="MA12" )
            total+=ma12;
            if( patient[x].date_13_prescription=="ma 15" || patient[x].date_13_prescription=="MA 15" || patient[x].date_13_prescription=="ma15" || patient[x].date_13_prescription=="MA15" )
            total+=ma15;
            if( patient[x].date_13_prescription=="ma 17" || patient[x].date_13_prescription=="MA 17" || patient[x].date_13_prescription=="ma17" || patient[x].date_13_prescription=="MA17" )
            total+=ma17;

              if( patient[x].date_13_prescription=="rx 45" || patient[x].date_13_prescription=="RX 45" || patient[x].date_13_prescription=="rx45" || patient[x].date_13_prescription=="RX45" )
            total+=price_45_min;
            if( patient[x].date_13_prescription=="rx 55" || patient[x].date_13_prescription=="RX 55" || patient[x].date_13_prescription=="rx55" || patient[x].date_13_prescription=="RX55" )
            total+=price_60_min;


//----------------------14---------------------14-14-14-14-14-14-14-14-------------------------------------------------------------------------------------

              if( patient[x].date_14_prescription=="tp 10" || patient[x].date_14_prescription=="TP 10" || patient[x].date_14_prescription=="tp10" || patient[x].date_14_prescription=="TP10" )
            total+=tp10;
            if( patient[x].date_14_prescription=="tp 12" || patient[x].date_14_prescription=="TP 12" || patient[x].date_14_prescription=="tp12" || patient[x].date_14_prescription=="TP12" )
            total+=tp12;
            if( patient[x].date_14_prescription=="tp 15" || patient[x].date_14_prescription=="TP 15" || patient[x].date_14_prescription=="tp15" || patient[x].date_14_prescription=="TP15" )
            total+=tp15;
             if( patient[x].date_14_prescription=="tp 20" || patient[x].date_14_prescription=="TP 20" || patient[x].date_14_prescription=="tp20" || patient[x].date_14_prescription=="TP20" )
            total+=tp20;
             if( patient[x].date_14_prescription=="tp 25" || patient[x].date_14_prescription=="TP 25" || patient[x].date_14_prescription=="tp25" || patient[x].date_14_prescription=="TP25" )
            total+=tp25;


             if( patient[x].date_14_prescription=="ma 10" || patient[x].date_14_prescription=="MA 10" || patient[x].date_14_prescription=="ma10" || patient[x].date_14_prescription=="MA10" )
            total+=ma10;
            if( patient[x].date_14_prescription=="ma 12" || patient[x].date_14_prescription=="MA 12" || patient[x].date_14_prescription=="ma12" || patient[x].date_14_prescription=="MA12" )
            total+=ma12;
            if( patient[x].date_14_prescription=="ma 15" || patient[x].date_14_prescription=="MA 15" || patient[x].date_14_prescription=="ma15" || patient[x].date_14_prescription=="MA15" )
            total+=ma15;
            if( patient[x].date_14_prescription=="ma 17" || patient[x].date_14_prescription=="MA 17" || patient[x].date_14_prescription=="ma17" || patient[x].date_14_prescription=="MA17" )
            total+=ma17;

              if( patient[x].date_14_prescription=="rx 45" || patient[x].date_14_prescription=="RX 45" || patient[x].date_14_prescription=="rx45" || patient[x].date_14_prescription=="RX45" )
            total+=price_45_min;
            if( patient[x].date_14_prescription=="rx 55" || patient[x].date_14_prescription=="RX 55" || patient[x].date_14_prescription=="rx55" || patient[x].date_14_prescription=="RX55" )
            total+=price_60_min;

//-----------------------15---------15-15-15-15-15-15--------------------15----------------------------------------15--------------------------------15------------

               if( patient[x].date_15_prescription=="tp 10" || patient[x].date_15_prescription=="TP 10" || patient[x].date_15_prescription=="tp10" || patient[x].date_15_prescription=="TP10" )
            total+=tp10;
            if( patient[x].date_15_prescription=="tp 12" || patient[x].date_15_prescription=="TP 12" || patient[x].date_15_prescription=="tp12" || patient[x].date_15_prescription=="TP12" )
            total+=tp12;
            if( patient[x].date_15_prescription=="tp 15" || patient[x].date_15_prescription=="TP 15" || patient[x].date_15_prescription=="tp15" || patient[x].date_15_prescription=="TP15" )
            total+=tp15;
             if( patient[x].date_15_prescription=="tp 20" || patient[x].date_15_prescription=="TP 20" || patient[x].date_15_prescription=="tp20" || patient[x].date_15_prescription=="TP20" )
            total+=tp20;
             if( patient[x].date_15_prescription=="tp 25" || patient[x].date_15_prescription=="TP 25" || patient[x].date_15_prescription=="tp25" || patient[x].date_15_prescription=="TP25" )
            total+=tp25;


             if( patient[x].date_15_prescription=="ma 10" || patient[x].date_15_prescription=="MA 10" || patient[x].date_15_prescription=="ma10" || patient[x].date_15_prescription=="MA10" )
            total+=ma10;
            if( patient[x].date_15_prescription=="ma 12" || patient[x].date_15_prescription=="MA 12" || patient[x].date_15_prescription=="ma12" || patient[x].date_15_prescription=="MA12" )
            total+=ma12;
            if( patient[x].date_15_prescription=="ma 15" || patient[x].date_15_prescription=="MA 15" || patient[x].date_15_prescription=="ma15" || patient[x].date_15_prescription=="MA15" )
            total+=ma15;
            if( patient[x].date_15_prescription=="ma 17" || patient[x].date_15_prescription=="MA 17" || patient[x].date_15_prescription=="ma17" || patient[x].date_15_prescription=="MA17" )
            total+=ma17;

              if( patient[x].date_15_prescription=="rx 45" || patient[x].date_15_prescription=="RX 45" || patient[x].date_15_prescription=="rx45" || patient[x].date_15_prescription=="RX45" )
            total+=price_45_min;
            if( patient[x].date_15_prescription=="rx 55" || patient[x].date_15_prescription=="RX 55" || patient[x].date_15_prescription=="rx55" || patient[x].date_15_prescription=="RX55" )
            total+=price_60_min;

//-------------------------------16-16-16-16-16-16-16-16-------------------------------------------------------------------------------------------------------------------

              if( patient[x].date_16_prescription=="tp 10" || patient[x].date_16_prescription=="TP 10" || patient[x].date_16_prescription=="tp10" || patient[x].date_16_prescription=="TP10" )
            total+=tp10;
            if( patient[x].date_16_prescription=="tp 12" || patient[x].date_16_prescription=="TP 12" || patient[x].date_16_prescription=="tp12" || patient[x].date_16_prescription=="TP12" )
            total+=tp12;
            if( patient[x].date_16_prescription=="tp 15" || patient[x].date_16_prescription=="TP 15" || patient[x].date_16_prescription=="tp15" || patient[x].date_16_prescription=="TP15" )
            total+=tp15;
             if( patient[x].date_16_prescription=="tp 20" || patient[x].date_16_prescription=="TP 20" || patient[x].date_16_prescription=="tp20" || patient[x].date_16_prescription=="TP20" )
            total+=tp20;
             if( patient[x].date_16_prescription=="tp 25" || patient[x].date_16_prescription=="TP 25" || patient[x].date_16_prescription=="tp25" || patient[x].date_16_prescription=="TP25" )
            total+=tp25;


             if( patient[x].date_16_prescription=="ma 10" || patient[x].date_16_prescription=="MA 10" || patient[x].date_16_prescription=="ma10" || patient[x].date_16_prescription=="MA10" )
            total+=ma10;
            if( patient[x].date_16_prescription=="ma 12" || patient[x].date_16_prescription=="MA 12" || patient[x].date_16_prescription=="ma12" || patient[x].date_16_prescription=="MA12" )
            total+=ma12;
            if( patient[x].date_16_prescription=="ma 15" || patient[x].date_16_prescription=="MA 15" || patient[x].date_16_prescription=="ma15" || patient[x].date_16_prescription=="MA15" )
            total+=ma15;
            if( patient[x].date_16_prescription=="ma 17" || patient[x].date_16_prescription=="MA 17" || patient[x].date_16_prescription=="ma17" || patient[x].date_16_prescription=="MA17" )
            total+=ma17;

              if( patient[x].date_16_prescription=="rx 45" || patient[x].date_16_prescription=="RX 45" || patient[x].date_16_prescription=="rx45" || patient[x].date_16_prescription=="RX45" )
            total+=price_45_min;
            if( patient[x].date_16_prescription=="rx 55" || patient[x].date_16_prescription=="RX 55" || patient[x].date_16_prescription=="rx55" || patient[x].date_16_prescription=="RX55" )
            total+=price_60_min;


//---------------17------------------------------17-17-17-17-17-17----------------------------------------------------------------------------------------------------------


             if( patient[x].date_17_prescription=="tp 10" || patient[x].date_17_prescription=="TP 10" || patient[x].date_17_prescription=="tp10" || patient[x].date_17_prescription=="TP10" )
            total+=tp10;
            if( patient[x].date_17_prescription=="tp 12" || patient[x].date_17_prescription=="TP 12" || patient[x].date_17_prescription=="tp12" || patient[x].date_17_prescription=="TP12" )
            total+=tp12;
            if( patient[x].date_17_prescription=="tp 15" || patient[x].date_17_prescription=="TP 15" || patient[x].date_17_prescription=="tp15" || patient[x].date_17_prescription=="TP15" )
            total+=tp15;
             if( patient[x].date_17_prescription=="tp 20" || patient[x].date_17_prescription=="TP 20" || patient[x].date_17_prescription=="tp20" || patient[x].date_17_prescription=="TP20" )
            total+=tp20;
             if( patient[x].date_17_prescription=="tp 25" || patient[x].date_17_prescription=="TP 25" || patient[x].date_17_prescription=="tp25" || patient[x].date_17_prescription=="TP25" )
            total+=tp25;


             if( patient[x].date_17_prescription=="ma 10" || patient[x].date_17_prescription=="MA 10" || patient[x].date_17_prescription=="ma10" || patient[x].date_17_prescription=="MA10" )
            total+=ma10;
            if( patient[x].date_17_prescription=="ma 12" || patient[x].date_17_prescription=="MA 12" || patient[x].date_17_prescription=="ma12" || patient[x].date_17_prescription=="MA12" )
            total+=ma12;
            if( patient[x].date_17_prescription=="ma 15" || patient[x].date_17_prescription=="MA 15" || patient[x].date_17_prescription=="ma15" || patient[x].date_17_prescription=="MA15" )
            total+=ma15;
            if( patient[x].date_17_prescription=="ma 17" || patient[x].date_17_prescription=="MA 17" || patient[x].date_17_prescription=="ma17" || patient[x].date_17_prescription=="MA17" )
            total+=ma17;

              if( patient[x].date_17_prescription=="rx 45" || patient[x].date_17_prescription=="RX 45" || patient[x].date_17_prescription=="rx45" || patient[x].date_17_prescription=="RX45" )
            total+=price_45_min;
            if( patient[x].date_17_prescription=="rx 55" || patient[x].date_17_prescription=="RX 55" || patient[x].date_17_prescription=="rx55" || patient[x].date_17_prescription=="RX55" )
            total+=price_60_min;


            //------------------------------18-18-18-18-18-18-18-------------------------------------------------------------------------------------------

               if( patient[x].date_18_prescription=="tp 10" || patient[x].date_18_prescription=="TP 10" || patient[x].date_18_prescription=="tp10" || patient[x].date_18_prescription=="TP10" )
            total+=tp10;
            if( patient[x].date_18_prescription=="tp 12" || patient[x].date_18_prescription=="TP 12" || patient[x].date_18_prescription=="tp12" || patient[x].date_18_prescription=="TP12" )
            total+=tp12;
            if( patient[x].date_18_prescription=="tp 15" || patient[x].date_18_prescription=="TP 15" || patient[x].date_18_prescription=="tp15" || patient[x].date_18_prescription=="TP15" )
            total+=tp15;
             if( patient[x].date_18_prescription=="tp 20" || patient[x].date_18_prescription=="TP 20" || patient[x].date_18_prescription=="tp20" || patient[x].date_18_prescription=="TP20" )
            total+=tp20;
             if( patient[x].date_18_prescription=="tp 25" || patient[x].date_18_prescription=="TP 25" || patient[x].date_18_prescription=="tp25" || patient[x].date_18_prescription=="TP25" )
            total+=tp25;


             if( patient[x].date_18_prescription=="ma 10" || patient[x].date_18_prescription=="MA 10" || patient[x].date_18_prescription=="ma10" || patient[x].date_18_prescription=="MA10" )
            total+=ma10;
            if( patient[x].date_18_prescription=="ma 12" || patient[x].date_18_prescription=="MA 12" || patient[x].date_18_prescription=="ma12" || patient[x].date_18_prescription=="MA12" )
            total+=ma12;
            if( patient[x].date_18_prescription=="ma 15" || patient[x].date_18_prescription=="MA 15" || patient[x].date_18_prescription=="ma15" || patient[x].date_18_prescription=="MA15" )
            total+=ma15;
            if( patient[x].date_18_prescription=="ma 17" || patient[x].date_18_prescription=="MA 17" || patient[x].date_18_prescription=="ma17" || patient[x].date_18_prescription=="MA17" )
            total+=ma17;

              if( patient[x].date_18_prescription=="rx 45" || patient[x].date_18_prescription=="RX 45" || patient[x].date_18_prescription=="rx45" || patient[x].date_18_prescription=="RX45" )
            total+=price_45_min;
            if( patient[x].date_18_prescription=="rx 55" || patient[x].date_18_prescription=="RX 55" || patient[x].date_18_prescription=="rx55" || patient[x].date_18_prescription=="RX55" )
            total+=price_60_min;

//---------------------------19-------------19-19-19-19-19-19-------------------------------------------------------------------------------------------------

              if( patient[x].date_19_prescription=="tp 10" || patient[x].date_19_prescription=="TP 10" || patient[x].date_19_prescription=="tp10" || patient[x].date_19_prescription=="TP10" )
            total+=tp10;
            if( patient[x].date_19_prescription=="tp 12" || patient[x].date_19_prescription=="TP 12" || patient[x].date_19_prescription=="tp12" || patient[x].date_19_prescription=="TP12" )
            total+=tp12;
            if( patient[x].date_19_prescription=="tp 15" || patient[x].date_19_prescription=="TP 15" || patient[x].date_19_prescription=="tp15" || patient[x].date_19_prescription=="TP15" )
            total+=tp15;
             if( patient[x].date_19_prescription=="tp 20" || patient[x].date_19_prescription=="TP 20" || patient[x].date_19_prescription=="tp20" || patient[x].date_19_prescription=="TP20" )
            total+=tp20;
             if( patient[x].date_19_prescription=="tp 25" || patient[x].date_19_prescription=="TP 25" || patient[x].date_19_prescription=="tp25" || patient[x].date_19_prescription=="TP25" )
            total+=tp25;


             if( patient[x].date_19_prescription=="ma 10" || patient[x].date_19_prescription=="MA 10" || patient[x].date_19_prescription=="ma10" || patient[x].date_19_prescription=="MA10" )
            total+=ma10;
            if( patient[x].date_19_prescription=="ma 12" || patient[x].date_19_prescription=="MA 12" || patient[x].date_19_prescription=="ma12" || patient[x].date_19_prescription=="MA12" )
            total+=ma12;
            if( patient[x].date_19_prescription=="ma 15" || patient[x].date_19_prescription=="MA 15" || patient[x].date_19_prescription=="ma15" || patient[x].date_19_prescription=="MA15" )
            total+=ma15;
            if( patient[x].date_19_prescription=="ma 17" || patient[x].date_19_prescription=="MA 17" || patient[x].date_19_prescription=="ma17" || patient[x].date_19_prescription=="MA17" )
            total+=ma17;

              if( patient[x].date_19_prescription=="rx 45" || patient[x].date_19_prescription=="RX 45" || patient[x].date_19_prescription=="rx45" || patient[x].date_19_prescription=="RX45" )
            total+=price_45_min;
            if( patient[x].date_19_prescription=="rx 55" || patient[x].date_19_prescription=="RX 55" || patient[x].date_19_prescription=="rx55" || patient[x].date_19_prescription=="RX55" )
            total+=price_60_min;

//----------------------------20------------20-20-20-20-20-20-----------------------------------------------------------------------------------

            if( patient[x].date_1_prescription=="tp 10" || patient[x].date_20_prescription=="TP 10" || patient[x].date_20_prescription=="tp10" || patient[x].date_20_prescription=="TP10" )
            total+=tp10;
            if( patient[x].date_20_prescription=="tp 12" || patient[x].date_20_prescription=="TP 12" || patient[x].date_20_prescription=="tp12" || patient[x].date_20_prescription=="TP12" )
            total+=tp12;
            if( patient[x].date_20_prescription=="tp 15" || patient[x].date_20_prescription=="TP 15" || patient[x].date_20_prescription=="tp15" || patient[x].date_20_prescription=="TP15" )
            total+=tp15;
             if( patient[x].date_20_prescription=="tp 20" || patient[x].date_20_prescription=="TP 20" || patient[x].date_20_prescription=="tp20" || patient[x].date_20_prescription=="TP20" )
            total+=tp20;
             if( patient[x].date_20_prescription=="tp 25" || patient[x].date_20_prescription=="TP 25" || patient[x].date_20_prescription=="tp25" || patient[x].date_20_prescription=="TP25" )
            total+=tp25;


             if( patient[x].date_20_prescription=="ma 10" || patient[x].date_20_prescription=="MA 10" || patient[x].date_20_prescription=="ma10" || patient[x].date_20_prescription=="MA10" )
            total+=ma10;
            if( patient[x].date_20_prescription=="ma 12" || patient[x].date_20_prescription=="MA 12" || patient[x].date_20_prescription=="ma12" || patient[x].date_20_prescription=="MA12" )
            total+=ma12;
            if( patient[x].date_20_prescription=="ma 15" || patient[x].date_20_prescription=="MA 15" || patient[x].date_20_prescription=="ma15" || patient[x].date_20_prescription=="MA15" )
            total+=ma15;
            if( patient[x].date_20_prescription=="ma 17" || patient[x].date_20_prescription=="MA 17" || patient[x].date_20_prescription=="ma17" || patient[x].date_20_prescription=="MA17" )
            total+=ma17;

              if( patient[x].date_20_prescription=="rx 45" || patient[x].date_20_prescription=="RX 45" || patient[x].date_20_prescription=="rx45" || patient[x].date_20_prescription=="RX45" )
            total+=price_45_min;
            if( patient[x].date_20_prescription=="rx 55" || patient[x].date_20_prescription=="RX 55" || patient[x].date_20_prescription=="rx55" || patient[x].date_20_prescription=="RX55" )
            total+=price_60_min;




cout<<"\n\n\n\t\t\tTOTAL PRICE = "<<total;
patient[x].total=total;
break;


        }
}

if(counter==0)
{
    cout<<"\n\n\n\n\n\n\t\t\t\t\t\twrong id";
}
cin.ignore();
cin.get();
}

 void   accept_credit(int CustId)
 {
        int amount;
        char date[15];
        int option;
        int counter=0;


      for(int x=0;x<custmax;x++)
    {
        if(patient[x].id==CustId)
        {
        int credit;
        credit=patient[x].total-(patient[x].first_cash_price + patient[x].first_cbe_price + patient[x].date_1_cash_price +  patient[x].date_2_cash_price + patient[x].date_3_cash_price + patient[x].date_4_cash_price + patient[x].date_5_cash_price + patient[x].date_6_cash_price + patient[x].date_7_cash_price + patient[x].date_8_cash_price + patient[x].date_9_cash_price + patient[x].date_10_cash_price + patient[x].date_11_cash_price + patient[x].date_12_cash_price + patient[x].date_13_cash_price + patient[x].date_14_cash_price + patient[x].date_15_cash_price + patient[x].date_16_cash_price + patient[x].date_17_cash_price + patient[x].date_18_cash_price + patient[x].date_19_cash_price + patient[x].date_20_cash_price +
                                 patient[x].date_1_cbe_price + patient[x].date_2_cbe_price + patient[x].date_3_cbe_price + patient[x].date_4_cbe_price + patient[x].date_5_cbe_price + patient[x].date_6_cbe_price + patient[x].date_7_cbe_price + patient[x].date_8_cbe_price + patient[x].date_9_cbe_price + patient[x].date_10_cbe_price + patient[x].date_11_cbe_price + patient[x].date_12_cbe_price + patient[x].date_13_cbe_price + patient[x].date_14_cbe_price + patient[x].date_15_cbe_price + patient[x].date_16_cbe_price + patient[x].date_17_cbe_price + patient[x].date_18_cbe_price + patient[x].date_19_cbe_price + patient[x].date_20_cbe_price );
        cout<<"\n\n\n\t\t\tCURRENT CREDIT = "<<credit;

        cout<<"\n\t\t\tACCEPT THE CREDIT USING ....\n\t\t\t\t\t1.CASH\t\t2.CBE";
        cin>>option;
    system("cls");
        cout<<"\n\n\t\t\tENTER THE AMOUNT = ";
        cin>>amount;
       counter++;
        cout<<"\n\t\t\tENTER THE DATE = ";
        cin.ignore();
        cin.getline(date,15);
        system("cls");
        cout<<"\n\n\t\tCURRENT CREDIT = "<<credit - amount;
        cout<<"\n\n\t\t\tSAVED SUCCESSFULLY";

   switch(option)
   {


   case 1:
      if(patient[x].date_1==date)
        patient[x].date_1_cash_price+=amount;
         if(patient[x].date_2==date)
        patient[x].date_2_cash_price+=amount;
        if(patient[x].date_3==date)
        patient[x].date_3_cash_price+=amount;
         if(patient[x].date_4==date)
        patient[x].date_4_cash_price+=amount;
         if(patient[x].date_5==date)
        patient[x].date_5_cash_price+=amount;
      if(patient[x].date_6==date)
        patient[x].date_6_cash_price+=amount;
         if(patient[x].date_7==date)
        patient[x].date_7_cash_price+=amount;
        if(patient[x].date_8==date)
        patient[x].date_8_cash_price+=amount;
         if(patient[x].date_9==date)
        patient[x].date_9_cash_price+=amount;
         if(patient[x].date_10==date)
        patient[x].date_10_cash_price+=amount;
      if(patient[x].date_11==date)
        patient[x].date_11_cash_price+=amount;
         if(patient[x].date_12==date)
        patient[x].date_12_cash_price+=amount;
        if(patient[x].date_13==date)
        patient[x].date_13_cash_price+=amount;
         if(patient[x].date_14==date)
        patient[x].date_14_cash_price+=amount;
         if(patient[x].date_15==date)
        patient[x].date_15_cash_price+=amount;
      if(patient[x].date_16==date)
        patient[x].date_16_cash_price+=amount;
         if(patient[x].date_17==date)
        patient[x].date_17_cash_price+=amount;
        if(patient[x].date_18==date)
        patient[x].date_18_cash_price+=amount;
         if(patient[x].date_19==date)
        patient[x].date_19_cash_price+=amount;
         if(patient[x].date_20==date)
        patient[x].date_20_cash_price+=amount;
        break;


     case 2:
          if(patient[x].date_1==date)
        patient[x].date_1_cbe_price+=amount;
         if(patient[x].date_2==date)
        patient[x].date_2_cbe_price+=amount;
        if(patient[x].date_3==date)
        patient[x].date_3_cbe_price+=amount;
         if(patient[x].date_4==date)
        patient[x].date_4_cbe_price+=amount;
         if(patient[x].date_5==date)
        patient[x].date_5_cbe_price+=amount;
      if(patient[x].date_6==date)
        patient[x].date_6_cbe_price+=amount;
         if(patient[x].date_7==date)
        patient[x].date_7_cbe_price+=amount;
        if(patient[x].date_8==date)
        patient[x].date_8_cbe_price+=amount;
         if(patient[x].date_9==date)
        patient[x].date_9_cbe_price+=amount;
         if(patient[x].date_10==date)
        patient[x].date_10_cbe_price+=amount;
      if(patient[x].date_11==date)
        patient[x].date_11_cbe_price+=amount;
         if(patient[x].date_12==date)
        patient[x].date_12_cbe_price+=amount;
        if(patient[x].date_13==date)
        patient[x].date_13_cbe_price+=amount;
         if(patient[x].date_14==date)
        patient[x].date_14_cbe_price+=amount;
         if(patient[x].date_15==date)
        patient[x].date_15_cbe_price+=amount;
      if(patient[x].date_16==date)
        patient[x].date_16_cbe_price+=amount;
         if(patient[x].date_17==date)
        patient[x].date_17_cbe_price+=amount;
        if(patient[x].date_18==date)
        patient[x].date_18_cbe_price+=amount;
         if(patient[x].date_19==date)
        patient[x].date_19_cbe_price+=amount;
         if(patient[x].date_20==date)
        patient[x].date_20_cbe_price+=amount;
        break;
     }

 }
 }
 if(counter==0)
 {
     cout<<"\n\n\n\t\t\tyou entered the wrong id";
 }

 cin.get();
 }

  void to_withdraw()
 {
       char date[13];
       int amount;
       char reason[80];
                cout<<"\n\n\n\t\t\tENTER THE DATE : ";
                cin.ignore();
                cin.getline(date,13);
                cout<<"\n\n\t\t\tENTER THE AMOUNT : ";
                cin>>amount;
                cout<<"\n\n\t\t\tENTER THE REASON : ";
                cin.ignore();
                cin.getline(reason,80);
cout<<"\n\n\t\t\tWITHDRAWN SUCCESSFULLY";
                for(int x=0;x<custmax;x++)
                {
                    if(withdrawal[x].amount==0)
                    {
                        withdrawal[x].amount=amount;
                        withdrawal[x].date=date;
                        withdrawal[x].reason=reason;
                        break;
                    }
                }


cin.get();

 }

int main()
{
    int option;
    int CustId;



    do{ system("cls");

     cout<<"\n\n\n\n\n\t\t\t\t1.REFLEXOLOGY\n\n\t\t\t\t2. NEW PATIENT\n\n\t\t\t\t3. APPOINTMENT ATTENDANCE\n\n\t\t\t\t4.TOTAL PRICE\n\n\t\t\t\t5. ACCEPT THE FIRST PRICE\n\n\t\t\t\t6.ACCEPT THE CREDIT\n\n\t\t\t\t7.TO WITHDRAW";

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
    {
        ss_2.clear();
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
        case 1:

            system("cls");
            reflexology();

            break;
        case 2:

            system("cls");
            new_patient();

            break;
        case 3:

            system("cls");
            cout<<" \n\n\t\t\tENTER THE PATIENT'S ID : ";
            cin>>CustId;
            appointment_attendance(CustId);

            break;
        case 4:

            system("cls");
            cout<<"\n\n\n\t\t\t ENTER THE ID : ";
            cin>>CustId;
            find_total(CustId);
            break;

        case 5:

            system("cls");
            cout<<"\n\n\n\t\t\t ENTER THE ID : ";
            cin>>CustId;
            accept_first_price(CustId);

            break;
       case 6:

            system("cls");
            cout<<"\n\n\n\t\t\t ENTER THE ID : ";
            cin>>CustId;
            accept_credit(CustId);

            break;
       case 7:

           system("cls");
            to_withdraw();

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


}while(option!=0);


}
