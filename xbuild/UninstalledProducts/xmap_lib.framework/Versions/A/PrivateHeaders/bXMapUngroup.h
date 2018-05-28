//----------------------------------------------------------------------------
// File : bXMapUngroup.h
// Project : MacMap
// Purpose : Header file : XMap class, split object with complex geometry into several objects
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
// 07/08/2006 creation.
//----------------------------------------------------------------------------
// SCRIPT_COMPATIBLE
//----------------------------------------------------------------------------

#ifndef __bXMapUngroup__
#define __bXMapUngroup__

//----------------------------------------------------------------------------

#include <std_ext/bStdXMap.h>
#include <std_ext/bXMapStdIntf.h>

//----------------------------------------------------------------------------

#define	kXMapUngroupSignature			'xUnG'
#define	kXMapUngroupMessageID			"Ungroup"
#define kXMapUngroupProgressMessageID	"UngroupProgress"

//----------------------------------------------------------------------------

class bXMapUngroup : public bStdXMap{
	public:		
		bXMapUngroup							(	bGenericXMLBaseElement* elt, 
													bGenericMacMapApp* gapp, 
													CFBundleRef bndl);
		virtual ~bXMapUngroup					(	);
		virtual bGenericXMLBaseElement* create	(	bGenericXMLBaseElement* elt);
		
		virtual void open						(	int* flags);
		virtual bool process					(	int msg, 
													void* prm);
		virtual bool edit						(	void* prm);
		virtual bool test						(	void* prm);
				
	protected:		
		virtual bool ungroup					(	);
		virtual bool ungroup					(	bool kill,
													bool silent);
		virtual bool ungroup					(	bGenericGeoElement* o,
													bool silent);

	private:

};

//----------------------------------------------------------------------------

#endif
