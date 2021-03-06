/***************************************************************************
                          RotationUnit.h  -  description
                             -------------------
    begin                : mar f�v 4 2003
    copyright            : (C) 2003 by Emmanuel Promayon
    email                : Emmanuel.Promayon@imag.fr

 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifndef ROTATIONUNIT_H
#define ROTATIONUNIT_H


#include "Unit.h"

/** RotationUnit model the different values that can be taken by the unit
  * field of a rotation.
  *
  * This class implements the type-safe design pattern.
  *
  * $Revision: 44 $
  */
class RotationUnit : public Unit {

public:
  /// radians
  static RotationUnit RAD; 
  /// degrees
  static RotationUnit DEG; 
  
private:
  RotationUnit(const char * n) {unitString = n;}
};
      
#endif //ROTATIONUNIT_H


