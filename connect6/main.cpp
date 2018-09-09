#include "gameboard.h"
#include <time.h>
#include <stdlib.h>
#include "ai_sourcefile.h"
//#include "mandeuk.h"
using namespace std;
Connect6 c = Connect6(true, false);

int main() {
	srand(time(NULL));
	
	c.set_blackAI(&random_ai);
	c.set_whiteAI(&random_ai);
	c.set_blocking(true);
	c.init();
	c.play_connect6();
//	c.simulate(&random_ai, &mandeuk, 10);
	return 0;
}
	