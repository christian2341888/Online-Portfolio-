// Create a decision program menu to help students who are taking a 
//Physics (Mechanics) class perform simple foundation calculations.
//Christian Price
//4-2-2021

#include <ios>  // Provides ios_base::failure
#include <iostream>  // Provides cin
#include<string> //for string manipulation
#include<sstream> //for string manipulation and comparison
using namespace std;

//Date Created: 4-2-2021
//Teacher and schoool: Dr. T- TCC
//Purpose of Assignment: creating a physic calculator to perform simple foundation calculations
//Skills Learned/Gained from  Assignemnt: How to apply simple formulas and calculations into code 
//to solve physics calulcations.


int main() {
    char input;
    cout << "Enter:\n v for velocity\n a for acceleration\n m for motion\n n for newtons second law \n w for weight \n p for momentum\n";
    cin >> input;


    switch (input) {
        case 'v':
     {
    double ds, dt;
    cout <<"Enter ds and dt values\t";
    cin>>ds>>dt;
    double v=ds/dt;
    cout<<"velocity is:"<<v;
    break;
    }
    case 'a':
    {
    double dt,dv;
    cout <<"Enter dv and dt values\t";
    cin>>dv>>dt;
    double a = dv/dt;
    cout<<"acceleration is:"<<a;
    break;   
    }
    case 'm':
    { int num;
    cout<<"Enter:\n 1 for v \n 2 for s \n 3 for v square \n 4 for v bar \n";
    cin>>num;
    switch(num){
        case 1:
     {
     double v0, a and t \n";
     cin>>v0>>a>>t;
     s = s0+(v0*t)+(1\2)*(a*t*t);
     cout<<"values of s is:"<<s;
     }
     case 2:
     {
     double v,v2,v0,t,a;
     cout<<"enter s0, v0, t and a values";
     cin>>s0>>v0>>t>>a;
     s = s0+(v0*t)+(1/2)*(a*t*t);
     cout<<"values of s is:"<<s;
     }
     case 3:
     {
     double v,v2,v0,a,s, and s0 values";
     cin>>
     }
     }
     }   
    }}v0>>a>>s>>s0;
    v=((v0*v0)+((2*a)*(s-s0)));
    v2=v*v;
    cout<<"v2 vales is:"<<v2;
    break;
    }
    case 4:
    {
    double v_bar,v,v0;
    cout<<"v bar is equal to"<<v_bar;
    break;   
    }
    default:
    cout<<"Please check the input you entered";
    break;


    }
    }
    case'n':
    {
    //newtons second law
    }
    case'w':
    {

    //weight   
    }
    case'p':
    //momentum
    }

    default:
    //operator is doesnt match any case constant (+, -, *, /)
    cout << "Error! please check the values you entered";
    break;
    }

     string reset = "\x1b[0m";
  //loop until the user provides "e" or (&&) "E" as exit condition
  
  do
  {
    showMenu(); //call a menu void function here
    cout << "\nPlease enter an option: ";
    option = validateString(option); 
    cout << reset; //reset back to standard
    handleOption(option); //call handleOption and pass the user option as an argument
    }while(option != "e" && option != "E"); 
  cout << "\nGoodbye." << endl;
    return 0;
}
