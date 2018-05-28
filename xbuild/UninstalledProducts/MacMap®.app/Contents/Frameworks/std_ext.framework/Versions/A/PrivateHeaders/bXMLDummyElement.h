//----------------------------------------------------------------------------
// File : bXMLDummyElement.h
// Project : MacMap
// Purpose : Header file : XML utility class (for search routines)
// Author : Benoit Ogier, benoit.ogier@macmap.com
//
// Copyright (C) 1997-2015 Carte Blanche Conseil.
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//
// See the LICENSE.txt file for more information.
//
//----------------------------------------------------------------------------
// Classe de base pour éléments XML
//----------------------------------------------------------------------------
// 16/05/2003 creation.
//----------------------------------------------------------------------------

#ifndef __bXMLDummyElement__
#define __bXMLDummyElement__

//----------------------------------------------------------------------------

#include <std_ext/bStdXMLBaseElement.h>

//----------------------------------------------------------------------------

class bXMLDummyElement : public bStdXMLBaseElement{
public:
    bXMLDummyElement 			(	const char* name, 
                                    bGenericMacMapApp* gapp);
    virtual ~bXMLDummyElement	(	);
};
									
//----------------------------------------------------------------------------

#endif
