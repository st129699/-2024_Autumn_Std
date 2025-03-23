#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int menu()
{
	//system("cls");
	printf("0 - exit\n");
	printf("1 - print array\n");
	printf("2 - add to end\n");
	printf("3 - add to front\n");
	printf("4 - delete from the end\n");
	printf("5 - delete from the front\n");
}
int* createArr(int size)
{
	int* array = (int*)malloc(size * sizeof(int));

	if (array == NULL)
	{
		printf("ERORR-_-");
		exit(1);
	}
	return array;
}
void printArr(int* a, int len)
{
	for (int i = 0; a != NULL && i < len; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}
int expandArr(int** a, int* len)
{
	int* newArr = createArr(*len + 1);
	if (newArr != NULL)
	{
		for (int i = 0; i < *len; ++i)
		{
			newArr[i] = (*a)[i];
		}
		free(*a);
		*a = newArr;
		(*len)++;
	}
}
void expandWithShift(int** a, int* len)
{
	int* newArr = createArr(*len + 1);
	if (newArr != NULL) {
		for (int i = 0; i < *len; ++i) {
			newArr[i + 1] = (*a)[i];
		}
		free(*a);
		*a = newArr;
		(*len)++;
	}
}
void AddToTheEnd(int** arr, int* len, int el)
{
	expandArr(arr, len);
	(*arr)[*len - 1] = el;
}
void ShiftRight(int* arr, int len)
{
	int* end = arr + len - 1;
	for (int* ptr = end; ptr > arr; ptr--) {
		*ptr = *(ptr - 1);
	}
}
void AddToTheFront(int** a, int* len, int value)
{
	expandWithShift(a, len);
	(*a)[0] = value;
}
void DeleteFromTheEnd(int** a, int* len)
{
	int* newArr = createArr(*len - 1);
	if (newArr != NULL)
	{
		int cnt = 0;
		for (int i = 0; i < *len - 1; ++i)
		{
			newArr[i] = (*a)[i];
			cnt += 1;
		}
		free(*a);
		*a = newArr;
		(*len) = cnt;
	}
}
void DeleteFromTheFront(int** a, int* len) {
		if (*len <= 0) 
		{
			printf("ERROR-_-");
		}

		int* newArr = createArr(**a - 1);

		for (int i = 0; i < *len - 1; ++i) {
			newArr[i] = (*a)[i + 1];
		}

		free(*a);

		*a = newArr;
		(*len)--;
}

int main(void)
{
	int len = 0;
	bool flag = true;

	printf("enter array size: \n");
	scanf_s("%d", &len);

	int* array = createArr(len);

	if (len == 0)
	{
		printf("The length of the array is zero so you can select menu items 0, 1, 2 or 3\n");
	}
	else {
		printf("The original array will be filled with rand values\n");
	}
		for (int i = 0; i < len; i++)
			array[i] = rand();

		while (flag)
		{
			menu();
			int choice;
			scanf_s("%d", &choice);
			switch (choice)
			{
			case 0:
			{
				flag = false;
				break;
			}
			case 1:
			{
				printArr(array, len);
				break;
			}
			case 2:
			{
				int element;
				printf("enter the element: \n");
				scanf_s("%d", &element);
				AddToTheEnd(&array, &len, element);
				break;
			}
			case 3:
			{
				int element;
				printf("Enter the element:\n");
				scanf_s("%d", &element);
				AddToTheFront(&array, &len, element);
				break;
			}
			case 4:
			{
				DeleteFromTheEnd(&array, &len);
				break;
			}
			case 5:
			{
				DeleteFromTheFront(&array, &len);
				break;
			}
			}
		}
	return 0;

}