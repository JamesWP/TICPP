#include <iostream>

using namespace std;

class Traveler
{
  string name;
public:
  Traveler(string n):name(n){}
  Traveler(const Traveler& t){name = t.name;}
  Traveler& operator=(Traveler t){name = t.name; return *this;}
};

class Pager
{
  string name;
public:
  Pager(string n):name(n){}
  Pager(const Pager& p){name = p.name;}
  Pager& operator=(Pager p){name = p.name; return *this;}
};

class BusinessTraveler: public Traveler
{
  Pager pager;
public:
  BusinessTraveler(string p):Traveler(p), pager(p){}
  BusinessTraveler(const BusinessTraveler& bt):Traveler(bt), pager(bt.pager){}
};
