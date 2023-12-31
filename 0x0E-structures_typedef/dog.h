#ifndef DOG_H
#define DOG_H
/**
 * struct dog- contianing a dog's details
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: This structure defines the attribute of a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - tpedef for struct dog
 * Description: This allow dog_t  to be used instead of struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
