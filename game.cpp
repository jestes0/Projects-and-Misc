#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void numrounds(int &rounds)

{

	cout<<"Enter in the number of rounds."<<endl;
	cin>>rounds;
	cout<<"The number of Rounds played will be: "<<rounds<<endl;

	return;
}

int dieroll(void)
//Roll of A and B and calculates the total score.
{
        srand(time(0));
	int roll, n, score=0, total;

	while (n !=7 && n !=11)
	{
	      	int a, b;
	       	a=(rand() % 6)+1;
	       	b=(rand() % 6)+1;
		roll=a+b;
		n=roll;
		cout<< "The dice total was "<<roll<<endl;

		score= roll+ score;

		cout<<"Your current score is "<<score<<endl;
		cin.get();

	}

	return score;
}

int main()
{

	int rounds;
	numrounds(rounds);

	int round=1;

	do
	{

		int rounds,total, score, score1, score2;
		cout<<"Player 1, it is your Turn!"<<endl;
		cin.get();
		total = dieroll();

		cout<<"Player 1, your Turn has ended"<<endl;
		cout<<"Your score was "<<total<<endl;
		score1=total;
		cout<<"Press Enter to Continue\n";
		cin.get();

		cout<<"Player 2, it is your Turn"<<endl;
		cin.get();
		total = dieroll();

		cout<<"Player 2, your Turn has ended"<<endl;
		cout<<"Your score was "<<total<<endl;
	        score2=total;


                cout<<"Round "<<round<< " Is Over!"<<endl;
		round++;

		if (score1 > score2)
		{
			cout<<"Player 1 Wins!"<<endl;
		}
		else if (score2 < score1)
		{
			cout<<"Player 2 Wins!"<<endl;
		}
		else if (score1 == score2)
		{
			cout<<"Its a Draw!"<<endl;
		}
		else
		{
		}
	}while (round <= rounds);

	return 0;

}
