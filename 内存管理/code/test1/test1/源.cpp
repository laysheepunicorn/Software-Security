#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

int main()
{
	char* a = (char*)malloc(4096);
	int tr = 0;
	int tw = 0;
		for (int i = 0; i < 4096; i++)
		{
			if (IsBadReadPtr(&a[i], 1) == 0)
			{
				cout << "分配的内存第" << i << "字节可读，";
				tr++;
			}
			else
			{
				cout << "分配的内存第" << i << "字节不可读，";
			}
			if (IsBadWritePtr(&a[i], 1) == 0)
			{
				cout << "第" << i << "字节可写。" << endl;
				tw++;
			}
			else
			{
				cout << "第" << i << "字节不可写。" << endl;
			}
		}
	cout << "有" << tr << "字节可读，有" << tw << "字节可写。" << endl;
	return 0;
}