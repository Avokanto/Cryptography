/* CODE ORGANIZER TAKES CODE INPUT AND TURNS IT INTO OTHER CODE, USED HERE TO SWITCH THE CONTENTS OF IF AND RETURNS FOR THE MANY CASES. 
e.x. input: if(om == 'a') return ".ππ.'-π"; output : if(om == ".ππ.'-π") return 'a';
PASTE ALL THE IF CASES FROM THE ALIEN_ALPHABET_GENERATOR TO SAVE TIME. DONT PASTE A LOT OF IF CASES,
THERE HAPPENS A GLITCH WHEN PASTING IN TERMINAL
(You can't imagine the pain of making this work)
*/
#include <iostream>
#include <string>
using namespace std;


void rearange(string &s){
    string alien, letter;
    int letter_pos=0;
    for (unsigned int i=0; i<s.size(); ++i){
        if (s[i] == '\''){
            letter_pos = i+1;
            letter = s.substr(i,3);
            break;
        }
    }
    for (unsigned int i=0; i<s.size(); ++i){
        if (s[i] == '\"'){
            for (unsigned j=i+1; j<s.size(); ++j){
                if(s[j] == '\"'){
                    alien = s.substr(i,(j-i)+1);
                    s.replace(i,(j-i)+1,letter);       //NOTE due to what is probably character complications i used a 'j' index as well. It works without this technique but results can be unpleasant.
                    break;
                }
            }
            break;
        }
    }
    s.replace(letter_pos-1, 3, alien);
    // If you want the results like in the top comment just delete from here:
    for (unsigned int i=0; i<s.size(); ++i)
    {
        if (s[i] == '='){
            s.replace(i-1, 3, ",");
            break;
        }
    }
    for (unsigned int i=0; i<s.size(); ++i){
        if (s[i] == '('){
            s.insert(i+1, "FCC(");
            break;
        }
    }
    for (unsigned int i=0; i<s.size(); ++i){
        if (s[i] == ')'){
            s.insert(i, ")");
            break;
        }
    }                                   // To here.
}

int main(){
    string s[71];
    for (int i=0; i<71; ++i){
        getline(cin, s[i]);
    }
    for (int i=0; i<71; ++i)
        rearange(s[i]);
    for (int i=0; i<5; ++i) cout << endl;
    
    for (int i=0; i<71; ++i)
        cout << s[i] << endl;
}
