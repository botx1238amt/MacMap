//----------------------------------------------------------------------------
// File : bStdNSXBox.h
// Project : MacMap
// Purpose : Header file : Base class for Cocoa based XMapBox
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
// 25/03/2011 creation.
//----------------------------------------------------------------------------

#ifndef __bStdNSXBox__
#define __bStdNSXBox__

//----------------------------------------------------------------------------

#include <std_ext/bStdXMap.h>

//----------------------------------------------------------------------------

#ifdef __LITTLE_ENDIAN__
#define kXBoxSignature				'xoBX'
#else
#define kXBoxSignature				'XBox'
#endif

//----------------------------------------------------------------------------

class bStdNSXBox : public bStdXMap{
	public:		
		bStdNSXBox								(	bGenericXMLBaseElement* elt, 
													bGenericMacMapApp* gapp, 
													CFBundleRef bndl);
		virtual ~bStdNSXBox						(	);
		virtual bGenericXMLBaseElement* create	(	bGenericXMLBaseElement* elt);
		
		virtual void open						(	int* flags);
		virtual void close						(	);
		virtual bool nsevent					(	void* nsevt);
		virtual void idle						(	void* prm);
		virtual bool edit						(	void* prm);
		virtual bool process					(	int msg, 
													void* prm);
		virtual bool test						(	void* prm);


		virtual void set_bounds					(	CGRect* bnds);
		virtual void get_bounds					(	CGRect* bnds);

		virtual void wd_close					(	);
		
	protected:

		virtual void read_p						(	);
		virtual void write_p					(	);
		virtual bGenericXMLBaseElement* make_p	(	);
		
		virtual void* ccinit					(	);
		
		void*	_controller;
		bool	_openit;
		bool	_wd_open;
		UInt32	_sign;
		CGRect	_bnds;
	
	private:		
		
};

//----------------------------------------------------------------------------

#endif
