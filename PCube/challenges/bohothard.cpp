/*

Bohot Hard Bohot Hard
There is a website for playing chess online with other people, whenever you want to play a game, you can either create new game and wait for an opponent to join, or you can join already created game.

Each player has a number representing his rating, after each game the winner will take some rating points from the loser, unless the players agreed to make the game unrated before the start

Whenever you create a game you have first to choose some parameters for this game:

- minimum and maximum rating for the opponent that you would like to play with
- whether this game will be rated or not
- the total thinking time allowed for each player
- whether you would like to play with white, black or let the server choose a random color random

after choosing those parameters and creating the game you will wait for an opponent to join your game, after someone joins the game will start.

if you would like to join a game you can see the list of already created games that are still waiting for an opponent and you can see the parameters for each game after that you can select one of them to join.

Sahil is one of the developers of this website and today he thought that it's good idea to add new feature to it, the feature is that whenever a player creates a new game before asking the player to wait for an opponent the website will try to automatically find suitable opponent among those who already have created a game and still waiting for opponent, the website should choose the opponent such that all parameters specified by both players must be satisfied, if more than one suitable match exists then the player who just created a game will be matched with the suitable player who created a game first, if there's no match at all then the website will ask the player to wait for an opponent.

rules applied to check whether two players can be matched:

- rating of each player is inside the range of rating that the other player selected
- both players selected the game to be rated, or both of them selected the game to be unrated
- total thinking time chosen by both players are equal
- both players chose random color, or one of them chose white while the other chose black

Now, given a list of players who created a new game, in the same order of creating, for each player find out if this player should be matched with another player who is at that time waiting for an opponent , if there are more than one possible match, then choose the one who created a game first (thus has waited more), if there is no match then ask the player to wait.

* Note that once a player is matched with another one then both players can no longer be matched with other players. also in this problem no player will join a game manually, all of them will create new game.

Constraints
1 ≤ T ≤ 100
1 ≤ N ≤ 100
1 ≤ Ri ≤ 1,000,000
1 ≤ Mini ≤ Maxi ≤ 1,000,000
Colori can only be "white", "black" or "random"
isRatedi can only be "rated" or "unrated"
Timei can only be 5, 15, 30, 60

Input
First line of input contains a single integer T denoting the number of test-cases.

First line of each test-case contains a single integer N denoting the number of players who will create a new game

each of the following N lines contains a description of a player, Ri Mini Maxi Timei isRatedi Colori

Ri is rating of player i, Mini Maxi is minimum and maximum rating of the opponent that this player would like to play with, Timei is the total thinking time for each player it can be only one of the following 5 15 30 60, isRatedi can be one of the values "rated" or "unrated", Colori can be one of the following "white", "black" or "random"

Output
For each test-case output N lines, i-th line should be the number of the player that player i is matched when he created a new game, or word "wait" if there's no match. players are numbered from 1 to N in same order as input

Explanation
Example case 1.

player 1 has to wait because there are no other players yet
player 2 has to wait because he can't play with player 1 because player 2 has rating 11 while player 1 want opponent rating to be 10 at max
player 3 can be with player 1 or player 2, so he will play with player 1 because he created a game first
player 4 can be with player 1 or player 2, but player 1 already entered a game with player 3 so he is unavailable now so player 4 will play with player 2
player 5 has to wait because there are no other players
player 6 has to wait because he can't play with player 5 because player 6 wants colored to be selected at random, while player 5 wants to take white
player 7 will play with player 5

SAMPLE INPUT 
1
7
5 1 10 15 rated random
11 1 20 15 rated random
10 3 30 15 rated random
2 5 15 15 rated random
30 20 60 60 unrated white
50 20 40 60 unrated random
50 20 40 60 unrated black
SAMPLE OUTPUT 
wait
wait
1
2
wait
wait
5

*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,i,n,j;
    cin>>t;
    while(t--){
        cin>>n;
        int rat[100],mini[100],maxi[100],timi[100];
        string rated[100],colori[100];
        for(i=0;i<n;i++)
            cin>>rat[i]>>mini[i]>>maxi[i]>>timi[i]>>rated[i]>>colori[i];
        for(i=0;i<n;i++)
        {
            for(j=0;j<i;j++){
                if(rat[j]>=mini[i]&&rat[j]<=maxi[i]&&rat[i]>=mini[j]&&rat[i]<=maxi[j])
                 {
                     if(timi[j]==timi[i]&&rated[i]==rated[j]){
                         if(colori[i]=="random"){
                             if(colori[j]=="random"){
                                 rat[i]=-1;
                                 rat[j]=-1;
                                 cout<<j+1<<endl;
                                 break;
                             }
                         }
                         if(colori[i]=="black"){
                             if(colori[j]=="white"){
                                 rat[i]=-1;
                                 rat[j]=-1;
                                 cout<<j+1<<endl;
                                 break;
                             }
                         }
                         if(colori[i]=="white"){
                             if(colori[j]=="black"){
                                 rat[i]=-1;
                                 rat[j]=-1;
                                 cout<<j+1<<endl;
                                 break;
                             }
                         }
                     }
                 }   
            }
            if(j==i){
                cout<<"wait"<<endl;
            }
        }
    }
    return 0;
}