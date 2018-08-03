#ifndef _SG_WIDGET_H_INCLUDED
#define _SG_WIDGET_H_INCLUDED

#include "ogr_api.h"
#include "gdal.h"
#include <cpl_string.h>
#include <stdarg.h>

class SGWidget
{
public:
	SGWidget(void* hwnd = 0);

public:
	virtual void*	GetUiObject(OGRWidgetH obj)						{ return obj; }

	virtual void	Initialize(ULONG_PTR handle);
	virtual void	ReSize(long x, long y, long width, long height);
	virtual void	Destroy();
	virtual void	AddWidget(OGRWidgetH);
	virtual void	AddWidgetByLayout(OGRWidgetH, int, int)			{}
	virtual void	SetCanvas(OGRCanvasH hCanvas)					{ m_hCanvas = hCanvas; }
	virtual void	SetFeatureCanvas(OGRFeatureCanvasH hFtCanvas)	{ m_hFtCanvas = hFtCanvas; }
	virtual void	SetFeatureLayer(OGRFeatureLayerH hFtLayer)		{ m_hFtLayer = hFtLayer; if(m_hFtLayer != 0) SetLayer(OGR_FL_GetLayer(m_hFtLayer));}
	virtual void	SetLayer(OGRLayerH hLayer)						{ m_hLayer = hLayer; }
	virtual void	SetFlag(const char* pszFlag)					{ m_strFlag = pszFlag; }
	virtual void	Raise()											{}

    // embeded control, not call setcanvas
	virtual OGRCanvasH			GetCanvas()							{ return m_hCanvas; }
	virtual OGRFeatureCanvasH	GetFeatureCanvas()					{ return m_hFtCanvas; }
	virtual OGRFeatureLayerH	GetFeatureLayer()					{ return m_hFtLayer; }
	virtual OGRLayerH			GetLayer()							{ return m_hLayer; }
    virtual const char*			GetFlag()							{ return m_strFlag.c_str(); }
	virtual SystemResourceEnumH	GetWidgetType()						{ return jmRS_Default; }

	virtual int					GetWidth();
	virtual int					GetHeight();
	virtual long				GetBackColor()						{ return m_crBG; }
	virtual void				SetWidth(int width);
	virtual void				SetHeight(int height);
	virtual void				SetBackColor(long crColor)			{ m_crBG = crColor; }

	virtual void				SetLocation(int x, int y);
	virtual int					GetLocX();
	virtual int					GetLocY();
	virtual void				SetVisible(bool bValue);
	
	void						SetFeatureCanvasFromApp(OGRCanvasH);
	bool						IsExternalUiKit()					{ return m_bExtUiKit; }
	void						SetExternalUiKit(bool val)			{ m_bExtUiKit = val; }
	bool						IsSuccessAccept()					{ return m_bSucessAccept; }
	virtual void				SetQtUi(bool bVal)					{ m_bQtUi = bVal; }
	virtual bool				IsQtUi()							{ return m_bQtUi; }
	virtual void				SetQtUiObjectVisible(const char* pszObjectName, bool bValue);

protected:
	OGRCanvasH				m_hCanvas;
	OGRFeatureCanvasH		m_hFtCanvas;
	OGRFeatureLayerH		m_hFtLayer;
	OGRLayerH				m_hLayer;

	bool					m_bExtUiKit;
	bool					m_bSucessAccept;
	CPLString				m_strFlag;
	bool					m_bQtUi;
	
	long					m_crBG;
};

typedef OGRWidgetH (*GetWidgetFunc)(void*);
typedef const char* (*GetFactoryNameFunc)();
void	RegistryWidget(GetWidgetFunc, GetFactoryNameFunc);

void	RegisterWGAll();
void	RegisterWG_Framework();
void	RegisterWG_Chart();
void	RegisterWG_Graph();
void	RegisterWG_IndexMap();
void	RegisterWG_Map2DCtrl();
void	RegisterWG_FeatureAttributeTree();
void	RegisterWG_FeatureAttributeTable();
void	RegisterWG_FeatureStyle();
void	RegisterWG_FeatureTypeStyle();
void	RegisterWG_FeatureStyleEffects();
void	RegisterWG_SymbolizerWidget();
void	RegisterWG_LayerTree();
void	RegisterWG_OpenWebLayer();
void	RegisterWG_OpenDBLayer();
void	RegisterWG_CRS();
void	RegisterWG_QueryBuilder();
void	RegisterWG_FieldCalculator();
void	RegisterWG_GridColorRamp();
void	RegisterWG_Application();
void	RegisterWG_Tab();
void	RegisterWG_Dock();
void	RegisterWG_ScaleValueWidget();
void	RegisterWG_UserDefinedWidget();
void	RegisterWG_GeoprocessOp();
void	RegisterWG_GGridTerrain();
void	RegisterWG_VectorLayerEdit();
void	RegisterWG_VectorLayerExport();
void	RegisterWG_Label();
void	RegisterWG_LayerProperty();
void	RegisterWG_ExpressionBuilder();
void	RegisterWG_CoordinateInput();
void	RegisterWG_CoordinateEditor();

#define DEFINE_WIDGET_FACTORY(classname)           \
	RegistryWidget(classname::GetWindow, classname::GetFactoryName);

#endif //_SG_WIDGET_H_INCLUDED
