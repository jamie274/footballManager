#include <iostream>
#include <vector>
using namespace std;

void roundOf16();
void quaterFinals();
void semiFinals();
void final();

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

    }
};

string Team::teamName;
vector<string> Team::teamsRemaining;

void roundOf16() {
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

int main() {
    Team t;
    t.selectTeam();

    //cout << Team::teamName << endl;
    /*
    for (string team : Team::teamsRemaining) {
        cout << team << endl;
    }
    */
}

