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
				cout << "������ڴ��" << i << "�ֽڿɶ���";
				tr++;
			}
			else
			{
				cout << "������ڴ��" << i << "�ֽڲ��ɶ���";
			}
			if (IsBadWritePtr(&a[i], 1) == 0)
			{
				cout << "��" << i << "�ֽڿ�д��" << endl;
				tw++;
			}
			else
			{
				cout << "��" << i << "�ֽڲ���д��" << endl;
			}
		}
	cout << "��" << tr << "�ֽڿɶ�����" << tw << "�ֽڿ�д��" << endl;
	return 0;
}