//----------------------------------------------------------------------------
// File : bXMapPerforate.h
// Project : MacMap
// Purpose : Header file : XMap class, make hole in a polygon from another polygon, assing geometry to the first object then destroy second object
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
// 11/12/2008 creation.
//----------------------------------------------------------------------------
// SCRIPT_COMPATIBLE
//----------------------------------------------------------------------------

#ifndef __bXMapPerforate__
#define __bXMapPerforate__

//----------------------------------------------------------------------------

#include <std_ext/bStdXMap.h>
#include <std_ext/bXMapStdIntf.h>

//----------------------------------------------------------------------------

#define	kXMapPerforateSignature			'xPrf'
#define	kXMapPerforateMessageID			"Perforate"
#define kXMapPerforateProgressMessageID	"PerforateProgress"

//----------------------------------------------------------------------------

class bXMapPerforate : public bStdXMap{
	public:		
		bXMapPerforate							(	bGenericXMLBaseElement* elt, 
													bGenericMacMapApp* gapp, 
													CFBundleRef bndl);
		virtual ~bXMapPerforate					(	);
		virtual bGenericXMLBaseElement* create	(	bGenericXMLBaseElement* elt);
		
		virtual void open						(	int* flags);
		virtual bool process					(	int msg, 
													void* prm);
		virtual bool edit						(	void* prm);
		virtual bool test						(	void* prm);
				
	protected:		
		virtual bool perforate					(	);
		virtual bool perforate					(	bool kill,
													bool silent);
	private:

};

//----------------------------------------------------------------------------

#endif
