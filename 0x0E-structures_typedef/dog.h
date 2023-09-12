#ifndef DOG_H
#define DOG_H
/**
 * struct dog- contianing a dog's details
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: Longer Description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
}
/**
 * dog_t - typedef for struct dog
 */
typdef struct dog dog_t;

void_init_dog(struct dog *d, char *name, float age, char *owner);
void_print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
