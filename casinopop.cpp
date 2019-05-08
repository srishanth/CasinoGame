#include <iostream>
#include <string> // Needed to use strings
#include <cstdlib> // Needed to use random numbers
#include <ctime>
using namespace std;

void drawLine(int n, char symbol);
void drawLine1(int n, char symbol);
void rules1();
void rules2();
void roll3();
void ranguess();
void name();
void eend();
   string playerName;
    int amount = 0,a,b,c; // hold player's balance amount
    int bettingAmount;
    int guess;
    int dice; // hold computer generated number
    char choice,gam;
    int selc;

int main()
{   srand(time(0)); // "Seed" the random generator
    name();
    cout << "\n\nEnter Your Name : ";
    getline(cin, playerName);
    cout << "\n\nEnter Deposit amount to play game : INR ";
    cin >> amount;
sel:cout<<"\n\n\t\tselc Game\n1. Random guess\n2. Roll of 3 \n";
    cin >> selc;
    if(selc >2 || selc < 1){
    name();
    cout<<"Invalid choice\n";
    goto sel;
    }
    if(selc == 1)
     ranguess();
    else
     roll3();
     name();
    cout<<"Do you want to change game(Y/N) : ";
    cin >> gam;
    if(gam =='Y' || gam == 'y'){
     goto sel;
     }
    cout<<"Thank You "<<playerName<<endl;
    return 0;
}
void name(){
     system("clear");
drawLine(206,'_');
    cout << "\n\n"<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tBalance: "<<amount<<"\n\t\t\t\t\t\t\t\t\t\t\tCASINO GAME\n\n\n\n";
    drawLine(206,'_');
}

void ranguess(){
do
    {
        system("clear");
        rules1();
        cout << "\n\nYour current balance is INR " << amount << "\n";

		// Get player's betting amount
        do
        {
            cout <<playerName<<", enter money to bet : INR ";
            cin >> bettingAmount;
            if(bettingAmount > amount)
                cout << "Your betting amount is more than your current balance\n"
                       <<"\nRe-enter data\n ";
        }while(bettingAmount > amount);

		// Get player's numbers
        do
        {
            cout << "Guess your number to bet between 1 to 10 :";
            cin >> guess;
            if(guess < 0 || guess > 10)
                cout << "Please check the number!! should be between 1 to 10\n"
                    <<"\nRe-enter data\n ";
        }while(guess <= 0 || guess > 10);

        dice = rand()%10 + 1; // Will hold the randomly generated integer between 1 and 10

        if(dice == guess)
        {
            cout << "\n\nGood Luck!! You won INR " << bettingAmount * 10;
            amount = amount + bettingAmount * 10;
        }
        else
        {
            cout << "Bad Luck this time !! You lost INR "<< bettingAmount <<"\n";
            amount = amount - bettingAmount;
        }

        cout << "\nThe winning number was : " << dice <<"\n";
        cout << "\n"<<playerName<<", You have INR " << amount << "\n";
        if(amount == 0)
        {
            cout << "You have no money to play ";
            eend();
        }
        cout << "\n\n-->Do you want to play again (y/n)? ";
        cin >> choice;
    }while(choice =='Y'|| choice=='y');
//    return 0;
}

void roll3(){
  srand(time(0));
  up:rules2();
  do
  {
      cout <<playerName<<", enter money to bet : INR ";
      cin >> bettingAmount;
      if(bettingAmount > amount)
          cout << "Your betting amount is more than your current balance\n"
                 <<"\nRe-enter data\n ";
  }while(bettingAmount > amount);

  int d = rand()%20+10;
  int j = 10000000;
  while(1){
   a = rand()%10+1;
   b = rand()%10+1;
   c = rand()%10+1;
  system("clear");
  for(int k = 0; k < 4; k++){
  for(int i = 0; i < j; i++);
  }
drawLine1(103,'_');
 cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t";
 cout<<"ROLL OF #3";
 cout<<"\n\n\n";
 drawLine1(103,'_');
  cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t_____________\n\n";
  cout<<"\t\t\t\t\t\t\t\t\t\t\t| "<<a<<" | "<<b<<" | "<<c<<" |"<<endl;
  cout<<"\t\t\t\t\t\t\t\t\t\t\t_____________\n\n\n\n\n";
  while(!d)
  goto nex;
  d--;
  for(int k =0; k < 4; k++){
  for(int i = 0; i < j; i++);
  }
  j+= 10000;
   }

  nex: if(a==b && b==c){
     cout << "\n\nGood Luck!! You won INR " << bettingAmount * 10;
     amount = amount + bettingAmount * 10;
   }
   else{
     cout << "Bad Luck this time !! You lost INR "<< bettingAmount <<"\n";
     amount = amount - bettingAmount;
   }
   if(amount == 0)
   {
       cout << "You have no money to play ";
       eend();
   }
   cout << "\n"<<playerName<<", You have INR " << amount << "\n";
   cout << "\n\n-->Do you want to play again (y/n)? ";
   cin >> choice;
if(choice =='Y'|| choice=='y')
 goto up;


}
void eend(){
  cout << "\n\n\n";
    drawLine(206,'=');
    cout << "\n\nThanks for playing game. Your balance amount is INR " << amount << "\n\n";
    drawLine(206,'=');
    exit(0);
    }
void drawLine1(int n, char symbol)
{
    for(int i=0; i<n; i++)
        cout << symbol<<" ";
    cout << "\n" ;
}
void drawLine(int n, char symbol)
{
    for(int i=0; i<n; i++)
        cout << symbol;
    cout << "\n" ;
}
void rules1()
{
    system("clear");
    cout << "\n\n";
    drawLine(206,'-');
    cout << "\t\tRULES OF THE GAME\n";
    drawLine(206,'-');
    cout << "\t1. Choose any number between 1 to 10\n";
    cout << "\t2. If you win you will get 10 times of money you bet\n";
    cout << "\t3. If you bet on wrong number you will lose your betting amount\n\n";
    drawLine(206,'-');
}
void rules2(){
  system("clear");
  cout << "\n\n";
  drawLine(206,'-');
  cout << "\t\tRULES OF THE GAME\n";
  drawLine(206,'-');
  cout << "\t1. If all three numbers are same you win\n";
  cout << "\t2. If you win you will get 10 times of money you bet\n";
  cout << "\t3. If all three are not same you will lose your betting amount\n\n";
  drawLine(206,'-');
}
