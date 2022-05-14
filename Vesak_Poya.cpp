#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <ctime> 

using namespace std;

void wishme(){
    time_t now = time(0);
    tm *time = localtime(&now);

    if (time-> tm_hour < 12){
        cout<< "Good Morning Sir !!!"<<endl;
        string phrase = "Good Morning Sir";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }

    else if (time-> tm_hour >= 12 && time->tm_hour <= 16){
        cout<< "Good Afternoon Sir"<<endl;
        string phrase = "Good Afternoon Sir";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }
    
}

void datetime(){
    time_t now = time(0);
    char *dt = ctime(&now);
    cout<<"The date and time is "<<endl
        << dt <<endl;
}

int main()
{
    system("cls");

    cout<<"\t\t\t<============================= W   E   L   C   O   M   E  ========================>"<<endl;
    cout<<"\t\t\t<============================= I'M YOUR VIRTUAL ASSISTANT ========================>"<<endl;
    cout<<"\t\t\t<============================= M Y  N A M E  I S  L A P Z ========================>"<<endl<<endl;
    char password[20]; 
    char ch[100]; 

    do
    {
        cout<<"===================================================="<<endl;
        cout<<"| ENTER YOUR PASSWORD |"<<endl;
        cout<<"===================================================="<<endl<<endl;
        string phrase = "enter your password";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);

        gets(password);

        STARTUPINFO startInfo = {0};
        PROCESS_INFORMATION processInfo = {0};

        if(strcmp(password, "NSBM")==0){
                cout<<"\n<====================================================>\n\n";
            wishme();
            do{
                cout<<"\n<=====================================================>\n\n";
                cout<<endl<<" Today is a Vesak Poya Day...!!!..."<<endl<<endl;

                string phrase = " Do you have anything else for me to know ??? ";
                string command = "espeak \"" + phrase + "\"";
                const char *charCommand = command.c_str();
                system(charCommand);

                cout<<"Do you have anything else for me to know ??? ===> ";
                gets(ch);
                cout<<endl;
                cout<<"Here is your result ??? ===> ";

                if(strcmp(ch, "Hello") == 0 ){
                    cout<<"Hello Sir....."<<endl;
                    string phrase = "Hello Sir,";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }
                else if(strcmp(ch, "How are you") == 0) {
                    cout<<"I'm Good  Sir, Today is a Vesak Poya Day Sir.."<<endl;
                    string phrase = "I'm Good  Sir,Do you have anything else for me to know ??? ";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }
                 else if(strcmp(ch, "bye") == 0){
                    cout<<"Good Bye Sir, Have a Happy Vesak Poya Day!!!!"<<endl;
                    string phrase = "Good Bye Sir, Have a Happy Vesak Poya Day";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    exit(0);
                }

                else if(strcmp(ch, "date") == 0){
                    datetime();
                }

                 else if(strcmp(ch, "What is Vesak Poya day?") == 0){
                    cout<<"Let's go to wait'....."<<endl;
                    string phrase = "Let's go to wait";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://youtu.be/XJWVf0yXWnU");
                }

                else if(strcmp(ch, "What is the significance of the Vesak Poya day?") == 0){
                    cout<<"Let's go to wait'....."<<endl;
                    string phrase = "Let's go to wait";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://youtu.be/U1pQwj-CNZ8");
                }
                
                else{
                    cout<<"Sorry could not understand your query please try again !!!"<<endl;
                    string phrase = "Sorry could not understand your query please try again";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }


            }while(1);
        }
        else
            {
                system("cls");

                cout<<"\t\t\t<============================= W   E   L   C   O   M   E  ========================>"<<endl;
                cout<<"\t\t\t<============================= I'M YOUR VIRTUAL ASSISTANT ========================>"<<endl;
                cout<<"\t\t\t<============================= M Y  N A M E  I S  L A P Z ========================>"<<endl<<endl;
              
                    cout << "========" << endl;
                    cout << "X Incorrect Password X" << endl;
                    cout << "========" << endl
                         << endl;
                    string phrase = "Incorrect Password, Please enter correct password";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }
    } while (1);
    

    return 0;
}
