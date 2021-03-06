/*
 * Copyright (c) 2013 Peter Szucs <peter.szucs.dev@gmail.com>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef EMBEROGREMESH_H
#define EMBEROGREMESH_H

#include "ProgressiveMeshGenerator.h"

#include <OgreMesh.h>

namespace Ember
{
namespace OgreView
{
namespace Lod
{

/**
 * @brief Allows to customize Ogre::Mesh.
 *
 * This is a temporary solution, until Ogre 1.9 is released.
 */
class EmberOgreMesh :
	public Ogre::Mesh
{
public:
	EmberOgreMesh(Ogre::ResourceManager* creator, const Ogre::String& name, Ogre::ResourceHandle handle,
	              const Ogre::String& group, bool isManual, Ogre::ManualResourceLoader* loader);

	/**
	 * @brief This will start the Lod loading.
	 */
	void loadImpl();

	/**
	 * @brief It will configure Lod usage based on a LodConfig.
	 */
	void _configureMeshLodUsage(const LodConfig& lodConfigs);

};

}
}
}
#endif // ifndef EMBEROGREMESH_H
