#include "File.h"
File::File()
{
}
File::File(int i, string n, string r)
{
    this->index = i;
    this->name = n;
    this->route = r;
    this->link = this;
}
File::~File()
{
}

/*
    GETTER'S
 */
File* File::getLink() const { return link; }
int File::getIndex() const { return index; }
string File::getName() const { return name; }
string File::getRoute() const { return route; }

/*
    SETTER'S
*/
void File::setIndex(int a) { index = a; }
void File::setName(string a) { name = a; }
void File::setRoute(string a) { route = a; }
void File::setLink(File* a) { link = a; }

