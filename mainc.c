#include <stdio.h>
struct person
{
	int age;
	int weighdt;
};

int main(int argc, char const *argv[])
{
	struct person nam;
	nam.age = 12;
	printf("%d\n", nam.age);
	return 0;
}
