#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string letterPira {};
    
    cout << "Enter your wanted string: ";
    getline(cin, letterPira);
    
    string temp {};
    
    for(size_t i = 0; i < letterPira.length(); i++){
        cout << letterPira.at(i) << endl;
        
        int j {0};
        if(j !< letterPira.length()){
            
        }
        
    }
    
    cout << endl;
    return 0;
}
