#include <iostream>
using namespace std;

struct Player
{
	weak_ptr<Player> companion;
	~Player() { cout << "~Player\n"; }
};

int main()
{
	std::shared_ptr<Player> jasmine = make_shared<Player>();
	std::shared_ptr<Player> albert = make_shared<Player>();

	jasmine->companion = albert; 
	albert->companion = jasmine; 

	return 0;
}