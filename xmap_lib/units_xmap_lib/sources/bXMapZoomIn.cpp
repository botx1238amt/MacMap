//----------------------------------------------------------------------------
// File : bXMapZoomIn.cpp
// Project : MacMap
// Purpose : C++ source file : XMap class, zoom in
// Author : Benoit Ogier, benoit.ogier@macmap.com
//
// Copyright (C) 1997-2018 Carte Blanche Conseil.
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
// 19/01/2005 creation.
//----------------------------------------------------------------------------

#include "bXMapZoomIn.h"

// ---------------------------------------------------------------------------
// Constructeur
// ------------
bXMapZoomIn::bXMapZoomIn(bGenericXMLBaseElement* elt, bGenericMacMapApp* gapp, CFBundleRef bndl) 
			:bStdXMap(elt,gapp,bndl){
	setclassname("zoomin");
}

// ---------------------------------------------------------------------------
// Destructeur
// -----------
bXMapZoomIn::~bXMapZoomIn(){
}

// ---------------------------------------------------------------------------
// Constructeur
// ------------
bGenericXMLBaseElement* bXMapZoomIn::create(bGenericXMLBaseElement* elt){
	return(new bXMapZoomIn(elt,_gapp,elt->getbundle()));
}

// ---------------------------------------------------------------------------
// 
// ------------
bool bXMapZoomIn::process(int msg, void* prm){
	if(	(msg!=kExtProcessCallFromIntf)		&&
		(msg!=kExtProcessCallWithXMLTree)	){
		return(false);
	}
	if(_gapp->scaleMgr()->set_current(_gapp->scaleMgr()->get_current()-1)){
		if(_gapp->selMgr()->count()>0){
bGenericGeoElement* o;
			_gapp->selMgr()->elements()->get(1,&o);
			if(o){
i2dvertex	vx;
ivx_rect	vr;
				o->getBounds(&vr);
				ivr_mid(&vr,&vx);
				_gapp->mapIntf()->setScreenCenter(vx);
			}		
		}
 	}
    return(true);
}

// ---------------------------------------------------------------------------
// 
// ------------
bool bXMapZoomIn::edit(void* prm){
	return(process(kExtProcessCallFromIntf,prm));
}

