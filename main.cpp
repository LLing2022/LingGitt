//Preparetion_for_final   Name:Lingfang He   Date:0426  ID:2212819
#include <iostream>
#include <vector>
using namespace std;
const int maxnum = 20;
struct Player{
    string name[50];
    string tname[50];
    int age;
    double weight;
    double height;
}P1;
vector<Player> playerList(0); // or just : playerList;
void addPlayers();
void displayPlayer();
int main() {
    char ans;
    do {
        cout << "++The Player info manage system++" << endl;
        cout << "Enter 1 to add a player\n"
             << "Enter 2 to display the player list\n"
             << "Enter 0 to exit the application\n"
             << "Enter your choice: ";
        cin >> ans;
        cin.ignore();
        switch (ans) {
            case '1':{
                addPlayers();
            }break;
            case '2':{
                displayPlayer();
            }break;
            case '0':{
                cout << "++Bye-bye++" << endl;
            }break;
            default: cout << "++Enter 1, 2 to use the app or 0 to quit.++" << endl;
        }
    } while (ans != '0');
    return 0;
}
void addPlayers(){
    if (playerList.size() < maxnum){
        cout << "Enter the player name:";
        getline(cin, P1.name[50]);
        cout << "Enter the player team name: ";
        getline(cin, P1.tname[50]);
        cout << "Enter the player age: ";
        cin >> P1.age;
        cin.ignore();
        cout << "Enter the player weight: ";
        cin >> P1.weight;
        cin.ignore();
        cout << "Enter the player height: ";
        cin >> P1.height;
        cin.ignore();
        playerList.push_back(P1);
    }
    else{
        cout << "The player list is full!!!" << endl;
    }
}
void displayPlayer(){
    cout << "++Here are those players++\n";
    for (int i = 0; i < playerList.size(); ++i) {
        cout << "#Player name is: " << playerList[i].name << "\t"
             << "#Player team name is: " << playerList[i].tname << "\t"
             << "#Player age is: " << playerList[i].age << "\t"
             << "#Player weight is: " << playerList[i].weight << "KG"<< "\t"
             << "#Player height is: " << playerList[i].height << "cm"
             << endl;
    }
}
//output
/*
 ++The Player info manage system++
Enter 1 to add a player
Enter 2 to display the player list
Enter 3 to exit the application
Enter your choice: 1
Enter the player name:mike
Enter the player team name: Nike
Enter the player age: 24
Enter the player weight: 67
Enter the player height: 189
Enter the player name:Jack
Enter the player team name: lululemon
Enter the player age: 25
Enter the player weight: 65
Enter the player height: 178
++The Player info manage system++
Enter 1 to add a player
Enter 2 to display the player list
Enter 3 to exit the application
Enter your choice: 2
++Here are those players++
#Player name is: mike	#Player team name is: Nike	#Player age is: 24	#Player weight is: 67KG	#Player height is: 189cm
#Player name is: Jack	#Player team name is: lululemon	#Player age is: 25	#Player weight is: 65KG	#Player height is: 178cm
++The Player info manage system++
Enter 1 to add a player
Enter 2 to display the player list
Enter 3 to exit the application
Enter your choice: 3
++Bye-bye++

Process finished with exit code 0

 */