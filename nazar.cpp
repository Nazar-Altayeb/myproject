/*My name: Nazar Altayeb Osman Alkhalifa
 Class: second
 Department: Computer */
#include <iostream>//importing iostream for input and output system
#include<string>
#include"windows.h"



using namespace std;

int main()//the main function
{

    string frist_name, second_name, department[10];//defining string variables
    char dgree,departlist[10];//defining char variables
    int  student_id, id[10],rating[10];
    string loop ,names[10];
    float rate[10],marks[10];
    do {//This is do will
        for(int coun=0;coun<10;coun++){



                if(coun==0){int mark1[8];
                cout << "Enter First Student Name: "; cin >> names[coun];
                cout << "Enter First name Id: "; cin >> names[coun];
                cout << "Enter Department: ";cin>>departlist[coun];
                cout << "Enter First student Marks \n";

                for(int mar1=0;mar1<8;mar1++){
                        cout<<"Subject "<<mar1+1<<" :";cin >> mark1[mar1];
                       }int total_mark1=0;
                       for(int c=0;c<8;c++){
                      total_mark1=total_mark1+mark1[c];
                }float first_degree=total_mark1*100/800;
              }





                else if(coun==1){int mark2[8];
                cout <<"Enter Second Student Name: "; cin >> names[coun];
                cout << "Enter Second name Id: "; cin >> names[coun];
                cout << "Enter Department: ";cin>>departlist[coun];
                cout << "Enter Second student Marks \n";
                for(int mar2=0;mar2<8;mar2++){
                        cout<<"Subject "<<mar2+1<<" :";cin >> mark2[mar2];
                        }int total_mark2=0;
                        for(int c=0;c<8;c++){
                        total_mark2=total_mark2+mark2[c];
                        }float second_degree=total_mark2*100/800;

                }

                else if(coun==2){int mark3[8];
                cout << "Enter Third Student Name: "; cin >> names[coun];
                cout << "Enter Third name Id: "; cin >> names[coun];
                cout << "Enter Department: ";cin>>departlist[coun];
                cout << "Enter Third student Marks \n";
                for(int mar3=0;mar3<8;mar3++){
                        cout<<"Subject "<<mar3+1<<" :";cin >> mark3[mar3];
                }int total_mark3=0;
                        for(int c=0;c<8;c++){
                        total_mark3=total_mark3+mark3[c];

                } float three_degree=total_mark3*100/800;}


                else if(coun==3){int mark4[8];
                cout << "Enter Fourth Student Name: "; cin >> names[coun];
                cout << "Enter Second name Id: "; cin >> names[coun];
                cout << "Enter Department: ";cin>>departlist[coun];
                cout << "Enter Second student Marks \n";
                for(int mar4=0;mar4<8;mar4++){
                        cout<<"Subject "<<mar4+1<<" :";cin >> mark4[mar4];
                        }int total_mark4=0;
                        for(int c=0;c<8;c++){
                        total_mark4=total_mark4+mark4[c];

                }float fourth_degree=total_mark4*100/800;}

                else if(coun==4){int mark5[8];
                cout << "Enter Fifth Student Name: "; cin >> names[coun];
                cout << "Enter Fifth name Id: "; cin >> names[coun];
                cout << "Enter Department: ";cin>>departlist[coun];
                cout << "Enter Fifth student Marks \n";
                for(int mar5=0;mar5<8;mar5++){
                        cout<<"Subject "<<mar5+1<<" :";cin >> mark5[mar5];
                }int total_mark5=0;
                 for(int c=0;c<8;c++){
                        total_mark5=total_mark5+mark5[c];

                }float five_degree=total_mark5*100/800;}


                else if(coun==5){int mark6[8];
                cout << "Enter Sixth Student Name: "; cin >> names[coun];
                cout << "Enter Sixth name Id: "; cin >> names[coun];
                cout << "Enter Department: ";cin>>departlist[coun];
                cout << "Enter Sixth student Marks \n";
                for(int mar6=0;mar6<8;mar6++){cout<<"Subject "<<mar6+1<<" :";cin >> mark6[mar6];
                }int total_mark6=0;
                        for(int c=0;c<8;c++){
                        total_mark6=total_mark6+mark6[c];

                }float six_degree=total_mark6*100/800;}


                else if(coun==6){int mark7[8];
                cout << "Enter Seventh Student Name: "; cin >> names[coun];
                cout << "Enter Seventh name Id: "; cin >> names[coun];
                cout << "Enter Department: ";cin>>departlist[coun];
                cout << "Enter Seventh student Marks \n";
                for(int mar7=0;mar7<8;mar7++){
                        cout<<"Subject "<<mar7+1<<" :";cin >> mark7[mar7];
                }int total_mark7=0;
                        for(int c=0;c<8;c++){
                        total_mark7=total_mark7+mark7[c];

                }float seven_degree=total_mark7*100/800;}

                else if(coun==7){int mark8[8];
                cout << "Enter Eighth Student Name: "; cin >> names[coun];
                cout << "Enter Eighth name Id: "; cin >> names[coun];
                cout << "Enter Department: ";cin>>departlist[coun];
                cout << "Enter Eighth student Marks \n";
                for(int mar8=0;mar8<8;mar8++){cout<<"Subject "<<mar8+1<<" :";cin >> mark8[mar8];
                }int total_mark8=0;
                        for(int c=0;c<8;c++){

                        total_mark8=total_mark8+mark8[c];

                }  float eight_degree=total_mark8/800*100;}

                else if(coun==8){int mark9[8];
                cout << "Enter Ninth Student Name: "; cin >> names[coun];
                cout << "Enter Ninth name Id: "; cin >> names[coun];
                cout << "Enter Department: ";cin>>departlist[coun];
                cout << "Enter Ninth student Marks \n";
                for(int mar9=0;mar9<8;mar9++){cout<<"Subject "<<mar9+1<<" :";cin >> mark9[mar9];
                }int total_mark9=0;
                        for(int c=0;c<8;c++){
                        total_mark9=total_mark9+mark9[c];
                        float nine_degree=total_mark9*100/800;}
                }


                else if(coun==9){int mark10[8];
                cout << "Enter Tenth Student Name: "; cin >> names[coun];
                cout << "Enter Tenth name Id: "; cin >> names[coun];
                cout << "Enter Department: ";cin>>departlist[coun];
                cout << "Enter Tenth student Marks \n";
                for(int mar10=0;mar10<8;mar10++){cout<<"Subject "<<mar10+1<<" :";cin >> mark10[mar10];}
                        int total_mark10=0;
                        for(int c=0;c<8;c++){
                        total_mark10=total_mark10+mark10[c];

                        } float ten_degree=total_mark10*100/800;}


                        if (departlist[coun]=='A') //if condition to check if that is student Department
                            department[coun] = "Control";

                        else if (departlist[coun] == 'T') {
                            department[coun] = "Telecomunication";}
                        else if (departlist[coun]== 'C')
                            department[coun] = "Computer";
                        else
                            department[coun] = "Unknown";


                        /*switch (mark) { //here switch used for taking deside and specify the dgree of student
                                case 50 ... 59:
                                    dgree = 'F';//if the case above is tree store "F" in dgree variable
                                    break; //break in switch use to prevent entering in second case
                                case 60 ... 69://this case in range from 60 to 69
                                    dgree = 'D';//if the case above is tree store "D" in dgree variable
                                    break;
                                case 70 ... 79://this case one in range from to
                                    dgree = 'C';//if the case above is tree store "C" in dgree variable
                                    break;
                                case 80 ... 89://this case in range from 80 to 89
                                    dgree = 'B';//if the case above is tree store "B" in dgree variable
                                    break;
                                case 90 ... 100://this case in range from 90 to 100
                                    dgree = 'A';//if the case above is tree store "A" in dgree variable
                                    break;
                                default:
                                    string dgree = "invalid Selection";*/





                    if(coun==9){loop="Exit";}}

             for(int t=0;t<10;t++){
                cout<<t+1<<"-"<<names[t]<<" ";
                cout<<"student "<<t+1<<id[t];
                cout<<"student department "<<t+1<<id[t];


             }






       /* cout << "Student name: " << frist_name << " " << second_name << endl;//this line to print out student name
        cout << "Student ID: " << student_id << endl;//this line to print out student ID
        cout << "Student degree: " << dgree << endl;//this line to print out student dgree
        cout << "Department: " << department << endl;//this line to print out student Department*/






    } while (loop!="Exit");

    return 0;}
