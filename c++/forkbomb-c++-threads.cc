#include <future>

using namespace std;

int forkbomb();

int forkbomb() {
	auto f1 = async( launch::async, forkbomb );
	auto f2 = async( launch::async, forkbomb );
	return f1.get() + f2.get();
}

int main() {
	return forkbomb();
}
