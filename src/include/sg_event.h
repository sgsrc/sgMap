#pragma once

#include "ogr_api.h"

#ifndef SWIGJAVA
#ifdef DEBUG
typedef struct OGRFeatureHS OGRFeatureShadow;
typedef struct OGRGeometryHS OGRGeometryShadow;
typedef struct OGRAnnotationLabelHS OGRAnnotationLabelShadow;
typedef struct OGRFeatureLayerHS OGRFeatureLayerShadow;
#else
typedef void OGRFeatureShadow;
typedef void OGRGeometryShadow;
typedef void OGRAnnotationLabelShadow;
typedef void OGRFeatureLayerShadow;
#endif
#endif

class Event {
public:
    Event() : m_nRefCount(0) {};
	virtual ~Event() {};
    
	virtual void OnEventDestroy()			{};
    int     Reference()                     { return ++m_nRefCount; };
	int     Dereference()                   { return --m_nRefCount; };
	void    Release()                       { if(Dereference() < 1)  delete this; };
	int		GetRefCount()					{ return m_nRefCount; };

private:
	int		m_nRefCount;
};

class MapEvent : public Event
{
public:
	MapEvent() {};
	virtual ~MapEvent() {};

	// draw event
	virtual void Draw() {};
	virtual void Drawed() {};
	virtual void Paint() {};

	// snap event 
	virtual void Snap(ScreenModeEnumH eScreenMode, OGRFeatureShadow *poFeature, OGRGeometryShadow *poGeometry, int nVertexIdx, SnapModeEnumH eSnapType) {};
	virtual void Snaped(ScreenModeEnumH eScreenMode, OGRFeatureShadow *poFeature, OGRGeometryShadow *poGeometry, int nVertexIdx, SnapModeEnumH eSnapType) {}; // did not fire
	virtual void SnapOut() {};

	// feature event
	virtual void FeatureOver(OGRFeatureShadow *poFeature, OGRGeometryShadow *poGeometry, OGRAnnotationLabelShadow *poText) {};
	virtual void FeatureOut(OGRFeatureShadow *poFeature, OGRGeometryShadow *poGeometry, OGRAnnotationLabelShadow *poText) {};	// did not fire

	// mouse event
	virtual void Click(int x, int y) {};
	virtual void RightClick(int x, int y) {};
	virtual void DoubleClick(int x, int y) {};
	virtual void TouchMove(int x, int y) {};
	virtual void TouchUp(int type, int x, int y) {};
	virtual void TouchDown(int type, int x, int y) {};

	// smart event
	virtual void LongClick(int x, int y) {};// did not fire

	// pan/zoom event
	virtual void MapMove() {};
	virtual void MapMoved() {};
	virtual void MapExtendChange() {};
	virtual void MapExtendChanged() {};
	virtual void MapReSized(int width, int height) {};

	// sensor event
	virtual void SensorAdded(SensorTypeEnumH) {};
	virtual void SensorRemoved(SensorTypeEnumH) {};

	// export(capture)
	virtual void Exported() {};
	// print(include print export)
	virtual void Printed() {};

	// map mode event
	virtual void ScreenModeChanged(ScreenModeEnumH eScreenModeH) {};
	virtual void SelectModeChanged(SpatialOperatorEnumH eSelectModeH) {};
	virtual void SnapModeChanged() {};
	virtual void MapControlChanged(int nCtrl) {};
	virtual void SyncMoveModeChanged() {};

	// map3d event
	virtual void Feature3DSelected(OGRFeatureLayerShadow *poFeature, int nFID) {};
	virtual void Feature3DDeSelected() {};
};

class FeatureCanvasEvent : public Event
{
public:
	FeatureCanvasEvent() {};
	virtual ~FeatureCanvasEvent() {};

	// find(select) event
	virtual void FeatureSelected() {};
	virtual void FeatureDeSelected() {};

	// feature edit event
	virtual void FeatureInsert() {};
	virtual void FeatureInserted(OGRFeatureShadow *poFeature) {};
	virtual void FeatureDelete() {};
	virtual void FeatureDeleted(OGRFeatureShadow *poFeature) {};
	virtual void FeaturePreUpdate(OGRFeatureShadow *poFeature) {};
	virtual void FeatureUpdate(OGRFeatureShadow *poFeature) {};
	virtual void FeatureUpdated(OGRFeatureShadow *pofromFeature, OGRFeatureShadow *potoFeature) {};

	// transaction event
	virtual void PreCommit() {};
	virtual void Committed() {};
	virtual void PreUndo() {};
	virtual void Undid() {};

	// layer event
	virtual void LayerAdded(OGRFeatureLayerShadow *poFtLayer) {};
	virtual void LayerDelete(OGRFeatureLayerShadow *poFtLayer) {};
	virtual void LayerDeleted() {};
	virtual void LayerOrderChanged(OGRFeatureLayerShadow *poFtLayer) {};

	virtual void LayerVisibleChanged(OGRFeatureLayerShadow *poFtLayer, bool on) {};
	virtual void LayerSelectableChanged(OGRFeatureLayerShadow *poFtLayer, bool on) {};
	virtual void LayerEditableChanged(OGRFeatureLayerShadow *poFtLayer, bool on) {};
	virtual void LayerActivated(OGRFeatureLayerShadow *poFtLayer) {};

	virtual void LayerStyleChanged(OGRFeatureLayerShadow *poFtLayer) {};
	virtual void LayerAnnotationChanged(OGRFeatureLayerShadow *poFtLayer) {};
	virtual void LayerTypeStyleChanged(OGRFeatureLayerShadow *poFtLayer) {};

	virtual void LayerExported(OGRFeatureLayerShadow *poFtLayer) {};

	virtual void LayerAttributeChange(OGRFeatureLayerShadow *poFtLayer) {};
	virtual void LayerAttributeChanged(OGRFeatureLayerShadow *poFtLayer) {};
	virtual void LayerDisplayNameChanged(OGRFeatureLayerShadow *poFtLayer) {};

	virtual void WorkspaceChanged() {};
};

class SensorEvent : public Event
{
public:
	SensorEvent() {};
	virtual ~SensorEvent() {};
	virtual void*	GetListener()	{ return 0; }

	// sensor event
    virtual void SensingValueChanged() {};
	virtual void ProviderDisabled() {};
	virtual void ProviderEnabled() {};
    virtual void StatusChanged() {};
};
