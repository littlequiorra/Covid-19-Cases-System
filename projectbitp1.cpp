#include<iostream>
#include<iomanip>
using namespace std;

void greeting();
void menu();
void operation();
void stateCode();

int menu_number, day, year, Total_cases = 0, Total_recovery = 0, Total_died = 0;
string month;

int main()
{
    greeting();

    menu();

    operation();

    return 0;
}


void greeting()
{
    cout << "\n";
    cout << "-----------------------------------------WELCOME TO COVID-19 SYSTEM-----------------------------------------" << endl << endl;
    cout << "Enter day: ";
    cin >> day;
    cout << "Enter month : ";
    cin >> month;
    cout << "Enter year: ";
    cin >> year;
    cout << "\n" << "Date for today: " << day << " / " << month << " / " << year << endl << endl;
}

void menu()
{
    cout << "------------------------------------------------------------------------" << endl;
    cout << "                             MAIN MENU                                  " << endl;
    cout << "------------------------------------------------------------------------" << endl;
    cout << endl << endl;
    cout << "     1. ACTIVE CASES                            2. RECOVERY CASES" << endl;
    cout << endl << "                     3. DEATH CASES                        " << endl << endl;
}

void stateCode()
{
    cout << "-----------------------------------------------------------------------" << endl;
    cout << "   NO.| STATES                  " << endl;
    cout << "------------------------------------------------------------------------" << endl;
    cout << "    1 | WP LABUAN               " << endl;
    cout << "    2 | TERENGGANU              " << endl;
    cout << "    3 | LEMBAH KLANG            " << endl;
    cout << "    4 | SARAWAK                 " << endl;
    cout << "    5 | SABAH                   " << endl;
    cout << "    6 | PERLIS                  " << endl;
    cout << "    7 | PERAK                   " << endl;
    cout << "    8 | PULAU PINANG            " << endl;
    cout << "    9 | PAHANG                  " << endl;
    cout << "   10 | NEGERI SEMBILAN         " << endl;
    cout << "   11 | MELAKA                  " << endl;
    cout << "   12 | KELANTAN                " << endl;
    cout << "   13 | KEDAH                   " << endl;
    cout << "   14 | JOHOR                   " << endl;
    cout << "------------------------------------------------------------------------" << endl << endl;

}

void operation()
{
    string category;
    string states[] = { "WP LABUAN ","TERENGGANU","LEMBAH KLANG","SARAWAK ","SABAH","PERLIS","PERAK","PULAU PINANG","PAHANG" ,"NEGERI SEMBILAN","MELAKA","KELANTAN","KEDAH","JOHOR" };
    cout << "Enter menu number : ";
    cin >> menu_number;
    cout << endl;

    if (menu_number == 1)
    {
        int cases[15];
        string category[15];
        stateCode();

        for (int i = 1; i <= 14; i++)
        {
            cout << endl << "Enter NUMBER CASES in state " << i << ": ";
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

            Total_cases += cases[i];
        }

        cout << endl << endl;
        cout << "------------------------------------------------------------------------" << "\n";
        cout << "                        ACTIVE CASES BY COUNTRY                         " << endl;
        cout << "------------------------------------------------------------------------" << "\n";
        cout << "\t\t" << states[1] << "\t\t=\t" << cases[1] << endl;
        cout << "\t\t" << states[2] << "\t\t\t=\t" << cases[2] << endl;
        cout << "\t\t" << states[3] << "\t\t\t=\t" << cases[3] << endl;
        cout << "\t\t" << states[4] << "\t\t\t=\t" << cases[4] << endl;
        cout << "\t\t" << states[5] << "\t\t=\t" << cases[5] << endl;
        cout << "\t\t" << states[6] << "\t\t\t=\t" << cases[6] << endl;
        cout << "\t\t" << states[7] << "\t\t=\t" << cases[7] << endl;
        cout << "\t\t" << states[8] << "\t\t\t=\t" << cases[8] << endl;
        cout << "\t\t" << states[9] << "\t\t=\t" << cases[9] << endl;
        cout << "\t\t" << states[10] << "\t\t\t=\t" << cases[10] << endl;
        cout << "\t\t" << states[11] << "\t\t=\t" << cases[11] << endl;
        cout << "\t\t" << states[12] << "\t\t=\t" << cases[12] << endl;
        cout << "\t\t" << states[13] << "\t\t\t=\t" << cases[13] << endl;
        cout << "\t\t" << states[14] << "\t\t\t=\t" << cases[14] << endl;
        cout << "------------------------------------------------------------------------" << "\n";

        cout << "TOTAL CASES for today is: " << Total_cases << " cases. " << endl << endl;
        cout << "RED ZONE>2500 , YELLOW ZONE> 1000, GREEN ZONE<=100" << endl << endl;

        for (int i = 1; i <= 14; i++)
        {
            cout << states[i] << " : " << category[i]<<endl;
        }
    }
    else if (menu_number == 2)
    {

        int recovery[15];

        for (int i = 1; i <= 14; i++)
        {
            cout << endl << "Enter number of RECOVERY in state" << i << ": ";
            cin >> recovery[i];
            Total_recovery += recovery[i];
        }
        cout << endl << endl;
        cout << "------------------------------------------------------------------------" << "\n";
        cout << "                         RECOVERY CASES BY COUNTRY                      " << endl;
        cout << "------------------------------------------------------------------------" << "\n";
        cout << "\t\t" << states[1] << "\t\t=\t" << recovery[1] << endl;
        cout << "\t\t" << states[2] << "\t\t\t=\t" << recovery[2] << endl;
        cout << "\t\t" << states[3] << "\t\t\t=\t" << recovery[3] << endl;
        cout << "\t\t" << states[4] << "\t\t\t=\t" << recovery[5] << endl;
        cout << "\t\t" << states[6] << "\t\t\t=\t" << recovery[6] << endl;
        cout << "\t\t" << states[7] << "\t\t=\t" << recovery[7] << endl;
        cout << "\t\t" << states[8] << "\t\t\t=\t" << recovery[8] << endl;
        cout << "\t\t" << states[9] << "\t\t=\t" << recovery[9] << endl;
        cout << "\t\t" << states[10] << "\t\t\t=\t" << recovery[10] << endl;
        cout << "\t\t" << states[11] << "\t\t=\t" << recovery[11] << endl;
        cout << "\t\t" << states[12] << "\t\t=\t" << recovery[12] << endl;
        cout << "\t\t" << states[13] << "\t\t\t=\t" << recovery[13] << endl;
        cout << "\t\t" << states[14] << "\t\t\t=\t" << recovery[14] << endl;
        cout << "------------------------------------------------------------------------" << "\n";

        cout << endl << "TOTAL RECOVERY for today is: " << Total_recovery << " cases " << endl << endl;
    }

    else if (menu_number == 3)
    {

        int died[15];
        string states[15];

        for (int i = 1; i <= 14; i++)
        {
            cout << "Enter number of DEATH in state" << i << ": ";
            cin >> died[i];
            Total_died += died[i];
        }
        cout << endl << endl;
        cout << "------------------------------------------------------------------------" << "\n";
        cout << "                          DEATH CASES BY COUNTRY                         " << endl;
        cout << "------------------------------------------------------------------------" << "\n";
        cout << "\t\t" << states[1] << "\t\t=\t" << died[1] << endl;
        cout << "\t\t" << states[2] << "\t\t\t=\t" << died[2] << endl;
        cout << "\t\t" << states[3] << "\t\t\t=\t" << died[3] << endl;
        cout << "\t\t" << states[4] << "\t\t\t=\t" << died[4] << endl;
        cout << "\t\t" << states[5] << "\t\t=\t" << died[5] << endl;
        cout << "\t\t" << states[6] << "\t\t\t=\t" << died[6] << endl;
        cout << "\t\t" << states[7] << "\t\t=\t" << died[7] << endl;
        cout << "\t\t" << states[8] << "\t\t\t=\t" << died[8] << endl;
        cout << "\t\t" << states[9] << "\t\t=\t" << died[9] << endl;
        cout << "\t\t" << states[10] << "\t\t\t=\t" << died[10] << endl;
        cout << "\t\t" << states[11] << "\t\t=\t" << died[11] << endl;
        cout << "\t\t" << states[12] << "\t\t=\t" << died[12] << endl;
        cout << "\t\t" << states[13] << "\t\t\t=\t" << died[13] << endl;
        cout << "\t\t" << states[14] << "\t\t\t=\t" << died[14] << endl;

        cout << "------------------------------------------------------------------------" << "\n";

        cout << endl << "TOTAL DEATH for today is: " << Total_died << " cases " << endl << endl;

    }
    else
    {
        cout << "INVALID MENU" << endl;
    }
}