/**
 * init_dog - initialize the elements in the dog struct
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's name
 * @d: pointer to struct dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d.name = name;
	d.age = age;
	d.owner = owner;
}
