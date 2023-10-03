//CPP 
#include <iostream> 
#include <sstream>
#include <string>

using namespace std;
int main() 
{ 
    string s;
    getline(cin, s);
    int year, month, date;
    stringstream ymd(s);
    string yearStr, monthStr, dateStr;
    getline(ymd, yearStr, '-');
    getline(ymd, monthStr, '-');
    getline(ymd, dateStr);
    stringstream(yearStr) >> year;
    stringstream(monthStr) >> month;
    stringstream(dateStr) >> date;
    if ( monthStr.length() == 2 && dateStr.length() == 2){
        if(month >=1 && month <=12 && date >=1 && date <=31){
            cout << year << " " << month << " " << date;
        }else{
            cout << "INCORRECT" <<endl;
        }
    }else{
        cout << "INCORRECT" <<endl;
    }
    
}