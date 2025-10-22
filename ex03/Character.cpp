#include "Character.hpp"

Dropped_list*	Character::dropped = NULL;

Character::Character( void ) : name("Unnamed")
{
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
	std::cout << "Character default constructor called." << std::endl;
}

Character::Character( const std::string& name ) : name(name)
{
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
	std::cout << "Character named constructor called." << std::endl;
}

Character::Character( const Character& copy ) : name(copy.name)
{
	for (int i = 0; i < 4; i++)
	{
		if (copy.inventory[i])
			inventory[i] = copy.inventory[i]->clone();
		else
			inventory[i] = NULL;
	}
	std::cout << "Character copy constructor called." << std::endl;
}

Character&	Character::operator=( const Character& copy )
{
	if (this != &copy)
	{
		name = copy.name;
		for (int i = 0; i < 4; i++)
		{
			delete inventory[i];
			if (copy.inventory[i])
				inventory[i] = copy.inventory[i]->clone();
			else
				inventory[i] = NULL;
		}
	}
	std::cout << "Character assignment operator called." << std::endl;
	return (*this);
}

Character::~Character( void )
{
	for (int i = 0; i < 4; i++)
		delete inventory[i];
	std::cout << "Character destructor called." << std::endl;
}

std::string const & Character::getName() const
{
	return (name);
}

void Character::equip(AMateria* m)
{
	if (!m)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (!inventory[i])
		{
			inventory[i] = m;
			std::cout << "Equipped materia at index " << i << "." << std::endl;
			return ;
		}
	}
	std::cout << "Inventory full. Cannot equip more materia." << std::endl;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4)
	{
		std::cout << "Invalid index." << std::endl;
		return;
	}
	Dropped_list*	node = new Dropped_list;
	node->materia = inventory[idx];
	node->next = dropped;
	dropped = node;
	inventory[idx] = NULL;
	std::cout << "Unequiped materia at index " << idx << "." << std::endl;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= 4 || !inventory[idx])
	{
		std::cout << "Invalid index or no materia equipped." << std::endl;
		return;
	}
	inventory[idx]->use(target);

}

void	Character::cleanDropped( void )
{
	Dropped_list*	tmp;

	while (dropped)
	{
		tmp = dropped;
		dropped = dropped->next;
		delete tmp->materia;
		delete tmp;
	}
}
