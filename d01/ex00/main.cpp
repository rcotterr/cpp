#include "Pony.hpp"


void ponyOnTheHeap(void) {
	Pony* onTheHeap = new Pony("OnTheHeap");
	onTheHeap->output_info();
	delete onTheHeap;
}


void ponyOnTheStack(void) {
	Pony onTheStack = Pony("OnTheStack");
	onTheStack.output_info();
}


int main(void) {
	ponyOnTheHeap();
	ponyOnTheStack();
	return 0;
}