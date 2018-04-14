#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Enemy {
public:
int attackPower;
int Min;
int Max;
    void rollAttackPower(int Min, int Max){
         srand(time(0));
    attackPower = rand() % (Max + 1 - Min) + Min;}
};
    class Skunk: public Enemy{
public:
    void attack(){
    cout << "a skunk! \n \nThe skunk's attack power is " << attackPower << "! \n \n" << endl;
    }

    };
    class MeanPuppy: public Enemy {
public:
    void attack(){
    cout << "a mean puppy! \n \nThe mean puppy's attack power is " << attackPower << "! \n \n" << endl;
    }


    };
    class YourMother: public Enemy {
public:
    void attack(){
    cout << "your Mother! \n \nYour Mother's attack power is " << attackPower << "! \n \n" << endl;}

    };

class You {
public:
    int attackPower;
    void rollAttackPower (){
        srand(time(0));
    attackPower = 1 + (rand() % 100);
    cout << "Roll for attack power. You rolled " << attackPower << " attack power! \n \n " << endl;}
    };




int main(){

    Skunk n;
    MeanPuppy m;
    YourMother y;
    You u;

    Enemy *e1 = &n;
    Enemy *e2 = &m;
    Enemy *e3 = &y;

    e1->rollAttackPower(30,42);
    e2->rollAttackPower(45,60);
    e3->rollAttackPower(77,88);
    u.rollAttackPower();
int c;
int Min = 1;
int Max = 3;
   c = rand() % (Max + 1 - Min) + Min;
   cout << "Enemy rolls for monster. Enemy rolled a " << c << " and conjures ";

   switch (c) {

   case 1: // SKUNK //
        {
     n.attack();
  if (u.attackPower > n.attackPower) {
        cout << "You defeated the skunk! Nice! \n \n" << endl;
int Min = 2;
int Max = 3;
   c = rand() % (Max + 1 - Min) + Min;
   cout << "Enemy rolls for monster. Enemy rolled a " << c << " and conjures ";
   if (c = 2){
    m.attack();
    if (u.attackPower > m.attackPower) {
        cout << "You defeated the mean puppy! Nice! \n \n" << endl;
        c = 3;
         cout << "Enemy rolls for monster. Enemy rolled a " << c << " and conjures ";
         y.attack();
         if (u.attackPower > y.attackPower) {
            cout << "You defeated all enemies, INCLUDING your Mother! Congratulations, you won the game!" << endl;
            return 0;
         }
         else {
            cout << "Wow, you can't even beat your Mother? You lose. \n \n" << endl;
            return 0;
         }
   }
   else {
    cout << "Wow, you can't even beat a mean puppy? You lose. \n \n" << endl;
   }
   } // ends if (c = 2) //

   }
       else {
        cout << "Wow, you can't even beat a skunk? You lose. \n \n" << endl;
        return 0;
        }
        }
   break;
    case 2: // MEAN PUPPY //
        {
        m.attack();
     if (u.attackPower > m.attackPower) {
    int one = 1;
     int two = 2;
   c = rand() % 2 ? one : two;

   cout << "Enemy rolls for monster. Enemy rolled a " << c << " and conjures ";
   if (c = 1){
    n.attack();
    if (u.attackPower > n.attackPower) {
        cout << "You defeated the skunk! Nice! \n \n" << endl;
        c = 3;
         cout << "Enemy rolls for monster. Enemy rolled a " << c << " and conjures ";
         y.attack();
         if (u.attackPower > y.attackPower) {
            cout << "You defeated all enemies, INCLUDING your Mother! Congratulations, you won the game!" << endl;
            return 0;
         }
         else {
            cout << "Wow, you can't even beat your Mother? You lose. \n \n" << endl;
            return 0;
         }
   }
   else {
    cout << "Wow, you can't even beat a skunk? You lose. \n \n" << endl;
   }
   } // ends if (c = 2) //

   }
       else {
        cout << "Wow, you can't even beat a mean puppy? You lose. \n \n" << endl;
        return 0;
        }
    }
    break;
   case 3: // YOUR MOTHER //
       {
           y.attack();
     if (u.attackPower > y.attackPower) {
     cout << "You defeated your Mother! Nice! \n \n" << endl;
int Min = 1;
int Max = 2;
   c = rand() % (Max + 1 - Min) + Min;
   cout << "Enemy rolls for monster. Enemy rolled a " << c << " and conjures ";
   if (c = 1){
    n.attack();
    if (u.attackPower > n.attackPower) {
        cout << "You defeated the skunk! Nice! \n \n" << endl;
        c = 2;
         cout << "Enemy rolls for monster. Enemy rolled a " << c << " and conjures ";
         m.attack();
         if (u.attackPower > m.attackPower) {
            cout << "You defeated all enemies, INCLUDING a mean puppy! Congratulations, you won the game!" << endl;
            return 0;
         }
         else {
            cout << "Wow, you can't even beat a mean puppy? You lose. \n \n" << endl;
            return 0;
         }
   }
   else {
    cout << "Wow, you can't even beat a skunk? You lose. \n \n" << endl;
   }
   }

   }
       else {
        cout << "Wow, you can't even beat your Mother? You lose. \n \n" << endl;
        return 0;
        }}
         break;
        }
    }
