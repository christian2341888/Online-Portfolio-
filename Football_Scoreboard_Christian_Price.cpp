//NAME:CHRISTIAN PRICE
//DATE:4/20/2021
#include <iostream>
using namespace std;
//Date Created: 4-20-2021
//Teacher and schoool: Dr. T- TCC
//Purpose of Assignment: create a C++ program that keeps track of various objects
//and variables in a Football Scoreboard.
//Skills Learned/Gained from  Assignemnt: how to Write the appropriate member 
//variables, setter functions, and getter functions to make the scoreboard work

class Team{
private:
string Name, Coach_Name,Home_City;
bool Home_Status;
int Score,Timeout_Count;
public:
Team(){
Name = "-";
Coach_Name = "-";
Home_City = "-";
Home_Status = false;
Score = 0;
Timeout_Count = 0;
}
// setter functions
void set_name(string nm){
this->Name = nm;
}
void set_coach_name(string nm){
this->Coach_Name = nm;
}
void set_home_city(string nm){
this->Home_City = nm;
}
void set_home_status(bool st){
this->Home_Status = st;
}
void set_score(int sc){
this->Score = sc;
}
void set_timeout_count(int tm){
this->Timeout_Count = tm;
}
// getter functions
string get_name(){
return this->Name;
}
string get_coach_name(){
return this->Coach_Name;
}
string get_home_city(){
return this->Home_City;
}
bool get_home_status(){
return this->Home_Status;
}
int get_score(){
return this->Score;
}
int get_timeout_count(){
return this->Timeout_Count;
}
};

class Scoreboard{
public:
Team T1,T2;
void print(){
cout<<"======================================================="<<endl;
cout<<T1.get_name()<<" | "<<T1.get_coach_name()<<" | "<<T1.get_home_city()<<" | ";
}
};

int main(){
Scoreboard Sc;
Sc.print();
}
