//Covid-19 Cases System
//Programmed by White Coders

#include<iostream> 
#include<iomanip>
using namespace std;

//global declaration
void greeting();  
void menu();
void operation();
void stateCode();

int menu_number, day, year, Total_cases = 0, Total_recovery = 0, Total_died = 0;
string month;

int main() //main function
{
    greeting(); //call greeting function

    menu(); //call display menu function

    operation(); //call menu operation function

    return 0;
}


void greeting() //greeting function
{
    cout << "\n";
    cout << setw(66) << setfill('-') << "WELCOME TO COVID-19 SYSTEM"<< setw(66) << setfill('-');
    cout <<"\n\nEnter day: "; 
    cin >> day;
    cout << "Enter month : ";
    cin >> month;
    cout << "Enter year: ";
    cin >> year;
    cout << "\n" << "Date today: " << day << "-" << month << "-" << year << endl << endl;
}

void menu() // display menu function
{
    cout << setw(136)<< setfill('-');
    cout << "\n\t\t\t\t\t\tMAIN MENU\n";
    cout << setw(163) << setfill('-');
    cout << "\n\n\t\t\t[1. ACTIVE CASES]\t\t\t[2. RECOVERY CASES]" << endl;
    cout << "\n\t\t\t[3. DEATH CASES]\t\t\t[4. SEARCH REPORT]" << endl << endl;
    cout << setw(172) << setfill('-');
}

void stateCode() //display state number code function 
{
    cout <<setw(134)<<setfill('-');
    cout << "\n\tNO.\t|\tSTATES" << endl;
    cout <<setw(135)<<setfill('-');
    cout << "\n\t0\t|\tWP LABUAN" << endl;
    cout << "\t1\t|\tTERENGGANU" << endl;
    cout << "\t2\t|\tLEMBAH KLANG" << endl;
    cout << "\t3\t|\tSARAWAK" << endl;
    cout << "\t4\t|\tSABAH" << endl;
    cout << "\t5\t|\tPERLIS" << endl;
    cout << "\t6\t|\tPERAK" << endl;
    cout << "\t7\t|\tPULAU PINANG" << endl;
    cout << "\t8\t|\tPAHANG" << endl;
    cout << "\t9\t|\tNEGERI SEMBILAN" << endl;
    cout << "\t10\t|\tMELAKA" << endl;
    cout << "\t11\t|\tKELANTAN" << endl;
    cout << "\t12\t|\tKEDAH" << endl;
    cout << "\t13\t|\tJOHOR" << endl;
    cout <<setw(155)<<setfill('-');

}

void operation() // menu operation function
{
    string states[] = { "WP LABUAN ","TERENGGANU","LEMBAH KLANG","SARAWAK ","SABAH\t","PERLIS\t","PERAK\t","PULAU PINANG","PAHANG\t" ,"NEGERI SEMBILAN","MELAKA\t","KELANTAN","KEDAH\t","JOHOR\t" };
     int cases[14];
        string category[14];
	 int died[14];
        int highestDeath=-99999;
        int lowestDeath=9999999;
         int recovery[14];
        int highestRecovery=-99999;
        int lowestRecovery=9999999;
    cout << "\nEnter menu number (1/2/3 or 0 to exit operation) : ";
    cin >> menu_number;
    
    while (menu_number != 0 ) {
   
    if (menu_number == 1) 
    { //active cases menu operation
        
        int highestActive=-99999;
        int lowestActive=9999999;
        stateCode(); //call display state number code function 

        for (int i = 0; i < 14; i++)
        {
            cout <<"\nEnter NUMBER CASES in state " << i << ": ";
            cin >> cases[i];
            
            if (cases[i] >= 2500)
            {
                category[i] = "RED ZONE";
            }
            else if (cases[i] > 1000)
            {
                category[i] = "YELLOW ZONE";
            }
            else
            {
                category[i] = "GREEN ZONE";
            }
            
            if (cases[i] > highestActive)
            {
                highestActive = cases[i];
            }
            else if (cases[i] < lowestActive)
            {
                lowestActive = cases[i];
            }

            Total_cases += cases[i];
        }

        cout << endl << endl;
        cout <<setw(149)<<setfill('-');
        cout << "\n\t\t\t\t\tACTIVE CASES BY COUNTRY" << endl;
        cout <<setw(123)<<setfill('-');
        cout << "\n\t\t" << states[0] << "\t=\t" << cases[0] << endl;
        cout << "\t\t" << states[1] << "\t=\t" << cases[1] << endl;
        cout << "\t\t" << states[2] << "\t=\t" << cases[2] << endl;
        cout << "\t\t" << states[3] << "\t=\t" << cases[3] << endl;
        cout << "\t\t" << states[4] << "\t=\t" << cases[4] << endl;
        cout << "\t\t" << states[5] << "\t=\t" << cases[5] << endl;
        cout << "\t\t" << states[6] << "\t=\t" << cases[6] << endl;
        cout << "\t\t" << states[7] << "\t=\t" << cases[7] << endl;
        cout << "\t\t" << states[8] << "\t=\t" << cases[8] << endl;
        cout << "\t\t" << states[9] << "\t=\t" << cases[9] << endl;
        cout << "\t\t" << states[10] << "\t=\t" << cases[10] << endl;
        cout << "\t\t" << states[11] << "\t=\t" << cases[11] << endl;
        cout << "\t\t" << states[12] << "\t=\t" << cases[12] << endl;
        cout << "\t\t" << states[13] << "\t=\t" << cases[13] << endl;
        cout <<setw(147)<<setfill('-');

        cout << "\nTOTAL CASES for today is: " << Total_cases << " cases. " << endl << endl;
        cout << "[RED ZONE > 2500 cases , YELLOW ZONE > 1000 cases , GREEN ZONE <= 100 cases ]" << endl << endl;

        for (int i = 0; i < 14; i++)
        {
            cout << states[i] << "\t:\t" << category[i]<<endl;
        }
        
        cout << "\n\nState with highest active cases : "<<endl;
        for (int i = 0; i < 14; i++)
        {
        	if(cases[i]==highestActive)
        	{
        		cout<<states[i]<<endl;
			}
		}
		
		cout << "\n\nState with lowest active cases : "<<endl;
		 for (int i = 0; i < 14; i++)
        {
        	if(cases[i]==lowestActive)
        	{
        		cout<<states[i]<<endl;
			}
		}
    }
    else if (menu_number == 2)
    { //recovery cases menu operation
 
        stateCode(); //call display state number code function
        
        for (int i = 0; i < 14; i++)
        {
            cout <<"\nEnter number of RECOVERY CASES in state " << i << ": ";
            cin >> recovery[i];
                 if (recovery[i] > highestRecovery)
            {
                highestRecovery = recovery[i];
            }
            else if (recovery[i] < lowestRecovery)
            {
                lowestRecovery = recovery[i];
            }
            
            Total_recovery += recovery[i];
        }
        cout << endl << endl;
        cout <<setw(150)<<setfill('-');
        cout << "\n\t\t\t\t\tRECOVERY CASES BY COUNTRY" << endl;
        cout <<setw(123)<<setfill('-');
        cout << "\n\t\t" << states[0] << "\t=\t" << recovery[0] << endl;
        cout << "\t\t" << states[1] << "\t=\t" << recovery[1] << endl;
        cout << "\t\t" << states[2] << "\t=\t" << recovery[2] << endl;
        cout << "\t\t" << states[3] << "\t=\t" << recovery[3] << endl;
        cout << "\t\t" << states[4] << "\t=\t" << recovery[4] << endl;
        cout << "\t\t" << states[5] << "\t=\t" << recovery[5] << endl;
        cout << "\t\t" << states[6] << "\t=\t" << recovery[6] << endl;
        cout << "\t\t" << states[7] << "\t=\t" << recovery[7] << endl;
        cout << "\t\t" << states[8] << "\t=\t" << recovery[8] << endl;
        cout << "\t\t" << states[9] << "\t=\t" << recovery[9] << endl;
        cout << "\t\t" << states[10] << "\t=\t" << recovery[10] << endl;
        cout << "\t\t" << states[11] << "\t=\t" << recovery[11] << endl;
        cout << "\t\t" << states[12] << "\t=\t" << recovery[12] << endl;
        cout << "\t\t" << states[13] << "\t=\t" << recovery[13] << endl;
        cout <<setw(149)<<setfill('-');

        cout << endl << "\nTOTAL RECOVERY for today is: " << Total_recovery << " cases ";
        
        cout << "\n\nState with highest recovery cases : "<<endl;
        for (int i = 0; i < 14; i++)
        {
        	if(recovery[i]==highestRecovery)
        	{
        		cout<<states[i]<<endl;
			}
		}
		
		cout << "\n\nState with lowest recovery cases : "<<endl;
		 for (int i = 0; i < 14; i++)
        {
        	if(recovery[i]==lowestRecovery)
        	{
        		cout<<states[i]<<endl;
			}
		}
    }

    else if (menu_number == 3)
    { //death cases menu operation

       
        stateCode(); //call display state number code function 

        for (int i = 0; i <14; i++)
        {
            cout << "\nEnter number of DEATH CASES in state " << i << ": ";
            cin >> died[i];
                 if (died[i] > highestDeath)
            {
                highestDeath = died[i];
            }
            else if (died[i] < lowestDeath)
            {
                lowestDeath = died[i];
            }

            Total_died += died[i];
        }
        
        cout << endl << endl;
        cout <<setw(150)<<setfill('-');
        cout << "\n\t\t\t\t\tDEATH CASES BY COUNTRY" << endl;
        cout <<setw(123)<<setfill('-');
        cout << "\n\t\t" << states[0] << "\t=\t" << died[0] << endl;
        cout << "\t\t" << states[1] << "\t=\t" << died[1] << endl;
        cout << "\t\t" << states[2] << "\t=\t" << died[2] << endl;
        cout << "\t\t" << states[3] << "\t=\t" << died[3] << endl;
        cout << "\t\t" << states[4] << "\t=\t" << died[4] << endl;
        cout << "\t\t" << states[5] << "\t=\t" << died[5] << endl;
        cout << "\t\t" << states[6] << "\t=\t" << died[6] << endl;
        cout << "\t\t" << states[7] << "\t=\t" << died[7] << endl;
        cout << "\t\t" << states[8] << "\t=\t" << died[8] << endl;
        cout << "\t\t" << states[9] << "\t=\t" << died[9] << endl;
        cout << "\t\t" << states[10] << "\t=\t" << died[10] << endl;
        cout << "\t\t" << states[11] << "\t=\t" << died[11] << endl;
        cout << "\t\t" << states[12] << "\t=\t" << died[12] << endl;
        cout << "\t\t" << states[13] << "\t=\t" << died[13] << endl;
        cout <<setw(149)<<setfill('-');

        cout <<"\nTOTAL DEATH for today is: " << Total_died << " cases " << endl << endl;
        
      	cout << "\n\nState with highest death cases : "<<endl;
        for (int i = 0; i < 14; i++)
        {
        	if(died[i]==highestDeath)
        	{
        		cout<<states[i]<<endl;
			}
		}
		
		cout << "\n\nState with lowest death cases : "<<endl;
		 for (int i = 0; i < 14; i++)
        {
        	if(died[i]==lowestDeath)
        	{
        		cout<<states[i]<<endl;
			}
		}
    }
    else
    {
        cout << "INVALID MENU." << endl;   
    } //exit operation
    cout<<"\n\nPlease enter 1/2/3 to continue, Enter 0 to exit operation. : ";
    cin >> menu_number; //enter menu again
}
         cout<<"Enter 4 to continue search a report, 99 to exit the system :";
         cin >> menu_number;
         
         while (menu_number!=99)
     {
         if (menu_number==4) {

          string states[] = { "WP LABUAN ","TERENGGANU","LEMBAH KLANG","SARAWAK ","SABAH","PERLIS","PERAK","PULAU PINANG","PAHANG" ,"NEGERI SEMBILAN","MELAKA","KELANTAN","KEDAH","JOHOR" };
          stateCode();
          int search;
          cout <<"\n\nPlease enter the number of state you want to search: ";
          cin >> search;
        
        for (int i=0; i<14; i++ )
          if (i==search )
          {
		      cout <<setw(20)<<setfill('-')<<states[i];
		      cout<<setw(30)<<setfill('-');
              cout << "\n\nThe state is in "<<category[i]<<endl;
              cout << "Number of active cases is "<< cases[i]<<endl;
              cout << "Number of recovery cases is "<<recovery[i]<<endl;
              cout << "Number of death cases is "<<died[i]<<endl<<endl;
          }
       }
        else 
        {
        cout<<"Invalid option. ";
        } 
        cout<<"Please enter 4 to continue search a report, Enter 99 to exit the system. : ";
        cin >> menu_number;
     }
 
//exit
cout <<"Thank you for using Covid-19 Cases System.";
cout<<setw(35)<<setfill('-');
}
