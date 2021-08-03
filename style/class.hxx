struct BaseType {};  // (Pretend this is in another file; keep headers to one type per file.)

class MyClass : public BaseType {
private:
	// Private data members first
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

	// Behavioral functions next
	void do_something();

	// Setters/getters next
	void value(int value);
	int value() const;

protected:
	// Protected member functions next
	void part_of_algorithm();

private:
	// Finally, private member functions
	void helper();
};
