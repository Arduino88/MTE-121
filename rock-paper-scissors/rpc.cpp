#include <iostream>
#include <cctype>
#include <string>

using namespace std;
int main() {
    string ch1,ch2;
    cout << "Player 1 choice: ";
    cin >> ch1;
    if (ch1 == "Rock") { ch1 = "rock"; }
    if (ch1 == "Paper") { ch1 = "paper"; }
    if (ch1 == "Scissors") { ch1 = "scissors"; }
    if (ch1!= "rock" && ch1!= "paper" && ch1!= "scissors")
    {
        cout << "Invalid choice. Try again.";
        return  0;
    }
    cout << "Player 2 choice: ";
    cin >> ch2;
    if (ch2 == "Rock") { ch2 = "rock"; }
    if (ch2 == "Paper") { ch2 = "paper"; }
    if (ch2 == "Scissors") { ch2 = "scissors"; }
    if (ch2!= "rock" && ch2!= "paper" && ch2!= "scissors")
    {
        cout << "Invalid choice. Try again.";
        return  0;
    }

    if(ch1 == "rock")
    {
        if(ch2 == "paper")
        {
            cout << "p2 wins";
        } 
        else if (ch2 == "scissors") 
        {
            cout << "p1 wins";
        }
        else 
        {
            cout << "draw";
        }
    }
    else if (ch1 == "paper")
    {
        if (ch2 == "rock")
        {
            cout << "p1 wins";
        }
        else if (ch2 == "scissors")
        {
            cout << "p2 wins";
        }
        else
        {
            cout << "draw";
        }
    }
    else // scissors
    {
        if (ch2 == "rock")
        {
            cout << "p2 wins";
        }
        else if (ch2 == "paper")
        {
            cout << "p1 wins";
        }
        else
        {
            cout << "draw";
        }
    }
}