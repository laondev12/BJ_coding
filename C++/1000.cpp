// 두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.

#include <iostream>  

using namespace std;

int main(void)
{
	int a, b;

	cin >> a >> b;
	if (a < 1 || a>9 || b < 1 || b>9)
		return -1;
	cout << a + b << endl;
	return 0;
    
}
 
