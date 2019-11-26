
class Vector
{
public:	//RULE OF THREE: Construction - Assignment - Deletion

	Vector();					//constructor
	Vector(size_t sz);			//copy constructor
	Vector(const Vector& v);	//copy constructor

	Vector& operator = (Vector& v);

	Vector (Vector&& v);	//move constructor

	Vector& operator = (const Vector&& v);	//move assignment

	size_t Size()const { return size; }

	int& operator[](int i) { return nums[i]; }
	int& operator[](int i) const { return nums[i]; }

	void Reserve(size_t new_allocation);	//reserves space within memory to grow the vector

	int Capacity() return { const space };

	void Resize(size_t new_size);

	void Push_Back(int value);

	~Vector();	//deconstructor (deletes allocated memory - prevent leaks)

private:

	size_t size;	//space being used by the array		(used)
	size_t space;	//space reserved for the array		(used + reserved)

	int* nums;

	const int RESERVE_DEFAULT_SIZE{ 8 };
	const int RESERVE_SPACE_MULTIPLIER{ 2 };
};