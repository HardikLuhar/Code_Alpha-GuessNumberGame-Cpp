#include <iostream>
#include <cstdlib>
#include<ctime>
using namespace std;

class guess_num
{
    public:
    
    void Very_ez()
    {
    	int x =time(0);
        int a;
    	srand(x);
        int b= rand()%5+1;

        // cout<<"The answer is : "<<b<<endl;  // in case want to see answer in code

        start:                   // used goto statement for looping 

        cout<<"Enter a Number : ";
        cin>>a;

            if(a==b){
                cout<<"Congratulations!!, YOU WONN"<<endl;
            }
            else{
                if (a>b)
				{
					cout<<" WRONG!!, Guess Lower !"<<endl;
					cout<<endl;
				}
				else if(b>a){
					cout<<" WRONG!!, Guess Higher !"<<endl;
					cout<<endl;
				}
				
               goto start;
            }
    }
     void ez()
    {
    	int x =time(0);
        int a;
    	srand(x);
        int b= rand()%10+1;

        // cout<<"The answer is : "<<b<<endl ;  // in case want to see answer in code

        start:                   // used goto statement for looping 
        
        cout<<"Enter a Number : ";
        cin>>a;

            if(a==b){
                cout<<"Congratulations!!, YOU WONN"<<endl;
            }
            else{
                if (a>b)
				{
					cout<<" WRONG!!, Guess Lower !"<<endl;
					cout<<endl;
				}
				else if(b>a){
					cout<<" WRONG!!, Guess Higher !"<<endl;
					cout<<endl;
				}
				
               goto start;
            }
    }
     void Normal()
    {
    	int x =time(0);
        int a;
    	srand(x);
        int b= rand()%20+1;

        // cout<<"The answer is : "<<b<<endl ;  // in case want to see answer in code

        start:                   // used goto statement for looping 
        
        cout<<"Enter a Number : ";
        cin>>a;

            if(a==b){
                cout<<"Congratulations!!, YOU WONN"<<endl;
            }
            else{
                if (a>b)
				{
					cout<<" WRONG!!, Guess Lower !"<<endl;
					cout<<endl;
				}
				else if(b>a){
					cout<<" WRONG!!, Guess Higher !"<<endl;
					cout<<endl;
				}
				
               goto start;
            }
    }
     void Hard()
    {
    	int x =time(0);
        int a;
    	srand(x);
        int b= rand()%50+1;

        // cout<<"The answer is : "<<b<<endl ;  // in case want to see answer in code

        start:                   // used goto statement for looping 
        
        cout<<"Enter a Number : ";
        cin>>a;

            if(a==b){
                cout<<"Congratulations!!, YOU WONN"<<endl;
            }
            else{
                if (a>b)
				{
					cout<<" WRONG!!, Guess Lower !"<<endl;
					cout<<endl;
				}
				else if(b>a){
					cout<<" WRONG!!, Guess Higher !"<<endl;
					cout<<endl;
				}
				
               goto start;
            }
    }
};

int main()
{
    guess_num g1;

    int cse;

    cout<<"Welcome to Guess the Number Game :)"<<endl;    cout<<"--------------------------------------------------------------------------"<<endl;
    cout << "Choose the difficulty level:\n";
    cout << "1. Very Easy = Guess between (1 to 5)\n";
    cout << "2. Easy = Guess between (1 to 10)\n";
    cout << "3. Normal = Guess between (1 to 20)\n";
    cout << "4. Hard = Guess between (1 to 50)\n";
    cout << "Enter the corresponding number to select the difficulty level: ";
    cin>>cse;

    switch (cse)
    {
        case 1 :{
            g1.Very_ez();
            break;
        } 
         case 2 :{
            g1.ez();
            break;
        } 
         case 3 :{
            g1.Normal();
            break;
        } 
         case 4 :{
            g1.Hard();
            break;
        } 
        default:cout<<"Enter valid number :( ";
    }
}
