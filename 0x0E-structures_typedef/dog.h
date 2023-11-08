#ifndef DOG_H
#define DOG_H

typedef struct dog dog_t;

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *dog, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
