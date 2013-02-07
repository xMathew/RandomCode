#ifndef LLIST_H
#define LLIST_H

template <typename T> struct Item
{
	T val;
	Item<T>* next;
}

template <typename T> class LList
{
	public:
		LList()
		~LList();
		bool empty() const;
		int size() const;
		void push_back(T new_val);
		T pop_front();
		T peek_front() const;
		T& at(int loc) const;
		bool remove(const T& val);
		void clear();
	private:
		Item<T>* head;
		Item<T>* tail;
};

template <typename T> LList<T>::LList()
{
	head = NULL;
	tail = NULL;
}

template <typename T> LList<T>::~LList()
{
}

template <typename T> bool LList<T>::empty() const
{
	return head==NULL; //If head is null, then list is empty, returns true
}

template <typename T> int LList<T>::size() const
{
	if(head==NULL) return 0;
	Item<T>* temp = head;
	int count = 1;
	while(temp->next!=NULL)
	{
		temp = temp->next;
		count++;
	}
	return count;
}

template <typename T> void LList<T>::push_back(T new_val);
{
	Item<T>* newItem = new Item<T>;
	newItem->val = new_val;
	newItem->next = NULL;
	
	if(head==NULL) 
	{
		head = newItem;
		tail = newItem;
		return;
	}
	tail->next = newItem;
	tail = newItem;
	/*Item<T>* temp = head;
	while(temp->next!NULL)
	{
		temp = temp->next;
	}
	temp->next = newItem;
	return;*/
}

template <typename T> T LList<T>::pop_front()
{
}

template <typename T> T LList<T>::peek_front() const
{
}

template <typename T> 
