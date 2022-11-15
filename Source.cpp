#include <iostream>
#include <ctime>
using namespace std;
double powerA3(double a) {
	double res = a * a * a;
	return res; //return a * a * a;

}
double powerA2(double a) {
	double res = a * a;
	return res;
}
double powerA4(double a) {
	double res = a * a * a * a;
	return res;
}
	double aMean(double x, double y) {
		return (x + y) / 2;
}
	double gMean(double x, double y) {
	return sqrt(x * y);
}
	double triangleP(double a) {
		return 3 * a;
	}
	double triangleS(double a) {
		return powerA2(a) * (sqrt(3) / 4);
	}

	int main() {
		//Proc1.ќписать функцию PowerA3(A), вычисл€ющую третью степень числа A и возвращающую ее(A Ч параметр вещественный).— помощью этой
		//процедуры найти третьи степени п€ти данного числа.
		/*srand(time(0));
		for (int i = 1; i <= 5; i++) {
			double x = rand() % 11;
			double x3 = powerA3(x);
			cout << "x = " << x << " x*x*x = " << x3 << endl;
		}*/

		/*Proc2.ќписать две функции PowerA234(A, B, C, D), вычисл€ющую вторую,
			третью и четвертую степень числа A и возвращающую эти степени соответственно в переменных B, C и D(A Ч входной, B, C, D Ч выходные
				32 ћ.Ё.јбрам€н.Ёлектронный задачник Programming Taskbook 4.5
				параметры; все параметры €вл€ютс€ вещественными).— помощью этой
			процедуры найти вторую, третью и четвертую степень п€ти данных чисел.*/



			/*for (int i = 1; i <= 5; i++) {
				double x = rand() % 11;
				double x4 = powerA4(x);
				double x2 = powerA2(x);
				cout << "x = " << x << " x*x = " << x2 << " x^4 = " << x4 << endl;
			}*/
			/*for (int i = 1; i <= 10; i++) {
				double x1 = rand() % 100 * 0.1;
				double y1 = rand() % 100 * 0.1;
				double am = aMean(x1, y1);
				double gm = gMean(x1, y1);
				cout << x1 << " " << y1 << " am = " << am
					<< " gm = " << gm << endl;
			}*/
		int a;
		cin >> a;
		for (int i = 1; i <= 3; i++) {
			double aP = triangleP(a);
			double aS = triangleS(a);
			cout << aP << " " << aS << endl;
		}
	}
	