INCLUDES = -I$(top_srcdir)/src  -I$(top_builddir)/src -DPREFIX=\"@prefix@\"
SUBDIRS = SceneManagers authoring environment data sounddefinitions scripting widgets
#carpenter jesus ogreopcode

noinst_LIBRARIES = libEmberOgre.a



libEmberOgre_a_SOURCES = \
	authoring/DetachedEntity.cpp authoring/EntityMoveAdjuster.cpp \
	authoring/EntityMoveManager.cpp authoring/EntityMover.cpp authoring/EntityMoverBase.cpp authoring/EntityRecipe.cpp authoring/EntityRecipeManager.cpp authoring/GUIAdapter.cpp \
	authoring/GUIAdapterBindings.cpp authoring/MaterialEditor.cpp authoring/MovementAdapter.cpp authoring/Polygon.cpp authoring/PolygonPoint.cpp \
	authoring/PolygonPointMovement.cpp authoring/PolygonPointMover.cpp authoring/PolygonPointPickListener.cpp \
	authoring/PolygonPointUserObject.cpp authoring/PolygonRenderer.cpp authoring/XMLEntityRecipeSerializer.cpp authoring/SnapToMovement.cpp \
	authoring/AuthoringHandler.cpp authoring/AuthoringManager.cpp authoring/AuthoringVisualization.cpp authoring/AuthoringVisualizationCollisionDetector.cpp \
	authoring/AuthoringVisualizationMover.cpp authoring/AuthoringMoverConnector.cpp authoring/RawTypeInfoRepository.cpp authoring/AtlasObjectDecoder.cpp \
	authoring/SimpleEntityVisualization.cpp authoring/EntityMaker.cpp \
\
	lod/LodLevelManager.cpp \
\
	camera/MainCamera.cpp camera/CameraMountBase.cpp camera/FirstPersonCameraMount.cpp camera/Recorder.cpp camera/ThirdPersonCameraMount.cpp \
	camera/CameraSettings.cpp \
	environment/CaelumEnvironment.cpp environment/CaelumSky.cpp environment/CaelumSun.cpp \
	environment/EmberEntityLoader.cpp environment/Environment.cpp environment/Foliage.cpp environment/FoliageBase.cpp environment/FoliageLayer.cpp \
	environment/FoliageLoader.cpp environment/Forest.cpp environment/GrassFoliage.cpp environment/LensFlare.cpp \
	environment/ShrubberyFoliage.cpp environment/SimpleEnvironment.cpp environment/SimpleWater.cpp environment/Sun.cpp environment/Tree.cpp environment/Water.cpp \
	environment/OceanRepresentation.cpp environment/OceanAction.cpp environment/SimpleWaterCollisionDetector.cpp \
	environment/ExclusiveImposterPage.cpp environment/WorldRepresentation.cpp environment/WorldAction.cpp \
	environment/FoliageDetailManager.cpp \
	gui/ActiveWidgetHandler.cpp gui/CursorWorldListener.cpp \
\
	lod/EmberOgreMesh.cpp lod/EmberOgreMeshManager.cpp lod/EmberOgreRoot.cpp lod/LodDefinition.cpp lod/LodDefinitionManager.cpp lod/LodManager.cpp lod/OgreSmallVector.cpp lod/ProgressiveMeshGenerator.cpp lod/QueuedProgressiveMeshGenerator.cpp lod/XMLLodDefinitionSerializer.cpp lod/PMInjectorSignaler.cpp \
	lod/ScaledPixelCountLodStrategy.cpp \
\
	mapping/EmberEntityMappingManager.cpp mapping/XMLEntityMappingDefinitionSerializer.cpp \
\
	model/Action.cpp model/AnimationSet.cpp model/Model.cpp \
	model/ModelBackgroundLoader.cpp model/ModelDefinition.cpp model/ModelDefinitionAtlasComposer.cpp \
	model/ModelDefinitionManager.cpp model/ModelPart.cpp model/ParticleSystem.cpp model/ParticleSystemBinding.cpp model/SubModel.cpp \
	model/SubModelPart.cpp model/XMLModelDefinitionSerializer.cpp model/ModelRepresentation.cpp \
	model/ModelRepresentationManager.cpp model/ModelMount.cpp model/ModelAttachment.cpp model/ModelBoneProvider.cpp model/ModelFitting.cpp model/ModelPartReactivatorVisitor.cpp\
\
	sound/SoundAction.cpp sound/SoundDefinition.cpp sound/SoundDefinitionManager.cpp \
	sound/SoundEntity.cpp sound/SoundGroup.cpp sound/SoundGroupDefinition.cpp sound/XMLSoundDefParser.cpp \
\
	terrain/Map.cpp terrain/TerrainArea.cpp \
	terrain/TerrainAreaParser.cpp terrain/TerrainEditor.cpp \
	terrain/TerrainManager.cpp terrain/TerrainInfo.cpp terrain/TerrainLayerDefinition.cpp \
	terrain/TerrainLayerDefinitionManager.cpp terrain/TerrainMod.cpp \
	terrain/TerrainPage.cpp terrain/TerrainPageGeometry.cpp \
	terrain/TerrainPageShadow.cpp terrain/TerrainPageSurface.cpp terrain/TerrainPageSurfaceCompiler.cpp \
	terrain/TerrainPageSurfaceLayer.cpp terrain/TerrainShader.cpp terrain/XMLLayerDefinitionSerializer.cpp \
	terrain/PlantAreaQuery.cpp terrain/PlantAreaQueryResult.cpp terrain/TerrainParser.cpp terrain/TerrainPageCreationTask.cpp \
	terrain/TerrainShaderUpdateTask.cpp terrain/TerrainAreaUpdateTask.cpp \
	terrain/techniques/Shader.cpp terrain/techniques/ShaderNormalMapped.cpp terrain/techniques/ShaderNormalMappedPass.cpp \
	terrain/techniques/ShaderNormalMappedPassCoverageBatch.cpp terrain/techniques/ShaderPass.cpp \
	terrain/techniques/ShaderPassCoverageBatch.cpp terrain/techniques/Simple.cpp terrain/techniques/Base.cpp \
	terrain/Image.cpp terrain/OgreImage.cpp terrain/WFImage.cpp terrain/TerrainMaterialCompilationTask.cpp \
	terrain/HeightMapSegment.cpp terrain/HeightMap.cpp terrain/Buffer.cpp terrain/HeightMapBuffer.cpp \
	terrain/HeightMapBufferProvider.cpp terrain/HeightMapUpdateTask.cpp terrain/TerrainAreaTaskBase.cpp terrain/TerrainAreaAddTask.cpp \
	terrain/TerrainAreaRemoveTask.cpp terrain/TerrainModAddTask.cpp terrain/TerrainModChangeTask.cpp terrain/TerrainModRemoveTask.cpp \
	terrain/GeometryUpdateTask.cpp terrain/TerrainModTaskBase.cpp terrain/TerrainEditorOverlay.cpp terrain/TerrainDefPoint.cpp \
	terrain/TerrainShaderParser.cpp terrain/TerrainUpdateTask.cpp terrain/ShadowUpdateTask.cpp terrain/PlantQueryTask.cpp \
	terrain/HeightMapFlatSegment.cpp terrain/Segment.cpp terrain/SegmentHolder.cpp terrain/SegmentReference.cpp terrain/SegmentManager.cpp \
	terrain/foliage/PlantPopulator.cpp terrain/foliage/ClusterPopulator.cpp terrain/foliage/Vegetation.cpp terrain/TerrainHandler.cpp \
	terrain/techniques/CompilerTechniqueProvider.cpp terrain/ITerrainObserver.h \
\
	widgets/ActionBarInput.cpp widgets/ActionBarIcon.cpp widgets/ActionBarIconSlot.cpp widgets/ActionBarIconDragDropTarget.cpp widgets/ActionBarIconManager.cpp widgets/AssetsManager.cpp widgets/ColouredListItem.cpp widgets/Compass.cpp \
	widgets/ConsoleAdapter.cpp widgets/EntityCEGUITexture.cpp widgets/EntityCreator.cpp widgets/EntityCreatorActionCreator.cpp \
	widgets/EntityCreatorHideModelAction.cpp widgets/EntityCreatorModelAction.cpp widgets/EntityCreatorMovement.cpp \
	widgets/EntityCreatorMovementBridge.cpp widgets/EntityCreatorPartAction.cpp widgets/EntityEditor.cpp widgets/EntityIcon.cpp \
	widgets/EntityIconDragDropPreview.cpp widgets/EntityIconDragDropTarget.cpp widgets/EntityIconManager.cpp widgets/EntityIconSlot.cpp widgets/Help.cpp widgets/IconBar.cpp \
	widgets/IconBase.cpp widgets/IngameChatWidget.cpp widgets/InspectWidget.cpp widgets/ListHolder.cpp \
	widgets/LoadingBar.cpp widgets/EntityCreatorTypeHelper.cpp widgets/MeshInfoProvider.cpp widgets/MeshPreview.cpp widgets/ModelRenderer.cpp \
	widgets/MovableObjectRenderer.cpp widgets/OgreEntityRenderer.cpp widgets/QuaternionAdapter.cpp widgets/QuickHelp.cpp widgets/QuickHelpCursor.cpp widgets/Quit.cpp widgets/ServerWidget.cpp widgets/HelpMessage.cpp \
	widgets/StackableContainer.cpp widgets/Vector3Adapter.cpp widgets/Widget.cpp widgets/WidgetDefinitions.cpp widgets/WidgetPool.cpp widgets/AtlasHelper.cpp widgets/ModelEditHelper.cpp \
	widgets/EntityTextureManipulator.cpp \
	widgets/icons/Icon.cpp widgets/icons/IconImageStore.cpp widgets/icons/IconManager.cpp \
	widgets/icons/IconRenderer.cpp widgets/icons/IconStore.cpp \
	widgets/adapters/ListBinder.cpp widgets/adapters/atlas/AdapterFactory.cpp widgets/adapters/atlas/AreaAdapter.cpp \
	widgets/adapters/atlas/CustomAdapter.cpp widgets/adapters/atlas/ListAdapter.cpp widgets/adapters/atlas/MapAdapter.cpp widgets/adapters/atlas/NumberAdapter.cpp widgets/adapters/atlas/OrientationAdapter.cpp \
	widgets/adapters/atlas/PolygonAdapter.cpp widgets/adapters/atlas/Position2DAdapter.cpp widgets/adapters/atlas/PositionAdapter.cpp widgets/adapters/atlas/SizeAdapter.cpp \
	widgets/adapters/atlas/StaticAdapter.cpp widgets/adapters/atlas/TerrainModAdapter.cpp \
	widgets/adapters/eris/TypeTreeAdapter.cpp widgets/adapters/ogre/ResourceListAdapter.cpp widgets/representations/LayoutHelper.cpp widgets/TexturePair.cpp widgets/EntityTooltip.cpp \
	widgets/EntityCreatorCreationInstance.cpp widgets/adapters/ValueTypeHelper.cpp \
\
	Avatar.cpp AvatarCameraWarper.cpp \
	MovementController.cpp AvatarLogger.cpp AvatarTerrainCursor.cpp \
	EmberEntity.cpp EmberEntityActionCreator.cpp \
	EmberEntityFactory.cpp EmberEntityHideModelAction.cpp EmberEntityModelAction.cpp \
	EmberEntityPartAction.cpp EmberEntityUserObject.cpp EmberOgre.cpp EmberOgreFileSystem.cpp \
	EntityWorldPickListener.cpp GUICEGUIAdapter.cpp GUIManager.cpp \
	MediaUpdater.cpp MeshCollisionDetector.cpp MeshSerializerListener.cpp \
	MotionManager.cpp OgreInfo.cpp OgreLogObserver.cpp OgreResourceLoader.cpp \
	OgreResourceProvider.cpp OgreWindowProvider.cpp OgreSetup.cpp NodeAttachment.cpp \
	ShaderManager.cpp ShaderDetailManager.cpp ShadowCameraSetup.cpp ShadowDetailManager.cpp SimpleRenderContext.cpp RenderDistanceManager.cpp AutoGraphicsLevelManager.cpp \
	XMLHelper.cpp WorldAttachment.cpp NodeController.cpp \
	DelegatingNodeController.cpp AvatarAttachmentController.cpp HiddenAttachment.cpp \
	AttachmentBase.cpp AvatarCameraMotionHandler.cpp FreeFlyingCameraMotionHandler.cpp SceneNodeProvider.cpp \
	EntityObserverBase.cpp TerrainPageDataProvider.cpp Scene.cpp ForestRenderingTechnique.cpp World.cpp \
	Screen.cpp ShapeVisual.cpp TerrainEntityManager.cpp OgreConfigurator.cpp CompositionAction.cpp GraphicalChangeAdapter.cpp
	
# OpcodeCollisionDetector.cpp  OpcodeCollisionDetectorVisualizer.cpp
confdir = $(sysconfdir)/ember
dist_conf_DATA = ogre.cfg resources.cfg terrain.cfg


noinst_HEADERS = \
	authoring/DetachedEntity.h authoring/EntityMoveAdjuster.h authoring/EntityMoveManager.h \
	authoring/EntityMover.h authoring/EntityMoverBase.h authoring/EntityRecipe.h authoring/EntityRecipeManager.h authoring/GUIAdapter.h authoring/GUIAdapterBindings.h \
	authoring/IMovementBridge.h authoring/IPolygonPositionProvider.h authoring/MaterialEditor.h authoring/MovementAdapter.h authoring/Polygon.h \
	authoring/PolygonPoint.h authoring/PolygonPointMovement.h authoring/PolygonPointMover.h authoring/PolygonPointPickListener.h \
	authoring/PolygonPointUserObject.h authoring/PolygonRenderer.h authoring/XMLEntityRecipeSerializer.h authoring/SnapToMovement.h \
	authoring/AuthoringHandler.h authoring/AuthoringManager.h authoring/AuthoringVisualization.h authoring/AuthoringVisualizationCollisionDetector.h \
	authoring/AuthoringVisualizationMover.h authoring/AuthoringMoverConnector.h authoring/RawTypeInfoRepository.h authoring/AtlasObjectDecoder.h \
	authoring/SimpleEntityVisualization.h authoring/EntityMaker.h \
\
	lod/LodLevelManager.h \
\
	camera/MainCamera.h camera/CameraMountBase.h camera/FirstPersonCameraMount.h camera/Recorder.h camera/ThirdPersonCameraMount.h camera/ICameraMount.h \
	camera/CameraSettings.h \
\
	environment/CaelumEnvironment.h environment/CaelumSky.h environment/CaelumSun.h \
	environment/EmberEntityLoader.h environment/Environment.h environment/Foliage.h environment/FoliageBase.h environment/FoliageLayer.h environment/FoliageLoader.h \
	environment/Forest.h environment/GrassFoliage.h environment/LensFlare.h environment/ShrubberyFoliage.h environment/FoliageDetailManager.h \
	environment/SimpleEnvironment.h environment/SimpleWater.h environment/Sun.h environment/Tree.h environment/Water.h environment/OceanRepresentation.h \
	environment/OceanAction.h environment/SimpleWaterCollisionDetector.h environment/ExclusiveImposterPage.h environment/IEnvironmentProvider.h \
	environment/WorldRepresentation.h environment/WorldAction.h \
\
	gui/ActiveWidgetHandler.h gui/CursorWorldListener.h \
\
	lod/EmberOgreMesh.h lod/EmberOgreMeshManager.h lod/EmberOgreRoot.h lod/LodDefinition.h lod/LodDefinitionManager.h lod/LodManager.h lod/OgreSmallVector.h lod/ProgressiveMeshGenerator.h lod/QueuedProgressiveMeshGenerator.h lod/XMLLodDefinitionSerializer.h  lod/PMInjectorSignaler.h lod/LodConfig.h  \
	lod/ScaledPixelCountLodStrategy.h \
\
	mapping/EmberEntityMappingManager.h mapping/XMLEntityMappingDefinitionSerializer.h \
\
	model/Action.h model/AnimationSet.h model/Model.h model/ModelBackgroundLoader.h \
	model/ModelDefinition.h model/ModelDefinitionAtlasComposer.h model/ModelDefinitionManager.h model/ModelPart.h \
	model/ParticleSystem.h model/ParticleSystemBinding.h model/SubModel.h model/SubModelPart.h \
	model/XMLModelDefinitionSerializer.h model/ModelRepresentation.h model/ModelRepresentationManager.h \
	model/ModelMount.h model/ModelAttachment.h model/ModelBoneProvider.h model/ModelFitting.h model/ModelPartReactivatorVisitor.h \
\
	sound/SoundAction.h sound/SoundDefinition.h sound/SoundDefinitionManager.h sound/SoundEntity.h \
	sound/SoundGroup.h sound/SoundGroupDefinition.h sound/XMLSoundDefParser.h \
\
	terrain/ISceneManagerAdapter.h terrain/ITerrainPageBridge.h terrain/Map.h terrain/TerrainArea.h \
	terrain/TerrainAreaParser.h terrain/TerrainEditor.h terrain/TerrainManager.h terrain/TerrainInfo.h terrain/TerrainLayerDefinition.h terrain/TerrainLayerDefinitionManager.h \
	terrain/TerrainMod.h terrain/TerrainPage.h terrain/TerrainPageGeometry.h terrain/TerrainPageShadow.h terrain/TerrainPageSurface.h \
	terrain/TerrainPageSurfaceCompiler.h terrain/TerrainPageSurfaceLayer.h \
	terrain/TerrainShader.h terrain/XMLLayerDefinitionSerializer.h terrain/PlantAreaQuery.h  terrain/PlantAreaQueryResult.h terrain/TerrainParser.h \
	terrain/TerrainPageCreationTask.h terrain/Types.h terrain/TerrainAreaUpdateTask.h \
	terrain/TerrainShaderUpdateTask.h \
	terrain/techniques/Shader.h terrain/techniques/ShaderNormalMapped.h terrain/techniques/ShaderNormalMappedPass.h \
	terrain/techniques/ShaderNormalMappedPassCoverageBatch.h terrain/techniques/ShaderPass.h \
	terrain/techniques/ShaderPassCoverageBatch.h terrain/techniques/Simple.h terrain/techniques/Base.h \
	terrain/Image.h terrain/OgreImage.h terrain/WFImage.h terrain/TerrainMaterialCompilationTask.h \
	terrain/HeightMapSegment.h terrain/HeightMap.h terrain/Buffer.h terrain/HeightMapBuffer.h \
	terrain/HeightMapBufferProvider.h terrain/HeightMapUpdateTask.h terrain/TerrainAreaTaskBase.h terrain/TerrainAreaAddTask.h \
	terrain/TerrainAreaRemoveTask.h terrain/TerrainModAddTask.h terrain/TerrainModChangeTask.h terrain/TerrainModRemoveTask.h \
	terrain/GeometryUpdateTask.h terrain/TerrainModTaskBase.h terrain/TerrainEditorOverlay.h terrain/TerrainDefPoint.h \
	terrain/TerrainShaderParser.h terrain/TerrainUpdateTask.h terrain/ShadowUpdateTask.h terrain/PlantQueryTask.h \
	terrain/HeightMapFlatSegment.h terrain/IHeightMapSegment.h terrain/Segment.h terrain/SegmentHolder.h terrain/SegmentReference.h \
	terrain/SegmentManager.h terrain/PlantInstance.h terrain/foliage/PlantPopulator.h terrain/foliage/ClusterPopulator.h terrain/foliage/Vegetation.h \
	terrain/TerrainHandler.h terrain/ICompilerTechniqueProvider.h terrain/techniques/CompilerTechniqueProvider.h \
\
	widgets/ActionBarInput.h widgets/ActionBarIcon.h widgets/ActionBarIconSlot.h widgets/ActionBarIconDragDropTarget.h widgets/ActionBarIconManager.h \
	widgets/AssetsManager.h widgets/ColouredListItem.h widgets/Compass.h widgets/ConsoleAdapter.h \
	widgets/EntityCEGUITexture.h widgets/EntityCreator.h widgets/EntityCreatorActionCreator.h \
	widgets/EntityCreatorHideModelAction.h widgets/EntityCreatorModelAction.h widgets/EntityCreatorMovement.h \
	widgets/EntityCreatorMovementBridge.h widgets/EntityCreatorPartAction.h widgets/EntityEditor.h widgets/EntityIcon.h \
	widgets/EntityIconDragDropPreview.h widgets/EntityIconDragDropTarget.h widgets/EntityIconManager.h widgets/EntityIconSlot.h widgets/GenericIconUserData.h widgets/Help.h widgets/IconBar.h widgets/IconBase.h \
	widgets/IngameChatWidget.h widgets/InspectWidget.h widgets/ListHolder.h widgets/LoadingBar.h \
	widgets/EntityCreatorTypeHelper.h widgets/MeshPreview.h widgets/MeshInfoProvider.h widgets/ModelRenderer.h widgets/MovableObjectRenderer.h \
	widgets/OgreEntityRenderer.h widgets/QuaternionAdapter.h widgets/QuickHelp.h widgets/QuickHelpCursor.h widgets/Quit.h widgets/ServerWidget.h widgets/StackableContainer.h  widgets/HelpMessage.h \
	widgets/Vector3Adapter.h widgets/Widget.h widgets/WidgetDefinitions.h widgets/WidgetPool.h widgets/AtlasHelper.h widgets/ModelEditHelper.h \
	widgets/EntityTextureManipulator.h \
	widgets/icons/Icon.h widgets/icons/IconImageStore.h widgets/icons/IconManager.h widgets/icons/IconRenderer.h \
	widgets/icons/IconStore.h \
	widgets/adapters/ListBinder.h widgets/adapters/AdapterBase.h widgets/adapters/ComboboxAdapter.h widgets/adapters/GenericPropertyAdapter.h widgets/adapters/ValueTypeHelper.h \
	widgets/adapters/atlas/AdapterBase.h widgets/adapters/atlas/AdapterFactory.h widgets/adapters/atlas/AreaAdapter.h widgets/adapters/atlas/CustomAdapter.h \
	widgets/adapters/atlas/ListAdapter.h widgets/adapters/atlas/MapAdapter.h widgets/adapters/atlas/NumberAdapter.h widgets/adapters/atlas/OrientationAdapter.h widgets/adapters/atlas/PolygonAdapter.h \
	widgets/adapters/atlas/Position2DAdapter.h widgets/adapters/atlas/PositionAdapter.h widgets/adapters/atlas/SizeAdapter.h widgets/adapters/atlas/StaticAdapter.h widgets/adapters/atlas/StringAdapter.h \
	widgets/adapters/atlas/TerrainModAdapter.h \
	widgets/adapters/eris/TypeTreeAdapter.h widgets/adapters/ogre/ResourceListAdapter.h widgets/TexturePair.h widgets/EntityTooltip.h \
	widgets/representations/CheckboxRepresentation.h widgets/representations/EditboxRepresentation.h widgets/representations/RepresentationBase.h \
	widgets/representations/SliderRepresentation.h widgets/representations/ComboboxRepresentation.h widgets/representations/LayoutHelper.h widgets/representations/SingleAdapterRepresentationBase.h \
	widgets/EntityCreatorCreationInstance.h \
\
	Avatar.h AvatarCameraWarper.h MovementController.h \
	AvatarLogger.h AvatarTerrainCursor.h \
	EmberEntity.h EmberEntityActionCreator.h EmberEntityFactory.h \
	EmberEntityHideModelAction.h EmberEntityModelAction.h EmberEntityPartAction.h \
	EmberEntityUserObject.h EmberOgre.h EmberOgreFileSystem.h EmberOgrePrerequisites.h \
	EntityWorldPickListener.h GUICEGUIAdapter.h GUIManager.h \
	IWorldPickListener.h Convert.h MediaUpdater.h MeshCollisionDetector.h \
	MeshSerializerListener.h MotionManager.h MousePicker.h OgreIncludes.h OgreInfo.h \
	OgreLogObserver.h OgreResourceLoader.h OgreResourceProvider.h OgreWindowProvider.h OgreSetup.h \
	ShaderManager.h ShaderDetailManager.h ShadowCameraSetup.h ShadowDetailManager.h RenderDistanceManager.h AutoGraphicsLevelManager.h\
	SimpleRenderContext.h XMLHelper.h IGraphicalRepresentation.h \
	IEntityAttachment.h  WorldAttachment.h NodeAttachment.h IMovable.h IAnimated.h \
	IEntityControlDelegate.h NodeController.h DelegatingNodeController.h \
	AvatarAttachmentController.h IMovementProvider.h ICameraMotionHandler.h HiddenAttachment.h \
	AttachmentBase.h AvatarCameraMotionHandler.h FreeFlyingCameraMotionHandler.h \
	ICollisionDetector.h INodeProvider.h SceneNodeProvider.h IVisualizable.h IEntityVisitor.h \
	EntityObserverBase.h TerrainPageDataProvider.h ILightning.h Scene.h ForestRenderingTechnique.h \
	ISceneRenderingTechnique.h World.h EmberOgreSignals.h Screen.h ShapeVisual.h TerrainEntityManager.h \
	OgreConfigurator.h CompositionAction.h GraphicalChangeAdapter.h
#OpcodeCollisionDetector.h OpcodeCollisionDetectorVisualizer.h
