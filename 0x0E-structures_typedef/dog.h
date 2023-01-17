#ifndef dog_h
#define dog_h

/**
 * struct dog - dog's information
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 *
 * Description: This structure holdes info about dogs
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
