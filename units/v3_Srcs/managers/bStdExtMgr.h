//----------------------------------------------------------------------------
// File : bStdExtMgr.h
// Project : MacMap
// Purpose : Header file : Base class for externs management
// Author : Benoit Ogier, benoit.ogier@macmap.com
//
// Copyright (C) 2004 Carte Blanche Conseil.
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
// 14/12/2004 creation.
//----------------------------------------------------------------------------

#ifndef __bStdExtMgr__
#define __bStdExtMgr__

//----------------------------------------------------------------------------

#include <mox_intf/bGenericExtMgr.h>
#include <MacMapSuite/bArray.h>

// ---------------------------------------------------------------------------

#define _kbStdExtMgrIdleTime_	60

//----------------------------------------------------------------------------

class bStdExtMgr : public bGenericExtMgr{
public:		
	virtual int load				(	);
	virtual int unload				(	);
	
	virtual void open				(	int idx);
	virtual void open				(	);
	virtual void close				(	);
	
	virtual bool event				(	EventRef evt);
	virtual bool event				(	void* nsevt);
	virtual void idle				(	);

	virtual bool edit				(	bGenericExt* ext, 
										void* prm);
	virtual bool edit				(	const char* name, 
										UInt32 signature, 
										void* prm);
			
	virtual void set_current		(	int index);
	virtual int get_current			(	);
	
	virtual int count				(	);
	
	virtual bGenericExt* get		(	);
	virtual bGenericExt* get		(	int idx);
	virtual bGenericExt* find		(	const char* name);
	virtual bGenericExt* find		(	UInt32 signature);
	
	virtual void ext_name			(	int idx, 
										char* name);
	virtual UInt32 ext_signature	(	int idx);

	virtual bool add				(	bGenericXMLBaseElement* root);
	virtual bool remove				(	int idx);
	virtual bool modify				(	int idx, 
										bGenericXMLBaseElement* root);

	virtual int ext_index			(	UInt32 sign);
	virtual int ext_index			(	const char* name);
	
protected:
	bStdExtMgr						(	UInt32 sign, 
										bool use_current, 
										bool need_idle, 
										bool need_events, 
										int index);
	virtual ~bStdExtMgr				(	);

	static int comp_name			(	const void* a, 
										const void* b);
	static int comp_signature		(	const void* a, 
										const void* b);
	
	bArray			_elts;
	UInt32			_sign;
	
	bool			_closed;
	
private:
	bool			_use_current;
	bool			_need_idle;
	bool			_need_events;
	int				_index;
};

//----------------------------------------------------------------------------

#endif
