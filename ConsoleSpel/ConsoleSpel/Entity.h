#ifndef ENTITY_HEADER
#define ENTITY_HEADER

class Entity
{
public:
	Entity();
	~Entity();

	int GetHealth();
	void SetHealth(int anAmount);
	void TakeDamage(int anAmount);
private:
	int myHealth;	
};
#endif
