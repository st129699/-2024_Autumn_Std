#include <iostream>

class ArrayList
{
private:
	int len;
	int* data;
	int capacity;

	void init(int len = 10)
	{
		this->len = len;
		this->data = (int*)malloc(sizeof(int) * len);
	}

	bool indexValid(int index)
	{
		return 0 <= index <= this->len;
	}
public:
	ArrayList(int len = 10)
	{
		this->init(len);
		for (int i = 0; i < this->len; ++i)
		{
			this->data[i] = 0;
		}
	}

	ArrayList(ArrayList& list)
	{
		//this->len = list.len;
		//this->data = list.data;
		this->init(list.len);
		for (int i = 0; i < list.len; ++i)
		{
			this->set(i, list.get(i));
		}
	}


	void randomize(int min = 10, int max = 99)
	{
		for (int i = 0; i < this->len; ++i)
		{
			this->data[i] = rand() % (max - min + 1) + min;
		}
	}

	void print()
	{
		for (int i = 0; i < this->len; ++i)
		{
			std::cout << this->data[i] << " ";
		}
		printf("\n");
	}

	int get(int index)
	{
		if (indexValid(index))
		{
			return this->data[index];
		}
		else
		{
			std::cout << "wrong index";
			return -1;
		}
	}

	void set(int index, int value)
	{
		if (indexValid(index))
		{
			this->data[index] = value;
		}
		else
		{
			std::cout << "wrong index";
		}
	}

	void expand()
	{
		int* newData = new int[len + 1];

		for (int i = 0; i < this->len; i++)
		{
			newData[i] = this->data[i];
		}
		delete[] data;
		data = newData;
	}

	void pushBack(int element)
	{
		expand();
		data[len] = element;
		len++;
	}

	void pushFront(int element)
	{
		expand();
		for (int i = len; i > 0; --i)
		{
			data[i] = data[i - 1];
		}
		data[0] = element;
		len++;
	}

	void insert(int index, int element)
	{
		expand();
		for (int i = len; i > index; --i)
		{
			data[i] = data[i - 1];
		}
		data[index] = element;
		len++;
	}

	void popBack()
	{
		int* newData = new int[len - 1];

		for (int i = 0; i < len - 1; i++)
		{
			newData[i] = data[i];
		}
		delete[] data;
		data = newData;
		len--;
	}

	void popFront()
	{
		int* newData = new int[len - 1];

		for (int i = 1; i < len; i++)
		{
			newData[i - 1] = data[i];
		}
		delete[] data;
		data = newData;
		len--;
	}

	void extract(int index) {

		int* newData = new int[len - 1]; 

		for (int i = 0; i < index; i++) {
			newData[i] = data[i];
		}

		for (int i = index + 1; i < len; i++) {
			newData[i - 1] = data[i];
		}
		delete[] data; 
		data = newData; 
		len--; 
	}

	void reverse()
	{
		int* newData = new int[len];

		for (int i = 0; i < len; i++)
		{
			newData[len - i - 1] = data[i];
		}
		delete[] data;
		data = newData;
	}

	int sum()
	{
		int cnt = 0;
		for (int i = 0; i < len; i++)
		{
			cnt += data[i];
		}
		return cnt ;
	}

	void sort()
	{
		for (int i = 0; i < len - 1; i++)
		{
			int min_ind = i;
			int c = 0;
				for (int j = i + 1; j < len; j++)
				{
					if (data[j] < data[min_ind])
					{
						c = data[j];
						data[j] = data[min_ind];
						data[min_ind] = c;
					}
				}
		}
	}

	int second_max()
	{
		ArrayList Temp(*this);
		Temp.sort();

		return Temp.data[len - 2];
	}
	
	int lasrMinIndex()
	{
		ArrayList Temp(*this);
		Temp.sort();

		return Temp.data[0];
	}

	int countOdd()
	{
		int cnt = 0;
		for (int i = 0; i < len; i++)
		{
			if (data[i] % 2 != 0)
			{
				cnt += 1;
			}
		}
		return cnt;
	}

	int countEven()
	{
		int cnt = 0;
		for (int i = 0; i < len; i++)
		{
			if (data[i] % 2 == 0)
			{
				cnt += 1;
			}
		}
		return cnt;
	}

	int sumOdd()
	{
		int cnt = 0;
		for (int i = 0; i < len; i++)
		{
			if (data[i] % 2 != 0)
			{
				cnt += data[i];
			}
		}
		return cnt;
	}

	int sumEven()
	{
		int cnt = 0;
		for (int i = 0; i < len; i++)
		{
			if (data[i] % 2 == 0)
			{
				cnt += data[i];
			}
		}
		return cnt;
	}
};





int main()
{
	ArrayList list(10);
	ArrayList list2(20);
	list.randomize();
	list.print();
	std::cout << list.sum() << "\n";
	list.print();

	list2.randomize();
	list2.print();

	std::cout << list2.countEven() << "\n";
	list2.sort();
	list2.print();

	return 0;
}