#include "Entity.h"



Entity::Entity()
{
}

int Entity::GetHealth() {
	return myHealth;
}

void Entity::SetHealth(int anAmount) {
	myHealth = anAmount;
}

void Entity::TakeDamage(int anAmount) {
	myHealth -= anAmount;
}

Entity::~Entity()
{
}
