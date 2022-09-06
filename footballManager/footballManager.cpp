#include <iostream>
#include <vector>
#include <stdio.h>      
#include <stdlib.h>     
#include <time.h>
using namespace std;

void roundOf16();
void quaterFinals();
void semiFinals();
void final();
void remTeam();
string randTeam();
string winner();

class Team {
public:
    static string teamName;

    vector<string> allTeams{ "Manchester United", "Manchester City", "Chelsea", "Arsenal", "Spurs", "Liverpool",
    "Real Madrid", "FC Barcelona", "Athletico Madrid", "Bayern Munich", "Borussia Dortmund", "PSG", "Inter Milan", "AC Milan",
    "Juventus", "Porto" };

    static vector<string> teamsRemaining;

    void selectTeam() {
        int choice;

        cout << "        Welcome to Football Simulator" << endl << endl;
        cout << "    Select team: " << endl << endl;
        cout << "    Press 1 for Manchester United" << endl;
        cout << "    Press 2 for Manchester City" << endl;
        cout << "    Press 3 for Chelsea" << endl;
        cout << "    Press 4 for Arsenal" << endl;
        cout << "    Press 5 for Spurs" << endl;
        cout << "    Press 6 for Liverpool" << endl;
        cout << "    Press 7 for Real Madrid" << endl;
        cout << "    Press 8 for FC Barcelona" << endl;
        cout << "    Press 9 for Athletico Madrid" << endl;
        cout << "    Press 10 for Bayern Munich" << endl;
        cout << "    Press 11 for Borussia Dortmund" << endl;
        cout << "    Press 12 for PSG" << endl;
        cout << "    Press 13 for Inter Milan" << endl;
        cout << "    Press 14 for AC Milan" << endl;
        cout << "    Press 15 for Juventus" << endl;
        cout << "    Press 16 for Porto" << endl;

        m:
        cin >> choice;
        cout << endl;

        switch (choice) {
        case 1:
            teamName = "Manchester United";
            cout << "You have selected Manchester United as your team." << endl << endl;
            break;
        case 2:
            teamName = "Manchester City";
            cout << "You have selected Manchester City as your team." << endl << endl;;
            break;
        case 3:
            teamName = "Chelsea";
            cout << "You have selected Chelsea as your team." << endl << endl;;
            break;
        case 4:
            teamName = "Arsenal";
            cout << "You have selected Arsenal as your team." << endl << endl;;
            break;
        case 5:
            teamName = "Spurs";
            cout << "You have selected Spurs as your team." << endl << endl;;
            break;
        case 6:
            teamName = "Liverpool";
            cout << "You have selected Liverpool as your team." << endl << endl;;
            break;
        case 7:
            teamName = "Real Madrid";
            cout << "You have selected Real Madrid as your team." << endl << endl;;
            break;
        case 8:
            teamName = "FC Barcelona";
            cout << "You have selected FC Barcelona as your team." << endl << endl;;
            break;
        case 9:
            teamName = "Athletico Madrid";
            cout << "You have selected Athletico Madrid as your team." << endl << endl;;
            break;
        case 10:
            teamName = "Bayern Munich";
            cout << "You have selected Bayern Munich as your team." << endl << endl;;
            break;
        case 11:
            teamName = "Borussia Dortmund";
            cout << "You have selected Borussia Dortmund as your team." << endl << endl;;
            break;
        case 12:
            teamName = "PSG";
            cout << "You have selected PSG as your team." << endl << endl;;
            break;
        case 13:
            teamName = "Inter Milan";
            cout << "You have selected Inter Milan as your team." << endl << endl;;
            break;
        case 14:
            teamName = "AC Milan";
            cout << "You have selected AC Milan as your team." << endl << endl;;
            break;
        case 15:
            teamName = "Juventus";
            cout << "You have selected Juventus as your team." << endl << endl;;
            break;
        case 16:
            teamName = "Porto";
            cout << "You have selected Porto as your team." << endl << endl;;
            break;
        default:
            cout << "Invalid option. Please try again." << endl << endl;
            goto m;
        }

        for (auto team : allTeams) {
            if (team == teamName) {
            }
            else {
                teamsRemaining.push_back(team);
            }
        }

        roundOf16();
    }
};

string Team::teamName;
vector<string> Team::teamsRemaining;

void remTeam(string teamRem) {
    vector<string> temp;

    for (string team : Team::teamsRemaining) {
        if (team == teamRem) {
        }
        else {
            temp.push_back(team);
        }
    }
    Team::teamsRemaining = temp;
}

// random team is selected to assign to fixtures
string randTeam() {
    srand(time(NULL));
    int num = rand() % Team::teamsRemaining.size();
    string randTeam = Team::teamsRemaining[num];

    return randTeam;
}

// winner is selected from the match
string winner(string teamA, string teamB, int num) {
    vector<int> v{ 'w','l' };
    string winner;

    char result = v[num];

    if (result == 'w') {
        winner = teamA;
    }
    else if (result == 'l') {
        winner = teamB;
    }

    return winner;
}

void roundOf16() {
    vector<string> winners; // push back the winners, then do teamremaining = winners

    cout << "        ROUND OF 16" << endl << endl;

    // setting up matches
    string team1 = Team::teamName;
    string team2 = randTeam();
    remTeam(team2);

    string team3 = randTeam();
    remTeam(team3);
    string team4 = randTeam();
    remTeam(team4);

    string team5 = randTeam();
    remTeam(team5);
    string team6 = randTeam();
    remTeam(team6);

    string team7 = randTeam();
    remTeam(team7);
    string team8 = randTeam();
    remTeam(team8);

    string team9 = randTeam();
    remTeam(team9);
    string team10 = randTeam();
    remTeam(team10);

    string team11 = randTeam();
    remTeam(team11);
    string team12 = randTeam();
    remTeam(team12);

    string team13 = randTeam();
    remTeam(team13);
    string team14 = randTeam();
    remTeam(team14);

    string team15 = randTeam();
    remTeam(team15);
    string team16 = randTeam();
    remTeam(team16);
    
    cout << "    Upcoming fixtures: " << endl << endl;
    cout << "    " + team1 + " vs " + team2 << endl;
    cout << "    " + team3 + " vs " + team4 << endl;
    cout << "    " + team5 + " vs " + team6 << endl;
    cout << "    " + team7 + " vs " + team8 << endl;
    cout << "    " + team9 + " vs " + team10 << endl;
    cout << "    " + team11 + " vs " + team12 << endl;
    cout << "    " + team13 + " vs " + team14 << endl;
    cout << "    " + team15 + " vs " + team16 << endl;

    vector<int> v{ 'w','l' };
    srand(time(NULL));

    int num1 = rand() % v.size();
    int num2 = rand() % v.size();
    int num3 = rand() % v.size();
    int num4 = rand() % v.size();
    int num5 = rand() % v.size();
    int num6 = rand() % v.size();
    int num7 = rand() % v.size();
    int num8 = rand() % v.size();

    winners.push_back(winner(team1,team2,num1));
    winners.push_back(winner(team3, team4,num2));
    winners.push_back(winner(team5, team6,num3));
    winners.push_back(winner(team7, team8,num4));
    winners.push_back(winner(team9, team10,num5));
    winners.push_back(winner(team11, team12,num6));
    winners.push_back(winner(team13, team14,num7));
    winners.push_back(winner(team15, team16,num8));
    
    Team::teamsRemaining = winners;

    

    for (auto t : Team::teamsRemaining) {
        cout << t << endl;
    }
    

    

    /*
    team 1 = Team::teamName
    team 2 = random team from array, then delete team
    versusFunction(team1, team2)
    team 3 = random team from array, then delete team
    team 4 = random team from array, then delete team
    versusFunction(team3, team4)
    etc....

    veruses function notes:
    random score, returns winner, deletes loser from Team::teamsRemaining

    if your team loses, back to start of the game
    */
}
void quaterFinals() {

}
void semiFinals() {

}
void final() {

}

void result(string team1, string team2) {

}

int main() {
    
    Team t;
    t.selectTeam();
    
}

