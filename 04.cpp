#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	int h,h1,m, s,s1,s2,m1;
	cout << "請輸入秒)";
	cin >> s;
	
	h = s / 3600;
	h1 = h / 60;
	m = s / 60;
	m1 = m / 60;
	if (m >= 60)
		m=m - m1 * 60;
if (h >= 60)
		h=h - h1 * 60;
if (s >= 3600)
      s = s - h * 3600;
if (s >= 60)
s = s - m * 60;
	cout <<h<<"小時"<<m<<"分鐘"<<s<< "秒)";
	system("pause");


	return 0;
}
