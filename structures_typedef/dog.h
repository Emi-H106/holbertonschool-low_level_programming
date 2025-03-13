#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Dog information
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

int main(void)
{
	typedef struct dog dog_t;
}

/*prototype*/
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
