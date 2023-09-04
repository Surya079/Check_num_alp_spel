#include<iostream>
#include<string.h>
using namespace std;
class check_string
{
    char input[100];
public:
    getinput()
    {
        cout<<"Enter the string :";
        gets(input);
    }
    check_str()
    {
        int alpha=0,digit=0,spec=0;
        for(int i=0;i<strlen(input);i++)
        {
            if(isalpha(input[i]))
              alpha++;
            else if(isdigit(input[i]))
              digit++;
            else if(isspace(input[i]))
              spec++;
        }
        cout<<"the alphabet is : "<<alpha<<endl;
        cout<<"the digit is: "<<digit<<endl;
        cout<<"the special characters is: "<<spec<<endl;
    }
};
int main()
{

    check_string c1;
    c1.getinput();
    c1.check_str();
}
