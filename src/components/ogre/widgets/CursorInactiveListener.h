/*
 Copyright (C) 2011 Erik Ogenvik

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

#ifndef CURSORINACTIVELISTENER_H_
#define CURSORINACTIVELISTENER_H_

#include "components/ogre/IWorldPickListener.h"
#include "services/input/Input.h"

#include <CEGUIEvent.h>
#include <sigc++/trackable.h>

namespace CEGUI
{
class Window;
}

namespace Ember
{
class MainLoopController;

namespace OgreView
{
class MousePicker;
namespace Gui
{

/**
 * @author Erik Ogenvik <erik@ogenvik.org>
 *
 *
 */
class CursorInactiveListener: public sigc::trackable
{
public:
	CursorInactiveListener(MainLoopController& mainLoopController, CEGUI::Window& mainWindow, MousePicker& mousePicker);
	virtual ~CursorInactiveListener();

protected:

	CEGUI::Window& mMainWindow;
	MousePicker& mMousePicker;

	bool mHoverEventSent;

	long long mCursorLingerStart;

	CEGUI::Event::Connection mMouseMovesConnection;

	/**
	 * @brief The threshold, in milliseconds, for when releasing a pressed mouse button is considered a "click".
	 *
	 * If the mouse button is pressed longer than this, it's considered as a "press" event.
	 */
	unsigned int mClickThresholdMilliseconds;

	/**
	 * @brief Keeps track of when any mouse button press event started.
	 *
	 * This is used to determine whether a mouse "press" or "click" event should be emitted.
	 */
	long long mMousePressedStart;

	void afterEventProcessing(float timeslice);

	bool windowMouseEnters(const CEGUI::EventArgs& args);
	bool windowMouseLeaves(const CEGUI::EventArgs& args);
	bool windowMouseMoves(const CEGUI::EventArgs& args);
	bool windowMouseButtonDown(const CEGUI::EventArgs& args);
	bool windowMouseButtonUp(const CEGUI::EventArgs& args);
	bool windowMouseDoubleClick(const CEGUI::EventArgs& args);

	void sendHoverEvent();

	/**
	 * @brief Listens to the mouse button being released.
	 * @param button
	 * @param inputMode
	 */
	void input_MouseButtonReleased(Input::MouseButton button, Input::InputMode inputMode);

	/**
	 * @brief Sends a world click event to any listeners.
	 *
	 * This is called when the user either has clicked in the world, or pressed and held the mouse button.
	 * @param pickType The kind of picking type.
	 * @param pixelPosition The position, in pixels, of the mouse cursor.
	 */
	void sendWorldClick(MousePickType pickType, const CEGUI::Vector2& pixelPosition);

	const bool isInGUIMode() const;

};

}
}
}
#endif /* CURSORINACTIVELISTENER_H_ */