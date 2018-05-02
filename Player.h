#include <iostream>
#include <string>
#include "Card.h"

using namespace std;

class Player[

	private:
		hand p_hand;
		int card_total;

	public:

		player();
		~player();
		int get_card_total();
		void get_initial_hand(deck &);
		void print_hand();
		void hit(deck &, bool &);
		void bust