
template<typename T> //T can mean anything, but in this case its used as a datatype
class Vector
{
public:	//RULE OF THREE: Construction - Assignment - Deletion

	Vector();					//constructor
	Vector(size_t sz);			//copy constructor
	Vector(const Vector<T>& v);	//copy constructor

	Vector& operator = (Vector<T>& v);

	Vector (Vector&& v);	//move constructor

	Vector& operator = (const Vector<T>&& v);	//move assignment

	size_t Size()const { return size; }

	T& operator[](size_t i) { return nums[i]; }
	T& operator[](size_t i) const { return nums[i]; }

	void Reserve(size_t new_allocation);	//reserves space within memory to grow the vector

	size_t Capacity() return { const space };

	void Resize(size_t new_size);

	void Push_Back(T value);

	~Vector();	//deconstructor (deletes allocated memory - prevent leaks)

private:

	size_t size;	//space being used by the array		(used)
	size_t space;	//space reserved for the array		(used + reserved)

	T* nums;

	const int RESERVE_DEFAULT_SIZE{ 8 };
	const int RESERVE_SPACE_MULTIPLIER{ 2 };
};