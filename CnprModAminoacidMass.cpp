#include "CnprModAminoacidMass.h"

using namespace std;

void CnprModAminoacidMass::write(FILE* f, int tabs){
  //required
  string el = "mod_aminoacid_mass";
  if (position.empty()) NPRerrMsg(el, "position");
  if (mass.empty()) NPRerrMsg(el, "mass");

  NPRprintTabs(f, tabs);
  fprintf(f, "<mod_aminoacid_mass");
  fprintf(f, " position=\"%s\"", position.c_str());
  fprintf(f, " mass=\"%s\"", mass.c_str());
  fprintf(f, "/>\n");

}
