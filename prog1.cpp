#include <iostream> // Lab 3 Part 1 Craps by Michael Rijlaarsdam
#include <cstdlib>
using namespace std;

int die(){ //random number 
	int ret=rand() % 6 +1;
	return ret;
}
int roll(){ // dont see how to return both randoms along with their sum so this will do nothing for now
	return 0;
}
void playGame() {
	int d1 = die();
	int d2 = die();
	int sum = d1 +d2;
	int point = 0;

	cout << "Player rolled "<<d1<<" + "<<d2<<" = "<<sum<< "\n";
	
	switch (sum) {//all first round possibilities
	
		case 7:
		case 11: 
			cout << "Player Wins!!\n"; 
			return;
		case 2:
		case 3:
		case 12:
			cout << "Player Loses\n";
			return;
		case 4:
		case 5:
		case 6:
		case 8:
		case 9:
		case 10:
			point = sum;
			cout << "Point is "<< point<<"\n";
			break;
		default: 
			cout<<"I have no idea what went wrong so from here on out it's every (wo)man for themself. \n";
			break;
	}
	
	while(true){ // break will get us free
		d1 = die();
		d2 = die();
		sum = d1 +d2;

		cout << "Player rolled "<<d1<<" + "<<d2<<" = "<<sum<< "\n";

		if(7 == sum){
			cout << "Player Loses\n";
			break;
		} else if (sum == point){
			cout << "Player Wins!!\n"; 
			break;
		}
	}
	
	
}


int main() {
  char ans;
  bool done = false;
  while ( ! done ) {
         playGame();   // I will WRITE THIS FUNCTION
         cout << " Play again (y/n) ? ";
         cin >> ans;
         if ( ans == 'y' || ans == 'Y') done = false;
             else done = true;
  }
  return 0;
}

