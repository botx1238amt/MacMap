//----------------------------------------------------------------------------
// File : bToolLength.h
// Project : MacMap
// Purpose : Header file : Length measurement tool class
// Author : Benoit Ogier, benoit.ogier@macmap.com
//
// Copyright (C) 2005 Carte Blanche Conseil.
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
// 09/05/2005 creation.
// 17/06/2011 CGGeometry OK.
// 18/03/2014 Ready for CG geometry	& drawing 
//----------------------------------------------------------------------------

#ifndef __bToolLength__
#define __bToolLength__

//----------------------------------------------------------------------------

#include <std_ext/bStdToolNav.h>

//----------------------------------------------------------------------------

class bToolLength : public bStdToolNav{
public:		
	bToolLength								(	bGenericXMLBaseElement* elt, 
												bGenericMacMapApp* gapp, 
												CFBundleRef bndl);
	virtual ~bToolLength					(	);
	virtual bGenericXMLBaseElement* create	(	bGenericXMLBaseElement* elt);
	
	virtual void open						(	int* flags);
	
	virtual void clic						(	CGPoint pt, 
												int count);
	virtual void update						(	bool global);
	virtual bool set_key					(	int k);
	

protected:
	void calc_len							(	);
	void report_len							(	);

private:
	double	_len;
};

//----------------------------------------------------------------------------

#endif
