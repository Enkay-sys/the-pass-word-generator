// The password generator by Enkay 
#include <iostream> 
#include <vector> 
#include <cstdlib>
#include <ctime>
using namespace std;
int main (){
    srand(time(0));
    vector<char> password;
    char passwordChar[95];
    int passwordLength;
    int j = 0;

    for (int i = 32; i < 127; i++){
        passwordChar[j] = static_cast<char>(i);
        j++;
    }

    
    passwordLength = rand() % 10 + 8; // Random password length between 8 and 17

    for (int i = 0; i < passwordLength; i++){
        
        char input = passwordChar[rand() % 95];
        password.push_back(input);
    }

    cout << "Your password is: ";

    for (int i = 0; i < password.size(); i++){
        cout << password[i];
    }
    cout << endl;
    return 0;
}
