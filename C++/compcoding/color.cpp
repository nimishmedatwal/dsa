#include <iostream>
#include <string>
using namespace std;

string gameWinner(string colors) {
    string players[2] = {"Wendy", "Bob"};
    int current_player = 0;  

    while (true) {
        if ((current_player == 0 && colors.find("www") != string::npos) || 
            (current_player == 1 && colors.find("bbb") != string::npos)) {
            int index = -1;
            if (current_player == 0) {
                // Wendy's turn
                index = colors.find("www");
            } else {
                // Bob's turn
                index = colors.find("bbb");
            }
            colors = colors.substr(0, index) + colors.substr(index+3);  
            int other_player = 1 - current_player;
            if ((other_player == 0 && colors.find("www") != string::npos) || 
                (other_player == 1 && colors.find("bbb") != string::npos)) {
                current_player = other_player;
            } else {
                return players[current_player];
            }
        } else {
            return players[1 - current_player];
        }
    }
}

int main() {
    string colors = "wwwbbbbwww";
    string winner = gameWinner(colors);
    cout << "The winner is " << winner << endl;
    return 0;
}
