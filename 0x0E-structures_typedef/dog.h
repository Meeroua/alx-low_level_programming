#ifndef DOG_H
#define DOG_H

struct dog {
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *dog, char *name, float age, char *owner);

#endif
