#ifndef DOG
#define DOG

/**
 * struct dog - a structure that contains dog
 * @name: pointer to a string representing name of dog
 * @age: float containing the age of dog
 * @owner: ptr to an array of characters
 */


struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
