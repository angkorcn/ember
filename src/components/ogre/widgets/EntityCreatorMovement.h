//
// C++ Interface: EntityCreatorMovement
//
// Description: 
//
//
// Author: Erik Hjortsberg <erik.hjortsberg@gmail.com>, (C) 2009
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.//
//
#ifndef EMBEROGRE_GUIENTITYCREATORMOVEMENT_H
#define EMBEROGRE_GUIENTITYCREATORMOVEMENT_H

#include "EntityCreatorMovementBridge.h"
#include "components/ogre/manipulation/MovementAdapter.h"


namespace EmberOgre {

namespace Gui {

/**
@brief A movement of a DetachedEntity, beloging to the EntityCreator.
@author Erik Hjortsberg <erik.hjortsberg@gmail.com>
*/
class EntityCreatorMovement{
public:
    /**
     * @brief Ctor.
     * @param entityCreator The owning entity creator instance.
     * @param entity The entity which should be moved.
     * @param node The node to which the entity belongs.
     */
    EntityCreatorMovement(EntityCreator& entityCreator, DetachedEntity& entity, Ogre::SceneNode* node);

    /**
     * @brief Dtor.
     */
    ~EntityCreatorMovement();
    
protected:
	
	/**
	 * @brief When the point is moved, an instance of this will be created and the movement handled by it.
	 */
	EntityCreatorMovementBridge mMovementBridge;
	
	/**
	 * @brief Main adapter which will intercept mouse and keyboard input to allow for movement of this point.
	 */
	MovementAdapter mMoveAdapter;
};

}

}

#endif