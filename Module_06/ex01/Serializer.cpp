#include "Serializer.hpp"

/*--- CONSTRUCTORS AND DESTRUCTOR --------------------------------------------*/

Serializer::Serializer() {}
Serializer::Serializer(const Serializer& copy) { (void) copy; }
Serializer& Serializer::operator=(const Serializer& rhs)
{
	(void) rhs;
	return *this;
}
Serializer::~Serializer() {}

/*--- MEMBER FUNCTIONS -------------------------------------------------------*/

uintptr_t	Serializer::serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data*		Serializer::deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}
