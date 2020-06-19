#ifndef _CNPRMODIFICATIONINFO_H
#define _CNPRMODIFICATIONINFO_H

#include "NeoProtXMLStructs.h"
#include "CnprModAminoacidMass.h"
#include <string>
#include <vector>

class CnprModificationInfo {
public:

  void write(FILE* f, int tabs = -1);

  std::vector<CnprModAminoacidMass> mod_aminoacid_mass;
  std::string mod_nterm_mass;
  std::string mod_cterm_mass;
  std::string modified_peptide;

private:

};

#endif