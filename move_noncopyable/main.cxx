#include <memory>
using std::make_unique;
using std::unique_ptr;

#include <utility>
using std::move;

#include <cstdio>
using std::printf;


struct NoncopyableType {
	unique_ptr<int> value;
};


struct Container {
	NoncopyableType nocopy;
};

struct DoubleContainer {
	Container container;
};


int main()
{
	Container c1 {.nocopy = NoncopyableType {.value = make_unique<int>(5)}};
	Container c2 = move(c1);

	printf("%d\n", *c2.nocopy.value);

	DoubleContainer dc1 {.container = Container {.nocopy = NoncopyableType {.value = make_unique<int>(8)}}};
	DoubleContainer dc2 = move(dc1);

	printf("%d\n", *dc2.container.nocopy.value);

	return 0;
}
