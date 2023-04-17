#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog characteristics
 * @name: name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dogg;
dogg *new_dog(char *name, float age, char *owner);
void free_dog(dogg *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
