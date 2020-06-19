#ifndef _CNPRMODAMINOACIDMASS_H
#define _CNPRMODAMINOACIDMASS_H

#include "NeoProtXMLStructs.h"
#include <string>
#include <vector>

class CnprModAminoacidMass {
public:

  void write(FILE* f, int tabs = -1);

  std::string position;
  std::string mass;

private:

};

#endif