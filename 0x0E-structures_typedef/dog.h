#ifndef __DOG_H__
#define __DOG_H__

/**
 * struct dog - information on dog
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

/**
 * dog_t - new name for tyoe struct dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */

typedef struct dog dog_t(char *name, float age, char *owner);

int _putchar(char);

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif /* __DOG_H__ */
