#include<iostream>
using namespace std;
struct pppp
{
	string name;
	int age;
	string sex;
};
void bobblesort(struct pppp arr[],int length)
{
	struct pppp temp;
	for (int i = 0; i < length-1; i++)
	{
		for (int j = 0; j < length-1-i; j++)
		{
			if (arr[j].age>arr[j+1].age)
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
void print(struct pppp arr[],int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << "\t�����"
			<< "\t����:" << arr[i].name
			<< "\t����:" << arr[i].age
			<< "\t�Ա�" << arr[i].sex
			<< endl;
	}
}
int main()
{   
	struct pppp arr[5] =
	{
		{"һ",18,"��"},
		{"��",20,"��"},
		{"��",21,"��"},
		{"��",11,"Ů"},
		{"��",14,"Ů"},
	};
	int len = sizeof(arr) / sizeof(arr[0]);
	bobblesort(arr,len);
	print(arr,len);
	system("pause");
	return 0;

}