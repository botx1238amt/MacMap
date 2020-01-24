//----------------------------------------------------------------------------
// File : bStdExt.h
// Project : MacMap
// Purpose : Header file : Base class for externs (i.e. XMaps, XMapBoxes, XML dictionnaries, Geogs, Calcs, Constants, Tools and vDefs)
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
// 
//----------------------------------------------------------------------------
// 27/12/2004 creation.
//----------------------------------------------------------------------------

#ifndef __bStdExt__
#define __bStdExt__

//----------------------------------------------------------------------------

#include <std_ext/bStdXMLBaseElement.h>

#include <mox_intf/bGenericExt.h>

//----------------------------------------------------------------------------

class bStdExt : public bStdXMLBaseElement, public virtual bGenericExt{
public:
	bStdExt					(	bGenericXMLBaseElement* elt,
                                bGenericMacMapApp* gapp,
                                CFBundleRef bndl);
	~bStdExt				(	);
			
	virtual void open		(	int* flags);
	virtual void close		(	);
	virtual bool nsevent	(	void* nsevt);
	virtual void idle		(	void* prm);
	virtual bool process	(	int msg,
                                void* prm);
	virtual bool test		(	void* prm);
	virtual bool edit		(	void* prm);
		
protected:

private:
};

//----------------------------------------------------------------------------

#endif
