struct BaseType {};  // (Pretend this is in another file; keep headers to one type per file.)

class MyClass : public BaseType {
private:
	// Protected then private data members first
	int _value;  // '_' prefix

public:
	// Canonical functions next
	MyClass() = default;                                  // Default constructor
	MyClass(int value);                                   // Parameterized constructor(s)
	MyClass(const MyClass & copy) = default;              // Copy constructor
	MyClass(MyClass && move) = default;                   // Move constructor
	~MyClass() = default;                                 // Destructor
	MyClass & operator=(const MyClass & copy) = default;  // Copy-assignment operator
	MyClass & operator=(MyClass && move) = default;       // Move-assignment operator

	// Conversion operators next
	operator int();

	// Non-assignment, non-conversion operators next
	MyClass operator+(const MyClass & rhs) const;
	MyClass & operator+=(const MyClass & rhs);

	// Behavioral functions next
	void do_something();

	// Setters/getters next
	void value(int value);
	int value() const;

private:
	// Finally, protected then private member functions
	void helper();
};
