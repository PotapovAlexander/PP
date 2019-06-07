#include "pch.h"
#include "mage.h"


void mage::unit(int newHPbarr, int newMana, std::string newName)
{
	hpbaar = newHPbarr;
	mana = newMana; 
	name = newName;
}


std::string mage::getName()
{
	return name;
}

void mage::say(std::string text)
{
	std::cout << name << " say " << text << std::endl; 
}

int mage::cast(spell &spel, mage & target)
{
	if (hpbaar > 0) 
	{
		std::cout << name << " hit " << target.getName() << " enemy " << spel.sname << std::endl;
		target.hit(spel);
		return -1;
	}
	else 
	{
		return 0;
	}
}

void mage::hit(spell &spel)
{
	hpbaar -= spel.dhpbaar;
	if (hpbaar < 0)
		say("Shimatta - KIA");
}
