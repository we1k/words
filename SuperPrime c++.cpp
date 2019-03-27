#include <iostream>
using namespace std;
bool isPrime(int i) {
	int a;
	for(a=2; a*a<=i; a++) {
		if (!(i%a))
			return false;
	}
	return true;
}
class SuperPrime {
	private:
		int i;
	public:
		SuperPrime(int c);
		bool isSuperPrime();
		bool great(SuperPrime &);
		void add(SuperPrime &);
		void show();
};
int main () {
	SuperPrime sum(0),max(0);
	for (int i=1; i<=999; i++) {
		SuperPrime sp(i);
		if(sp.isSuperPrime()) {
			sum.add(sp);
			if (sp.great(max))
				max=sp;
		}
	}
	sum.show();
	max.show();
	return 0;
}
void SuperPrime::show() {
	cout<<i<<endl;
}
SuperPrime::SuperPrime(int a) {
	i=a;
}
bool SuperPrime::isSuperPrime() {
	int a,b,c;
	static int num=0;
	a=i/100;
	b=(i%100)/10;
	c=i%10;
	if (i==999)
		cout<<num<<endl;
	if((isPrime(a+b+c))&&(isPrime(a*b*c))&&(isPrime(a*a+b*b+c*c))&&(isPrime(a*100+b*10+c))) {
		num++;
		return true;
	}
}
bool SuperPrime::great(SuperPrime &a) {
	if (this->i>a.i) {
		return true;
	}
	return false;
}
void SuperPrime::add(SuperPrime &sp) {
//	cout<<sp.i<<endl;
	this->i+=sp.i;
}
