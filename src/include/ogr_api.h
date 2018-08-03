#ifndef OGR_API_H_INCLUDED
#define OGR_API_H_INCLUDED

#include "sg_config.h"
#include "sg_featureenum.h"
#ifndef OGR_CORE_H_INCLUDED
typedef int OGRErr;
#endif

#define CPL_DISABLE_STDCALL

#ifdef __cplusplus
#  define GEO_C_START           extern "C" {
#  define GEO_C_END             }
#else
#  define GEO_C_START
#  define GEO_C_END
#endif

#if !defined(GEO_DISABLE_DLL) && !defined(WINCOM)
#   if defined(_MSC_VER)
#       if defined(GEOAPI_IMPORT)
#           define GEO_DLL     __declspec(dllimport)
#       else
#           define GEO_DLL     __declspec(dllexport)
#       endif
#   else
#		define GEO_DLL     __attribute__ ((visibility("default")))
#   endif
#else
#		define GEO_DLL
#endif

GEO_C_START

#ifndef _DEFINED_OGRSpatialReferenceH
#define _DEFINED_OGRSpatialReferenceH

typedef void *OGRSpatialReferenceH;
typedef void *OGRCoordinateTransformationH;

#endif

typedef void *OGRGeometryH;
typedef void *OGRFeatureH;
typedef void *OGRLayerH;
typedef void *OGRLayerSourceH;
typedef void *OGREnvelopeH;
typedef void *GDALProgressFuncH;
typedef void *GDALCURLProgressFuncH;

typedef void *OGRFeatureAttrValueH;
typedef void *OGRFieldDefnH;
typedef void *OGRFeatureDefnH;
typedef void *OGRStyleTableH;
typedef void *OGRDataSourceH;
typedef void *OGRSFDriverH;
typedef void *OGRStyleMgrH;
typedef void *OGRStyleToolH;
typedef void *OGRGeomFieldDefnH;

typedef void *OGRCommonFactoryH;
typedef void *OGRDisplayFactoryH;
typedef void *OGRSpatialReferenceFactoryH;
typedef void *OGRFeatureTypeStyleFactoryH;
typedef void *OGRLayerSourceFactoryH;
typedef void *OGRGeometryFactoryH;
typedef void *OGRCoverageFactoryH;
typedef void *OGRFeatureCollectionH;
typedef void *OGRFeatureLayerH;
typedef void *OGRFeatureCollectionAttrIndexH;
typedef void *OGRFeatureCanvasH;
typedef void *OGRCanvasH;
typedef void *OGROSWindowH;
typedef void *OGRMap2DH;
typedef void *OGRMap3DH;
typedef void *OGRMapEarthH;
typedef void *OGRMapARH;
typedef void *OGREventH;
typedef void *OGRFeatureTypeStyleH;
typedef void *OGRGridTypeStyleH;
typedef void *OGRGridColorRampStyleH;
typedef void *OGRFeatureTypeStyleRuleH;
typedef void *OGRGridColorRampItemH;
typedef void *OGRColorRampListH;
typedef void *OGRQImageH;
typedef void *OGRWidgetH;
typedef void *OGRIndexMapWidgetH;
typedef void *OGRLayerTreeWidgetH;
typedef void *OGRFeatureAttributeTreeWidgetH;
typedef void *OGRFeatureAttributeTableWidgetH;
typedef void *OGRCRSWidgetH;
typedef void *OGRQueryBuilderWidgetH;
typedef void *OGRTabWidgetH;
typedef void *OGRApplicationH;
typedef void *OGRFeatureStyleWidgetH;
typedef void *OGRScaleValueWidgetH;
typedef void *OGRDockWidgetH;
typedef void *OGRInputValueWidgetH;
typedef void *OGRParameterH;
typedef void *OGRParametersH;
typedef void *OGRParameterInfoH;
typedef void *OGRGridOperationH;
typedef void *OGRGridInterpolationOpH;
typedef void *OGRGridSurfaceOpH;
typedef void *OGRGridMathOpH;
typedef void *OGRGridCoverageH;
typedef void *OGRHistogramH;
typedef void *OGRSampleDimensionH;
typedef void *OGRGridSampleDimensionH;
typedef void *OGRColorModelH;
typedef void *OGRGridCoverageProcessorH;
typedef void *OGRUtilityH;
typedef void *OGRAssetManagerH;
typedef void *OGRFeatureTypeH;
typedef void *OGRFeatureAttributeDescriptorH;
typedef void *OGRAnnotationH;
typedef void *OGRLabelH;
typedef void *OGRUserDefinedWidgetH;
typedef void *OGRChartWidgetH;
typedef void *OGRTransactionH;
typedef void *OGRAnimatorH;
typedef void *OGRGraphicH;
typedef void *OGRGraphicLabelH;
typedef void *OGRGraphicLineStringH;
typedef void *OGRGraphicPolygonH;
typedef void *OGRGraphicScaledImageH;
typedef void *OGRGraphicArcH;
typedef void *OGRGraphicIconH;
typedef void *OGRGraphicRectangleH;
typedef void *OGRAggregateGraphicH;
typedef void *OGRSensorH;
typedef void *OGRLocationSensorH;
typedef void *OGRMotionSensorH;
typedef void *OGRVideoSensorH;
typedef void *OGRMap3DCameraH;
typedef void *OGRMap3DLightH;
typedef void *OGRSymbolizerH;
typedef void *OGRPointSymbolizerH;
typedef void *OGRLineSymbolizerH;
typedef void *OGRPolygonSymbolizerH;
typedef void *OGRTextSymbolizerH;
typedef void *OGRStrokeH;
typedef void *OGRFillH;
typedef void *OGRMarkH;
typedef void *OGRFontH;
typedef void *OGRHaloH;
typedef void *OGRFeatureQueryH;
typedef void *OGRAttributeIndexH;
typedef void *OGRVectorAnalysisH;
typedef void *OGRNetworkCoverageAnalysisH;
typedef void *OGRLocationServiceH;
typedef void *OGRMessageH;
typedef void *OGRPrintLayoutWidgetH;
typedef void *OGRPrintLayoutItemH;

typedef int ScreenModeEnumH;
typedef int SpatialOperatorEnumH;
typedef int SnapModeEnumH;
typedef int ThemeMapTypeEnumH;
typedef int ParameterTypeH;
typedef int FileFormatEnumH;
typedef int SystemResourceEnumH;
typedef int MapRotateEnumH;
typedef int MapMoveEnumH;
typedef int TopoSyncMoveEnumH;
typedef int AntiAliasTypeEnumH;
typedef int TransitionModeEnumH;
typedef int TimingModeEnumH;
typedef int RepeatModeEnumH;
typedef int SensorTypeEnumH;
typedef int FeatureTypeStyleEnumH;
typedef int GridColorTypeEnumH;
typedef int ToolBarTypeEnumH;
typedef int EditActionTypeEnumH;
typedef int SymbolizerTypeEnumH;
typedef int	TapPositionEnumH;
typedef int	CanvasTypeEnumH;
typedef int DockAreaEnumH;
typedef int DockFeatureEnumH;
typedef int NetworkAlgorithmEnumH;
typedef	int	LineCapEnumH;
typedef	int	LineJoinEnumH;
typedef	int	PointLocationEnumH;
typedef int ChartTypeEnumH;
typedef int AlignPositionEnumH;
typedef int DockFeaturesEnumH;
typedef int TransactionEnumH;
typedef int SampleDimensionTypeEnumH;
typedef int ColorInterpretationEnumH;
typedef int PaletteInterpretationEnumH;
typedef int FilterTypeEnumH;
typedef int SystemKeyEnumH;
typedef int CursorEnumH;
typedef int MouseButtonTypeEnumH;
typedef int SightModeEnumH;
typedef int LabelPositionTypeEnumH;
typedef int LabelTypeEnumH;
typedef int LocationSensorTypeEnumH;
typedef int VolumeTypeEnumH;
typedef int SystemSymbolEnumH;
typedef int OGRwkbGeometryTypeEnumH;
typedef int OGRFieldTypeEnumH;

#ifndef CPL_GINT8_DEFINED
#define CPL_GINT8_DEFINED
typedef short           GInt16;
typedef unsigned short  GUInt16;
typedef unsigned char   GByte;

typedef unsigned char   GUInt8;
typedef signed char		GInt8;
#endif

#if !defined(_W64)
#if defined(_WIN32) || defined(_WIN64)
#define _W64 __w64
#else
#define _W64
#endif
#endif

#ifndef __int3264
#if defined(_WIN64)
    typedef __int64 INT_PTR, *PINT_PTR;
    typedef unsigned __int64 UINT_PTR, *PUINT_PTR;

    typedef __int64 LONG_PTR, *PLONG_PTR;
    typedef unsigned __int64 ULONG_PTR, *PULONG_PTR;

    #define __int3264   __int64
#else
    typedef _W64 int INT_PTR, *PINT_PTR;
    typedef _W64 unsigned int UINT_PTR, *PUINT_PTR;

    typedef _W64 long LONG_PTR, *PLONG_PTR;
    typedef _W64 unsigned long ULONG_PTR, *PULONG_PTR;

    #define __int3264   __int32
#endif
#endif

const char		GEO_DLL *OGR_GetLastErrorMsg();

/* GeometryFactory */
OGRGeometryH	GEO_DLL OGR_GF_CreateFromWKB(OGRGeometryFactoryH, unsigned char *, OGRSpatialReferenceH );
OGRGeometryH	GEO_DLL OGR_GF_CreateFromWKT(OGRGeometryFactoryH, const char *, OGRSpatialReferenceH );
void			GEO_DLL OGR_GF_Destroy(OGRGeometryFactoryH);

/* Geometry */
OGRGeometryH			GEO_DLL OGR_G_CreateGeometry( OGRwkbGeometryTypeEnumH );
void					GEO_DLL OGR_G_DestroyGeometry( OGRGeometryH );

int						GEO_DLL OGR_G_GetDimension( OGRGeometryH );
OGRSpatialReferenceH	GEO_DLL OGR_G_GetSpatialReference( OGRGeometryH );
void					GEO_DLL OGR_G_SetSpatialReference( OGRGeometryH, OGRSpatialReferenceH );
int						GEO_DLL OGR_G_IsEmpty( OGRGeometryH );
int						GEO_DLL OGR_G_IsSimple( OGRGeometryH );
OGRwkbGeometryTypeEnumH		GEO_DLL OGR_G_GetGeometryType( OGRGeometryH );
const char				GEO_DLL *OGR_G_GetGeometryName( OGRGeometryH );
void					GEO_DLL OGR_G_SetEmpty( OGRGeometryH );
OGRGeometryH			GEO_DLL OGR_G_Envelope( OGRGeometryH );
OGRGeometryH			GEO_DLL OGR_G_Clone( OGRGeometryH );
OGRGeometryH			GEO_DLL	OGR_G_Project( OGRGeometryH, OGRSpatialReferenceH );
void					GEO_DLL	OGR_G_Extent2D( OGRGeometryH, double *, double *, double *, double * );
int						GEO_DLL OGR_G_IsValid( OGRGeometryH );
const char				GEO_DLL *OGR_G_IsValidDetail(OGRGeometryH );

// IWks
void					GEO_DLL	OGR_G_ExportToWKB( OGRGeometryH, unsigned char* );
char					GEO_DLL	*OGR_G_ExportToWKT( OGRGeometryH );
void					GEO_DLL	OGR_G_ImportFromWKB( OGRGeometryH, unsigned char* );
void					GEO_DLL	OGR_G_ImportFromWKT( OGRGeometryH, char* );

// ISpatialRelation
int						GEO_DLL OGR_G_Equals( OGRGeometryH, OGRGeometryH );
int						GEO_DLL OGR_G_Touches( OGRGeometryH, OGRGeometryH );
int						GEO_DLL OGR_G_Contains( OGRGeometryH, OGRGeometryH );
int						GEO_DLL OGR_G_Within( OGRGeometryH, OGRGeometryH );
int						GEO_DLL OGR_G_Disjoint( OGRGeometryH, OGRGeometryH );
int						GEO_DLL OGR_G_Crosses( OGRGeometryH, OGRGeometryH );
int						GEO_DLL OGR_G_Overlaps( OGRGeometryH, OGRGeometryH );
int						GEO_DLL OGR_G_Intersects( OGRGeometryH, OGRGeometryH );

// ISpatialRelation2
int						GEO_DLL OGR_G_Relate( OGRGeometryH, OGRGeometryH, const char * );

// ISpatialOperator
double					GEO_DLL OGR_G_Distance( OGRGeometryH, OGRGeometryH );
OGRGeometryH			GEO_DLL OGR_G_Boundary( OGRGeometryH );
OGRGeometryH			GEO_DLL OGR_G_Buffer( OGRGeometryH, double, int );
OGRGeometryH			GEO_DLL OGR_G_ConvexHull( OGRGeometryH );
OGRGeometryH			GEO_DLL OGR_G_Intersection( OGRGeometryH, OGRGeometryH );
OGRGeometryH			GEO_DLL OGR_G_Union( OGRGeometryH, OGRGeometryH );
OGRGeometryH			GEO_DLL OGR_G_Difference( OGRGeometryH, OGRGeometryH );
OGRGeometryH			GEO_DLL OGR_G_SymmetricDifference( OGRGeometryH, OGRGeometryH );

OGRGeometryH			GEO_DLL	OGR_G_MoveDistance( OGRGeometryH, double, double );
OGRGeometryH			GEO_DLL	OGR_G_MoveAngle( OGRGeometryH, double, unsigned int);
OGRGeometryH			GEO_DLL	OGR_G_Rotate( OGRGeometryH, double, double, unsigned int );
OGRGeometryH			GEO_DLL	OGR_G_Scale( OGRGeometryH, double, double, double, double );

//OGRGeometryH			GEO_DLL	OGR_G_Transform(OGRGeometryH, double* [4] );
double					GEO_DLL	OGR_G_HausdorffDistance(OGRGeometryH, OGRGeometryH );
double					GEO_DLL	OGR_G_HausdorffDistanceDensify(OGRGeometryH, OGRGeometryH, double );
OGRGeometryH			GEO_DLL OGR_G_UnionCascaded( OGRGeometryH );
OGRGeometryH			GEO_DLL OGR_G_Simplify( OGRGeometryH hThis, double );
OGRGeometryH			GEO_DLL OGR_G_TopologyPreserveSimplify( OGRGeometryH , double );
OGRGeometryH			GEO_DLL OGR_G_Interpolate( OGRGeometryH, double );
OGRGeometryH			GEO_DLL OGR_G_InterpolateNormalized( OGRGeometryH, double );
OGRGeometryH			GEO_DLL OGR_G_BufferWithStyle( OGRGeometryH, double, int, int, int, double );
OGRGeometryH			GEO_DLL OGR_G_SingleSidedBuffer( OGRGeometryH, double, int, int, double, int );
OGRGeometryH			GEO_DLL OGR_G_NearestPoint( OGRGeometryH, OGRGeometryH );
OGRGeometryH			GEO_DLL OGR_G_LineMerge( OGRGeometryH );

double					GEO_DLL OGR_G_GetX( OGRGeometryH, int );
double					GEO_DLL OGR_G_GetY( OGRGeometryH, int );
double					GEO_DLL OGR_G_GetZ( OGRGeometryH, int );
void					GEO_DLL OGR_G_SetX( OGRGeometryH, int, double );
void					GEO_DLL OGR_G_SetY( OGRGeometryH, int, double );
void					GEO_DLL OGR_G_SetZ( OGRGeometryH, int, double );

//IPoint
void					GEO_DLL OGR_G_Coords( OGRGeometryH, double*, double* );

//ICurve
double					GEO_DLL OGR_G_GetLength( OGRGeometryH );
int						GEO_DLL OGR_G_IsClosed( OGRGeometryH );
OGRGeometryH			GEO_DLL OGR_G_StartPoint( OGRGeometryH );
OGRGeometryH			GEO_DLL OGR_G_EndPoint( OGRGeometryH );
OGRGeometryH			GEO_DLL OGR_G_Value( OGRGeometryH, double );

//ILineString
int						GEO_DLL OGR_G_GetNumPoints( OGRGeometryH );
void						GEO_DLL OGR_G_SetNumPoints( OGRGeometryH, int );
OGRGeometryH			GEO_DLL OGR_G_GetPointRef( OGRGeometryH, unsigned int );
OGRGeometryH			GEO_DLL OGR_G_SubLineString( OGRGeometryH, double, int );
void					GEO_DLL OGR_G_RemovePoint( OGRGeometryH, unsigned int );
void					GEO_DLL OGR_G_GetPoint( OGRGeometryH, int iPoint, double *, double *, double * );
void					GEO_DLL OGR_G_SetPoint( OGRGeometryH, int iPoint, double, double, double );
void					GEO_DLL OGR_G_SetPoint_2D( OGRGeometryH, int iPoint, double, double );
void					GEO_DLL OGR_G_AddPoint( OGRGeometryH, double, double, double );
void					GEO_DLL OGR_G_AddPoint_2D(OGRGeometryH, double, double);

//ISurface
double					GEO_DLL OGR_G_GetArea( OGRGeometryH );
OGRGeometryH			GEO_DLL OGR_G_Centroid( OGRGeometryH );
OGRGeometryH			GEO_DLL OGR_G_PointOnSurface( OGRGeometryH );

// IRing
int						GEO_DLL OGR_G_IsPointInRing( OGRGeometryH, OGRGeometryH );
int						GEO_DLL OGR_G_IsPointOnRingBoundary( OGRGeometryH, OGRGeometryH );

//IPolygon
int						GEO_DLL OGR_G_GetNumInteriorRings( OGRGeometryH );
OGRGeometryH			GEO_DLL OGR_G_ExteriorRing( OGRGeometryH );
OGRGeometryH			GEO_DLL OGR_G_InteriorRing( OGRGeometryH, int iRing );
int						GEO_DLL OGR_G_IsPointOnSurface( OGRGeometryH, OGRGeometryH );

//IGeometryCollection
int						GEO_DLL OGR_G_GetNumGeometries( OGRGeometryH );
OGRGeometryH			GEO_DLL OGR_G_Geometry( OGRGeometryH, int i );

// ETC
OGRGeometryH			GEO_DLL	OGR_G_Polygonize( OGRGeometryH );
OGRErr					GEO_DLL OGR_G_Transform( OGRGeometryH, OGRCoordinateTransformationH );
OGRErr					GEO_DLL OGR_G_TransformTo( OGRGeometryH, OGRSpatialReferenceH );
void					GEO_DLL OGR_G_Segmentize(OGRGeometryH hGeom, double dfMaxLength );

OGRGeometryH			GEO_DLL OGR_G_SymDifference( OGRGeometryH, OGRGeometryH );

void					GEO_DLL OGR_G_Empty( OGRGeometryH );
int						GEO_DLL OGR_G_IsRing( OGRGeometryH );

/* backward compatibility (non-standard methods) */
int						GEO_DLL OGR_G_Intersect( OGRGeometryH, OGRGeometryH );
int						GEO_DLL OGR_G_Equal( OGRGeometryH, OGRGeometryH );
OGRGeometryH			GEO_DLL OGR_G_GetBoundary( OGRGeometryH );

/* Methods for getting/setting vertices in points, line strings and rings */
int						GEO_DLL OGR_G_GetPointCount( OGRGeometryH );

/* Methods for getting/setting rings and members collections */

int						GEO_DLL OGR_G_GetGeometryCount( OGRGeometryH );
OGRGeometryH			GEO_DLL OGR_G_GetGeometryRef( OGRGeometryH, int );
OGRErr					GEO_DLL OGR_G_AddGeometry( OGRGeometryH, OGRGeometryH );
OGRErr					GEO_DLL OGR_G_AddGeometryDirectly( OGRGeometryH, OGRGeometryH );
OGRErr					GEO_DLL OGR_G_RemoveGeometry( OGRGeometryH, int, int );

/* -------------------------------------------------------------------- */
/*      Feature															*/
/* -------------------------------------------------------------------- */

/* FeatureAttributeValidValue */
int					GEO_DLL OGR_FAV_IsValid(OGRFeatureAttrValueH, OGRFeatureH);
const char			GEO_DLL *OGR_FAV_GetValueKeyValue(OGRFeatureAttrValueH);
const char			GEO_DLL *OGR_FAV_GetValueExpression(OGRFeatureAttrValueH);
const char			GEO_DLL *OGR_FAV_GetValueAlias(OGRFeatureAttrValueH);

/* FeatureAttributeDescriptor */
OGRFeatureAttributeDescriptorH		GEO_DLL OGR_FAD_Create( const char *, OGRFieldTypeEnumH );
void				GEO_DLL OGR_FAD_Destroy( OGRFeatureAttributeDescriptorH );
OGRFieldTypeEnumH	GEO_DLL OGR_FAD_GetType( OGRFeatureAttributeDescriptorH );
void				GEO_DLL OGR_FAD_SetType( OGRFeatureAttributeDescriptorH, OGRFieldTypeEnumH );
const char			GEO_DLL *OGR_FAD_GetName( OGRFeatureAttributeDescriptorH );
void				GEO_DLL OGR_FAD_SetName( OGRFeatureAttributeDescriptorH, const char * );
int					GEO_DLL OGR_FAD_GetSize( OGRFeatureAttributeDescriptorH );
void				GEO_DLL OGR_FAD_SetSize( OGRFeatureAttributeDescriptorH, int );
int					GEO_DLL OGR_FAD_GetPrecision( OGRFeatureAttributeDescriptorH );
void				GEO_DLL OGR_FAD_SetPrecision( OGRFeatureAttributeDescriptorH, int );
int					GEO_DLL OGR_FAD_GetMinimumOccurrences( OGRFeatureAttributeDescriptorH );
void				GEO_DLL OGR_FAD_SetMinimumOccurrences( OGRFeatureAttributeDescriptorH, int );
int					GEO_DLL OGR_FAD_GetMaximumOccurrences( OGRFeatureAttributeDescriptorH );
void				GEO_DLL OGR_FAD_SetMaximumOccurrences( OGRFeatureAttributeDescriptorH, int );
const char			GEO_DLL *OGR_FAD_GetTitle( OGRFeatureAttributeDescriptorH );
void				GEO_DLL OGR_FAD_SetTitle( OGRFeatureAttributeDescriptorH, const char *);

OGRLayerH			GEO_DLL OGR_FAD_GetReferLayer( OGRFeatureAttributeDescriptorH );
void				GEO_DLL OGR_FAD_SetReferLayer( OGRFeatureAttributeDescriptorH, OGRLayerH);
OGRFeatureAttributeDescriptorH		GEO_DLL OGR_FAD_GetReferField( OGRFeatureAttributeDescriptorH );
void				GEO_DLL OGR_FAD_SetReferField( OGRFeatureAttributeDescriptorH, OGRFeatureAttributeDescriptorH);
const char			GEO_DLL *OGR_FAD_GetReferLayerName( OGRFeatureAttributeDescriptorH );		
void				GEO_DLL OGR_FAD_SetReferLayerName( OGRFeatureAttributeDescriptorH, const char*);
const char			GEO_DLL *OGR_FAD_GetReferFieldName( OGRFeatureAttributeDescriptorH );
void				GEO_DLL OGR_FAD_SetReferFieldName( OGRFeatureAttributeDescriptorH, const char*);
unsigned int		GEO_DLL OGR_FAD_GetVisibleAuth( OGRFeatureAttributeDescriptorH );
void				GEO_DLL OGR_FAD_SetVisibleAuth( OGRFeatureAttributeDescriptorH, unsigned int);
unsigned int		GEO_DLL OGR_FAD_GetEditableAuth( OGRFeatureAttributeDescriptorH );
void				GEO_DLL OGR_FAD_SetEditableAuth( OGRFeatureAttributeDescriptorH, unsigned int);
int					GEO_DLL OGR_FAD_IsNullable( OGRFeatureAttributeDescriptorH );
void				GEO_DLL OGR_FAD_SetNullable( OGRFeatureAttributeDescriptorH, int);
int					GEO_DLL OGR_FAD_IsSeqKey( OGRFeatureAttributeDescriptorH );
void				GEO_DLL OGR_FAD_SetSeqKey( OGRFeatureAttributeDescriptorH, int);
int					GEO_DLL OGR_FAD_GetValidValueSize(OGRFeatureAttributeDescriptorH hDefn);
OGRFeatureAttrValueH GEO_DLL OGR_FAD_GetValidValue(OGRFeatureAttributeDescriptorH hDefn, int idx);
OGRFeatureAttributeDescriptorH		GEO_DLL OGR_FAD_Clone( OGRFeatureAttributeDescriptorH );

/* FeatureType */
OGRFeatureTypeH		GEO_DLL OGR_FT_Create( const char * );
void				GEO_DLL OGR_FT_Destroy( OGRFeatureTypeH );
int					GEO_DLL OGR_FT_Reference( OGRFeatureTypeH );
const char			GEO_DLL *OGR_FT_GetName( OGRFeatureTypeH );
void				GEO_DLL OGR_FT_SetName( OGRFeatureTypeH, const char * );
const char			GEO_DLL *OGR_FT_GetPreferredPrefix( OGRFeatureTypeH );
void				GEO_DLL OGR_FT_SetPreferredPrefix( OGRFeatureTypeH, char *);
int					GEO_DLL OGR_FT_GetSize( OGRFeatureTypeH );
OGRwkbGeometryTypeEnumH	GEO_DLL OGR_FT_GetGeometryType( OGRFeatureTypeH );
void				GEO_DLL OGR_FT_SetGeometryType( OGRFeatureTypeH, OGRwkbGeometryTypeEnumH );
OGRFeatureAttributeDescriptorH		GEO_DLL OGR_FT_AttributeDescriptor( OGRFeatureTypeH, int );
OGRFeatureAttributeDescriptorH		GEO_DLL OGR_FT_DefaultShapeAttribute( OGRFeatureTypeH );
void				GEO_DLL OGR_FT_Add( OGRFeatureTypeH, OGRFeatureAttributeDescriptorH );
int					GEO_DLL	OGR_FT_Remove( OGRFeatureTypeH, int );
OGRFeatureAttributeDescriptorH		GEO_DLL OGR_FT_SetAttribute( OGRFeatureTypeH, int, OGRFeatureAttributeDescriptorH );
OGRFeatureTypeH		GEO_DLL OGR_FT_Clone( OGRFeatureTypeH );
int					GEO_DLL	OGR_FT_GetIndex( OGRFeatureTypeH, const char *);

/* Feature */
void				GEO_DLL OGR_F_Destroy( OGRFeatureH );
OGRFeatureH			GEO_DLL OGR_F_Create( OGRFeatureTypeH );

OGRSymbolizerH		GEO_DLL OGR_F_GetSymbolizer(OGRFeatureH);
void				GEO_DLL OGR_F_SetSymbolizer(OGRFeatureH, OGRSymbolizerH);
OGRFeatureTypeH		GEO_DLL OGR_F_GetFeatureType(OGRFeatureH);
OGRGeometryH		GEO_DLL OGR_F_GetGeometry(OGRFeatureH);
OGRErr				GEO_DLL OGR_F_SetGeometry( OGRFeatureH, OGRGeometryH );
OGRErr				GEO_DLL OGR_F_SetGeometryDirectly( OGRFeatureH, OGRGeometryH );
OGRFeatureCollectionH GEO_DLL OGR_F_GetFeatureCollection(OGRFeatureH);
OGRAnnotationH		GEO_DLL OGR_F_GetAnnotation(OGRFeatureH);
void				GEO_DLL OGR_F_SetAnnotation(OGRFeatureH, OGRAnnotationH);
unsigned int		GEO_DLL OGR_F_GetID(OGRFeatureH);
void				GEO_DLL OGR_F_SetID(OGRFeatureH, unsigned int);
unsigned int		GEO_DLL OGR_F_GetData(OGRFeatureH);
void				GEO_DLL OGR_F_SetData(OGRFeatureH, unsigned int);
int					GEO_DLL OGR_F_GetVisible(OGRFeatureH);
void				GEO_DLL OGR_F_SetVisible(OGRFeatureH, int);
int					GEO_DLL OGR_F_GetSelected(OGRFeatureH);
void				GEO_DLL OGR_F_SetSelected(OGRFeatureH, int);
OGRGeometryH		GEO_DLL OGR_F_GetAnnotationLine(OGRFeatureH);
void				GEO_DLL OGR_F_SetAnnotationLine(OGRFeatureH, OGRGeometryH);
int					GEO_DLL OGR_F_GetVisibleAnnotation(OGRFeatureH);
void				GEO_DLL OGR_F_SetVisibleAnnotation(OGRFeatureH, int);
int					GEO_DLL OGR_F_GetVisibleAnnotationLine(OGRFeatureH);
void				GEO_DLL OGR_F_SetVisibleAnnotationLine(OGRFeatureH, int);
OGRUserDefinedWidgetH GEO_DLL OGR_F_GetUserDefinedWidget(OGRFeatureH);
OGRUserDefinedWidgetH GEO_DLL OGR_F_SetUserDefinedWidget(OGRFeatureH, OGRUserDefinedWidgetH);
int					GEO_DLL OGR_F_GetVisibleUserDefinedWidget(OGRFeatureH);
void				GEO_DLL OGR_F_SetVisibleUserDefinedWidget(OGRFeatureH, int);

OGRGeometryH		GEO_DLL OGR_F_GetBounds(OGRFeatureH);
void				GEO_DLL OGR_F_SetAttributeFromInteger( OGRFeatureH, int, int );
void				GEO_DLL OGR_F_SetAttributeFromDouble( OGRFeatureH, int, double );
void				GEO_DLL OGR_F_SetAttributeFromString( OGRFeatureH, int, const char * );
void				GEO_DLL OGR_F_SetAttributeFromIntegerList( OGRFeatureH, int, int, int * );
void				GEO_DLL OGR_F_SetAttributeFromDoubleList( OGRFeatureH, int, int, double * );
void				GEO_DLL OGR_F_SetAttributeFromStringList( OGRFeatureH, int, char ** );
void				GEO_DLL OGR_F_SetAttributeFromBinary( OGRFeatureH, int, int, GByte * );
void				GEO_DLL OGR_F_SetAttributeFromDateTime( OGRFeatureH, int, int, int, int, int, int, int, int );
int					GEO_DLL OGR_F_GetAttributeToInteger( OGRFeatureH, int );
double				GEO_DLL OGR_F_GetAttributeToDouble( OGRFeatureH, int );
const char			GEO_DLL *OGR_F_GetAttributeToString( OGRFeatureH, int );
const int			GEO_DLL *OGR_F_GetAttributeToIntegerList( OGRFeatureH, int, int * );
const double		GEO_DLL *OGR_F_GetAttributeToDoubleList( OGRFeatureH, int, int * );
char				GEO_DLL **OGR_F_GetAttributeToStringList( OGRFeatureH, int );
GByte				GEO_DLL *OGR_F_GetAttributeToBinary( OGRFeatureH, int, int * );
int					GEO_DLL  OGR_F_GetAttributeToDateTime( OGRFeatureH, int, int *, int *, int *, int *, int *, int *, int * );
void				GEO_DLL OGR_F_Extent2D(OGRFeatureH, double *, double *, double *, double *);
double				GEO_DLL OGR_F_GetMinXExtent2D(OGRFeatureH);
double				GEO_DLL OGR_F_GetMinYExtent2D(OGRFeatureH);
double				GEO_DLL OGR_F_GetMaxXExtent2D(OGRFeatureH);
double				GEO_DLL OGR_F_GetMaxYExtent2D(OGRFeatureH);

OGRFeatureH			GEO_DLL OGR_F_Clone( OGRFeatureH );
int					GEO_DLL OGR_F_Equal( OGRFeatureH, OGRFeatureH );
void				GEO_DLL	OGR_F_ReCalculateExtent(OGRFeatureH);
OGRGridCoverageH	GEO_DLL OGR_F_GetGridCoverage(OGRFeatureH);

const char			GEO_DLL *OGR_F_GetAttributeAsString(OGRFeatureH, int);
const char			GEO_DLL *OGR_F_GetAttributeAsStringByName(OGRFeatureH, const char*);


/* -------------------------------------------------------------------- */
/*      Layer, LayerSource                                               */
/* -------------------------------------------------------------------- */

/* Layer */
OGRErr				GEO_DLL OGR_L_StartTransaction( OGRLayerH );
OGRErr				GEO_DLL OGR_L_CommitTransaction( OGRLayerH );
OGRErr				GEO_DLL OGR_L_RollbackTransaction( OGRLayerH );
void				GEO_DLL OGR_L_Destroy( OGRLayerH );
const char			GEO_DLL *OGR_L_GetName( OGRLayerH );
void				GEO_DLL OGR_L_SetName( OGRLayerH, const char*);
const char			GEO_DLL *OGR_L_GetTitle( OGRLayerH );
void				GEO_DLL OGR_L_SetTitle( OGRLayerH, const char*);
const char			GEO_DLL *OGR_L_GetAbstract( OGRLayerH );
void				GEO_DLL OGR_L_SetAbstract( OGRLayerH, const char* );
const char			GEO_DLL *OGR_L_GetSymbolizer( OGRLayerH );
void				GEO_DLL OGR_L_SetSymbolizer( OGRLayerH, const char* );
const char			GEO_DLL *OGR_L_GetSymbolizer3D(OGRLayerH, const char*);
OGRSpatialReferenceH	GEO_DLL OGR_L_GetSpatialReference( OGRLayerH );
void				GEO_DLL OGR_L_SetSpatialReference(OGRLayerH, OGRSpatialReferenceH);
OGREnvelopeH			GEO_DLL OGR_L_GetBoundingBox( OGRLayerH );
double				GEO_DLL OGR_L_GetMinScaleDenominator( OGRLayerH );
void				GEO_DLL OGR_L_SetMinScaleDenominator( OGRLayerH, double );
double				GEO_DLL OGR_L_GetMaxScaleDenominator( OGRLayerH);
void				GEO_DLL OGR_L_SetMaxScaleDenominator( OGRLayerH, double );
double				GEO_DLL OGR_L_GetLabelMinScaleDenominator( OGRLayerH );
void				GEO_DLL OGR_L_SetLabelMinScaleDenominator( OGRLayerH, double );
double				GEO_DLL OGR_L_GetLabelMaxScaleDenominator( OGRLayerH);
void				GEO_DLL OGR_L_SetLabelMaxScaleDenominator( OGRLayerH, double );
int					GEO_DLL OGR_L_GetVisible( OGRLayerH );
void				GEO_DLL OGR_L_SetVisible(OGRLayerH, int );
int					GEO_DLL OGR_L_GetSelectable( OGRLayerH );
void				GEO_DLL OGR_L_SetSelectable(OGRLayerH, int );
int					GEO_DLL OGR_L_GetOrder(OGRLayerH hLayer);
void				GEO_DLL	OGR_L_SetLayerOrder(OGRLayerH, int);	
void				GEO_DLL OGR_L_Refresh( OGRLayerH, OGRFeatureH );
const char			GEO_DLL *OGR_L_GetCategory( OGRLayerH );
void				GEO_DLL OGR_L_SetCategory( OGRLayerH, const char*);
const char			GEO_DLL *OGR_L_GetLayerID(OGRLayerH);
const char			GEO_DLL *OGR_L_GetLabelText(OGRLayerH, int, OGRFeatureH);
int					GEO_DLL OGR_L_GetPageSize( OGRLayerH );
void				GEO_DLL OGR_L_SetPageSize( OGRLayerH, int );
int					GEO_DLL OGR_L_GetAbsolutePage( OGRLayerH );
const char			GEO_DLL *OGR_L_GetLabelExpression( OGRLayerH );
void				GEO_DLL OGR_L_SetLabelExpression(OGRLayerH, const char *);
const char			GEO_DLL *OGR_L_GetShortLabelExpression( OGRLayerH );
void				GEO_DLL OGR_L_SetShortLabelExpression( OGRLayerH, const char *);
const char			GEO_DLL *OGR_L_GetToolTipExpression( OGRLayerH );
void				GEO_DLL OGR_L_SetToolTipExpression( OGRLayerH, const char *);
const char			GEO_DLL *OGR_L_GetAnnoLineAttribute( OGRLayerH );
void				GEO_DLL OGR_L_SetAnnoLineAttribute( OGRLayerH, const char* );
const char			GEO_DLL *OGR_L_GetAnnoVisibleAttribute( OGRLayerH );
void				GEO_DLL OGR_L_SetAnnoVisibleAttribute( OGRLayerH, const char* );
const char			GEO_DLL *OGR_L_GetAnnoLineVisibleAttribute( OGRLayerH );
void				GEO_DLL OGR_L_SetAnnoLineVisibleAttribute( OGRLayerH, const char* );
const char			GEO_DLL *OGR_L_GetStyleAttribute( OGRLayerH );
void				GEO_DLL OGR_L_SetStyleAttribute( OGRLayerH, const char* );
const char			GEO_DLL *OGR_L_GetAnnoXMLAttribute( OGRLayerH );
void				GEO_DLL OGR_L_SetAnnoXMLAttribute( OGRLayerH, const char* );
const char			GEO_DLL *OGR_L_GetReferGeometryLayerName( OGRLayerH );	
const char			GEO_DLL *OGR_L_GetGeometryColumn( OGRLayerH );
void				GEO_DLL OGR_L_SetGeometryColumn(OGRLayerH hLayer, const char* pszVal);
const char			GEO_DLL *OGR_L_GetFIDColumn( OGRLayerH );
void				GEO_DLL OGR_L_SetFIDColumn(OGRLayerH hLayer, const char* pszVal);
const char			GEO_DLL *OGR_L_GetMapIdxColumn( OGRLayerH );
void				GEO_DLL OGR_L_SetMapIdxColumn( OGRLayerH, const char* );
int					GEO_DLL OGR_L_GetMapIdxLevel( OGRLayerH );
void				GEO_DLL OGR_L_SetMapIdxLevel( OGRLayerH, int );
int					GEO_DLL OGR_L_IsSystemField(OGRLayerH hLayer, int idx);
const char			GEO_DLL *OGR_L_GetNodeLayerName( OGRLayerH );
void				GEO_DLL OGR_L_SetNodeLayerName( OGRLayerH, const char* );
const char			GEO_DLL *OGR_L_GetNodeLayerStartIDColumn( OGRLayerH );
void				GEO_DLL	OGR_L_SetNodeLayerStartIDColumn( OGRLayerH, const char* );
const char			GEO_DLL *OGR_L_GetNodeLayerEndIDColumn( OGRLayerH );
void				GEO_DLL	OGR_L_SetNodeLayerEndIDColumn( OGRLayerH, const char* );
OGRErr				GEO_DLL OGR_L_SetAttributeFilter( OGRLayerH, const char* );
OGRGeometryH		GEO_DLL OGR_L_GetSpatialFilter( OGRLayerH );
void				GEO_DLL OGR_L_SetSpatialFilter( OGRLayerH, OGRGeometryH );
void				GEO_DLL OGR_L_SetSpatialFilterRect( OGRLayerH, double, double, double, double );
OGRFeatureTypeH		GEO_DLL OGR_L_GetFeatureType( OGRLayerH );
void				GEO_DLL OGR_L_SetFeatureType( OGRLayerH, OGRFeatureTypeH );
OGRParametersH		GEO_DLL OGR_L_GetParameters( OGRLayerH );
void				GEO_DLL OGR_L_AddParameter(OGRLayerH, OGRParameterH);
unsigned int		GEO_DLL OGR_L_GetVisibleAuth( OGRLayerH );
void				GEO_DLL OGR_L_SetVisibleAuth(OGRLayerH, unsigned int );
unsigned int		GEO_DLL OGR_L_GetEditableAuth( OGRLayerH );
void				GEO_DLL OGR_L_SetEditableAuth( OGRLayerH, unsigned int );
OGRFeatureTypeStyleH GEO_DLL OGR_L_GetFeatureTypeStyle(OGRLayerH layerH);
void				GEO_DLL	OGR_L_SetFeatureTypeStyle(OGRLayerH, OGRFeatureTypeStyleH);
OGRUserDefinedWidgetH GEO_DLL OGR_L_GetDiagram(OGRLayerH);
void				GEO_DLL OGR_L_SetDiagram(OGRLayerH, OGRUserDefinedWidgetH);
int					GEO_DLL OGR_L_Export(OGRLayerH, OGRLayerSourceH, const char *, char **, int , int , int ,int , OGRSpatialReferenceH, OGRSpatialReferenceH, const char *, int, const char *);
void				GEO_DLL	OGR_L_AddToFeatureLayer(OGRLayerH, OGRFeatureLayerH);
OGRFeatureLayerH	GEO_DLL	OGR_L_GetFeatureLayer(OGRLayerH, OGRLayerSourceH);
OGRFeatureLayerH	GEO_DLL	OGR_L_CreateFeatureLayer(OGRLayerH, OGRLayerSourceH);
OGRErr				GEO_DLL OGR_L_CreateFeature( OGRLayerH, OGRFeatureH );
OGRFeatureH			GEO_DLL OGR_L_GetFeature( OGRLayerH, unsigned int );
OGRErr				GEO_DLL OGR_L_SetFeature( OGRLayerH, OGRFeatureH );
void				GEO_DLL OGR_L_ResetReading( OGRLayerH );
OGRFeatureH			GEO_DLL OGR_L_GetNextFeature( OGRLayerH );
int					GEO_DLL OGR_L_GetLabelPosition(OGRLayerH);
void				GEO_DLL OGR_L_SetLabelPosition(OGRLayerH, int);
OGRErr			GEO_DLL OGR_L_AddAttribute(OGRLayerH, OGRFeatureAttributeDescriptorH);

/* LayerSource */
void				GEO_DLL OGR_LS_Destroy( OGRLayerSourceH );
const char			GEO_DLL *OGR_LS_GetIcon( OGRLayerSourceH );
void				GEO_DLL OGR_LS_SetIcon( OGRLayerSourceH, const char*);
const char			GEO_DLL *OGR_LS_GetDisplayName( OGRLayerSourceH );
void				GEO_DLL OGR_LS_SetDisplayName( OGRLayerSourceH, const char*);
const char			GEO_DLL *OGR_LS_GetDescription( OGRLayerSourceH );
void				GEO_DLL OGR_LS_SetDescription( OGRLayerSourceH, const char*);
int					GEO_DLL OGR_LS_GetSize( OGRLayerSourceH );
const char			GEO_DLL *OGR_LS_GetDriverType(OGRLayerSourceH);

OGRLayerH			GEO_DLL OGR_LS_GetLayer( OGRLayerSourceH, int );
OGRLayerH			GEO_DLL OGR_LS_GetLayerByName( OGRLayerSourceH, const char * );
OGRLayerH			GEO_DLL OGR_LS_CreateLayer( OGRLayerSourceH, const char *, 
										OGRSpatialReferenceH, OGRwkbGeometryTypeEnumH, char ** );
OGRLayerH			GEO_DLL OGR_LS_ExecuteSQL( OGRLayerSourceH, const char *, 
										OGRGeometryH, const char * );
OGRErr				GEO_DLL OGR_LS_DeleteLayer( OGRLayerSourceH, int );
int					GEO_DLL OGR_LS_RenameLayer( OGRLayerSourceH, const char *, const char *);
int					GEO_DLL OGR_LS_GetLayerCount( OGRLayerSourceH );
const char			GEO_DLL *OGR_LS_ExecuteSQLToString( OGRLayerSourceH, const char *, const char *, const char *, const char *);
int         GEO_DLL OGR_LS_GetAffectedCount( OGRLayerSourceH );

/* Annotation */
OGRFeatureH			GEO_DLL	OGR_AT_GetFeature(OGRAnnotationH);
void				GEO_DLL	OGR_AT_SetFeature(OGRAnnotationH, OGRFeatureH );
unsigned int		GEO_DLL	OGR_AT_GetSize(OGRAnnotationH);
OGRLabelH			GEO_DLL	OGR_AT_GetLabel(OGRAnnotationH, int);
void				GEO_DLL	OGR_AT_Add(OGRAnnotationH, OGRLabelH);
int					GEO_DLL	OGR_AT_Remove(OGRAnnotationH, OGRLabelH);
int					GEO_DLL	OGR_AT_RemoveAll(OGRAnnotationH);
void				GEO_DLL	OGR_AT_Sort(OGRAnnotationH);

/* AnnotationLabel */
OGRLayerH			GEO_DLL	OGR_LB_GetLayer(OGRLabelH);
void				GEO_DLL	OGR_LB_SetLayer(OGRLabelH, OGRLayerH);
const char			GEO_DLL	*OGR_LB_GetText(OGRLabelH);
void				GEO_DLL	OGR_LB_SetText(OGRLabelH, const char *);
int					GEO_DLL	OGR_LB_GetOrder(OGRLabelH);
void				GEO_DLL	OGR_LB_SetOrder(OGRLabelH, int);

/* FeatureCollection */
void				GEO_DLL OGR_FC_Destroy(OGRFeatureCollectionH);
int					GEO_DLL	OGR_FC_IsEmpty( OGRFeatureCollectionH );
unsigned int		GEO_DLL	OGR_FC_GetSize( OGRFeatureCollectionH );
unsigned int		GEO_DLL OGR_FC_GetLabelSize(OGRFeatureCollectionH, OGRLayerH);
TransactionEnumH	GEO_DLL	OGR_FC_GetTransaction( OGRFeatureCollectionH );
unsigned int		GEO_DLL	OGR_FC_SetTransaction( OGRFeatureCollectionH, TransactionEnumH );
OGRFeatureH			GEO_DLL OGR_FC_GetFeature( OGRFeatureCollectionH );
OGRFeatureH			GEO_DLL OGR_FC_GetFeatureFromFID(OGRFeatureCollectionH, unsigned int);
OGRFeatureLayerH	GEO_DLL OGR_FC_GetFeatureLayer( OGRFeatureCollectionH );
int					GEO_DLL	OGR_FC_IsRefer( OGRFeatureCollectionH );
void				GEO_DLL	OGR_FC_SetRefer( OGRFeatureCollectionH, int );
int					GEO_DLL	OGR_FC_Contains(OGRFeatureCollectionH, OGRFeatureH);
int					GEO_DLL	OGR_FC_ContainsAll(OGRFeatureCollectionH, OGRFeatureCollectionH);
OGRFeatureH			GEO_DLL	OGR_FC_Add(OGRFeatureCollectionH, OGRFeatureH);
void	   			GEO_DLL	OGR_FC_AddDirectly(OGRFeatureCollectionH, OGRFeatureH);
void				GEO_DLL	OGR_FC_AddAll(OGRFeatureCollectionH, OGRFeatureCollectionH);
void				GEO_DLL	OGR_FC_Clear(OGRFeatureCollectionH);
int					GEO_DLL	OGR_FC_Remove(OGRFeatureCollectionH, OGRFeatureH);
int					GEO_DLL	OGR_FC_RemoveAll(OGRFeatureCollectionH, OGRFeatureCollectionH);
int					GEO_DLL	OGR_FC_RetainAll(OGRFeatureCollectionH, OGRFeatureCollectionH);
OGRFeatureCollectionH GEO_DLL OGR_FC_SubCollection(OGRFeatureCollectionH, OGRFeatureQueryH);
void				GEO_DLL	OGR_FC_Close(OGRFeatureCollectionH);
short				GEO_DLL	OGR_FC_MoveNext(OGRFeatureCollectionH);
short				GEO_DLL	OGR_FC_MoveFirst(OGRFeatureCollectionH);
short				GEO_DLL	OGR_FC_MovePrevious(OGRFeatureCollectionH);
short				GEO_DLL	OGR_FC_MoveLast(OGRFeatureCollectionH);
OGRFeatureH			GEO_DLL OGR_FC_SetFeature(OGRFeatureCollectionH, OGRFeatureH);
OGRFeatureH			GEO_DLL OGR_FC_CreateFeature(OGRFeatureCollectionH);
char				GEO_DLL *OGR_FC_ExportLTM(OGRFeatureCollectionH, const char *, OGRGeometryH, const char *, 
														short, unsigned int, unsigned int, int, short, int, short, int, float);

void				GEO_DLL OGR_FC_GetBounds(OGRFeatureCollectionH, OGREnvelopeH );
void				GEO_DLL	OGR_FC_ReCalculateExtent(OGRFeatureCollectionH);

// VectorAnalysis
OGRFeatureCollectionH	GEO_DLL	OGR_FC_ClipGeometry(OGRFeatureCollectionH, OGRFeatureCollectionH, int);
OGRFeatureCollectionH	GEO_DLL	OGR_FC_IntersectGeometry(OGRFeatureCollectionH, OGRFeatureCollectionH, int);
OGRFeatureCollectionH	GEO_DLL	OGR_FC_BoundaryGeometry(OGRFeatureCollectionH, int, int);
OGRFeatureCollectionH	GEO_DLL	OGR_FC_BufferGeometry(OGRFeatureCollectionH, double, int, int, int);
OGRFeatureCollectionH	GEO_DLL	OGR_FC_BufferGeometryWithStyle(OGRFeatureCollectionH, double, int, LineCapEnumH, LineJoinEnumH, double, int, int);
OGRFeatureCollectionH	GEO_DLL	OGR_FC_BufferGeometryWithSingleSide(OGRFeatureCollectionH, double, int, LineJoinEnumH, double, int, int, int);
OGRFeatureCollectionH	GEO_DLL	OGR_FC_UnionGeometry(OGRFeatureCollectionH, OGRFeatureCollectionH, int, int);
OGRFeatureCollectionH	GEO_DLL	OGR_FC_DifferenceGeometry(OGRFeatureCollectionH, OGRFeatureCollectionH, int);
OGRFeatureCollectionH	GEO_DLL	OGR_FC_SymmetricDifferenceGeometry(OGRFeatureCollectionH, OGRFeatureCollectionH, int);
OGRFeatureCollectionH	GEO_DLL	OGR_FC_Merge(OGRFeatureCollectionH, OGRFeatureCollectionH, int);
OGRFeatureCollectionH	GEO_DLL	OGR_FC_Split(OGRFeatureCollectionH, OGRGeometryH, int);
OGRFeatureCollectionH	GEO_DLL	OGR_FC_Dissolve(OGRFeatureCollectionH, const char *, const char *, int, int );
OGRFeatureCollectionH	GEO_DLL	OGR_FC_Generalize(OGRFeatureCollectionH, double, int);
OGRFeatureCollectionH	GEO_DLL	OGR_FC_Densify(OGRFeatureCollectionH, double, int);
OGRFeatureCollectionH	GEO_DLL	OGR_FC_RepairGeometry(OGRFeatureCollectionH, int);
OGRFeatureCollectionH	GEO_DLL	OGR_FC_Fishnet(OGRFeatureCollectionH, double, double, double, double, double, double, int, int);
OGRFeatureCollectionH	GEO_DLL	OGR_FC_DelaunayTriangulation(OGRFeatureCollectionH, double, int);
OGRFeatureCollectionH	GEO_DLL	OGR_FC_ThiessenPolygon(OGRFeatureCollectionH, double, int);
OGRFeatureCollectionH	GEO_DLL	OGR_FC_FeaturesToPoint(OGRFeatureCollectionH, const char*, int);
OGRFeatureCollectionH	GEO_DLL	OGR_FC_FeatureVerticesToPoints(OGRFeatureCollectionH, PointLocationEnumH, int);
OGRFeatureCollectionH	GEO_DLL	OGR_FC_MultipartToSinglepart(OGRFeatureCollectionH, int);
OGRFeatureCollectionH	GEO_DLL	OGR_FC_RemoveHoles(OGRFeatureCollectionH, int);
OGRFeatureCollectionH	GEO_DLL	OGR_FC_Project(OGRFeatureCollectionH, OGRSpatialReferenceH, OGRSpatialReferenceH, int);
OGRFeatureCollectionH	GEO_DLL	OGR_FC_MoveDistance(OGRFeatureCollectionH, double, double, int);
OGRFeatureCollectionH	GEO_DLL	OGR_FC_MoveAngle(OGRFeatureCollectionH, double, unsigned int, int);
OGRFeatureCollectionH	GEO_DLL	OGR_FC_Rotate(OGRFeatureCollectionH, double, double, unsigned int, int);
OGRFeatureCollectionH	GEO_DLL	OGR_FC_Scale(OGRFeatureCollectionH, double, double, double, double, int);
OGRFeatureCollectionH	GEO_DLL OGR_FC_LineToPolygon(OGRFeatureCollectionH , int);
OGRFeatureCollectionH	GEO_DLL	OGR_FC_PolygonToLine(OGRFeatureCollectionH, int);
OGRFeatureCollectionH	GEO_DLL OGR_FC_PolygonGeneralize(OGRFeatureCollectionH, double, int);
OGRFeatureCollectionH	GEO_DLL OGR_FC_UnionLineMerge(OGRFeatureCollectionH, int);

void					GEO_DLL	OGR_FC_Group(OGRFeatureCollectionH);
void					GEO_DLL	OGR_FC_Ungroup(OGRFeatureCollectionH);
void					GEO_DLL OGR_FC_SetParameters(OGRFeatureCollectionH, OGRParametersH);
OGRFeatureCollectionH	GEO_DLL	OGR_FC_Transform(OGRFeatureCollectionH, void*, void*, int);

/* FeatureQuery */
OGRFeatureQueryH	GEO_DLL OGR_FQ_Create();
void				GEO_DLL OGR_FQ_Destroy( OGRFeatureQueryH );
short				GEO_DLL OGR_FQ_Compile(OGRFeatureQueryH, OGRFeatureTypeH, const char*);
short				GEO_DLL OGR_FQ_Evaluate(OGRFeatureQueryH, OGRFeatureH);
short				GEO_DLL OGR_FQ_SelectCompile(OGRFeatureQueryH, OGRFeatureTypeH, const char*);
const char			GEO_DLL *OGR_FQ_GetAttributeAsString(OGRFeatureQueryH, OGRFeatureH, int);
OGRGeometryH		GEO_DLL OGR_FQ_GetGeometry(OGRFeatureQueryH, OGRFeatureH, int);

/* LayerSourceFactory */
OGRLayerSourceH		GEO_DLL OGR_LF_CreateLayerSource(OGRLayerSourceFactoryH, const char*);
int					GEO_DLL OGR_LF_CanProcess(OGRLayerSourceFactoryH, const char*);
OGRLayerSourceH		GEO_DLL OGR_LF_CreateNewLayerSource(OGRLayerSourceFactoryH, const char*);
const char			GEO_DLL *OGR_LF_GetIcon(OGRLayerSourceFactoryH);
void				GEO_DLL OGR_LF_SetIcon(OGRLayerSourceFactoryH, const char*);
const char			GEO_DLL *OGR_LF_GetDisplayName(OGRLayerSourceFactoryH);
void				GEO_DLL OGR_LF_SetDisplayName(OGRLayerSourceFactoryH, const char*);
const char			GEO_DLL *OGR_LF_GetDescription(OGRLayerSourceFactoryH);
void				GEO_DLL OGR_LF_SetDescription(OGRLayerSourceFactoryH, const char*);
int					GEO_DLL OGR_LF_IsAvailable(OGRLayerSourceFactoryH);

/* FeatureLayer */
void					GEO_DLL	OGR_FL_Destroy(OGRFeatureLayerH);
OGRFeatureCanvasH		GEO_DLL OGR_FL_GetFeatureCanvas(OGRFeatureLayerH);
OGRFeatureCollectionH	GEO_DLL	OGR_FL_GetFeatureCollection(OGRFeatureLayerH);
void					GEO_DLL	OGR_FL_SetFeatureCollection(OGRFeatureLayerH, OGRFeatureCollectionH);
OGRLayerH				GEO_DLL	OGR_FL_GetLayer(OGRFeatureLayerH);
OGRLayerSourceH			GEO_DLL	OGR_FL_GetLayerSource(OGRFeatureLayerH);

int						GEO_DLL OGR_FL_Export(OGRFeatureLayerH, OGRLayerSourceH, const char *, char **, int , int , int ,int , OGRSpatialReferenceH, OGRSpatialReferenceH, const char*, int, int, const char *, GDALProgressFuncH, void *);
OGRFeatureAttributeDescriptorH			GEO_DLL OGR_FL_AddAttribute(OGRFeatureLayerH, OGRFeatureAttributeDescriptorH );
int						GEO_DLL OGR_FL_RemoveAttribute(OGRFeatureLayerH, int );
OGRFeatureAttributeDescriptorH			GEO_DLL OGR_FL_SetAttribute(OGRFeatureLayerH, int , OGRFeatureAttributeDescriptorH );

const char				GEO_DLL *OGR_FL_GetDriverType(OGRFeatureLayerH);
void					GEO_DLL OGR_FL_ShowStyleWidget(OGRFeatureLayerH);
void					GEO_DLL OGR_FL_ShowTypeStyleWidget(OGRFeatureLayerH);
void					GEO_DLL OGR_FL_ShowLabelWidget(OGRFeatureLayerH);
void					GEO_DLL OGR_FL_ShowExportLayerWidget(OGRFeatureLayerH);
OGRWidgetH				GEO_DLL OGR_FL_ShowFeatureTableWidget(OGRFeatureLayerH, OGRCanvasH, int);

void					GEO_DLL OGR_FL_ShowLayerPropertyWidget(OGRFeatureLayerH, const char*);
void					GEO_DLL OGR_FL_ShowFieldCalculatorWidget(OGRFeatureLayerH);
void					GEO_DLL OGR_FL_ShowFeatureTypeEditWidget(OGRFeatureLayerH);
void					GEO_DLL	OGR_FL_ShowCRSWidget(OGRFeatureLayerH);

void					GEO_DLL OGR_FL_SetRefreshTime(OGRFeatureLayerH, const char*, const char*, int, int);
int						GEO_DLL OGR_FL_Refresh(OGRFeatureLayerH);

/* FeatureCanvas */
void					GEO_DLL OGR_FV_Destroy(OGRFeatureCanvasH);
int						GEO_DLL OGR_FV_GetSize(OGRFeatureCanvasH);
OGRFeatureLayerH		GEO_DLL OGR_FV_GetActive(OGRFeatureCanvasH);
void					GEO_DLL OGR_FV_SetActive(OGRFeatureCanvasH, OGRFeatureLayerH);
OGRFeatureCollectionH	GEO_DLL	OGR_FV_GetSelection(OGRFeatureCanvasH);
OGRFeatureCollectionH	GEO_DLL OGR_FV_GetFlashset(OGRFeatureCanvasH);
OGRTransactionH			GEO_DLL OGR_FV_GetTransaction(OGRFeatureCanvasH);

OGRFeatureH				GEO_DLL OGR_FV_GetFeatureAtPoint(OGRFeatureCanvasH, double, double, double);
OGRFeatureCollectionH	GEO_DLL OGR_FV_GetFeaturesAtPoint(OGRFeatureCanvasH, double, double, double);
int						GEO_DLL OGR_FV_Contains(OGRFeatureCanvasH, OGRFeatureLayerH);
void					GEO_DLL	OGR_FV_AddFeatureLayer(OGRFeatureCanvasH, OGRFeatureLayerH);
void					GEO_DLL	OGR_FV_DeleteFeatureLayer(OGRFeatureCanvasH, OGRFeatureLayerH);
OGRFeatureLayerH		GEO_DLL OGR_FV_GetFeatureLayer(OGRFeatureCanvasH, int);
OGRFeatureLayerH		GEO_DLL OGR_FV_GetFeatureLayerByName(OGRFeatureCanvasH, const char*);
OGRFeatureLayerH		GEO_DLL OGR_FV_GetFeatureLayerByID(OGRFeatureCanvasH, const char*);
OGRFeatureLayerH		GEO_DLL OGR_FV_GetFeatureLayerByLayer(OGRFeatureCanvasH, OGRLayerH);
unsigned int			GEO_DLL OGR_FV_DeleteFeatureCollection(OGRFeatureCanvasH, OGRFeatureCollectionH);
int						GEO_DLL OGR_FV_GetIndexOfFeatureLayer(OGRFeatureCanvasH, OGRFeatureLayerH);
void					GEO_DLL OGR_FV_Undo(OGRFeatureCanvasH);
void					GEO_DLL OGR_FV_Commit(OGRFeatureCanvasH);
void					GEO_DLL OGR_FV_Copy(OGRFeatureCanvasH);
void					GEO_DLL OGR_FV_Paste(OGRFeatureCanvasH);
void					GEO_DLL OGR_FV_Cut(OGRFeatureCanvasH);
int						GEO_DLL OGR_FV_MoveTo(OGRFeatureCanvasH, OGRFeatureLayerH, int);
void					GEO_DLL OGR_FV_Invalidate(OGRFeatureCanvasH);
void					GEO_DLL OGR_FV_ForceStopRender(OGRFeatureCanvasH);
void					GEO_DLL OGR_FV_GetBounds(OGRFeatureCanvasH, OGREnvelopeH);
void					GEO_DLL OGR_FV_ReCalculateExtent(OGRFeatureCanvasH, int);
OGRLayerSourceH			GEO_DLL OGR_FV_AddLayerSource(OGRFeatureCanvasH, const char*);
void                    GEO_DLL OGR_FV_DeleteFeatureLayerAll(OGRFeatureCanvasH);
void					GEO_DLL OGR_FV_SetSelectedFeature(OGRFeatureCanvasH, OGRFeatureH, int);
const char				GEO_DLL *OGR_FV_GetWorkspace(OGRFeatureCanvasH);
void					GEO_DLL OGR_FV_FireEvent(OGRFeatureCanvasH, const char*, OGRParametersH);

int						GEO_DLL OGR_FV_ShowOpenVectorLayerWidget(OGRFeatureCanvasH, const char*);
int						GEO_DLL OGR_FV_ShowOpenRasterLayerWidget(OGRFeatureCanvasH, const char*);
int						GEO_DLL OGR_FV_ShowOpenWebLayerWidget(OGRFeatureCanvasH);
int						GEO_DLL OGR_FV_ShowNewVectorLayerWidget(OGRFeatureCanvasH);

void					GEO_DLL OGR_FV_AddEventListener(OGRFeatureCanvasH, OGREventH);
void					GEO_DLL OGR_FV_RemoveEventListener(OGRFeatureCanvasH, OGREventH);
int						GEO_DLL OGR_FV_HasEventListener(OGRFeatureCanvasH, OGREventH);

OGRLayerSourceH			GEO_DLL OGR_FV_GetLayerSourceFromFileName(OGRFeatureCanvasH, const char*);
const char				GEO_DLL *OGR_FV_GetConnectStringFromFileName(OGRFeatureCanvasH, const char*, const char*);
const char				GEO_DLL *OGR_FV_GetRasterEnableFilter(OGRFeatureCanvasH, int);
OGRFeatureLayerH		GEO_DLL OGR_FV_CreateTemporaryLayer(OGRFeatureCanvasH, OGRFeatureTypeH, int);
void					GEO_DLL OGR_FV_RemoveSymbol(OGRFeatureCanvasH, OGRLayerSourceH, OGRSymbolizerH);

void					GEO_DLL OGR_FV_SetTerrainOptions(OGRFeatureCanvasH, const char*);
void					GEO_DLL OGR_FV_GetVectorDriverInfo(OGRFeatureCanvasH, void*, void*, void*);
int						GEO_DLL OGR_FV_ReadWorkspace(OGRFeatureCanvasH, const char*);
int						GEO_DLL OGR_FV_WriteWorkspace(OGRFeatureCanvasH, const char*);

OGRSpatialReferenceH	GEO_DLL OGR_FV_GetDisplaySpatialReference(OGRFeatureCanvasH);
void					GEO_DLL OGR_FV_SetDisplaySpatialReference(OGRFeatureCanvasH, OGRSpatialReferenceH);

/* OSWindow */
void                    GEO_DLL	OGR_WD_Initialize(OGROSWindowH, ULONG_PTR);
void                    GEO_DLL	OGR_WD_ReSize(OGROSWindowH, unsigned int, unsigned int, unsigned int, unsigned int);
void                    GEO_DLL	OGR_WD_MouseMove(OGROSWindowH, unsigned int, int, int, void*);
void                    GEO_DLL	OGR_WD_LButtonDown(OGROSWindowH, unsigned int, int, int, void*);
void                    GEO_DLL	OGR_WD_LButtonUp(OGROSWindowH, unsigned int, int, int, void*);
void                    GEO_DLL	OGR_WD_RButtonDown(OGROSWindowH, unsigned int, int, int, void*);
void                    GEO_DLL	OGR_WD_RButtonUp(OGROSWindowH, unsigned int, int, int, void*);
void                    GEO_DLL	OGR_WD_DblClick(OGROSWindowH, unsigned int, int, int, void*);
void                    GEO_DLL	OGR_WD_KeyDown(OGROSWindowH, unsigned int, unsigned int, unsigned int);
void                    GEO_DLL	OGR_WD_KeyUp(OGROSWindowH, unsigned int, unsigned int, unsigned int);
void                    GEO_DLL	OGR_WD_MButtonDown(OGROSWindowH, unsigned int, int, int, void*);
void                    GEO_DLL	OGR_WD_MButtonUp(OGROSWindowH, unsigned int, int, int, void*);

OGROSWindowH			GEO_DLL OGR_WD_CreateWindow(const char*, int, int, unsigned int);
void					GEO_DLL OGR_WD_AddChild(OGROSWindowH, OGROSWindowH, int, int);
void					GEO_DLL OGR_WD_RemoveChild(OGROSWindowH, OGROSWindowH);
void                    GEO_DLL *OGR_WD_GetBitmap(OGROSWindowH );
OGRAnimatorH			GEO_DLL	OGR_WD_GetAnimator(OGROSWindowH);

/* Canvas */
CanvasTypeEnumH		GEO_DLL	OGR_CVS_GetCanvasType(OGRCanvasH);
const char			GEO_DLL	*OGR_CVS_GetTitle(OGRCanvasH);
void				GEO_DLL	OGR_CVS_SetTitle(OGRCanvasH, const char*);
int					GEO_DLL	OGR_CVS_GetState(OGRCanvasH);
void				GEO_DLL	OGR_CVS_SetState(OGRCanvasH, int);
OGRFeatureCanvasH	GEO_DLL OGR_CVS_GetFeatureCanvas(OGRCanvasH);
void				GEO_DLL OGR_CVS_SetFeatureCanvas(OGRCanvasH, OGRFeatureCanvasH);
unsigned int		GEO_DLL	OGR_CVS_GetMapControl(OGRCanvasH);
void				GEO_DLL	OGR_CVS_SetMapControl(OGRCanvasH, unsigned int);
void				GEO_DLL	OGR_CVS_VisibleMapControl(OGRCanvasH, SystemResourceEnumH, int);
MapMoveEnumH		GEO_DLL	OGR_CVS_GetMapMoveMode(OGRCanvasH);
void				GEO_DLL	OGR_CVS_SetMapMoveMode(OGRCanvasH, MapMoveEnumH);
MapRotateEnumH		GEO_DLL	OGR_CVS_GetMapRotateMode(OGRCanvasH);
void				GEO_DLL	OGR_CVS_SetMapRotateMode(OGRCanvasH, MapRotateEnumH);
void				GEO_DLL	OGR_CVS_SetLocationSensor(OGRCanvasH, OGRLocationSensorH);
void				GEO_DLL	OGR_CVS_SetMotionSensor(OGRCanvasH, OGRMotionSensorH);
void				GEO_DLL	OGR_CVS_SetVideoSensor(OGRCanvasH, OGRVideoSensorH);
void				GEO_DLL	OGR_CVS_RemoveSensor(OGRCanvasH, OGRSensorH);
void				GEO_DLL OGR_CVS_OnSensor(OGRCanvasH, SensorTypeEnumH, int bStop);
OGRSensorH			GEO_DLL OGR_CVS_GetSensor(OGRCanvasH, SensorTypeEnumH);
OGRSpatialReferenceH	GEO_DLL OGR_CVS_GetObjectiveSpatialReference(OGRCanvasH);
void				GEO_DLL OGR_CVS_SetObjectiveSpatialReference(OGRCanvasH, OGRSpatialReferenceH);
void				GEO_DLL OGR_CVS_AddControl(OGRCanvasH, unsigned int, OGRUserDefinedWidgetH);
void				GEO_DLL OGR_CVS_RemoveControl(OGRCanvasH, unsigned int);
void				GEO_DLL OGR_CVS_RemoveAllControl(OGRCanvasH);
void				GEO_DLL OGR_CVS_ForceStopRender(OGRCanvasH);
int					GEO_DLL OGR_CVS_GetHittestSize(OGRCanvasH);
void				GEO_DLL OGR_CVS_SetHittestSize(OGRCanvasH, int);

/*  SGCanvas - NPApi, C, Java interface (not supported COM) */
OGRCanvasH			GEO_DLL OGR_CVS_GetObject(OGRCanvasH);
void				GEO_DLL	OGR_CVS_AddEventListener(OGRCanvasH, OGREventH);
void				GEO_DLL	OGR_CVS_RemoveEventListener(OGRCanvasH, OGREventH);
int					GEO_DLL	OGR_CVS_HasEventListener(OGRCanvasH, OGREventH);
void				GEO_DLL OGR_CVS_FireEvent(OGRCanvasH, const char*, OGRParametersH);

/* Map2D */
OGRFeatureCanvasH	GEO_DLL OGR_2D_GetFeatureCanvas(OGRMap2DH);	
void				GEO_DLL	OGR_2D_SetFeatureCanvas(OGRMap2DH, OGRFeatureCanvasH);
unsigned int		GEO_DLL	OGR_2D_GetBackColor(OGRMap2DH);
void				GEO_DLL	OGR_2D_SetBackColor(OGRMap2DH, unsigned int);
void                GEO_DLL	OGR_2D_Initialize(OGRMap2DH, ULONG_PTR);
void                GEO_DLL	OGR_2D_ReSize(OGRMap2DH, unsigned int, unsigned int, unsigned int);
void                GEO_DLL	OGR_2D_MouseMove(OGRMap2DH, unsigned int, int, int, void*);
void                GEO_DLL	OGR_2D_LButtonDown(OGRMap2DH, unsigned int, int, int, void*);
void                GEO_DLL	OGR_2D_LButtonUp(OGRMap2DH, unsigned int, int, int, void*);
void                GEO_DLL	OGR_2D_RButtonDown(OGRMap2DH, unsigned int, int, int, void*);
void                GEO_DLL	OGR_2D_RButtonUp(OGRMap2DH, unsigned int, int, int, void*);
void                GEO_DLL	OGR_2D_DblClick(OGRMap2DH, unsigned int, int, int, void*);
void                GEO_DLL	OGR_2D_KeyDown(OGRMap2DH, unsigned int, unsigned int, unsigned int);
void                GEO_DLL	OGR_2D_KeyUp(OGRMap2DH, unsigned int, unsigned int, unsigned int);
void                GEO_DLL	OGR_2D_MButtonDown(OGRMap2DH, unsigned int, int, int, void*);
void                GEO_DLL	OGR_2D_MButtonUp(OGRMap2DH, unsigned int, int, int, void*);
void				GEO_DLL	OGR_2D_Invalidate(OGRMap2DH);

double				GEO_DLL	OGR_2D_GetScale(OGRMap2DH, int);
void				GEO_DLL	OGR_2D_SetScale(OGRMap2DH, double, int);
short				GEO_DLL	OGR_2D_GetRotate(OGRMap2DH);
void				GEO_DLL	OGR_2D_SetRotate(OGRMap2DH, short);
ScreenModeEnumH		GEO_DLL	OGR_2D_GetScreenMode(OGRMap2DH);
void				GEO_DLL	OGR_2D_SetScreenMode(OGRMap2DH, ScreenModeEnumH);
unsigned int		GEO_DLL	OGR_2D_GetSnapMode(OGRMap2DH);
void				GEO_DLL	OGR_2D_SetSnapMode(OGRMap2DH, unsigned int);
SpatialOperatorEnumH	GEO_DLL	OGR_2D_GetSelectMode(OGRMap2DH);
void				GEO_DLL	OGR_2D_SetSelectMode(OGRMap2DH, SpatialOperatorEnumH);
int					GEO_DLL	OGR_2D_GetVisibleSmallGeometry(OGRMap2DH);
void				GEO_DLL	OGR_2D_SetVisibleSmallGeometry(OGRMap2DH, int);
int					GEO_DLL	OGR_2D_GetVisibleSelectedVertexNumber(OGRMap2DH);
void				GEO_DLL	OGR_2D_SetVisibleSelectedVertexNumber(OGRMap2DH, int);
short				GEO_DLL	OGR_2D_GetSmallPixelSize(OGRMap2DH);
void				GEO_DLL	OGR_2D_SetSmallPixelSize(OGRMap2DH, short);
AntiAliasTypeEnumH	GEO_DLL	OGR_2D_GetAntiAlias(OGRMap2DH);
void				GEO_DLL	OGR_2D_SetAntiAlias(OGRMap2DH, AntiAliasTypeEnumH);
double				GEO_DLL OGR_2D_GetMinZoomScaleDenominator(OGRMap2DH);
void				GEO_DLL OGR_2D_SetMinZoomScaleDenominator(OGRMap2DH, double);
double				GEO_DLL OGR_2D_GetMaxZoomScaleDenominator(OGRMap2DH);
void				GEO_DLL OGR_2D_SetMaxZoomScaleDenominator(OGRMap2DH, double);
int					GEO_DLL OGR_2D_GetFillBrush(OGRMap2DH);
void				GEO_DLL OGR_2D_SetFillBrush(OGRMap2DH, int);
unsigned int		GEO_DLL OGR_2D_GetSnapGrid(OGRMap2DH);
void				GEO_DLL OGR_2D_SetSnapGrid(OGRMap2DH, unsigned int);
unsigned int		GEO_DLL OGR_2D_GetSyncMoveMode(OGRMap2DH);
void				GEO_DLL OGR_2D_SetSyncMoveMode(OGRMap2DH, unsigned int);
int					GEO_DLL	OGR_2D_GetPointOnSurface(OGRMap2DH);
void				GEO_DLL	OGR_2D_SetPointOnSurface(OGRMap2DH, int);
int					GEO_DLL	OGR_2D_GetAutoScale(OGRMap2DH);
void				GEO_DLL	OGR_2D_SetAutoScale(OGRMap2DH, int);
int					GEO_DLL	OGR_2D_GetOverlapLabel(OGRMap2DH);
void				GEO_DLL	OGR_2D_SetOverlapLabel(OGRMap2DH, int);
int					GEO_DLL OGR_2D_GetFlickerSelected(OGRMap2DH);
void				GEO_DLL OGR_2D_SetFlickerSelected(OGRMap2DH, int);
int					GEO_DLL OGR_2D_GetVisibleMagnifier(OGRMap2DH);
void				GEO_DLL OGR_2D_SetVisibleMagnifier(OGRMap2DH, int);
int					GEO_DLL OGR_2D_GetMagnifierPixelSize(OGRMap2DH);
void				GEO_DLL OGR_2D_SetMagnifierPixelSize(OGRMap2DH, int);
float				GEO_DLL OGR_2D_GetMagnifierScale(OGRMap2DH);
void 				GEO_DLL OGR_2D_SetMagnifierScale(OGRMap2DH, float);
double				GEO_DLL OGR_2D_GetRatioZoomScale(OGRMap2DH);
void 				GEO_DLL OGR_2D_SetRatioZoomScale(OGRMap2DH, double);
void 				GEO_DLL OGR_2D_GetMeasureLineStd(OGRMap2DH, double *, double *);
void 				GEO_DLL OGR_2D_SetMeasureLineStd(OGRMap2DH, double, double);
double 				GEO_DLL OGR_2D_GetMeasureLineStdLength(OGRMap2DH);
void 				GEO_DLL OGR_2D_SetMeasureLineStdLength(OGRMap2DH, double);
void 				GEO_DLL OGR_2D_GetMeasureLineSubUnitNum(OGRMap2DH, int *, int *);
void 				GEO_DLL OGR_2D_SetMeasureLineSubUnitNum(OGRMap2DH, int, int);
unsigned int 		GEO_DLL OGR_2D_GetMeasureLineShowType(OGRMap2DH);
void 				GEO_DLL OGR_2D_SetMeasureLineShowType(OGRMap2DH, unsigned int);
double				GEO_DLL OGR_2D_GetMeasureValue(OGRMap2DH);
void 				GEO_DLL OGR_2D_GetScaleBarRelativePos(OGRMap2DH, double *, double *);
void 				GEO_DLL OGR_2D_SetScaleBarRelativePos(OGRMap2DH, double, double);
AlignPositionEnumH	GEO_DLL OGR_2D_GetScaleBarShowType(OGRMap2DH);
void 				GEO_DLL OGR_2D_SetScaleBarShowType(OGRMap2DH, AlignPositionEnumH);
void 				GEO_DLL OGR_2D_GetMapControlRelativePos(OGRMap2DH, SystemResourceEnumH, double *, double *);
void 				GEO_DLL OGR_2D_SetMapControlRelativePos(OGRMap2DH, SystemResourceEnumH, double, double);
AlignPositionEnumH	GEO_DLL OGR_2D_GetMapControlShowType(OGRMap2DH, SystemResourceEnumH);
void 				GEO_DLL OGR_2D_SetMapControlShowType(OGRMap2DH, SystemResourceEnumH, AlignPositionEnumH);
int					GEO_DLL OGR_2D_GetScalePrecision(OGRMap2DH);
void				GEO_DLL OGR_2D_SetScalePrecision(OGRMap2DH, int);
void				GEO_DLL OGR_2D_SetMapControlImageFromFileName(OGRMap2DH, SystemResourceEnumH, const char*);
void				GEO_DLL OGR_2D_AnimateSelectedFeatureCollection(OGRMap2DH);
void				GEO_DLL OGR_2D_SetSelectedSymbolizer(OGRMap2DH, OGRSymbolizerH);
void				GEO_DLL OGR_2D_SetSelectedSymbolizerFromString(OGRMap2DH, const char*);
void				GEO_DLL OGR_2D_SetKeyEnable(OGRMap2DH, SystemKeyEnumH, int);
void				GEO_DLL OGR_2D_SetMouseButtonEnable(OGRMap2DH, MouseButtonTypeEnumH, int);
void				GEO_DLL OGR_2D_SetDrawProgressEnable(OGRMap2DH, int);
OGRPrintLayoutWidgetH	GEO_DLL OGR_2D_ShowPrintLayoutWidget(OGRMap2DH, const char*);
int					GEO_DLL OGR_2D_GetUseDrawThread(OGRMap2DH);
void				GEO_DLL OGR_2D_SetUseDrawThread(OGRMap2DH, int);
void				GEO_DLL OGR_2D_SetSelectedVertexSymbolizer(OGRMap2DH, OGRSymbolizerH);
void				GEO_DLL OGR_2D_SetSelectedVertexSymbolizerFromString(OGRMap2DH, const char*);
void				GEO_DLL OGR_2D_SetScaleBarSymbolizer(OGRMap2DH, OGRSymbolizerH);
void				GEO_DLL OGR_2D_SetScaleBarSymbolizerFromString(OGRMap2DH, const char*);
void				GEO_DLL OGR_2D_SetMouseCursor(OGRMap2DH, CursorEnumH, const char*, int, int, int);
void				GEO_DLL OGR_2D_SetSystemSymbolizerFromString(OGRMap2DH, SystemSymbolEnumH, const char*);
int					GEO_DLL OGR_2D_GetTransparentBackColor(OGRMap2DH);
void				GEO_DLL OGR_2D_SetTransparentBackColor(OGRMap2DH, int);

void				GEO_DLL	OGR_2D_ZoomAll(OGRMap2DH);
void				GEO_DLL	OGR_2D_ZoomRect(OGRMap2DH, double, double, double, double);
void				GEO_DLL	OGR_2D_ZoomIn(OGRMap2DH);
void				GEO_DLL	OGR_2D_ZoomOut(OGRMap2DH);


void				GEO_DLL	OGR_2D_ZoomFeature(OGRMap2DH, OGRFeatureH);
void				GEO_DLL	OGR_2D_ZoomToFeatureCollection(OGRMap2DH, OGRFeatureCollectionH);
void				GEO_DLL	OGR_2D_ZoomToSelectedFeatures(OGRMap2DH);
void				GEO_DLL	OGR_2D_ZoomGPS(OGRMap2DH, double);
void				GEO_DLL	OGR_2D_ZoomCenter(OGRMap2DH, double, double);
void				GEO_DLL	OGR_2D_ZoomPrevious(OGRMap2DH);
void				GEO_DLL	OGR_2D_ZoomNext(OGRMap2DH);

//void				GEO_DLL	OGR_2D_Dispose(OGRMap2DH);
void				GEO_DLL	OGR_2D_BoundingBox(OGRMap2DH, double*, double*, double*, double*);
double				GEO_DLL	OGR_2D_GetMinXBoundingBox(OGRMap2DH);
double				GEO_DLL	OGR_2D_GetMinYBoundingBox(OGRMap2DH);
double				GEO_DLL	OGR_2D_GetMaxXBoundingBox(OGRMap2DH);
double				GEO_DLL	OGR_2D_GetMaxYBoundingBox(OGRMap2DH);

void				GEO_DLL	OGR_2D_DeviceToWorld(OGRMap2DH, float, float, double*, double*);
void				GEO_DLL	OGR_2D_DeviceToWorldZ(OGRMap2DH, float, float, double*);
void				GEO_DLL	OGR_2D_WorldToDevice(OGRMap2DH, double, double, float*, float*);
double				GEO_DLL	OGR_2D_GetXDeviceToWorld(OGRMap2DH, float, float);
double				GEO_DLL	OGR_2D_GetYDeviceToWorld(OGRMap2DH, float, float);
float				GEO_DLL	OGR_2D_GetXWorldToDevice(OGRMap2DH, double, double);
float				GEO_DLL	OGR_2D_GetYWorldToDevice(OGRMap2DH, double, double);
void				GEO_DLL OGR_2D_WorldToRasterPixel(OGRMap2DH, double, double, OGRFeatureH, float*, float*);
void				GEO_DLL	OGR_2D_RasterPixelToWorld(OGRMap2DH, float, float, OGRFeatureH, double*, double*);

int					GEO_DLL	OGR_2D_ExportImage(OGRMap2DH, FileFormatEnumH, const char*);
int					GEO_DLL OGR_2D_ExportScreenImage(OGRMap2DH, const char*, unsigned int, unsigned int, unsigned int, unsigned int);
int					GEO_DLL	OGR_2D_ExportImageToWorld(OGRMap2DH, const char*, unsigned int, unsigned int, double, double, double, double);
OGRQImageH			GEO_DLL OGR_2D_ExportToQImage(OGRMap2DH, int);
OGRQImageH			GEO_DLL OGR_2D_ExportToWorldQImage(OGRMap2DH, unsigned int, unsigned int, double, double, double, double);
void				GEO_DLL OGR_2D_ExportToClipboard(OGRMap2DH, int);

void				GEO_DLL	*OGR_2D_GetBitmap(OGRMap2DH);
OGRLineSymbolizerH	GEO_DLL	OGR_2D_GetLabelLineSymbolizer(OGRMap2DH);
void				GEO_DLL	OGR_2D_Destroy(OGRMap2DH);

void				GEO_DLL	OGR_2D_DrawingGeometryAddPoint(OGRMap2DH, double, double);
void				GEO_DLL	OGR_2D_DrawingGeometryRemovePoint(OGRMap2DH, int);
void				GEO_DLL	OGR_2D_DrawingGeometrySetPoint(OGRMap2DH, int, double, double);
void				GEO_DLL	OGR_2D_DrawingGeometryGetPoint(OGRMap2DH, int, double*, double*);
void				GEO_DLL	OGR_2D_DrawingGeometryComplete(OGRMap2DH);
int					GEO_DLL	OGR_2D_DrawingGeometrySize(OGRMap2DH);
void				GEO_DLL	OGR_2D_DrawingGeometryAddGPSPoint(OGRMap2DH);

void				GEO_DLL OGR_2D_AddControl(OGRCanvasH, unsigned int, OGRUserDefinedWidgetH);
void				GEO_DLL OGR_2D_RemoveControl(OGRCanvasH, unsigned int);
void				GEO_DLL OGR_2D_RemoveAllControl(OGRCanvasH);

/* Map3D */
#ifdef BUILD_USE_OSG
void				GEO_DLL OGR_3D_Destroy(OGRMap3DH);
void				GEO_DLL OGR_3D_DestroyRender();
void				GEO_DLL	OGR_3D_SetFeatureCanvas(OGRMap3DH, OGRFeatureCanvasH);
void				GEO_DLL	OGR_3D_SetMapControl(OGRMap3DH, unsigned int);
void				GEO_DLL	OGR_3D_Initialize(OGRMap3DH, ULONG_PTR);
void				GEO_DLL OGR_3D_Draw(OGRMap3DH);
void				GEO_DLL OGR_3D_ReSize(OGRMap3DH, unsigned int, int, int );
void				GEO_DLL OGR_3D_MouseButtonDown(OGRMap3DH, float, float, int);
void				GEO_DLL OGR_3D_MouseButtonUp(OGRMap3DH, float, float, int);
void				GEO_DLL OGR_3D_MouseMove(OGRMap3DH, float x,float y);
void				GEO_DLL OGR_3D_TouchBegan(OGRMap3DH, int, float, float);
void				GEO_DLL OGR_3D_TouchMoved(OGRMap3DH, int, float, float);
void				GEO_DLL OGR_3D_TouchEnded(OGRMap3DH, int, float, float, int);
void				GEO_DLL OGR_3D_KeyDown(OGRMap3DH, int);
void				GEO_DLL OGR_3D_KeyUp(OGRMap3DH, int);
int					GEO_DLL OGR_3D_ExportImage(OGRMap3DH, FileFormatEnumH, const char*);
void				GEO_DLL	OGR_3D_Invalidate(OGRMap3DH);
void				GEO_DLL	OGR_3D_DeviceToWorld(OGRMap3DH, float, float, double*, double*);
void				GEO_DLL	OGR_3D_DeviceToWorldZ(OGRMap3DH, float, float, double*);
void				GEO_DLL	OGR_3D_WorldToDevice(OGRMap3DH, double, double, float*, float*);
OGRMap3DCameraH		GEO_DLL OGR_3D_GetMap3DCamera(OGRMap3DH);
OGRMap3DLightH		GEO_DLL OGR_3D_GetMap3DLight(OGRMap3DH);
void				GEO_DLL OGR_3D_SetScreenMode(OGRMap3DH, ScreenModeEnumH);
ScreenModeEnumH		GEO_DLL OGR_3D_GetScreenMode(OGRMap3DH);
unsigned int		GEO_DLL	OGR_3D_GetBackColor(OGRMap3DH);
void				GEO_DLL	OGR_3D_SetBackColor(OGRMap3DH, unsigned int);
void				GEO_DLL OGR_3D_SetSightMode(OGRMap3DH, SightModeEnumH);
SightModeEnumH		GEO_DLL OGR_3D_GetSightMode(OGRMap3DH);
void				GEO_DLL OGR_3D_CreateViewshed(OGRMap3DH, int*, SightModeEnumH, double, double, double, double, double, double);
void				GEO_DLL OGR_3D_SetViewshedParam(OGRMap3DH, SightModeEnumH, double, int, int, double, double, double, double, double);
void				GEO_DLL OGR_3D_SetViewshedColor(OGRMap3DH, SightModeEnumH, unsigned int, unsigned int, unsigned int);
void				GEO_DLL OGR_3D_ClearViewshed(OGRMap3DH);
long				GEO_DLL OGR_3D_AddPOIFromMemory(OGRMap3DH, const char*, double , double , const char*  );
long				GEO_DLL OGR_3D_RemoveAllPOIFromMemory(OGRMap3DH );
long				GEO_DLL OGR_3D_SetHomePosition(OGRMap3DH, double, double,double,double, double  );
int					GEO_DLL OGR_3D_ZoomHomePosition(OGRMap3DH, double ,double  ,double  , double , double );
void				GEO_DLL OGR_3D_ZoomRect(OGRMap3DH, double ,double  ,double  , double );


void				GEO_DLL OGR_3D_StartAnimation(OGRMap3DH, double);
void				GEO_DLL OGR_3D_StopAnimation(OGRMap3DH);
void				GEO_DLL OGR_3D_ResetAnimation(OGRMap3DH);
void				GEO_DLL OGR_3D_AddAnimationKeyFrame(OGRMap3DH, double);
void				GEO_DLL OGR_3D_RemoveAnimationKeyFrame(OGRMap3DH, double);
void				GEO_DLL OGR_3D_SetAnimationKeyFrame(OGRMap3DH, double);
int					GEO_DLL OGR_3D_GetAnimationKeyFrameSize(OGRMap3DH);
void				GEO_DLL OGR_3D_GetAnimationKeyFrame(OGRMap3DH, double, double*);
void				GEO_DLL OGR_3D_GetAnimationKeyFrameFromIndex(OGRMap3DH, int, double*, double*);
void				GEO_DLL OGR_3D_ZoomToAnimationFrame(OGRMap3DH, double);
void				GEO_DLL OGR_3D_LoadAnimationPath(OGRMap3DH, const char*);
void				GEO_DLL OGR_3D_SaveAnimationPath(OGRMap3DH, const char*);

void				GEO_DLL OGR_3D_AddControl(OGRCanvasH, unsigned int, OGRUserDefinedWidgetH);
void				GEO_DLL OGR_3D_RemoveControl(OGRCanvasH, unsigned int);
void				GEO_DLL OGR_3D_RemoveAllControl(OGRCanvasH);

/* MapEarth */
void				GEO_DLL OGR_3D_SetShadowEnable(OGRMap3DH, int, int, int, float);
void				GEO_DLL OGR_3D_GetShadowEnable(OGRMap3DH, int*, int*, int*, float*);
void				GEO_DLL OGR_3D_SetSkyDateTime(OGRMap3DH, int, int, int, int, int);
void				GEO_DLL OGR_3D_GetSkyDateTime(OGRMap3DH, int*, int*, int*, int*, int*);
void				GEO_DLL OGR_3D_SetOceanEnable(OGRMap3DH, int, const char*);
void				GEO_DLL OGR_3D_GetOceanEnable(OGRMap3DH, int*);
void				GEO_DLL OGR_3D_ZoomToFeatureCollection(OGRMap3DH, OGRFeatureCollectionH);

/* Map3DCamera */
void				GEO_DLL OGR_3DC_SetViewpoint(OGRMap3DCameraH, double, double, double, double, double, double, double);
void				GEO_DLL OGR_3DC_GetViewpoint(OGRMap3DCameraH, double*, double*, double*, double*, double*, double*);
void				GEO_DLL	OGR_3DC_ZoomIn(OGRMap3DCameraH);
void				GEO_DLL	OGR_3DC_ZoomOut(OGRMap3DCameraH);
void				GEO_DLL	OGR_3DC_ZoomInEx(OGRMap3DCameraH, double);
void				GEO_DLL	OGR_3DC_ZoomOutEx(OGRMap3DCameraH, double);
void				GEO_DLL	OGR_3DC_Turn(OGRMap3DCameraH, double, double);

void				GEO_DLL	OGR_3DC_ZoomAll(OGRMap3DCameraH);
void				GEO_DLL	OGR_3DC_MoveFromGeo(OGRMap3DCameraH,double , double , int , double );
long				GEO_DLL	OGR_3DC_GetCenter(OGRMap3DCameraH,double* , double* );
double				GEO_DLL	OGR_3DC_GetCenterX(OGRMap3DCameraH);
double				GEO_DLL	OGR_3DC_GetCenterY(OGRMap3DCameraH);
void				GEO_DLL OGR_3DC_SetDefaultViewpoint(OGRMap3DCameraH, double, double, double, double, double, double);
void				GEO_DLL OGR_3DC_GetDefaultViewpoint(OGRMap3DCameraH, double*, double*, double*, double*, double*, double*);
void				GEO_DLL OGR_3DC_SetMinMaxPitch(OGRMap3DCameraH, int, int);
void				GEO_DLL OGR_3DC_GetMinMaxPitch(OGRMap3DCameraH, int*, int*);

#endif

/* Sensor */
int					GEO_DLL	OGR_SN_Start(OGRSensorH, OGRParametersH);
void				GEO_DLL	OGR_SN_Stop(OGRSensorH);
SensorTypeEnumH		GEO_DLL	OGR_SN_GetSensorType(OGRSensorH);
int					GEO_DLL	OGR_SN_IsServiceRunning(OGRSensorH);
void				GEO_DLL OGR_SN_AddEventListener(OGRSensorH, OGREventH);
void				GEO_DLL OGR_SN_RemoveEventListener(OGRSensorH, OGREventH);
int					GEO_DLL OGR_SN_HasEventListener(OGRSensorH, OGREventH);
void				GEO_DLL *OGR_SN_GetLatestValue(OGRSensorH);
const char			GEO_DLL *OGR_SN_GetLatestValueToXML(OGRSensorH);

/* LocationSensor */
short				GEO_DLL	OGR_LSN_GetPortNumber(OGRLocationSensorH);
unsigned int		GEO_DLL	OGR_LSN_GetBaudRate(OGRLocationSensorH);
LocationSensorTypeEnumH	GEO_DLL	OGR_LSN_GetLocationSensorType(OGRLocationSensorH);
void				GEO_DLL	OGR_LSN_SetLocationSensorType(OGRLocationSensorH, LocationSensorTypeEnumH);
void				GEO_DLL	OGR_LSN_SetUnknownSensor(OGRLocationSensorH, int, int, int, int, int, int);

/* global */
void				GEO_DLL OGR_GB_Initialize();
void				GEO_DLL OGR_GB_Destroy();

/* Utility */
void                GEO_DLL OGR_UT_Destroy(OGRUtilityH);
OGRQImageH			GEO_DLL OGR_UT_ColorToQImage(OGRUtilityH, unsigned int, int, int);
OGRQImageH			GEO_DLL OGR_UT_ColorRampToQImage(OGRUtilityH, OGRGridColorRampStyleH, int, int);
OGRQImageH			GEO_DLL OGR_UT_StyleToQImage(OGRUtilityH, OGRFeatureCanvasH, OGRSymbolizerH, HitObjectTypeEnum, GeometryTypeEnum, int, int);
GInt8				GEO_DLL	*OGR_UT_Encryption(OGRUtilityH, const char*, GInt8*, int);
GInt8				GEO_DLL	*OGR_UT_Decryption(OGRUtilityH, const char*, GInt8*, int);
OGRGeometryH		GEO_DLL	OGR_UT_ProjectMGRSToPoint(OGRUtilityH, const char*, OGRSpatialReferenceH); 
const char			GEO_DLL	*OGR_UT_ProjectMGRSToString(OGRUtilityH, OGRGeometryH, OGRSpatialReferenceH);
//const char		GEO_DLL	*OGR_UT_ProjectWorldMapPoint(OGRUtilityH, OGRSpatialReferenceH, double, double, int, int*, int*);
const char			GEO_DLL	*OGR_UT_ProjectWorldMapPoint(OGRUtilityH, OGRSpatialReferenceH, double, double, int);
OGRGeometryH		GEO_DLL	OGR_UT_WorldMapBoundingBox(OGRUtilityH, OGRSpatialReferenceH, int, const char*);
int					GEO_DLL OGR_UT_ProjectFromCRS(double*, double*, OGRSpatialReferenceH, OGRSpatialReferenceH);
int					GEO_DLL OGR_UT_ProjectFromText(double*, double*, const char*, const char*);
const char			GEO_DLL	*OGR_UT_GetModuleFilePath(OGRUtilityH);
int 				GEO_DLL	OGR_UT_Compression(OGRUtilityH, const char*, const char*, GDALProgressFuncH, void *);
int 				GEO_DLL	OGR_UT_Decompression(OGRUtilityH, const char*, const char*, GDALProgressFuncH, void *);
int					GEO_DLL	OGR_UT_IsConfigured(OGRUtilityH);
void				GEO_DLL OGR_UT_SetConfigured(OGRUtilityH, int);
const char			GEO_DLL *OGR_UT_GetEncoding(OGRUtilityH);
void				GEO_DLL	OGR_UT_SetEncoding(OGRUtilityH, const char*);
void				GEO_DLL OGR_UT_SetDebug(OGRUtilityH, int);
double				GEO_DLL OGR_UT_GetSurfaceVolumeFromGridCoverage(OGRUtilityH, OGRGridCoverageH, OGRGeometryH, VolumeTypeEnumH, double, double, int, OGRParametersH);
void				GEO_DLL OGR_UT_GetSurfaceVolumeFromGridCoverageFlat(OGRUtilityH, OGRGridCoverageH, OGRGeometryH, double);

unsigned int		GEO_DLL OGR_UT_GetRandomRGBColor();
unsigned int		GEO_DLL OGR_UT_GetRandomRGBAColor();
unsigned int		GEO_DLL OGR_UT_GetSwapColor(unsigned int);
const char			GEO_DLL *OGR_UT_RGBToHex(unsigned int);
unsigned int		GEO_DLL OGR_UT_ColorToNumber(int, int, int, int);
unsigned int		GEO_DLL OGR_UT_ColorStringToNumber(const char* pszColor);

const char			GEO_DLL *OGR_UT_StringToUnicode(const char*);
const char			GEO_DLL *OGR_UT_StringToUTF8(const char*);
void				GEO_DLL OGR_UT_ShowUpdater();
const char			GEO_DLL *OGR_UT_GetVersion();
const char			GEO_DLL *OGR_UT_GetMyMacAddress();
const char			GEO_DLL *OGR_UT_GetMyIPAddress();
double				GEO_DLL OGR_UT_CalculateDistanceFromLL(double, double, double, double);
double				GEO_DLL OGR_UT_CalculateMeterUnitFromLL(double, double, int);
const char			GEO_DLL *OGR_UT_GetConfigOption(const char*);
void				GEO_DLL OGR_UT_SetConfigOption(const char*, const char*);
int					GEO_DLL OGR_UT_ExecuteProjectQueryFile(const char*, const char*);
int					GEO_DLL OGR_UT_ExecuteSQLQueryFile(const char*, const char*);
int					GEO_DLL OGR_UT_GetMap2DKeyFromWinKey(int);
int					GEO_DLL OGR_UT_GetMap3DKeyFromQtKey(int);
int					GEO_DLL OGR_UT_GetMap3DKeyFromWinKey(int);
int					GEO_DLL OGR_UT_GetWinFromQtKey(int nQtKey);
const char			GEO_DLL *OGR_UT_GetHttpResult(const char*, const char*);
const char			GEO_DLL *OGR_UT_GetURLEncoded(const char*);

const char			GEO_DLL *OGR_UT_GetDirectory(const char*, const char*);
int					GEO_DLL OGR_UT_Download(const char*, const char*, GDALCURLProgressFuncH, void *);
int					GEO_DLL OGR_UT_Upload(const char*, const char*, GDALCURLProgressFuncH, void *);

/* CommonFactory */
OGRCommonFactoryH			GEO_DLL OGR_CF_GetCommonFactory();
void							GEO_DLL OGR_CF_DoPluginInit(OGRApplicationH, OGRFeatureCanvasH, OGRCanvasH, OGRFeatureLayerH);
int							GEO_DLL OGR_CF_DoPluginOperation(const char*, OGRParametersH);

OGRDisplayFactoryH			GEO_DLL OGR_CF_GetDisplayFactory(OGRCommonFactoryH);
OGRSpatialReferenceFactoryH	GEO_DLL OGR_CF_CreateCRSFactory(OGRCommonFactoryH);
OGRGeometryFactoryH			GEO_DLL OGR_CF_CreateGeometryFactory(OGRCommonFactoryH, OGRSpatialReferenceH);
OGRLayerSourceFactoryH		GEO_DLL OGR_CF_GetLayerSourceFactory(OGRCommonFactoryH);
OGRFeatureTypeStyleFactoryH	GEO_DLL OGR_CF_CreateFeatureTypeStyleFactory(OGRCommonFactoryH);
OGRCoverageFactoryH			GEO_DLL OGR_CF_CreateCoverageFactory(OGRCommonFactoryH);
OGRParametersH				GEO_DLL OGR_CF_CreateParameters(OGRCommonFactoryH);
OGRParameterH				GEO_DLL OGR_CF_CreateParameter(OGRCommonFactoryH);
OGRUtilityH					GEO_DLL OGR_CF_CreateUtility(OGRCommonFactoryH);
OGRMessageH					GEO_DLL OGR_CF_CreateMessage(OGRCommonFactoryH);
OGRAnimatorH				GEO_DLL OGR_CF_CreateAnimator(OGRCommonFactoryH);
OGRLocationSensorH			GEO_DLL OGR_CF_GetLocationSensor(OGRCommonFactoryH);
OGRMotionSensorH			GEO_DLL OGR_CF_GetMotionSensor(OGRCommonFactoryH);
OGRVideoSensorH				GEO_DLL OGR_CF_GetVideoSensor(OGRCommonFactoryH);
OGRColorRampListH			GEO_DLL OGR_CF_GetColorRampList(OGRCommonFactoryH);
OGRLayerSourceH				GEO_DLL OGR_CF_GetSystemLayerSource(OGRCommonFactoryH);
OGRFeatureTypeH				GEO_DLL OGR_CF_CreateFeatureType(OGRCommonFactoryH, const char*);
OGRFeatureAttributeDescriptorH GEO_DLL OGR_CF_CreateFeatureAttributeDescriptor(OGRCommonFactoryH, const char*, OGRFieldTypeEnumH);
OGRFeatureQueryH			GEO_DLL OGR_CF_CreateFeatureQuery(OGRCommonFactoryH);
OGRAttributeIndexH			GEO_DLL OGR_CF_CreateAttributeIndex(OGRCommonFactoryH);
OGRLocationServiceH			GEO_DLL OGR_CF_CreateLocationService(OGRCommonFactoryH);

/* DisplayFactory */
OGRCanvasH					GEO_DLL	OGR_DF_CreateCanvas(OGRDisplayFactoryH, const char*);
OGRWidgetH					GEO_DLL	OGR_DF_CreateWidget(OGRDisplayFactoryH, const char*);
OGRFeatureCanvasH			GEO_DLL	OGR_DF_CreateFeatureCanvas(OGRDisplayFactoryH);
OGRGraphicH                 GEO_DLL OGR_DF_CreateGraphic(OGRDisplayFactoryH, const char*);
OGRGraphicH                 GEO_DLL OGR_DF_CreateGraphicFromFeature(OGRDisplayFactoryH, OGRFeatureH, OGRCanvasH);
OGRGraphicH                 GEO_DLL OGR_DF_CreateGraphicFromGeometry(OGRDisplayFactoryH, OGRGeometryH, OGRCanvasH);

OGRWidgetH					GEO_DLL OGR_DF_CreateWidgetDialog(const char*, OGRFeatureCanvasH, OGRCanvasH, OGRFeatureLayerH, OGRLayerH, const char*, const char*, OGRWidgetH);
int							GEO_DLL OGR_DF_ShowWidgetDialog(OGRWidgetH, int);
void						GEO_DLL OGR_DF_DestroyWidgetDialog(OGRWidgetH);

/* SpatialReferenceFactory */
OGRSpatialReferenceH		GEO_DLL OGR_SF_CreateFromWKT(OGRSpatialReferenceFactoryH, const char*);
OGRSpatialReferenceH		GEO_DLL OGR_SF_CreateFromProj4(OGRSpatialReferenceFactoryH, const char*);
OGRSpatialReferenceH		GEO_DLL OGR_SF_CreateFromXML(OGRSpatialReferenceFactoryH, const char*);
OGRSpatialReferenceH		GEO_DLL OGR_SF_CreateFromESRI(OGRSpatialReferenceFactoryH, const char*);
OGRSpatialReferenceH		GEO_DLL OGR_SF_CreateFromUserInput(OGRSpatialReferenceFactoryH, const char*);
const char					GEO_DLL	*OGR_SF_ExportToWKTAsString(OGRSpatialReferenceFactoryH, OGRSpatialReferenceH);
const char					GEO_DLL	*OGR_SF_ExportToProj4AsString(OGRSpatialReferenceFactoryH, OGRSpatialReferenceH);
const char					GEO_DLL	*OGR_SF_ExportToXMLAsString(OGRSpatialReferenceFactoryH, OGRSpatialReferenceH);
void						GEO_DLL OGR_SF_Destroy(OGRSpatialReferenceFactoryH);
OGRCoordinateTransformationH	GEO_DLL OGR_SF_CreateGeographicTransform(OGRSpatialReferenceFactoryH);

/* SpatialReference */
OGRSpatialReferenceH		GEO_DLL OGR_SR_Clone(OGRSpatialReferenceH);
void						GEO_DLL OGR_SR_Destroy(OGRSpatialReferenceH);
OGRErr						GEO_DLL OGR_SR_ImportFromWkt( OGRSpatialReferenceH, const char * );
OGRErr						GEO_DLL OGR_SR_ImportFromProj4( OGRSpatialReferenceH, const char *);
const char					GEO_DLL *OGR_SR_ExportToWkt( OGRSpatialReferenceH );
const char					GEO_DLL *OGR_SR_ExportToProj4( OGRSpatialReferenceH );
OGRErr						GEO_DLL OGR_SR_SetFromUserInput( OGRSpatialReferenceH, const char * );
void						GEO_DLL OGR_SR_ShowSRSWidget(OGRSpatialReferenceH);
const char					GEO_DLL *OGR_SR_GetEPSGName(OGRSpatialReferenceH);
const char					GEO_DLL *OGR_SR_GetWellKnownText(OGRSpatialReferenceH);
OGRErr						GEO_DLL OGR_SR_SetAuthority(OGRSpatialReferenceH, const char *, const char *, int);
const char					GEO_DLL *OGR_SR_GetAuthorityCode(OGRSpatialReferenceH, const char *);
const char					GEO_DLL *OGR_SR_GetAuthorityName(OGRSpatialReferenceH, const char *);
int							GEO_DLL OGR_SR_IsSame( OGRSpatialReferenceH, OGRSpatialReferenceH );

/* CoverageFactory */
OGRGridCoverageProcessorH	GEO_DLL	OGR_CVF_GetGridCoverageProcessor(OGRCoverageFactoryH);
OGRNetworkCoverageAnalysisH GEO_DLL	OGR_CVF_CreateNetworkCoverageAnalysis(OGRCoverageFactoryH);
OGRGridCoverageH			GEO_DLL OGR_CVF_CreateGridCoverage(const char *, int);
void						GEO_DLL OGR_CVF_Destroy(OGRCoverageFactoryH);

/* FeatureTypeStyleFactory */
void						GEO_DLL OGR_FSF_Destroy(OGRFeatureTypeStyleFactoryH);
OGRFeatureTypeStyleH		GEO_DLL OGR_FSF_CreateFeatureTypeStyle(OGRFeatureTypeStyleFactoryH);
OGRFeatureTypeStyleH		GEO_DLL OGR_FSF_CreateFeatureTypeStyleFromXML(OGRFeatureTypeStyleFactoryH, const char*);
OGRSymbolizerH				GEO_DLL OGR_FSF_CreateSymbolizer(OGRFeatureTypeStyleFactoryH);
OGRFillH					GEO_DLL OGR_FSF_CreateFillStyle(OGRFeatureTypeStyleFactoryH);
OGRStrokeH					GEO_DLL OGR_FSF_CreateStrokeStyle(OGRFeatureTypeStyleFactoryH);
OGRMarkH					GEO_DLL OGR_FSF_CreateMarkStyle(OGRFeatureTypeStyleFactoryH);
OGRFontH					GEO_DLL OGR_FSF_CreateFontStyle(OGRFeatureTypeStyleFactoryH);
OGRFeatureTypeStyleRuleH	GEO_DLL OGR_FSF_CreateFeatureTypeStyleRule(OGRFeatureTypeStyleFactoryH);

/* Widget */
OGRWidgetH			GEO_DLL OGR_WG_GetObject(OGRWidgetH);
void                GEO_DLL	OGR_WG_Initialize(OGRWidgetH, ULONG_PTR);
void				GEO_DLL OGR_WG_Destroy(OGRWidgetH);
void				GEO_DLL	OGR_WG_ReSize(OGRWidgetH, unsigned int, unsigned int, unsigned int, unsigned int);
int					GEO_DLL OGR_WG_GetWidth(OGRWidgetH);
int					GEO_DLL OGR_WG_GetHeight(OGRWidgetH);
void				GEO_DLL OGR_WG_AddWidget(OGRWidgetH, OGRWidgetH);
void				GEO_DLL OGR_WG_AddWidgetByLayout(OGRWidgetH, OGRWidgetH, int, int);
void				GEO_DLL OGR_WG_SetFlag(OGRWidgetH, const char*);
const char			GEO_DLL *OGR_WG_GetFlag(OGRWidgetH);

void				GEO_DLL	OGR_WG_SetCanvas(OGRWidgetH, OGRCanvasH);
void				GEO_DLL	OGR_WG_SetFeatureCanvas(OGRWidgetH, OGRFeatureCanvasH);
void				GEO_DLL	OGR_WG_SetFeatureLayer(OGRWidgetH, OGRFeatureLayerH);
void				GEO_DLL	OGR_WG_SetLayer(OGRWidgetH, OGRLayerH);
OGRFeatureCanvasH	GEO_DLL OGR_WG_GetFeatureCanvas(OGRWidgetH);

unsigned int		GEO_DLL OGR_WG_GetBackColor(OGRWidgetH);
void 				GEO_DLL OGR_WG_SetBackColor(OGRWidgetH, unsigned int);
int					GEO_DLL OGR_WG_IsQtUi(OGRWidgetH);
void				GEO_DLL OGR_WG_SetQtUi(OGRWidgetH, int);
void				GEO_DLL OGR_WG_SetQtUiObjectVisible(OGRWidgetH, const char*, int);

#ifdef BUILD_USE_QT

/* IndexMapWidget */
OGRCanvasH			GEO_DLL OGR_IWG_GetCanvas(OGRIndexMapWidgetH);
void				GEO_DLL	OGR_IWG_AddFeatureLayer(OGRIndexMapWidgetH, OGRFeatureLayerH);
void				GEO_DLL	OGR_IWG_SetScaleRatio(OGRIndexMapWidgetH, double);
double				GEO_DLL	OGR_IWG_GetScaleRatio(OGRIndexMapWidgetH);
int					GEO_DLL	OGR_IWG_GetIndexMapAutoMove(OGRIndexMapWidgetH);
void				GEO_DLL	OGR_IWG_SetIndexMapAutoMove(OGRIndexMapWidgetH, int);
int					GEO_DLL	OGR_IWG_GetCanMoveIndexMap(OGRIndexMapWidgetH);
void				GEO_DLL	OGR_IWG_SetCanMoveIndexMap(OGRIndexMapWidgetH, int);

/* LayerTreeWidget */
int					GEO_DLL	OGR_LWG_IndexOfSelectedItem(OGRLayerTreeWidgetH);
int					GEO_DLL OGR_LWG_GetDisplayToolBar(OGRLayerTreeWidgetH);
void				GEO_DLL OGR_LWG_SetDisplayToolBar(OGRLayerTreeWidgetH, int);
void				GEO_DLL OGR_LWG_SetDisplayContextMenu(OGRLayerTreeWidgetH, int);
OGRFeatureLayerH	GEO_DLL OGR_LWG_GetFeatureLayer(OGRLayerTreeWidgetH, int);
OGRLayerH			GEO_DLL OGR_LWG_GetLayer(OGRLayerTreeWidgetH, int);

/* FeatureAttributeTreeWidget */
int					GEO_DLL	OGR_AWG_IndexOfSelectedItem(OGRFeatureAttributeTreeWidgetH);
int					GEO_DLL OGR_AWG_GetDisplayToolBar(OGRFeatureAttributeTreeWidgetH);
void				GEO_DLL OGR_AWG_SetDisplayToolBar(OGRFeatureAttributeTreeWidgetH, int);
void				GEO_DLL OGR_AWG_SetDisplayContextMenu(OGRFeatureAttributeTreeWidgetH, int);

/* FeatureAttributeTableWidget */
int					GEO_DLL	OGR_TWG_IndexOfSelectedItem(OGRFeatureAttributeTableWidgetH);

/* CRSWidget */
OGRSpatialReferenceH	GEO_DLL	OGR_CWG_GetCRS(OGRCRSWidgetH);
const char				GEO_DLL	*OGR_CWG_GetCRSAsString(OGRCRSWidgetH);
void					GEO_DLL OGR_CWG_SetCRS(OGRCRSWidgetH, const char*);

/* Application */
OGRFeatureCanvasH	GEO_DLL OGR_APP_GetFeatureCanvas(OGRApplicationH);
OGRCommonFactoryH	GEO_DLL OGR_APP_GetCommonFactory(OGRApplicationH);
int					GEO_DLL OGR_APP_GetDisplayToolBarByType(OGRApplicationH, ToolBarTypeEnumH);
void				GEO_DLL OGR_APP_SetDisplayToolBarByType(OGRApplicationH, ToolBarTypeEnumH, int);
void				GEO_DLL OGR_APP_DeleteToolBarByType(OGRApplicationH, ToolBarTypeEnumH);
int					GEO_DLL OGR_APP_GetDisplayMenuBar(OGRApplicationH);
void				GEO_DLL OGR_APP_SetDisplayMenuBar(OGRApplicationH, int);
void				GEO_DLL OGR_APP_SetDisplayToolBar(OGRApplicationH, int);
int					GEO_DLL OGR_APP_GetDisplayStatusBar(OGRApplicationH);
void				GEO_DLL OGR_APP_SetDisplayStatusBar(OGRApplicationH, int);
int					GEO_DLL OGR_APP_GetDisplayEditActionByType(OGRApplicationH, EditActionTypeEnumH);
void				GEO_DLL OGR_APP_SetDisplayEditActionByType(OGRApplicationH, EditActionTypeEnumH, int);
void				GEO_DLL OGR_APP_AddDockWidget(OGRApplicationH, DockAreaEnumH, OGRWidgetH);
void				GEO_DLL	OGR_APP_TabifyDockWidget(OGRApplicationH, OGRWidgetH, OGRWidgetH);
const char			GEO_DLL *OGR_APP_GetTitle(OGRApplicationH);
void				GEO_DLL OGR_APP_KeyDown(OGRApplicationH, unsigned int, unsigned int, unsigned int);
void				GEO_DLL OGR_APP_KeyUp(OGRApplicationH, unsigned int, unsigned int, unsigned int);
OGRPrintLayoutWidgetH	GEO_DLL OGR_APP_ShowPrintLayoutWidget(OGRApplicationH, const char*, OGRCanvasH);
void				GEO_DLL OGR_APP_AddMenu(OGRApplicationH, const char*, const char*, const char*);
void				GEO_DLL OGR_APP_AddAction(OGRApplicationH, const char*, const char*, const char*, const char*, const char*);
void				GEO_DLL OGR_APP_RunScript(OGRApplicationH, const char*, int);
void				GEO_DLL OGR_APP_SendActionEvent(OGRApplicationH, const char*);

/* TabWidget */
void				GEO_DLL	OGR_TAW_AddTab(OGRTabWidgetH, const char*, OGRTabWidgetH);
OGRCanvasH			GEO_DLL OGR_TAW_AddCanvas(OGRTabWidgetH, const char*, const char*);
void				GEO_DLL OGR_TAW_SetTabPosition(OGRTabWidgetH, TapPositionEnumH);
void				GEO_DLL OGR_TAW_SetTabRoundedShape(OGRTabWidgetH, int);

/* FeatureStyleWidget */
void				GEO_DLL OGR_FSW_SetSymbolizerType(OGRFeatureStyleWidgetH, SymbolizerTypeEnumH);
void				GEO_DLL OGR_FSW_SetFeatureStyle(OGRFeatureStyleWidgetH, OGRSymbolizerH);
OGRSymbolizerH		GEO_DLL OGR_FSW_GetFeatureStyle(OGRFeatureStyleWidgetH);

/* ScaleValueWidget */
int					GEO_DLL OGR_SVW_ShowScaleValueWidget(double*, double*);
void				GEO_DLL OGR_SVW_GetScaleValue(OGRScaleValueWidgetH, double*, double*);

/* InputValueWidget */
void				GEO_DLL OGR_IVW_SetInputType(OGRInputValueWidgetH, ParameterTypeH);
int					GEO_DLL OGR_IVW_GetInteger(OGRInputValueWidgetH);
double				GEO_DLL OGR_IVW_GetDouble(OGRInputValueWidgetH);
const char			GEO_DLL *OGR_IVW_GetString(OGRInputValueWidgetH);

/* DockWidget */
void				GEO_DLL OGR_DW_SetWidget(OGRDockWidgetH, const char*, OGRWidgetH);
OGRCanvasH			GEO_DLL OGR_DW_SetCanvas(OGRDockWidgetH, const char*, const char*);
void				GEO_DLL OGR_DW_SetAllowedAreas(OGRDockWidgetH, short);
short				GEO_DLL OGR_DW_GetFeatures(OGRDockWidgetH);
void				GEO_DLL OGR_DW_SetFeatures(OGRDockWidgetH, short);

/* PrintLayoutWidget */
void				GEO_DLL OGR_PW_SetContainer(OGRPrintLayoutWidgetH, OGRWidgetH);

int					GEO_DLL OGR_PW_ReadXML(OGRPrintLayoutWidgetH, const char*);
int					GEO_DLL OGR_PW_WriteXML(OGRPrintLayoutWidgetH, const char*);
void				GEO_DLL OGR_PW_Destroy(OGRPrintLayoutWidgetH);
int					GEO_DLL OGR_PW_GetDisplayToolBarByType(OGRPrintLayoutWidgetH, ToolBarTypeEnumH);
void				GEO_DLL OGR_PW_SetDisplayToolBarByType(OGRPrintLayoutWidgetH, ToolBarTypeEnumH, int);
void				GEO_DLL OGR_PW_SetDisplayToolBar(OGRPrintLayoutWidgetH, int);
void				GEO_DLL OGR_PW_DeleteToolBarByType(OGRPrintLayoutWidgetH, ToolBarTypeEnumH);
int					GEO_DLL OGR_PW_GetDisplayMenuBar(OGRPrintLayoutWidgetH);
void				GEO_DLL OGR_PW_SetDisplayMenuBar(OGRPrintLayoutWidgetH, int);
OGRPrintLayoutItemH GEO_DLL	OGR_PW_GetItem(OGRPrintLayoutWidgetH, const char*);
void				GEO_DLL OGR_PW_SetDisplayProperyWidget(OGRPrintLayoutWidgetH, int);
void				GEO_DLL OGR_PW_SetKeyEnable(OGRPrintLayoutWidgetH, SystemKeyEnumH, int);
void				GEO_DLL OGR_PW_SetMouseButtonEnable(OGRPrintLayoutWidgetH, MouseButtonTypeEnumH, int);
void				GEO_DLL OGR_PW_Invalidate(OGRPrintLayoutWidgetH);

/* PrintLayoutItem */
void				GEO_DLL OGR_PI_SetText(OGRPrintLayoutItemH, const char*);
void				GEO_DLL OGR_PI_SetMapCenter(OGRPrintLayoutItemH, double, double, double);
void				GEO_DLL OGR_PI_SetMapScale(OGRPrintLayoutItemH, double);
void				GEO_DLL OGR_PI_SetMapRelativeScale(OGRPrintLayoutItemH, double);
void				GEO_DLL OGR_PI_SetMapRect(OGRPrintLayoutItemH, double, double, double, double);
void				GEO_DLL OGR_PI_SetMapRotation(OGRPrintLayoutItemH, double);
void				GEO_DLL OGR_PI_SetImageFile(OGRPrintLayoutItemH, const char*);
void				GEO_DLL OGR_PI_SetPosition(OGRPrintLayoutItemH, double, double, int, int);
void				GEO_DLL OGR_PI_Move(OGRPrintLayoutItemH hItem, double, double, double, double, int, int);
void				GEO_DLL OGR_PI_SetMapIndexPrintOption(OGRPrintLayoutItemH, double, double, double, int);

#endif

/* UserDefinedWidget */
AlignPositionEnumH	GEO_DLL OGR_UD_GetPosition(OGRUserDefinedWidgetH);
void				GEO_DLL OGR_UD_SetPosition(OGRUserDefinedWidgetH, AlignPositionEnumH);
int					GEO_DLL OGR_UD_GetRelateX(OGRUserDefinedWidgetH);
void				GEO_DLL OGR_UD_SetRelateX(OGRUserDefinedWidgetH, int);
int					GEO_DLL OGR_UD_GetRelateY(OGRUserDefinedWidgetH);
void				GEO_DLL OGR_UD_SetRelateY(OGRUserDefinedWidgetH, int);
int					GEO_DLL	OGR_UD_IsExteriorHandle(OGRUserDefinedWidgetH);
void				GEO_DLL OGR_UD_SetExteriorHandle(OGRUserDefinedWidgetH, int);

/* Chart */
void				GEO_DLL OGR_CT_SetTransparent(OGRChartWidgetH, int);
int					GEO_DLL OGR_CT_GetTransparent(OGRChartWidgetH);
void				GEO_DLL OGR_CT_SetChartType(OGRChartWidgetH, ChartTypeEnumH);
ChartTypeEnumH		GEO_DLL OGR_CT_GetChartType(OGRChartWidgetH);
int					GEO_DLL OGR_CT_IsEqual(OGRChartWidgetH, OGRChartWidgetH);
void				GEO_DLL OGR_CT_InitDataset(OGRChartWidgetH, int, int);
int					GEO_DLL OGR_CT_GetNumDataSeries(OGRChartWidgetH);
int					GEO_DLL OGR_CT_GetNumDataPerSeries(OGRChartWidgetH);
void				GEO_DLL OGR_CT_SetLineColor(OGRChartWidgetH, unsigned int);
unsigned int		GEO_DLL OGR_CT_GetLineColor(OGRChartWidgetH);
void				GEO_DLL OGR_CT_SetBackgroundColor(OGRChartWidgetH, unsigned int);
unsigned int		GEO_DLL OGR_CT_GetBackgroundColor(OGRChartWidgetH);
void				GEO_DLL OGR_CT_SetDataSeries(OGRChartWidgetH, int, double*, const char*, const char*);
const char			GEO_DLL *OGR_CT_GetFeatureFields(OGRChartWidgetH);
void				GEO_DLL OGR_CT_SetFeatureFields(OGRChartWidgetH, const char*);
const char			GEO_DLL *OGR_CT_GetFeatureLables(OGRChartWidgetH);
void				GEO_DLL OGR_CT_SetFeatureLables(OGRChartWidgetH, const char*);
void				GEO_DLL OGR_CT_SetFeatureColors(OGRChartWidgetH, const char*);
const char			GEO_DLL *OGR_CT_GetFeatureColors(OGRChartWidgetH);
void				GEO_DLL OGR_CT_SetParameter(OGRChartWidgetH, OGRParameterH);
OGRQImageH			GEO_DLL OGR_CT_ToQImage(OGRChartWidgetH);

/* Animator */
int					GEO_DLL	OGR_AN_Initialize(OGRAnimatorH, OGROSWindowH);
void				GEO_DLL	OGR_AN_AddGraphic(OGRAnimatorH, OGRGraphicH, unsigned int,
                                              TransitionModeEnumH, TimingModeEnumH, RepeatModeEnumH, int, unsigned int);
void				GEO_DLL	OGR_AN_SetValue(OGRAnimatorH, OGRGraphicH, const char *, float, float);
void				GEO_DLL	OGR_AN_Start(OGRAnimatorH);
void				GEO_DLL OGR_AN_Destroy(OGRAnimatorH);

/* GraphicCanvas */
void				GEO_DLL OGR_GV_Destroy(OGRCanvasH);
void				GEO_DLL	OGR_GV_Initialize(OGRCanvasH, ULONG_PTR);
void				GEO_DLL	OGR_GV_Invalidate(OGRCanvasH);
void				GEO_DLL OGR_GV_ReSize(OGRCanvasH, unsigned int, int, int );
void				GEO_DLL OGR_GV_SetScreenMode(OGRCanvasH, ScreenModeEnumH);
ScreenModeEnumH		GEO_DLL OGR_GV_GetScreenMode(OGRCanvasH);
void				GEO_DLL OGR_GV_Add(OGRCanvasH, const char*, OGRGraphicH);
void				GEO_DLL OGR_GV_Remove(OGRCanvasH, OGRGraphicH);
void				GEO_DLL OGR_GV_Clear(OGRCanvasH);
void				GEO_DLL OGR_GV_RemoveFromKey(OGRCanvasH, const char*);
OGRGraphicH			GEO_DLL OGR_GV_GetTopGraphicAt(OGRCanvasH, float, float);
OGRAggregateGraphicH	GEO_DLL OGR_GV_GetGraphicsAt(OGRCanvasH, float, float);
//OGRAggregateGraphicH	GEO_DLL OGR_GV_GetGraphicsIn(OGRCanvasH, OGREnvelope& env);

/* Graphic */
void		GEO_DLL	OGR_GP_SetRotation(OGRGraphicH, float);
float		GEO_DLL	OGR_GP_GetRotation(OGRGraphicH);
int			GEO_DLL	OGR_GP_IsAllowingRotation(OGRGraphicH);
void		GEO_DLL	OGR_GP_SetAllowingRotation(OGRGraphicH, int);
void		GEO_DLL	OGR_GP_SetPaintColor(OGRGraphicH, unsigned int);
void		GEO_DLL	OGR_GP_SetPaintStrokeWidth(OGRGraphicH, float);
void		GEO_DLL	OGR_GP_SetPaintAntiAlias(OGRGraphicH, int);

/* GraphicLabel */
void		GEO_DLL OGR_GPT_SetText(OGRGraphicLabelH, const char*);
const char	GEO_DLL *OGR_GPT_GetText(OGRGraphicLabelH);
void		GEO_DLL OGR_GPT_SetTextSize(OGRGraphicLabelH, int);
int			GEO_DLL OGR_GPT_GetTextSize(OGRGraphicLabelH);
void		GEO_DLL OGR_GPT_SetPosition(OGRGraphicLabelH, float, float);
void		GEO_DLL OGR_GPT_GetPosition(OGRGraphicLabelH, float*, float*);
void		GEO_DLL OGR_GPT_SetXAnchor(OGRGraphicLabelH, int);
int			GEO_DLL OGR_GPT_GetXAnchor(OGRGraphicLabelH);
void		GEO_DLL OGR_GPT_SetYAnchor(OGRGraphicLabelH, int);
int			GEO_DLL OGR_GPT_GetYAnchor(OGRGraphicLabelH);

/* GraphicLineString */
void	GEO_DLL OGR_GPL_AddPoint(OGRGraphicLineStringH, float x, float y);
void	GEO_DLL OGR_GPL_DeletePoint(OGRGraphicLineStringH, int index);
void	GEO_DLL OGR_GPL_InsertPoint(OGRGraphicLineStringH, int index, float x, float y);
void	GEO_DLL OGR_GPL_SetPoint(OGRGraphicLineStringH, int index, float x, float y);
int		GEO_DLL OGR_GPL_IsClosed(OGRGraphicLineStringH);

/* GraphicPolygon */
void	GEO_DLL OGR_GPP_GetExteriorPoint(OGRGraphicPolygonH, int index, float* x, float* y);
void	GEO_DLL OGR_GPP_AddExteriorPoint(OGRGraphicPolygonH, float x, float y);
void	GEO_DLL OGR_GPP_InsertExteriorPoint(OGRGraphicPolygonH, int index, float x, float y);
void	GEO_DLL OGR_GPP_SetExteriorPoint(OGRGraphicPolygonH, int index, float x, float y);
void	GEO_DLL OGR_GPP_RemoveExteriorPoint(OGRGraphicPolygonH, int index);
int		GEO_DLL OGR_GPP_GetNumExteriorPoints(OGRGraphicPolygonH);
void	GEO_DLL OGR_GPP_GetInteriorPoint(OGRGraphicPolygonH, int index, int interiorRingIndex, float* x, float* y);
void	GEO_DLL OGR_GPP_AddInteriorPoint(OGRGraphicPolygonH, int interiorRingIndex, float x, float y);
void	GEO_DLL OGR_GPP_InsertInteriorPoint(OGRGraphicPolygonH, int index, int interiorRingIndex, float x, float y);
void	GEO_DLL OGR_GPP_SetInteriorPoint(OGRGraphicPolygonH, int index, int interiorRingIndex, float x, float y);
void	GEO_DLL OGR_GPP_RemoveInteriorPoint(OGRGraphicPolygonH, int index, int interiorRingIndex);
int		GEO_DLL OGR_GPP_GetNumInteriorPoints(OGRGraphicPolygonH, int interiorRingIndex);
//int		GEO_DLL OGR_GPP_AddInteriorRing(OGRGraphicPolygonH);
//int		GEO_DLL OGR_GPP_AddInteriorRing(OGRGraphicPolygonH, float*, float*, int nCnt);
void	GEO_DLL OGR_GPP_RemoveInteriorRing(OGRGraphicPolygonH, int interiorRingIndex);
int		GEO_DLL OGR_GPP_GetNumInteriorRings(OGRGraphicPolygonH);
//int		GEO_DLL OGR_GPP_GetAllInteriorPoints(OGRGraphicPolygonH, float*, float*, int* nCnt);
void	GEO_DLL OGR_GPP_SetPathType(OGRGraphicPolygonH, int pathType);
int		GEO_DLL OGR_GPP_GetPathType(OGRGraphicPolygonH);
int		GEO_DLL OGR_GPP_IsAllowingNewVertices(OGRGraphicPolygonH);
void	GEO_DLL OGR_GPP_SetAllowingNewVertices(OGRGraphicPolygonH, int newValue);

/* GraphicScaledImag */
//void		GEO_DLL OGR_GPS_SetScaledImage(OGRGraphicScaledImageH, SkBitmap* poImage);
void		GEO_DLL OGR_GPS_SetScaledImageFromString(OGRGraphicScaledImageH, const char* pszFileName);
//SkBitmap*	GEO_DLL OGR_GPS_GetScaledImage(OGRGraphicScaledImageH);
void		GEO_DLL OGR_GPS_SetUpperLeft(OGRGraphicScaledImageH, float x, float y);
void		GEO_DLL OGR_GPS_GetUpperLeft(OGRGraphicScaledImageH, float* x, float* y);
void		GEO_DLL OGR_GPS_SetLowerRight(OGRGraphicScaledImageH, float x, float y);
void		GEO_DLL OGR_GPS_GetLowerRight(OGRGraphicScaledImageH, float* x, float* y);
void		GEO_DLL OGR_GPS_SetIntensity(OGRGraphicScaledImageH, int intensity);
int			GEO_DLL OGR_GPS_GetIntensity(OGRGraphicScaledImageH);
void		GEO_DLL OGR_GPS_SetTransparency(OGRGraphicScaledImageH, int transparency);
int			GEO_DLL OGR_GPS_GetTransparency(OGRGraphicScaledImageH);
void		GEO_DLL OGR_GPS_SetCRS(OGRGraphicScaledImageH, OGRSpatialReferenceH crs);
OGRSpatialReferenceH	GEO_DLL OGR_GPS_GetCRS(OGRGraphicScaledImageH);

/* GraphicArc */
void		GEO_DLL OGR_GPA_SetCenter(OGRGraphicArcH, float x, float y);
void		GEO_DLL OGR_GPA_GetCenter(OGRGraphicArcH, float* x, float* y);
void		GEO_DLL OGR_GPA_SetWidth(OGRGraphicArcH, float w);
float		GEO_DLL OGR_GPA_GetWidth(OGRGraphicArcH);
void		GEO_DLL OGR_GPA_SetHeight(OGRGraphicArcH, float h);
float		GEO_DLL OGR_GPA_GetHeight(OGRGraphicArcH);
void		GEO_DLL OGR_GPA_SetStart(OGRGraphicArcH, float a);
float		GEO_DLL OGR_GPA_GetStart(OGRGraphicArcH);
void		GEO_DLL OGR_GPA_SetEnd(OGRGraphicArcH, float a);
float		GEO_DLL OGR_GPA_GetEnd(OGRGraphicArcH);
int			GEO_DLL OGR_GPA_IsCircle(OGRGraphicArcH);
int			GEO_DLL OGR_GPA_IsClosedEllipse(OGRGraphicArcH);
int			GEO_DLL OGR_GPA_IsAllowingExtentsChang(OGRGraphicArcH);
void		GEO_DLL OGR_GPA_SetAllowingExtentsChang(OGRGraphicArcH, int a);

/* GraphicIcon */
//void		GEO_DLL OGR_GPI_SetIcon(OGRGraphicIconH, SkBitmap* icon);
void		GEO_DLL OGR_GPI_SetIconFromString(OGRGraphicIconH, const char* pszFilePath);
//SkBitmap	GEO_DLL *OGR_GPI_GetIcon(OGRGraphicIconH);
void		GEO_DLL OGR_GPI_SetPosition(OGRGraphicIconH, float x, float y);
void		GEO_DLL OGR_GPI_GetPosition(OGRGraphicIconH, float* x, float* y);
void		GEO_DLL OGR_GPI_SetOffset(OGRGraphicIconH, float x, float y);
void		GEO_DLL OGR_GPI_GetOffset(OGRGraphicIconH, float* x, float* y);

/* GraphicRectangle */
void		GEO_DLL OGR_GPR_SetCenter(OGRGraphicRectangleH, float x, float y);
void		GEO_DLL OGR_GPR_GetCenter(OGRGraphicRectangleH, float* x, float* y);
void		GEO_DLL OGR_GPR_SetWidth(OGRGraphicRectangleH, float w);
float		GEO_DLL OGR_GPR_GetWidth(OGRGraphicRectangleH);
void		GEO_DLL OGR_GPR_SetHeight(OGRGraphicRectangleH, float h);
float		GEO_DLL OGR_GPR_GetHeight(OGRGraphicRectangleH);
int			GEO_DLL OGR_GPR_IsAllowingRotation(OGRGraphicRectangleH);
void		GEO_DLL OGR_GPR_SetAllowingRotation(OGRGraphicRectangleH, int a);
int			GEO_DLL OGR_GPR_IsAllowingExtentsChang(OGRGraphicRectangleH);
void		GEO_DLL OGR_GPR_SetAllowingExtentsChang(OGRGraphicRectangleH, int a);
float		GEO_DLL OGR_GPR_GetRoundX(OGRGraphicRectangleH);
void		GEO_DLL OGR_GPR_SetRoundX(OGRGraphicRectangleH, float x);
float		GEO_DLL OGR_GPR_GetRoundY(OGRGraphicRectangleH);
void		GEO_DLL OGR_GPR_SetRoundY(OGRGraphicRectangleH, float y);

/* AggregateGraphic */
void		GEO_DLL OGR_AGP_AddChild(OGRAggregateGraphicH, OGRGraphicH child);
void		GEO_DLL OGR_AGP_AddChildren(OGRAggregateGraphicH, OGRGraphicH children, int nCnt);
void		GEO_DLL OGR_AGP_RemoveChild(OGRAggregateGraphicH, OGRGraphicH child);
void		GEO_DLL OGR_AGP_RemoveChildren(OGRAggregateGraphicH);
OGRGraphicH	GEO_DLL OGR_AGP_ReplaceChild(OGRAggregateGraphicH, OGRGraphicH oldChild, OGRGraphicH newchild);
int			GEO_DLL OGR_AGP_GetChildCount(OGRAggregateGraphicH);

/* -------------------------------------------------------------------- */
/*      FeatureStyle, Symbol, ETC                                       */
/* -------------------------------------------------------------------- */
/* StyleTable - Symbolizer */
OGRSymbolizerH		GEO_DLL OGR_SL_Create();
void				GEO_DLL OGR_SL_Destroy(OGRSymbolizerH);
const char			GEO_DLL *OGR_SL_GetName(OGRSymbolizerH);
void				GEO_DLL OGR_SL_SetName(OGRSymbolizerH, const char* pszName);
double				GEO_DLL OGR_SL_GetMinScaleDenominator(OGRSymbolizerH);
void				GEO_DLL OGR_SL_SetMinScaleDenominator(OGRSymbolizerH, double dScale);
double				GEO_DLL OGR_SL_GetMaxScaleDenominator(OGRSymbolizerH);
void				GEO_DLL OGR_SL_SetMaxScaleDenominator(OGRSymbolizerH, double dScale);
void				GEO_DLL OGR_SL_AddStyleFromString(OGRSymbolizerH, const char*, const char*);
int					GEO_DLL OGR_SL_RemoveStyle(OGRSymbolizerH, const char *);
const char			GEO_DLL *OGR_SL_GetStyleToString(OGRSymbolizerH, const char *);
OGRStyleTableH		GEO_DLL	OGR_SL_Clone( OGRSymbolizerH );

SymbolizerTypeEnumH GEO_DLL	OGR_SL_GetSymbolizerType(OGRSymbolizerH);
void				GEO_DLL	OGR_SL_SetSymbolizerType(OGRSymbolizerH, SymbolizerTypeEnumH);

OGRStrokeH			GEO_DLL OGR_SL_GetStroke(OGRSymbolizerH, const char *);
OGRStrokeH			GEO_DLL OGR_SL_SetStroke(OGRSymbolizerH, const char *, OGRStrokeH);
OGRFillH			GEO_DLL OGR_SL_GetFill(OGRSymbolizerH, const char *);
OGRFillH			GEO_DLL OGR_SL_SetFill(OGRSymbolizerH, const char *, OGRFillH);
OGRMarkH			GEO_DLL OGR_SL_GetMark(OGRSymbolizerH, const char *);
OGRMarkH			GEO_DLL OGR_SL_SetMark(OGRSymbolizerH, const char *, OGRMarkH);
OGRFontH			GEO_DLL OGR_SL_GetFont(OGRSymbolizerH, const char *);
OGRFontH			GEO_DLL OGR_SL_SetFont(OGRSymbolizerH, const char *, OGRFontH);

void				GEO_DLL OGR_SL_ShowFeatureStyleWidget( OGRSymbolizerH, OGRCanvasH, OGRLayerSourceH );

/* Stroke */
void				GEO_DLL OGR_SK_Destroy( OGRStrokeH ); 
const char			GEO_DLL *OGR_SK_GetStyleString( OGRStrokeH );
const char			GEO_DLL *OGR_SK_GetColor( OGRStrokeH ); 
void				GEO_DLL OGR_SK_SetColor( OGRStrokeH, const char* ); 
double				GEO_DLL OGR_SK_GetWidth( OGRStrokeH );
void				GEO_DLL OGR_SK_SetWidth( OGRStrokeH, double );
const char			GEO_DLL *OGR_SK_GetId( OGRStrokeH );
void				GEO_DLL OGR_SK_SetId( OGRStrokeH, const char *);
const char			GEO_DLL *OGR_SK_GetCap( OGRStrokeH );
void				GEO_DLL OGR_SK_SetCap( OGRStrokeH, const char *);
int					GEO_DLL OGR_SK_GetSCap( OGRStrokeH );
void				GEO_DLL OGR_SK_SetSCap( OGRStrokeH, int );
int					GEO_DLL OGR_SK_GetECap( OGRStrokeH );
void				GEO_DLL OGR_SK_SetECap( OGRStrokeH, int );
const char			GEO_DLL *OGR_SK_GetJoin( OGRStrokeH );
void				GEO_DLL OGR_SK_SetJoin( OGRStrokeH, const char *);
int					GEO_DLL OGR_SK_GetPriority( OGRStrokeH );
void				GEO_DLL OGR_SK_SetPriority( OGRStrokeH, int);
const char			GEO_DLL *OGR_SK_GetOutlineColor( OGRStrokeH );
void				GEO_DLL OGR_SK_SetOutlineColor( OGRStrokeH, const char *);
int					GEO_DLL OGR_SK_GetOutlineWidth( OGRStrokeH );
void				GEO_DLL OGR_SK_SetOutlineWidth( OGRStrokeH, int );
const char			GEO_DLL *OGR_SK_GetPattern( OGRStrokeH );
void				GEO_DLL OGR_SK_SetPattern( OGRStrokeH, const char * );

/* Fill */
void				GEO_DLL OGR_FI_Destroy( OGRFillH ); 
const char			GEO_DLL *OGR_FI_GetStyleString( OGRFillH );
const char 			GEO_DLL *OGR_FI_GetForeColor( OGRFillH );
void 				GEO_DLL OGR_FI_SetForeColor( OGRFillH, const char *);
const char 			GEO_DLL *OGR_FI_GetBackColor( OGRFillH );
void 				GEO_DLL OGR_FI_SetBackColor( OGRFillH, const char *);
const char 			GEO_DLL *OGR_FI_GetId( OGRFillH );
void  				GEO_DLL OGR_FI_SetId( OGRFillH, const char *);
double 				GEO_DLL OGR_FI_GetAngle( OGRFillH );
void 				GEO_DLL OGR_FI_SetAngle( OGRFillH, double );
double 				GEO_DLL OGR_FI_GetSize( OGRFillH );
void 				GEO_DLL OGR_FI_SetSize( OGRFillH, double );
double 				GEO_DLL OGR_FI_GetSpacingX( OGRFillH );
void 				GEO_DLL OGR_FI_SetSpacingX( OGRFillH, double );
double 				GEO_DLL OGR_FI_GetSpacingY( OGRFillH );
void 				GEO_DLL OGR_FI_SetSpacingY( OGRFillH, double );
int  				GEO_DLL OGR_FI_GetPriority( OGRFillH );
void 				GEO_DLL OGR_FI_SetPriority( OGRFillH, int );

/* Mark */
void				GEO_DLL OGR_MK_Destroy( OGRMarkH ); 
const char 			GEO_DLL *OGR_MK_GetStyleString( OGRMarkH );
const char			GEO_DLL *OGR_MK_GetId( OGRMarkH );
void				GEO_DLL OGR_MK_SetId( OGRMarkH, const char *);
double				GEO_DLL OGR_MK_GetAngle( OGRMarkH );
void				GEO_DLL OGR_MK_SetAngle( OGRMarkH, double );
const char			GEO_DLL *OGR_MK_GetTextAngle( OGRMarkH );
void				GEO_DLL OGR_MK_SetTextAngle( OGRMarkH, const char *);
const char			GEO_DLL *OGR_MK_GetColor( OGRMarkH );
void				GEO_DLL OGR_MK_SetColor( OGRMarkH, const char *);
double				GEO_DLL OGR_MK_GetSize( OGRMarkH );
void				GEO_DLL OGR_MK_SetSize( OGRMarkH, double );
double				GEO_DLL OGR_MK_GetSpacingX( OGRMarkH );
void				GEO_DLL OGR_MK_SetSpacingX( OGRMarkH, double );
double				GEO_DLL OGR_MK_GetSpacingY( OGRMarkH );
void				GEO_DLL OGR_MK_SetSpacingY( OGRMarkH, double );
double				GEO_DLL OGR_MK_GetStep( OGRMarkH );
void				GEO_DLL OGR_MK_SetStep( OGRMarkH, double );
double				GEO_DLL OGR_MK_GetOffset( OGRMarkH );
void				GEO_DLL OGR_MK_SetOffset( OGRMarkH, double );
double				GEO_DLL OGR_MK_GetPerp( OGRMarkH );
void				GEO_DLL OGR_MK_SetPerp( OGRMarkH, double );
int					GEO_DLL OGR_MK_GetPriority( OGRMarkH );
void				GEO_DLL OGR_MK_SetPriority( OGRMarkH, int );
const char			GEO_DLL *OGR_MK_GetFontName( OGRMarkH );
void				GEO_DLL OGR_MK_SetFontName( OGRMarkH, const char *);
const char			GEO_DLL *OGR_MK_GetOColor( OGRMarkH );
void				GEO_DLL OGR_MK_SetOColor( OGRMarkH, const char *);
const char			GEO_DLL *OGR_MK_GetLinePattern( OGRMarkH );
void				GEO_DLL OGR_MK_SetLinePattern( OGRMarkH, const char *);

/* Font */
void				GEO_DLL OGR_FO_Destroy( OGRFontH ); 
const char 			GEO_DLL	*OGR_FO_GetStyleString( OGRFontH );
const char			GEO_DLL	*OGR_FO_GetFontName( OGRFontH );
void				GEO_DLL	OGR_FO_SetFontName( OGRFontH, const char *pszFontName);
double				GEO_DLL	OGR_FO_GetSize( OGRFontH );
void				GEO_DLL	OGR_FO_SetSize( OGRFontH, double dfSize);
const char			GEO_DLL	*OGR_FO_GetTextString( OGRFontH );
void				GEO_DLL	OGR_FO_SetTextString( OGRFontH, const char *pszTextString);
double				GEO_DLL	OGR_FO_GetAngle( OGRFontH );
void				GEO_DLL	OGR_FO_SetAngle( OGRFontH, double dfAngle);
const char			GEO_DLL *OGR_FO_GetTextAngle( OGRFontH );
void				GEO_DLL OGR_FO_SetTextAngle( OGRFontH, const char *);
const char			GEO_DLL	*OGR_FO_GetForeColor( OGRFontH );
void				GEO_DLL	OGR_FO_SetForeColor( OGRFontH, const char *pszForColor);
const char			GEO_DLL	*OGR_FO_GetBackColor( OGRFontH );
void				GEO_DLL	OGR_FO_SetBackColor( OGRFontH, const char *pszBackColor);
const char			GEO_DLL	*OGR_FO_GetPlacement( OGRFontH );
void				GEO_DLL	OGR_FO_SetPlacement( OGRFontH, const char *pszPlacement);
int					GEO_DLL	OGR_FO_GetAnchor( OGRFontH );
void				GEO_DLL	OGR_FO_SetAnchor( OGRFontH, int nAnchor);
double				GEO_DLL	OGR_FO_GetSpacingX( OGRFontH );
void				GEO_DLL	OGR_FO_SetSpacingX( OGRFontH, double dfX);
double				GEO_DLL	OGR_FO_GetSpacingY( OGRFontH );
void				GEO_DLL	OGR_FO_SetSpacingY( OGRFontH, double dfY);
double				GEO_DLL	OGR_FO_GetPerp( OGRFontH );
void				GEO_DLL	OGR_FO_SetPerp( OGRFontH, double dfPerp);
int					GEO_DLL	OGR_FO_GetBold( OGRFontH );
void				GEO_DLL	OGR_FO_SetBold( OGRFontH, int bBold);
int					GEO_DLL	OGR_FO_GetItalic( OGRFontH );
void				GEO_DLL	OGR_FO_SetItalic( OGRFontH, int bItalic);
int					GEO_DLL	OGR_FO_GetUnderline( OGRFontH );
void				GEO_DLL	OGR_FO_SetUnderline( OGRFontH, int bUnderline);
int					GEO_DLL	OGR_FO_GetPriority( OGRFontH );
void				GEO_DLL	OGR_FO_SetPriority( OGRFontH, int nPriority);
int					GEO_DLL	OGR_FO_GetStrikeout( OGRFontH );
void				GEO_DLL	OGR_FO_SetStrikeout( OGRFontH, int bStrikeout);
double				GEO_DLL	OGR_FO_GetStretch( OGRFontH );
void				GEO_DLL	OGR_FO_SetStretch( OGRFontH, double dfStretch);
const char			GEO_DLL	*OGR_FO_GetAdjustmentHor( OGRFontH );
void				GEO_DLL	OGR_FO_SetAdjustmentHor( OGRFontH, const char *pszAdjustmentHor);
const char			GEO_DLL	*OGR_FO_GetAdjustmentVert( OGRFontH );
void				GEO_DLL	OGR_FO_SetAdjustmentVert( OGRFontH, const char *pszAdjustmentVert);
const char			GEO_DLL	*OGR_FO_GetShadowColor( OGRFontH );
void				GEO_DLL	OGR_FO_SetShadowColor( OGRFontH, const char *pszShadowColor);
int					GEO_DLL	OGR_FO_GetShadowSpacingX( OGRFontH );
void				GEO_DLL	OGR_FO_SetShadowSpacingX( OGRFontH, int nInterval);
int					GEO_DLL	OGR_FO_GetShadowSpacingY( OGRFontH );
void				GEO_DLL	OGR_FO_SetShadowSpacingY( OGRFontH, int nInterval);
const char			GEO_DLL	*OGR_FO_GetOutlineColor( OGRFontH );
void				GEO_DLL	OGR_FO_SetOutlineColor( OGRFontH, const char *pszOutlineColor);
int					GEO_DLL	OGR_FO_GetOutlineWidth( OGRFontH );
void				GEO_DLL	OGR_FO_SetOutlineWidth( OGRFontH, int nInterval);
int					GEO_DLL	OGR_FO_GetShadowWidth( OGRFontH );
void				GEO_DLL	OGR_FO_SetShadowWidth( OGRFontH, int nInterval);
double				GEO_DLL	OGR_FO_GetBoxPaddingX( OGRFontH );
void				GEO_DLL	OGR_FO_SetBoxPaddingX( OGRFontH, double dX);
double				GEO_DLL	OGR_FO_GetBoxPaddingY( OGRFontH );
void				GEO_DLL	OGR_FO_SetBoxPaddingY( OGRFontH, double dY);

/* FeatureTypeStyle */
OGRFeatureTypeStyleH	GEO_DLL OGR_FTS_Create();
void					GEO_DLL OGR_FTS_Destroy(OGRFeatureTypeStyleH);
unsigned int			GEO_DLL OGR_FTS_GetSize(OGRFeatureTypeStyleH);
FeatureTypeStyleEnumH	GEO_DLL OGR_FTS_GetStyleType(OGRFeatureTypeStyleH);
OGRSymbolizerH			GEO_DLL OGR_FTS_GetElseFilterFeatureStyle(OGRFeatureTypeStyleH);
void					GEO_DLL OGR_FTS_SetElseFilterFeatureStyle(OGRFeatureTypeStyleH, OGRSymbolizerH);
void					GEO_DLL OGR_FTS_AddRule(OGRFeatureTypeStyleH, OGRFeatureTypeStyleRuleH);
OGRFeatureTypeStyleRuleH GEO_DLL OGR_FTS_GetRule(OGRFeatureTypeStyleH, unsigned int);
void					GEO_DLL OGR_FTS_RemoveRule(OGRFeatureTypeStyleH, OGRFeatureTypeStyleRuleH);
void					GEO_DLL OGR_FTS_RemoveAll(OGRFeatureTypeStyleH);
OGRFeatureTypeStyleH	GEO_DLL OGR_FTS_ReadXML(const char*);
void					GEO_DLL OGR_FTS_WriteXML(OGRFeatureTypeStyleH, const char*);
const char				GEO_DLL *OGR_FTS_GetURL(OGRFeatureTypeStyleH);
void					GEO_DLL OGR_FTS_SetURL(OGRFeatureTypeStyleH, const char*);

/* FeatureTypeStyleRule */
OGRFeatureTypeStyleRuleH GEO_DLL OGR_TSR_CreateRule(const char* pszTitle, const char* pszFilter);
OGRFeatureTypeStyleRuleH GEO_DLL OGR_TSR_Clone(OGRFeatureTypeStyleRuleH);
const char				GEO_DLL *OGR_TSR_GetTitle(OGRFeatureTypeStyleRuleH);
void					GEO_DLL OGR_TSR_SetTitle(OGRFeatureTypeStyleRuleH, const char*);
const char				GEO_DLL *OGR_TSR_GetFilter(OGRFeatureTypeStyleRuleH);
void					GEO_DLL OGR_TSR_SetFilter(OGRFeatureTypeStyleRuleH, const char* pszVal);
double					GEO_DLL OGR_TSR_GetMinScaleDenominator(OGRFeatureTypeStyleRuleH);
double					GEO_DLL OGR_TSR_GetMaxScaleDenominator(OGRFeatureTypeStyleRuleH);
void					GEO_DLL OGR_TSR_SetMinScaleDenominator(OGRFeatureTypeStyleRuleH, double);
void					GEO_DLL OGR_TSR_SetMaxScaleDenominator(OGRFeatureTypeStyleRuleH, double);
OGRSymbolizerH			GEO_DLL OGR_TSR_GetSymbolizer(OGRFeatureTypeStyleRuleH);
void					GEO_DLL OGR_TSR_SetSymbolizer(OGRFeatureTypeStyleRuleH, OGRSymbolizerH);
void					GEO_DLL OGR_TSR_SetFeatureStyleColor(OGRFeatureTypeStyleRuleH, unsigned int);
int						GEO_DLL OGR_TSR_IsValidFilter(OGRFeatureTypeStyleRuleH, OGRFeatureTypeH, OGRFeatureH);
OGRFeatureTypeStyleH	GEO_DLL OGR_TSR_GetFeatureTypeStyle(OGRFeatureTypeStyleRuleH);

/* GridTypeStyle */
OGRGridTypeStyleH		GEO_DLL OGR_GTS_CreateColorStyle(FeatureTypeStyleEnumH);
void					GEO_DLL OGR_GTS_Destroy(OGRGridTypeStyleH);
void					GEO_DLL OGR_GTS_AddRule(OGRGridTypeStyleH, OGRGridColorRampItemH);

void					GEO_DLL OGR_GTS_SetGridColorType(OGRGridTypeStyleH, GridColorTypeEnumH);
GridColorTypeEnumH		GEO_DLL OGR_GTS_GetGridColorType(OGRGridTypeStyleH);
double					GEO_DLL	OGR_GTS_GetMaximumValue(OGRGridTypeStyleH);
double					GEO_DLL OGR_GTS_GetMinimumValue(OGRGridTypeStyleH);
double					GEO_DLL OGR_GTS_GetStandardDeviation(OGRGridTypeStyleH);
void					GEO_DLL OGR_GTS_SetMaximumValue(OGRGridTypeStyleH, double);
void					GEO_DLL OGR_GTS_SetMinimumValue(OGRGridTypeStyleH, double);
void					GEO_DLL OGR_GTS_SetStandardDeviation(OGRGridTypeStyleH, double);
unsigned int			GEO_DLL OGR_GTS_GetShadeColor(OGRGridTypeStyleH, double);
PaletteInterpretationEnumH GEO_DLL OGR_GTS_GetShadePaletteInterpretation(OGRGridTypeStyleH);
void					GEO_DLL OGR_GTS_SetShadePaletteInterpretation(OGRGridTypeStyleH, PaletteInterpretationEnumH);
void					GEO_DLL OGR_GTS_ShadeColorInterpretationRemoveAll(OGRGridTypeStyleH);
void					GEO_DLL OGR_GTS_ShadeColorInterpretationAdd(OGRGridTypeStyleH, int, ColorInterpretationEnumH);
int						GEO_DLL OGR_GTS_GetShadeColorInterpretationSize(OGRGridTypeStyleH);
int						GEO_DLL OGR_GTS_GetShadeIndexByOrder(OGRGridTypeStyleH, int);
ColorInterpretationEnumH GEO_DLL OGR_GTS_GetShadeColorInterpretationByOrder(OGRGridTypeStyleH, int);
ColorInterpretationEnumH GEO_DLL OGR_GTS_GetShadeColorInterpretation(OGRGridTypeStyleH, int);
int						GEO_DLL OGR_GTS_GetShadeIndexByColorInterpretation(OGRGridTypeStyleH, ColorInterpretationEnumH);
void					GEO_DLL OGR_GTS_SetEffectFilter(OGRGridTypeStyleH, FilterTypeEnumH, double);
void					GEO_DLL OGR_GTS_RemoveEffectFilter(OGRGridTypeStyleH, FilterTypeEnumH);
void					GEO_DLL OGR_GTS_ClearEffectFilter(OGRGridTypeStyleH);
double					GEO_DLL OGR_GTS_GetEffectFilter(OGRGridTypeStyleH, FilterTypeEnumH);

/* GridColorRampStyle */
/* GridColorRampItemH */
OGRGridColorRampItemH	GEO_DLL OGR_GCI_CreateColorRampItem(unsigned int color, double value);
double					GEO_DLL OGR_GCI_GetValue(OGRGridColorRampItemH);
void					GEO_DLL OGR_GCI_SetValue(OGRGridColorRampItemH, double);
unsigned int			GEO_DLL OGR_GCI_GetColor(OGRGridColorRampItemH);
void					GEO_DLL OGR_GCI_SetColor(OGRGridColorRampItemH, unsigned int);

/* ColorRampList*/
int						GEO_DLL OGR_CRL_GetSize(OGRColorRampListH);
const char				GEO_DLL *OGR_CRL_GetName(OGRColorRampListH, int);
OGRGridColorRampStyleH	GEO_DLL OGR_CRL_GetColorRamp(OGRColorRampListH, int);
OGRGridColorRampStyleH	GEO_DLL OGR_CRL_GetColorRampByName(OGRColorRampListH, const char*);
int						GEO_DLL OGR_CRL_AddColorRamp(OGRColorRampListH, const char*, OGRGridColorRampStyleH);
void					GEO_DLL OGR_CRL_RemoveColorRamp(OGRColorRampListH, const char*);

/* Parameters */
unsigned int	GEO_DLL	OGR_PTS_GetSize(OGRParametersH);
OGRParameterH	GEO_DLL	OGR_PTS_GetParameter(OGRParametersH, const char*);
void			GEO_DLL	OGR_PTS_AddParameter(OGRParametersH, OGRParameterH, OGRParameterH);
void			GEO_DLL	OGR_PTS_Destroy(OGRParametersH);

/* Parameter */
void			GEO_DLL	OGR_PT_Destroy(OGRParameterH);
OGRParameterH	GEO_DLL	OGR_PT_GetParent(OGRParameterH);
void			GEO_DLL	OGR_PT_SetParent(OGRParameterH, OGRParameterH);
const char		GEO_DLL	*OGR_PT_GetName(OGRParameterH);
void			GEO_DLL	OGR_PT_SetName(OGRParameterH, const char*);
OGRParameterH	GEO_DLL	OGR_PT_Clone(OGRParameterH);
void			GEO_DLL	OGR_PT_Clear(OGRParameterH);

int				GEO_DLL	OGR_PT_GetBool(OGRParameterH);
int				GEO_DLL	OGR_PT_GetInt(OGRParameterH);
short			GEO_DLL	OGR_PT_GetShort(OGRParameterH);
unsigned int	GEO_DLL	OGR_PT_GetLong(OGRParameterH);
float			GEO_DLL	OGR_PT_GetFloat(OGRParameterH);
double			GEO_DLL	OGR_PT_GetDouble(OGRParameterH);
const char		GEO_DLL	*OGR_PT_GetString(OGRParameterH);
void			GEO_DLL	*OGR_PT_GetHandle(OGRParameterH);

void			GEO_DLL	OGR_PT_SetBool(OGRParameterH, int);
void			GEO_DLL	OGR_PT_SetInt(OGRParameterH, int);
void			GEO_DLL	OGR_PT_SetShort(OGRParameterH, short);
void			GEO_DLL	OGR_PT_SetLong(OGRParameterH, unsigned int);
void			GEO_DLL	OGR_PT_SetFloat(OGRParameterH, float);
void			GEO_DLL	OGR_PT_SetDouble(OGRParameterH, double);
void			GEO_DLL	OGR_PT_SetString(OGRParameterH, const char*);
void			GEO_DLL	OGR_PT_SetHandle(OGRParameterH, void*);

/* ParameterInfo */
void			GEO_DLL	OGR_PTI_SetParamName(OGRParameterInfoH, const char*);
const char		GEO_DLL	*OGR_PTI_GetParamName(OGRParameterInfoH);
void			GEO_DLL	OGR_PTI_SetParamDescription(OGRParameterInfoH, const char*);
const char		GEO_DLL	*OGR_PTI_GetParamDescription(OGRParameterInfoH);
void			GEO_DLL	OGR_PTI_SetParamType(OGRParameterInfoH, ParameterTypeH);
ParameterTypeH	GEO_DLL	OGR_PTI_GetParamType(OGRParameterInfoH);

/* GridOperation */
void				GEO_DLL	OGR_GO_SetName(OGRGridOperationH, const char*);
const char			GEO_DLL	*OGR_GO_GetName(OGRGridOperationH);
void				GEO_DLL	OGR_GO_SetDescription(OGRGridOperationH, const char*);
const char			GEO_DLL	*OGR_GO_GetDescription(OGRGridOperationH);
void				GEO_DLL	OGR_GO_SetVendor(OGRGridOperationH, const char*);
const char			GEO_DLL	*OGR_GO_GetVendor(OGRGridOperationH);
void				GEO_DLL	OGR_GO_SetUrl(OGRGridOperationH, const char*);
const char			GEO_DLL	*OGR_GO_GetUrl(OGRGridOperationH);
void				GEO_DLL	OGR_GO_SetVersion(OGRGridOperationH, const char*);
const char			GEO_DLL	*OGR_GO_GetVersion(OGRGridOperationH);
void				GEO_DLL	OGR_GO_SetSourceNum(OGRGridOperationH, unsigned int);
unsigned int		GEO_DLL	OGR_GO_GetSourceNum(OGRGridOperationH);
void				GEO_DLL	OGR_GO_SetParamNum(OGRGridOperationH, unsigned int);
unsigned int		GEO_DLL	OGR_GO_GetParamNum(OGRGridOperationH);
OGRParameterInfoH	GEO_DLL	OGR_GO_GetParameterInfo(OGRGridOperationH, int);

/* GridCoverage */
void				GEO_DLL	OGR_GC_Close(OGRGridCoverageH);
void				GEO_DLL	OGR_GC_Destroy(OGRGridCoverageH);
int					GEO_DLL OGR_GC_GetNumSampleDimensions(OGRGridCoverageH);
OGRSpatialReferenceH GEO_DLL OGR_GC_GetCoordinateSystem(OGRGridCoverageH);
OGRGeometryH		GEO_DLL OGR_GC_GetEnvelope(OGRGridCoverageH);
void				GEO_DLL	OGR_GC_Extent2D(OGRGridCoverageH, double*, double*, double*, double*);
OGRGridSampleDimensionH GEO_DLL OGR_GC_GetSampleDimension(OGRGridCoverageH, unsigned int);
const char			GEO_DLL *OGR_GC_GetDescription(OGRGridCoverageH);
void				GEO_DLL OGR_GC_SetDescription(OGRGridCoverageH, const char*);
const char			GEO_DLL *OGR_GC_GetMetadataValue(OGRGridCoverageH, const char*);
void				GEO_DLL OGR_GC_SetMetadataValue(OGRGridCoverageH, const char*, const char*);
const char			GEO_DLL *OGR_GC_GetMetadataItemValue(OGRGridCoverageH, const char*, const char*);
void				GEO_DLL OGR_GC_SetMetadataItemValue(OGRGridCoverageH, const char*, const char*, const char*);
int					GEO_DLL OGR_GC_GetNumRow(OGRGridCoverageH);
int					GEO_DLL OGR_GC_GetNumColumn(OGRGridCoverageH);
OGRGridSampleDimensionH	GEO_DLL OGR_GC_AddGridSampleDimension(OGRGridCoverageH, int, const char*);
double				GEO_DLL OGR_GC_GetPixelUnit(OGRGridCoverageH);
int					GEO_DLL OGR_GC_SetValueInBoundary(OGRGridCoverageH, OGRGeometryH, OGRParametersH);

/* GridAnalysis */
double				GEO_DLL OGR_GC_GetMinValue(OGRGridCoverageH, int);
double				GEO_DLL OGR_GC_GetMaxValue(OGRGridCoverageH, int);
double				GEO_DLL OGR_GC_GetMeanValue(OGRGridCoverageH, int);
double				GEO_DLL OGR_GC_GetMedianValue(OGRGridCoverageH, int);
double				GEO_DLL OGR_GC_GetModeValue(OGRGridCoverageH, int);
double				GEO_DLL OGR_GC_GetStandardDeviation(OGRGridCoverageH, int);
OGRHistogramH		GEO_DLL OGR_GC_GetHistogram(OGRGridCoverageH, int, double, double, int, GDALProgressFuncH, void *);

/* Histogram */
unsigned int		GEO_DLL OGR_GH_GetNumBucket(OGRHistogramH);
double				GEO_DLL OGR_GH_GetMinValue(OGRHistogramH);
double				GEO_DLL OGR_GH_GetMaxValue(OGRHistogramH);
unsigned int		GEO_DLL OGR_GH_CountPerBucket(OGRHistogramH, int);

/* GridSampleDimension */
int					GEO_DLL OGR_GSD_GetNumRow(OGRGridSampleDimensionH);
int					GEO_DLL OGR_GSD_GetNumColumn(OGRGridSampleDimensionH);
OGRGridCoverageH	GEO_DLL OGR_GSD_GetGridCoverage(OGRGridSampleDimensionH);
SampleDimensionTypeEnumH GEO_DLL OGR_GSD_GetSampleDimensionType(OGRGridSampleDimensionH);
ColorInterpretationEnumH GEO_DLL OGR_GSD_GetColorInterpretation(OGRGridSampleDimensionH);
OGRErr				GEO_DLL OGR_GSD_SetColorInterpretation(OGRGridSampleDimensionH, ColorInterpretationEnumH);
OGRColorModelH		GEO_DLL OGR_GSD_GetColorTable(OGRGridSampleDimensionH);
OGRErr				GEO_DLL OGR_GSD_SetColorTable(OGRGridSampleDimensionH, OGRColorModelH);
int					GEO_DLL OGR_GSD_GetHasArbitraryOverviews(OGRGridSampleDimensionH);
int					GEO_DLL OGR_GSD_GetNumOverviews(OGRGridSampleDimensionH);
OGRGridSampleDimensionH GEO_DLL OGR_GSD_GetOverview(OGRGridSampleDimensionH, int);
double				GEO_DLL OGR_GSD_GetNoDataValue(OGRGridSampleDimensionH);
OGRErr				GEO_DLL OGR_GSD_SetNoDataValue(OGRGridSampleDimensionH, double);
char				GEO_DLL **OGR_GSD_GetCategoryNames(OGRGridSampleDimensionH);
OGRErr				GEO_DLL OGR_GSD_SetCategoryNames(OGRGridSampleDimensionH, char **);
double				GEO_DLL OGR_GSD_GetMinimumValue(OGRGridSampleDimensionH);
double				GEO_DLL OGR_GSD_GetMaximumValue(OGRGridSampleDimensionH);
OGRErr				GEO_DLL OGR_GSD_GetStatistics(OGRGridSampleDimensionH, double *, double *, double *, double *);
OGRErr				GEO_DLL OGR_GSD_SetStatistics(OGRGridSampleDimensionH, double, double, double, double);
const char			GEO_DLL *OGR_GSD_GetUnits(OGRGridSampleDimensionH);
void				GEO_DLL OGR_GSD_SetUnits(OGRGridSampleDimensionH, const char*);
double				GEO_DLL OGR_GSD_GetOffset(OGRGridSampleDimensionH);
OGRErr				GEO_DLL OGR_GSD_SetOffset(OGRGridSampleDimensionH, double);
double				GEO_DLL OGR_GSD_GetScale(OGRGridSampleDimensionH);
OGRErr				GEO_DLL OGR_GSD_SetScale(OGRGridSampleDimensionH, double);
double				GEO_DLL OGR_GSD_GetValue(OGRGridSampleDimensionH, int, int);
int					GEO_DLL OGR_GSD_SetValue(OGRGridSampleDimensionH, int, int, double);
double				GEO_DLL OGR_GSD_GetValueFromCoordinate(OGRGridSampleDimensionH, double, double);
OGRErr				GEO_DLL OGR_GSD_GetStatisticsInBoundary(OGRGridSampleDimensionH, OGRGeometryH, int *, double *, double *, double *, double *, int *, OGRParametersH);

/* GridCoverageProocessor */
void				GEO_DLL OGR_GCP_Destroy(OGRGridCoverageProcessorH);
unsigned int		GEO_DLL	OGR_GCP_GetNumOperations(OGRGridCoverageProcessorH);
OGRGridOperationH	GEO_DLL	OGR_GCP_GetOperation(OGRGridCoverageProcessorH, unsigned int);
OGRGridOperationH	GEO_DLL OGR_GCP_GetOperationByName(OGRGridCoverageProcessorH, const char*);
int					GEO_DLL	OGR_GCP_DoOperation(OGRGridCoverageProcessorH, const char*, OGRParametersH);

/* ColorModel */
int					GEO_DLL OGR_GCM_GetInterpretation(OGRColorModelH);
int					GEO_DLL OGR_GCM_GetNumColor(OGRColorModelH);
void				GEO_DLL OGR_GCM_GetColor(OGRColorModelH, int, short*, short*, short*, short*);
void				GEO_DLL OGR_GCM_SetColor(OGRColorModelH, int, short, short, short, short);
int					GEO_DLL OGR_GCM_GetColorAsRGB(OGRColorModelH, int);

/* NetworkCoveragAnalysis */
void					GEO_DLL OGR_NA_Destroy(OGRNetworkCoverageAnalysisH);
int						GEO_DLL	OGR_NA_Initialize(OGRNetworkCoverageAnalysisH, OGRFeatureCollectionH, const char*, const char*, OGRFeatureCollectionH, double, OGRParametersH);
int						GEO_DLL	OGR_NA_IsUsableSearch(OGRNetworkCoverageAnalysisH);
OGRFeatureCollectionH	GEO_DLL	OGR_NA_Search(OGRNetworkCoverageAnalysisH, OGRGeometryH, OGRGeometryH, const char*, OGRSymbolizerH, int, int, OGRParametersH);
int						GEO_DLL	OGR_NA_CreateNodeFeatureLayer(OGRNetworkCoverageAnalysisH, const char*, const char*, const char*);

/* Message */
void				GEO_DLL	OGR_MS_Destroy(OGRMessageH);
int					GEO_DLL	OGR_MS_SetMessageFile(OGRMessageH, const char*);
const char			GEO_DLL	*OGR_MS_GetMsgInString(OGRMessageH, unsigned int, const char*);
const char			GEO_DLL *OGR_MS_GetQueryString(OGRMessageH, const char*, const char*);

/* AttributeIndex */
void					GEO_DLL	OGR_AI_Destroy(OGRAttributeIndexH);
void					GEO_DLL	OGR_AI_Create(OGRAttributeIndexH, int);
void					GEO_DLL	OGR_AI_Drop(OGRAttributeIndexH, int);
OGRFeatureCollectionH	GEO_DLL	OGR_AI_GetFeatureCollection(OGRAttributeIndexH);
void					GEO_DLL	OGR_AI_SetFeatureCollection(OGRAttributeIndexH, OGRFeatureCollectionH);
OGRFeatureCollectionH	GEO_DLL	OGR_AI_SubCollection(OGRAttributeIndexH, OGRGeometryH, SpatialOperatorEnumH);

/* GeographicTransform */
OGRSpatialReferenceH	GEO_DLL OGR_GT_GetSourceCS(OGRCoordinateTransformationH);
OGRSpatialReferenceH	GEO_DLL OGR_GT_GetTargetCS(OGRCoordinateTransformationH);
void				GEO_DLL OGR_GT_SetSourceCS(OGRCoordinateTransformationH, OGRSpatialReferenceH);
void				GEO_DLL OGR_GT_SetTargetCS(OGRCoordinateTransformationH, OGRSpatialReferenceH);
void				GEO_DLL OGR_GT_Forward(OGRCoordinateTransformationH, OGRGeometryH);
void				GEO_DLL OGR_GT_Inverse(OGRCoordinateTransformationH, OGRGeometryH);
int					GEO_DLL OGR_GT_Transform(OGRCoordinateTransformationH, int, double*, double*, double*);

/* LocationService */
void				GEO_DLL OGR_LSV_Destroy(OGRLocationServiceH);
const char			GEO_DLL *OGR_LSV_GeoCode(OGRLocationServiceH, const char*, const char*);
const char			GEO_DLL *OGR_LSV_RevGeoCode(OGRLocationServiceH, double, double, const char*, OGRSpatialReferenceH);
const char			GEO_DLL *OGR_LSV_NearestName(OGRLocationServiceH, const char*, const char*);
const char			GEO_DLL *OGR_LSV_NearestPoint(OGRLocationServiceH, double, double, const char*, const char*, OGRSpatialReferenceH);
const char			GEO_DLL *OGR_LSV_WithinDistance(OGRLocationServiceH, double, double, const char*, double, double, const char*, OGRSpatialReferenceH);
OGRFeatureCollectionH GEO_DLL OGR_LSV_RouteDetermine(OGRLocationServiceH, OGRGeometryH, OGRGeometryH, OGRSpatialReferenceH);
OGRFeatureLayerH	GEO_DLL OGR_LSV_WithinFeature(OGRLocationServiceH, OGRLayerSourceH, OGRLayerH, double, double, OGRParametersH);

GEO_C_END

#endif /* ndef OGR_API_H_INCLUDED */
