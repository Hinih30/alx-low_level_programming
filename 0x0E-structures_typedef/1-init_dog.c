#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include "dog.h"

/**
 * init_dog - funtion to initialize a variable of type struct dog
 * @d: pointer to struct dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
int main(void)
{
	struct dog my_dog;

	init_dog(&my_dog, "Shukzi", 5.5, "May");

}