#include <iostream>
#include "unistd.h"

using namespace std;

int main() {
	pid_t mypid = getpid();
	cout << "Hello, World!" << endl;
	printf("My PID is %d.\n", mypid);
	return 0;
}
