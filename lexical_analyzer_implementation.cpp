#include <iostream>
#include <unordered_set>
#include <cctype>
using namespace std;

class lexer {
private:

    string keyword[4] = {"int","char","flaot","string"};
    char operators[4] = { '+','-','/','*' };
    char punctation[1] = { ';' };
    string identifier[1] = { "cout" };
    char local_input[100];
    unsigned short keyword_counter = 0;
    int j = 0;
    string temp ;
    int local_size=0;
    bool check =false;
public:
    lexer(const char* input,int size)
    {
        for (int i = 0; i < size; i++)
        {
            local_input[i] = input[i];
            local_size = size;

           
        }for (int j = 0; j < local_size; j++)
        {
            cout << local_input[j];
        }
        cout << endl;
        checkingkeyword();
    };

    bool isKeyword(string str) {
        for (int i = 0; i < local_size; i++)
        {
            cout<<str.length() - 1;
            
            if (str == keyword[i])
            {

                return true;
            }
            else
            {
                return false;
            }
       }
    }

    void checkingkeyword()
    {
       
        for (int i = 0; i < local_size; i++)
        {
            temp += local_input[i];
            if (local_input[i] == ' ')
            {

                temp[i] = '\0';
                bool check = isKeyword(temp);
                if (check)
                {
                    cout << temp.length() <<" is a keyword: " << endl;
                }
                else
                {
                    cout << temp.length() << " is not a keyword: " << endl;
                }
               
            }
        
        }
       /* 
        local_input.erase(std::remove(local_input.begin(), local_input.end(), ' '), local_input.end());

            if (isdigit(c))  {
                cout << "is a number";
                keyword_counter++;
            }
            else {
                cout << c << " is not a number." << std::endl;
            }*/
          
    }
};

void main()
{
   
    char str[100] = "int a=3; int b=4; cout<<a+b; char char";
    lexer l(str,33);

}
