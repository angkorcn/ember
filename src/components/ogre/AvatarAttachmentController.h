/*
 Copyright (C) 2009 Erik Hjortsberg <erik.hjortsberg@gmail.com>

 This program is free software; you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation; either version 2 of the License, or
 (at your option) any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program; if not, write to the Free Software
 Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#ifndef AVATARATTACHMENTCONTROLLER_H_
#define AVATARATTACHMENTCONTROLLER_H_

#include "components/ogre/IAttachmentControlDelegate.h"
#include <string>
#include <wfmath/point.h>
#include <wfmath/quaternion.h>

namespace EmberOgre
{

class Avatar;

class AvatarAttachmentController : public IAttachmentControlDelegate
{
public:
	AvatarAttachmentController(Avatar& avatar);
	virtual ~AvatarAttachmentController();

	virtual const WFMath::Point<3>& getPosition() const;
	virtual const WFMath::Quaternion& getOrientation() const;

private:

	Avatar& mAvatar;
	mutable WFMath::Point<3> mPosition;
	mutable WFMath::Quaternion mOrientation;
};

}

#endif /* AVATARATTACHMENTCONTROLLER_H_ */