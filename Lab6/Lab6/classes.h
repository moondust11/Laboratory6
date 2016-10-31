#pragma once

class List
{
private:
	int num;
	List *Next;
	List *Head;
	int count;
public:
	List()
	{
		Head = NULL;
		Next = NULL;
	}
	void get();
	void add(int);
	void del();
	List operator+(List obj)
	{
		List *p = Head;
		List *po = obj.Head;
		for (; p->Next != NULL; p = p->Next);
		p->Next = po;
		return *this;
	}
	void operator--()
	{
		List *p = Head;
		Head = Head->Next;
		delete p;
	}
	bool operator==(List obj)
	{
		List *p = Head, *po = obj.Head;
		bool stop = false;
		if (count == obj.count)
		{
			for (; p != NULL; p = p->Next, po = po->Next)
			{
				if (p->num != po->num)
				{
					stop = true;
					break;
				}
			}
		}
		if (stop == false)
			return true;
		else
			return false;
	}
	bool IsEmpty()
	{
		if (Head == NULL)
			return true;
		else
			return false;
	}
	
};

