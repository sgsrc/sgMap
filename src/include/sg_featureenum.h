#ifndef _SG_FEATUREENUM_H_INCLUDED
#define _SG_FEATUREENUM_H_INCLUDED

/*! \~english \brief 3D camera sight move type */
/*! \~korean \brief 3D ī�޶� �ü� �̵� ���� */
typedef enum {
	/*! \~english \brief Move camera around target point */
	/*! \~korean  \brief ��ǥ���� �߽����� ī�޶� �̵� */
	jmCM3_Focal = 0,
	/*! \~english \brief Moves the target point around the current camera position */
	/*! \~korean  \brief ī�޶� ���� ��ġ�� �߽����� ��ǥ���� �̵� */
	jmCM3_Eye
} Camera3DModeEnum;

/*! \~english \brief 3D layer type */
/*! \~korean \brief 3D ���̾��� ���� */
typedef enum {
	/*! \~english \brief default layer */
	/*! \~korean  \brief �Ϲ� ���̾� */
	jmLT3_Default = 0,
	/*! \~english \brief terrain layer */
	/*! \~korean  \brief ��� ���̾� */
	jmLT3_Terrain,
	/*! \~english \brief mask layer */
	/*! \~korean  \brief ����ũ ���̾� */
	jmLT3_Mask,
	/*! \~english \brief model layer */
	/*! \~korean  \brief ��(���� ��ü) ���̾� */
	jmLT3_Model,
	/*! \~english \brief image layer */
	/*! \~korean  \brief �̹���(��� ��ü�� ����) ���̾� */
	jmLT3_Image,
	/*! \~english \brief elevation layer */
	/*! \~korean  \brief ��� ���̾� */
	jmLT3_Elevation
} LayerType3DEnum;

/*! \~english \brief Tab GUI object's tap position type */
/*! \~korean \brief �� GUI ��ü�� Tap ��ġ ���� */
typedef enum {
	/*! \~english \brief north (screen top) */
	/*! \~korean  \brief ����(ȭ�� ����) */
	jmTP_North = 0,
	/*! \~english \brief south (screen bottom) */
	/*! \~korean  \brief ����(ȭ�� �Ʒ���) */
	jmTP_South, 
	/*! \~english \brief west (screen left) */
	/*! \~korean  \brief ����(ȭ�� ����) */
	jmTP_West, 
	/*! \~english \brief east (screen right) */
	/*! \~korean  \brief ����(ȭ�� ������) */
	jmTP_East
} TapPositionEnum;

/*! \~english \brief Docking GUI object's docking position type */
/*! \~korean
\brief ��ŷ GUI ��ü�� ��ŷ ��ġ ���� */
typedef enum {
	/*! \~english \brief do not */
	/*! \~korean  \brief ���� */
	jmDA_No		= 0,
	/*! \~english \brief Left */
	/*! \~korean  \brief ���� */
	jmDA_Left	= 0x1,
	/*! \~english \brief Right */
	/*! \~korean  \brief ������ */
	jmDA_Right	= 0x2,
	/*! \~english \brief Top */
	/*! \~korean  \brief ���� */
	jmDA_Top	= 0x4,
	/*! \~english \brief Bottom */
	/*! \~korean  \brief �Ʒ��� */
	jmDA_Bottom	= 0x8,
	/*! \~english \brief Overlap in the center */
	/*! \~korean  \brief �߾ӿ� ��ġ�� */
	jmDA_Central= 0x10,
	/*! \~english \brief Anywhere */
	/*! \~korean  \brief �� ��� ��ġ */
	jmDA_All	= 0xf
} DockAreaEnum;

/*! \~english \brief Docking GUI object's style type */
/*! \~korean \brief ��ŷ GUI ��ü�� ��Ÿ�� ���� */
typedef enum {
	/*! \~english \brief Do not */
	/*! \~korean  \brief ���� */
	jmDF_NoFeatures			= 0x00,
	/*! \~english \brief Closeable style */
	/*! \~korean  \brief �ݱ� ��� */
	jmDF_Closable			= 0x01,	
	/*! \~english \brief Movable style */
	/*! \~korean  \brief �̵� ��� */
	jmDF_Movable			= 0x02,	
	/*! \~english \brief Floatable style */
	/*! \~korean  \brief ������ ��Ÿ�� */
	jmDF_Floatable			= 0x04,
	/*! \~english \brief Vertial titlebar style */
	/*! \~korean  \brief ���� Ÿ��Ʋ�� ��Ÿ�� */
	jmDF_VerticalTitleBar	= 0x08,	
	/*! \~english \brief Image mask style */
	/*! \~korean  \brief ����ũ ��Ÿ�� */
	jmDF_FeatureMask		= 0x0f,	
	/*! \~english \brief Default style */
	/*! \~korean  \brief �Ϲ� ��Ÿ�� */
	jmDF_AllFeature			= jmDF_Closable | jmDF_Movable | jmDF_Floatable,	
	/*! \~english \brief Reserved style */
	jmDF_Reserved			= 0xff
} DockFeatureEnum;

/*! \~english \brief Canvas type */
/*! \~korean \brief ĵ���� ��ü ���� */
typedef enum {
	/*! \~english \brief Unknown */
	/*! \~korean  \brief ���� */
	jmCT_NULL = 0,
	/*! \~english \brief 2D map */
	/*! \~korean  \brief 2D ���� */
	jmCT_2D,
	/*! \~english \brief graphic map */
	/*! \~korean  \brief �׷��� ��ü ���� */
	jmCT_GRAPHIC,
	/*! \~english \brief 3D map */
	/*! \~korean  \brief 3D ���� */
	jmCT_3D,
	/*! \~english \brief 3D earth map */
	/*! \~korean  \brief ���� 3D ���� */
	jmCT_EARTH,
	/*! \~english \brief 3D AR map */
	/*! \~korean  \brief ���� 3D ���� */
	jmCT_AR
} CanvasTypeEnum;

/*! \~english \brief Map Toolbar type */
/*! \~korean \brief ���� ��ü ���� */
typedef enum {
	/*! \~english \brief Default edit toolbar */
	/*! \~korean  \brief ���� ��ü �Ϲ����� ���� */
	jmTB_MapDiz = 0,
	/*! \~english \brief Map view toolbar */
	/*! \~korean  \brief ���� ǥ�� ���� */
	jmTB_MapNav,
	/*! \~english \brief Select toolbar */
	/*! \~korean  \brief ���� ��ü ���� ���� */
	jmTB_MapSelect,
	/*! \~english \brief Measure toolbar */
	/*! \~korean  \brief ���� ���� */
	jmTB_MapMeasure,
	/*! \~english \brief Geometry edit toolbar */
	/*! \~korean  \brief ���� ��ü ���� ���� */
	jmTB_Edit,
	/*! \~english \brief Geometry vertex edit toolbar */
	/*! \~korean  \brief ���� ��ü ������ ���� */
	jmTB_EditVertex,
	/*! \~english \brief Map zoom toolbar */
	/*! \~korean  \brief ���� Ȯ��/��� ���� */
	jmTB_View,
	/*! \~english \brief Layer control toolbar */
	/*! \~korean  \brief ���̾� �߰� ���� */
	jmTB_LayerAdd,
	/*! \~english \brief Vector geoprocessing toolbar */
	/*! \~korean  \brief ���� ���� ���� ���� */
	jmTB_VectorGeomProcess,
	/*! \~english \brief Vector processing toolbar */
	/*! \~korean  \brief ���� ���� ���� */
	jmTB_VectorProcess,
	/*! \~english \brief Raster processing toolbar */
	/*! \~korean  \brief ������ ���� ���� */
	jmTB_RasterProcess,
	/*! \~english \brief Snap toolbar */
	/*! \~korean  \brief ���� ���� ���� ���� */
	jmTB_SnapProperties,
	/*! \~english \brief Printview file toolbar */
	/*! \~korean  \brief ���â �� ���� ���� */
	jmTB_PrintFile,
	/*! \~english \brief Printview export toolbar */
	/*! \~korean  \brief ���â �� �������� ���� */
	jmTB_PrintExport,
	/*! \~english \brief Printview zoom toolbar */
	/*! \~korean  \brief ���â �� ���� ���� */
	jmTB_PrintView,
	/*! \~english \brief Printview layout toolbar */
	/*! \~korean  \brief ���â ���̾ƿ� ���� */
	jmTB_PrintLayout,
	/*! \~english \brief Printview item toolbar */
	/*! \~korean  \brief ���â �� ��ü �߰� ���� */
	jmTB_PrintItem,
	jmTB_End
} ToolBarTypeEnum;

/*! \~english \brief Input geometry type */
/*! \~korean \brief �Է� ���� ��ü �� �Է� ��ü ���� */
typedef enum {
	/*! \~english \brief Point/Symbol */
	/*! \~korean  \brief ��/�ɺ� */
	jmAC_Point = 0,
	/*! \~english \brief Line(linestring) */
	/*! \~korean  \brief �� */
	jmAC_Line,
	/*! \~english \brief Freedraw line */
	/*! \~korean  \brief ������ */
	jmAC_Free,
	/*! \~english \brief Circle */
	/*! \~korean  \brief ��/Ÿ�� */
	jmAC_Circle,
	/*! \~english \brief Rectange */
	/*! \~korean  \brief �簢�� */
	jmAC_Rectangle,
	/*! \~english \brief Polygon */
	/*! \~korean  \brief �ٰ��� */
	jmAC_Polygon,
	jmAC_End
} EditActionTypeEnum;

/*! \~english \brief Newwork algorithm type */
/*! \~korean \brief ��Ʈ��ũ �м� �˰��� ���� */
typedef enum {
	jmNA_NULL = 0,
	jmNA_Bellman_ford,
	jmNA_Bfs,
	jmNA_Bid_dijkstra,
	jmNA_Dfs,
	jmNA_Dijkstra,
	jmNA_Fm_partition,
	jmNA_Maxflow_ff,
	jmNA_Maxflow_pp,
	jmNA_Maxflow_sap,
	jmNA_Min_tree,
	jmNA_Planarity,
	jmNA_Ratio_cut_partition,
	jmNA_St_number
} NetworkAlgorithmEnum;

/*! \~english \brief Diagram type */
/*! \~korean \brief ���̾�׷� ���� */
typedef enum DiagramTypeEnum
{
	/*! \~english \brief Chart */
	/*! \~korean  \brief ��Ʈ */
	jmRT_Chart = 0x0001,
	/*! \~english \brief Graph */
	/*! \~korean  \brief �׷��� */
	jmRT_Graph = 0x0002,
	/*! \~english \brief User defined type (external object) */
	/*! \~korean  \brief ����� ���� �ܺ� ��ü */
	jmRT_UserDefine = 0x0004
} DiagramTypeEnum;

/*! \~english \brief Graph type */
/*! \~korean \brief �׷��� ���� */
typedef enum GraphTypeEnum
{
	/*! \~korean  \brief ��Ʈ */
	jmGT_dot = 0x0001,	
	jmGT_dotty = 0x0002,	
	jmGT_lefty = 0x0003,
	jmGT_neato = 0x0004
} GraphTypeEnum;

/*! \~english \brief Volume start z type */
/*! \~korean \brief ü�� ��ġ ���� */
typedef enum VolumeTypeEnum
{
	/*! \~english \brief Above the standard point */
	/*! \~korean  \brief ���� ���� */
	jmVT_Above,
	/*! \~english \brief Below the standard point */
	/*! \~korean  \brief ���� �Ʒ��� */
	jmVT_Below
} VolumeTypeEnum;

/*! \~english \brief Raster color palette type */
/*! \~korean \brief ������ ���� ���� �˰� ���� */
typedef enum GridColorTypeEnum
{
	/*! \~english \brief Interpolated color */
	/*! \~korean  \brief ������ ���� */
	jmGC_Interpolated,
	/*! \~english \brief Discrete palette type */
	/*! \~korean  \brief �̻� ���� */
	jmGC_Discrete,
	/*! \~english \brief Exact palette type */
	/*! \~korean  \brief ������ ���� */
	jmGC_Exact
} GridColorTypeEnum;

/*! \~korean
\brief ä�� ��� */
typedef enum FeatureTypeStyleEnum
{
	/*! \~korean  \brief �⺻ ���� */
	jmFS_Default = 0x0001,
	/*! \~korean  \brief ������ ���� ����Ʈ ��� */
	jmFS_GridRamp = 0x0002,
	/*! \~korean  \brief ������ Pseudo �˰��� ��� */
	jmFS_GridPseudo = 0x0003,
	/*! \~korean  \brief ������ FreakOut �˰��� ��� */
	jmFS_GridFreakOut = 0x0004,
	/*! \~korean  \brief ������ �⺻ ���� ��� */
	jmFS_GridDefault = 0x0005
} FeatureTypeStyleEnum;

/*! \~korean
\brief �׷��� ǥ�� ���� */
typedef enum SymbolizerTypeEnum
{
	/*! \~korean  \brief �Ϲ� */
	jmSL_Default = 0,
	/*! \~korean  \brief �� */
	jmSL_Line = 1,
	/*! \~korean  \brief ä��� */
	jmSL_Polygon = 2,
	/*! \~korean  \brief ��/�ɺ� */
	jmSL_Point = 3,
	/*! \~korean  \brief ���� */
	jmSL_Label  = 4
} SymbolizerTypeEnum;

/*! \~korean
\brief �ý��� ���� ���ҽ� ���� */
typedef enum SystemResourceEnum
{
	/*! \~korean  \brief ���� ���ҽ� ���� */
	jmRS_StartBuffer = 512,
	/*! \~korean  \brief ���� �ȵ� */
	jmRS_Default	= 0x0000,
	/*! \~korean  \brief �ΰ� */
	jmRS_Logo		= 0x0001,
	/*! \~korean  \brief GPS ��ġ */
	jmRS_Location	= 0x0002,
	/*! \~korean  \brief ���� */
	jmRS_Compass	= 0x0004,
	/*! \~korean  \brief �����Ϲ� */
	jmRS_ScaleBar	= 0x0008,
	/*! \~korean  \brief ������ ���� */
	jmRS_Scale		= 0x0080,
	/*! \~korean  \brief �ε������� ��ü GUI */
	jmRS_IndexMapWidget = 0x0010,
	/*! \~korean  \brief ���� ���� ���� ��ü GUI */
	jmRS_MapCtrlWidget	= 0x0020,
	/*! \~korean  \brief ���� Ȯ����� ���� ��ü GUI */
	jmRS_ZoomLevelWidget = 0x0040,
	/*! \~korean  \brief ���⼾�� ���� ��ư ��ü GUI */
	jmRS_MotionBtn		= 0x0100,
	/*! \~korean  \brief ��ġ���� ���� ��ư ��ü GUI */
	jmRS_LocationBtn	= 0x0200
} SystemResourceEnum;

/*! \~korean
\brief �ý��� Ű���� Ű ���� */
typedef enum SystemKeyEnum
{
	jmSK_NONE,    //corresponds to android's UNKNOWN
	jmSK_LeftSoftKey,
	jmSK_RightSoftKey,
	jmSK_Home,    //!< the home key - added to match android
	jmSK_Back,    //!< (CLR)
	jmSK_Send,    //!< the green (talk) key
	jmSK_End,     //!< the red key
	jmSK_0,
	jmSK_1,
	jmSK_2,
	jmSK_3,
	jmSK_4,
	jmSK_5,
	jmSK_6,
	jmSK_7,
	jmSK_8,
	jmSK_9,
	jmSK_Star,    //!< the * key
	jmSK_Hash,    //!< the # key
	jmSK_Escape,	//!< insert by gskim
	jmSK_Delete,
	jmSK_Shift,
	jmSK_Control,
	jmSK_Up,
	jmSK_Down,
	jmSK_Left,
	jmSK_Right,
	jmSK_Enter,      //!< the center key
	jmSK_VolUp,   //!< volume up - match android
	jmSK_VolDown, //!< volume down - same
	jmSK_Power,   //!< power button - same
	jmSK_Camera,  //!< camera         - same
	jmSK_KeyCount
} SystemKeyEnum;

/*! \~korean
\brief ���� ���� */
typedef enum SensorTypeEnum
{
	/*! \~korean  \brief ��ġ ���� */
	jmSR_Location = 0,
	/*! \~korean  \brief ���� ���� */
	jmSR_Motion,
	/*! \~korean  \brief ī�޶� ���� */
	jmSR_Video,
} SensorTypeEnum;

/*! \~korean
\brief ��ġ ���� ���� */
typedef enum LocationSensorTypeEnum
{
	/*! \~korean  \brief ���� ���� */
	jmLSR_Unknown = 0,
	/*! \~korean  \brief NMEA ��� */
	jmLSR_NMEA,
	/*! \~korean  \brief RTK ��� */
	jmLSR_RTK,
} LocationSensorTypeEnum;

typedef enum ParameterType
{
	jmPT_IntegerType=0,
	jmPT_FloatingPointType,
	jmPT_StringType,
	jmPT_GridCoverageType,
	jmPT_FeatureCollectionType
} ParameterType;

/*! \~korean
\brief Ʈ����� ���� */
typedef enum TransactionEnum 
{
	/*! \~korean  \brief �ڵ� ���� */
	jmTN_AutoCommit = 0,
	/*! \~korean  \brief ���� ���� */
	jmTN_ManualCommit = 1,
	/*! \~korean  \brief ���� ���� */
	jmTN_UnBind = 2
} TransactionEnum;

/*! \~korean
\brief ������ ���� ���� */
typedef enum WebServiceTypeEnum
{
	/*! \~korean  \brief �⺻�� */
	jmWS_Default = 0,
	/*! \~korean  \brief OpenAPI ���� */
	jmWS_OpenAPI = 1,
	/*! \~korean  \brief WMS ���� */
	jmWS_WMS = 4,
	/*! \~korean  \brief WFS ���� */
	jmWS_WFS = 5,
	/*! \~korean  \brief GWFS(Server�� ���� Ȯ��WFS) ���� */
	jmWS_GWFS = 6,
	/*! \~korean  \brief LTM(Level Tiled Map) ���� */
	jmWS_LTM = 7
} WebServiceTypeEnum;

/*! \~korean
\brief ȭ���� ���� ���� ��� */
typedef enum ScreenModeEnum
{
	/*! \~korean  \brief ���� ȭ�� ��� ���� */
	jmSM_StartBuffer = 1024,
	/*! \~korean  \brief �ʱ� ��� */
	jmSM_NullMode = 0,
	/*! \~korean  \brief ��, �簢�������� ���� */
	jmSM_SelectMode = 1,
	/*! \~korean  \brief ���� ���ϴ� ��ü ���� */
	jmSM_SelectPolylineMode = 3,
	/*! \~korean  \brief �ٰ��� ���� �Ǵ� ���ϴ� ��ü ���� */
	jmSM_SelectPolygonMode = 4,
	/*! \~korean  \brief ���õ� ���� ��ü ���η� ���� */
	jmSM_SelectGeometryMode = 5,
	/*! \~korean  \brief ��, Ÿ�� ���η� ���� */
	jmSM_SelectCircleMode = 6,
	/*! \~korean  \brief ��, Ÿ�� ���η� ����(��ü ����) */
	jmSM_SelectKeepCircleMode = 7,
	/*! \~korean  \brief ȭ�� Ȯ�� ���� */
	jmSM_ZoomInMode = 11,
	/*! \~korean  \brief ȭ�� ���� Ȯ�� ��� */
	jmSM_ZoomInAreaMode = 12,
	/*! \~korean  \brief ȭ�� ��� ���� */
	jmSM_ZoomOutMode = 13,
	/*! \~korean  \brief ȭ�� ���� ��� ��� */
	jmSM_ZoomOutAreaMode = 14,
	/*! \~korean  \brief ȭ�� �̵� ��� */
	jmSM_PanningMode = 15,
	/*! \~korean  \brief ��, �ɺ� �Է� ��� */
	jmSM_InsertSymbolMode = 21,
	/*! \~korean  \brief ���� �Է� ��� */
	jmSM_InsertTextMode = 23,
	/*! \~korean  \brief �ٰ��� �Է� ��� */
	jmSM_InsertPolylineMode = 24,
	/*! \~korean  \brief �ٰ��� �Է� ��� */
	jmSM_InsertPolygonMode = 25,
	/*! \~korean  \brief ��, Ÿ�� �Է� ��� */
	jmSM_InsertCircleMode = 26,
	/*! \~korean  \brief ������ �Է� ��� */
	jmSM_InsertFreelineMode = 27,
	/*! \~korean  \brief �簢�� �Է� ��� */
	jmSM_InsertRectangleMode = 28,
	/*! \~korean  \brief �ٰ��� �� ���� �ٰ��� �Է� ��� */
	jmSM_InsertRingMode = 29,
	/*! \~korean  \brief �Ÿ� ���� ��� */
	jmSM_DistanceMode = 32,
	/*! \~korean  \brief ���� ���� ��� */
	jmSM_AreaMode = 33,
	/*! \~korean  \brief ���� �� �Է� ���(�����/������ ��) */
	jmSM_SingPostMode = 34,
	/*! \~korean  \brief ���, ���ؽ� �̵� ��� */
	jmSM_EditVertexMoveMode = 41,
	/*! \~korean  \brief ���ؽ� ���� ��� */
	jmSM_EditVertexDeleteMode = 42,
	/*! \~korean  \brief ���ؽ� �߰� ��� */
	jmSM_EditVertexAddMode = 43,
	/*! \~korean  \brief ���� ��ü �̵� ��� */
	jmSM_EditMoveMode = 44,
	/*! \~korean  \brief ���� ��ü ���� ��� */
	jmSM_EditDeleteMode = 45,
	/*! \~korean  \brief ���� ��ü ���� ��� */
	jmSM_EditCopyMode = 46,
	/*! \~korean  \brief ���� ��ü ȸ�� ��� */
	jmSM_EditRotateMode = 47,
	/*! \~korean  \brief ���� ��ü�� ó�� ������ ��ü�� ���� ������ ��ü���� �����Ű�� ��� */
	jmSM_EditExtendMode = 48,
	/*! \~korean  \brief ���� ��ü�� ó�� ������ ��ü�� �Ϻθ� ���� ������ ��ü�� �������� �߶󳻴� ��� */
	jmSM_EditTrimMode = 49,
	/*! \~korean  \brief ���� ��ü ũ�� ���� ��� */
	jmSM_EditScaleMode = 51,
	/*! \~korean  \brief �߶󳻱� ���� ���� ������ �׷� �ش� ���� ��ü�� Ȱ���Ͽ� ��ġ�� ��� ���� ��ü�� �߶󳻴� ��� */
	jmSM_EditBreakMode = 52,
	/*! \~korean  \brief ���õ� ������ü�� �������� ��ġ�� ��� ���� ��ü�� �߶󳻴� ��� */
	jmSM_EditBreakGeometryMode = 53,
	/*! \~korean  \brief �ٰ��� ���� �ٰ��� ���� ��� */
	jmSM_EditDeleteRingMode = 54,
	/*! \~korean  \brief ���� ���� ��� */
	jmSM_VolumeMode = 55,
	/*! \~korean  \brief �ܸ鵵 ���� ��� */
	jmSM_TerrainProfileMode = 56,
	/*! \~korean  \brief ���ñ� �м� ��� */
	jmSM_SightMode = 57,
	/*! \~korean  \brief Z�� �׸��� ���� ��� */
	jmSM_PointGridMode = 58,
	jmSM_End = 59,
	/*internal mode*/
	/*! \~korean  \brief �ּ� ��ġ �̵� ���(���� ���) */
	jmSM_AnnotationMove = 101,
	/*! \~korean  \brief ȭ�� �ڵ�(���콺 �̵��� ����) �̵� ���(���� ���) */
	jmSM_AutoPanningMode = 102,
	/*! \~korean  \brief �ּ� ȸ�� ���(���� ���) */
	jmSM_AnnotationRotate = 103,
	/*! \~korean  \brief �ּ� ���� �̵� ���(���� ���) */
	jmSM_AnnotationEndMove = 104
} ScreenModeEnum;

/*! \~korean
\brief Map2D���� ���콺�� ���� ��ü�� �׷��� �����ϰų� �̵�, ����� ��ǥ�� �Է��� �����ִ� ������� ���콺�� ��ġ�� �������� ���õ� ���� ��ü�� �ֿ� �κп� ǥ���ϰ� �ش� ��ǥ ������ Ȱ���� �� �ֵ��� �ϴ� ���(����, ����)
\brief ���� ��ü �˻� ��� ���� ��� */
typedef enum SnapModeEnum
{
	/*! \~korean  \brief ���� ����� ������ ���� */
	jmNM_NullPoint = 0x0000,
	/*! \~korean  \brief ��, �߰���(���/���ؽ�) */
	jmNM_EndPoint = 0x0001,
	/*! \~korean  \brief ������ �߰��� */
	jmNM_MidPoint = 0x0002,
	/*! \~korean  \brief ���ο��� ���� ����� �� */
	jmNM_NearestPoint = 0x0004,
	/*! \~korean  \brief ��ü�� ������ */
	jmNM_IntersectPoint = 0x0008,
	/*! \~korean  \brief ���� ������ */
	jmNM_PerpendicularPoint = 0x0010,
	/*! \~korean  \brief ����, ���� ������ */
	jmNM_OrthoPoint = 0x0020,
	/*! \~korean  \brief ���弱�� ���� ����� �� */
	jmNM_ExtensionPoint = 0x0040,
	/*! \~korean  \brief ������, ���� �߽��� */
	jmNM_CenterPoint = 0x0080,
	/*! \~korean  \brief ������ ����� ���� �߽���(���ο����� ���) */
	jmNM_ScalePoint = 0x0100,
	/*! \~korean  \brief ȸ���� ȸ�� �߽���(���ο����� ���) */
	jmNM_RotatePoint = 0x0200,
	/*! \~korean  \brief GPS ��ġ���� ������ GPS ���� ��ġ */
	jmNM_GPSPoint = 0x0400,
	jmNM_Geometry = 0x00ff,
	jmNM_END = 0x00800
} SnapModeEnum;

/*! \~korean
\brief ���콺 Ŀ�� ����*/
typedef enum CursorEnum
{
	/*! \~korean  \brief �⺻ ȭ��ǥ */
	jmCS_Null = 0,
	/*! \~korean  \brief ���ؽ�(��) �̵� */
	jmCS_VertexMove = 1,
	/*! \~korean  \brief ���ؽ�(��) ���� */
	jmCS_VertexDelete = 2,
	/*! \~korean  \brief ���ؽ�(��) �߰� */
	jmCS_VertexAdd = 3,
	/*! \~korean  \brief �ּ� ȸ�� */
	jmCS_AnnoRotate = 4,
	/*! \~korean  \brief �ּ� ���� �̵� */
	jmCS_AnnoEndMove = 5,
	/*! \~korean  \brief �ּ� �̵� */
	jmCS_AnnoMove = 6,
	/*! \~korean  \brief ���� Ȯ�� */
	jmCS_MapZoomIn = 7,
	/*! \~korean  \brief ���� ��� */
	jmCS_MapZoomOut = 8,
	/*! \~korean  \brief ���� �̵� */
	jmCS_MapZoomPan = 9,
	/*! \~korean  \brief ��ü �׸���(�Է�) */
	jmCS_MapInsert = 10,
	/*! \~korean  \brief ��ü ���� */
	jmCS_MapSelectObject = 11,
	/*! \~korean  \brief ��ü ���� */
	jmCS_EditTrim = 12,
	/*! \~korean  \brief ��ü ���� �ø���(Ȯ��) */
	jmCS_EditExtend = 13,
	/*! \~korean  \brief ��ü �߶󳻱� */
	jmCS_EditBreak = 14,
	/*! \~korean  \brief �ý��� ���� ��� */
	jmCS_End = 15
} CursorEnum;

/*! \~korean
\brief ���� ��ü�� ��ü���� ����
\brief 2.5������ ��� ��ǥ�� Z ���� �������� �ʰ� ���� ��ü�� �ϳ��� Z��ǥ���� ���� ���� ������ �ǹ���*/
typedef enum GeometryTypeEnum
{
	/*! \~korean  \brief ���� ���ϴ� Ÿ�� */
	jmGT_Unknown = 0,
	/*! \~korean  \brief �� */
	jmGT_Point = 1,
	/*! \~korean  \brief �ٰ��� */
	jmGT_LineString = 2,
	/*! \~korean  \brief �ٰ���(���ο� ������ �ٰ����� ������) */
	jmGT_Polygon = 3,
	/*! \~korean  \brief ���� �� */
	jmGT_MultiPoint = 4,
	/*! \~korean  \brief ���� �ٰ��� */
	jmGT_MultiLineString = 5,
	/*! \~korean  \brief ���� �ٰ��� */
	jmGT_MultiPolygon = 6,
	/*! \~korean  \brief ���� ���� ��ü ���� */
	jmGT_GeometryCollection = 7,
	/*! \~korean  \brief ������� ���� Ÿ�� */
	jmGT_None = 100,
	/*! \~korean  \brief ó���� ���������� ������ �ٰ���(���ռ�) = �ٰ��� */
	jmGT_LinearRing = 101,
	/*! \~korean  \brief 2.5���� �� */
	jmGT_Point25D = 0x80000001,
	/*! \~korean  \brief 2.5���� �ٰ��� */
	jmGT_LineString25D = 0x80000002,
	/*! \~korean  \brief 2.5���� �ٰ��� */
	jmGT_Polygon25D = 0x80000003,
	/*! \~korean  \brief 2.5���� ���� �� */
	jmGT_MultiPoint25D = 0x80000004,
	/*! \~korean  \brief 2.5���� ���� �ٰ��� */
	jmGT_MultiLineString25D = 0x80000005,
	/*! \~korean  \brief 2.5���� ���� �ٰ��� */
	jmGT_MultiPolygon25D = 0x80000006,
	/*! \~korean  \brief 2.5���� ���� ���� ��ü ���� */
	jmGT_GeometryCollection25D = 0x80000007
} GeometryTypeEnum;

/*! \~korean
\brief �˻�(hitting) ��ü�� ���� */
typedef enum HitObjectTypeEnum
{
	/*! \~korean  \brief ���� ���ϴ� Ÿ�� */
	jmHT_Unknown = 0,
	/*! \~korean  \brief ��� Ÿ�� */
	jmHT_All = 15,
	/*! \~korean  \brief ���� ��ü Ÿ�� */
	jmHT_Geometry = 0x01,
	/*! \~korean  \brief �ּ� ���⼱ Ÿ�� */
	jmHT_AnnoLine = 0x02,
	/*! \~korean  \brief �� �ּ� Ÿ�� */
	jmHT_AnnoLabel = 0x04,
	/*! \~korean  \brief �Ӽ� �ּ� Ÿ�� */
	jmHT_AttrLabel = 0x08
} HitObjectTypeEnum;

/*! \~korean
\brief �ּ� ���� */
typedef enum LabelTypeEnum
{
	/*! \~korean  \brief �ؽ�Ʈ �ּ�(�� ��ü�� �ּ� ����) */
	jmLT_SymbolLabel = jmHT_Geometry,
	/*! \~korean  \brief ���� �ּ� */
	jmLT_TipLabel = 0x02,
	/*! \~korean  \brief �Ӽ� ��(��)�ּ� */
	jmLT_AttrLabel = jmHT_AttrLabel,
	/*! \~korean  \brief �Ӽ� ��(ª��)�ּ� */
	jmLT_AttrShortLabel = 0x10,	
	/*! \~korean  \brief �� �ּ� */
	jmLT_AnnoLabel = jmHT_AnnoLabel
} LabelTypeEnum;

/*! \~korean
\brief �Ӽ��ּ� ��ġ ���� */
typedef enum LabelPositionTypeEnum
{
	/*! \~korean  \brief ������ü�� MBR �� �߽��� ����(���� ����) */
	jmLP_GeoMBRCenter,
	/*! \~korean  \brief ������ü�� ������ ���� MBR�� �߽��� ����(�ּ��� ��ġ�� �̵���) */
	jmLP_GeoMapInterMBRCenter,
	/*! \~korean  \brief ���� ��ü�� ��� ù��° ������ü�� �߽��� ���� */
	jmLP_GeoFirstCenter,
	/*! \~korean  \brief ���� ��ü�� ��� ù��° ������ü�� ���� �߽��� ���� */
	jmLP_GeoFirstPointOnSurface
} LabelPositionTypeEnum;

/*! \~korean
\brief �������� ���� */
typedef enum SpatialOperatorEnum
{
	/*! \~korean  \brief ������ */
	jmSO_Intersects = 0,
	/*! \~korean  \brief ���� */
	jmSO_Equals = 1,
	/*! \~korean  \brief ������ */
	jmSO_Disjoint = 2,
	/*! \~korean  \brief ���� */
	jmSO_Touches = 3,
	/*! \~korean  \brief Ⱦ�� */
	jmSO_Crosses = 4,
	/*! \~korean  \brief ���ԵǴ��� ���� */
	jmSO_Within = 5,
	/*! \~korean  \brief �����ϴ��� ���� */
	jmSO_Contains = 6,
	/*! \~korean  \brief ��ħ */
	jmSO_Overlaps = 7,
} SpatialOperatorEnum;

/*! \~korean
\brief ��ġ�����κ��� ��ġ�� �̵��ϴ� ��� �̵� �������� Map2D ȭ���� �ڵ�ȸ�� ���� */
typedef enum MapRotateEnum
{	
	/*! \~korean  \brief ȭ�� ����(��ġ ���� ȸ��) */
	jmME_FixRotate = 0,
	/*! \~korean  \brief ȭ�� ȸ��(��ġ ���� ����) */
	jmME_AutoRotate = 1
} MapRotateEnum;

/*! \~korean
\brief ��ġ�����κ��� ��ġ�� �̵��ǰ� �ִ� ��� ���� ȭ���� �ڵ� �̵� ���� */
typedef enum MapMoveEnum
{	
	/*! \~korean  \brief ���� �̵�(�ڵ� �̵� ����) */
	jmMM_ManuMove = 0,
	/*! \~korean  \brief ���� ��ġ�� �ڵ� �̵� */
	jmMM_AutoMove = 1,
	/*! \~korean  \brief ���� ��ġ�� 1ȸ�� �̵� */
	jmMM_OneOnlyMove = 2 
} MapMoveEnum;

/*! \~korean
\brief �ٰ����� ����, ������ ��� */
typedef enum LineCapEnum
{
	/*! \~korean  \brief ������ ������ �� ��� */
	jmLC_Flat             = 0,
	/*! \~korean  \brief ���簢�� ������ �� �� ��� */
	jmLC_Square           = 1,
	/*! \~korean  \brief �ձ� �� �� ��� */
	jmLC_Round            = 2,
	/*! \~korean  \brief �ﰢ�� �� �� ��� */
	jmLC_Triangle         = 3,
	/*! \~korean  \brief ��� ���� */
	jmLC_NoAnchor         = 0x10,
	/*! \~korean  \brief ���簢�� ������ ���⼱ �� ��� */
	jmLC_SquareAnchor     = 0x11,
	/*! \~korean  \brief �ձ� �� ������ ���⼱ �� ��� */
	jmLC_RoundAnchor      = 0x12,
	/*! \~korean  \brief ������ ������ ���⼱ �� ��� */
	jmLC_DiamondAnchor    = 0x13,
	/*! \~korean  \brief ȭ��ǥ ������ ���⼱ �� ��� */
	jmLC_ArrowAnchor      = 0x14, 
	/*! \~korean  \brief ȭ��ǥ1 ������ ���⼱ �� ��� */
	jmLC_ArrowAnchor1     = 0x15, 
	/*! \~korean  \brief ȭ��ǥ2 ������ ���⼱ �� ��� */
	jmLC_ArrowAnchor2     = 0x16, ///< ȭ��ǥ2 ����� ��Ŀ�� ����
	/*! \~korean  \brief ����� ���� ���⼱ �� ��� */
	jmLC_Custom           = 0xff,
	/*! \~korean  \brief �� �� ����� ���� ������� ���θ� �˻��ϴ� �� ���Ǵ� ����ũ�� ���� */
	jmLC_AnchorMask       = 0xf0
} LineCapEnum;

/*! \~korean
\brief ���� ���� ������ ������ ��� */
typedef enum LineJoinEnum 
{
	/*! \~korean  \brief �ε巯�� ���� ȣ ��� */
	jmLJ_Round = 1,
	/*! \~korean  \brief �ε巯�� ��ī�ο� �����̳� Ŭ���ε� ������ ��� */
	jmLJ_Mitre = 2,
	/*! \~korean  \brief �밢�� ������ ��� */
	jmLJ_Bevel = 3
} LineJoinEnum;

/*! \~korean
\brief ���� ���Ǵ� ���� �ڷ��� ���� ����(����) */
typedef enum FileFormatEnum 
{
	/*! \~korean  \brief BMP ���� */
	jmFF_IMG_BMP = 1,
	/*! \~korean  \brief GIF ���� */
	jmFF_IMG_GIF = 2,
	/*! \~korean  \brief JPEG ���� */
	jmFF_IMG_JPG = 3,
	/*! \~korean  \brief PNG ���� */
	jmFF_IMG_PNG = 4,
	/*! \~korean  \brief TIF ���� */
	jmFF_IMG_TIF = 5,
	/*! \~korean  \brief ���� ���ϴ� �̹��� ���� */
	jmFF_IMG_UNKNOWN = 10,
	/*! \~korean  \brief SHP ���� (ESRI���� GIS ���� ����) */
	jmFF_GIS_SHP = 11,
	/*! \~korean  \brief DXF ���� (AutoDesk���� CAD ���� ����) */
	jmFF_GIS_DXF = 12,
	/*! \~korean  \brief DWG ���� (AutoDesk���� CAD ���� ����) */
	jmFF_GIS_DWG = 13,
	/*! \~korean  \brief DGN ���� (Bentley���� CAD ���� ����) */
	jmFF_GIS_DGN = 14,
	/*! \~korean  \brief KML ���� (Google���� GIS ���� ����) */
	jmFF_GIS_KML = 15,
	/*! \~korean  \brief GML ���� (OGC ǥ�� GIS XML ����) */
	jmFF_GIS_GML = 16,
	/*! \~korean  \brief TAB ���� (MapInfo���� GIS ���� ����) */
	jmFF_GIS_TAB = 17,
	/*! \~korean  \brief JSON ���� (�� JSON GIS ���� ����) */
	jmFF_GIS_GEOJSON = 18,
	/*! \~korean  \brief GPX ���� */
	jmFF_GIS_GPX = 19,
	/*! \~korean  \brief S57 ���� (�ؾ� ǥ�� GIS ���� ����) */
	jmFF_GIS_S57 = 21,
	/*! \~korean  \brief CSV ���� (�ƽ�Ű���� ����) */
	jmFF_GIS_CSV = 22,
	/*! \~korean  \brief Oracle �����ͺ��̽� */
	jmFF_DB_ORACLE = 31,
	/*! \~korean  \brief DB2 �����ͺ��̽� */
	jmFF_DB_DB2,
	/*! \~korean  \brief Informix �����ͺ��̽� */
	jmFF_DB_INFORMIX,
	/*! \~korean  \brief SQLServer �����ͺ��̽� */
	jmFF_DB_SQLSERVER,
	/*! \~korean  \brief MySQL �����ͺ��̽� */
	jmFF_DB_MYSQL,
	/*! \~korean  \brief PostGIS �����ͺ��̽� */
	jmFF_DB_POSTGIS,
	/*! \~korean  \brief ��Ƽ���̽� �����ͺ��̽� */
	jmFF_DB_Altibase,
	/*! \~korean  \brief Ƽ���� �����ͺ��̽� */
	jmFF_DB_Tibero,
	/*! \~korean  \brief ���콺 �����ͺ��̽� */
	jmFF_DB_ZEUS,
	/*! \~korean  \brief ī�̷ν� �����ͺ��̽� */
	jmFF_DB_Kairos,
	/*! \~korean  \brief CUBRID �����ͺ��̽� */
	jmFF_DB_CUBRID,
	/*! \~korean  \brief �Ϲ� RDBMS �����ͺ��̽� */
	jmFF_DB_RDBMS
} FileFormatEnum;

/*! \~korean
\brief �� ǥ���� ��ü���� ���� */
typedef enum SymbolTypeEnum	
{
	/*! \~korean  \brief �˷����� ����(1~50 : system defined symbol) */
	jmST_Unknown	= 0,
	/*! \~korean  \brief ���� ��ü ��� ���� */
	jmST_Vector		= 51,
	/*! \~korean  \brief �̹��� ������ */
	jmST_Image		= 52
} SymbolTypeEnum;

/*! \~korean
\brief ���� ���� */
typedef enum EditedTypeEnum
{
	/*! \~korean  \brief ���� �ȵ� */
	jmET_Null = 0,
	/*! \~korean  \brief �߰� */
	jmET_Insert = 1,
	/*! \~korean  \brief ���� */
	jmET_Delete = 2,
	/*! \~korean  \brief ���� */
	jmET_Update = 3
} EditedTypeEnum;

/*! \~korean
\brief �����ͺ��̽��� ����� ���������� ���� */
typedef enum SpatialDataTypeEnum
{
	/*! \~korean  \brief DBMS ��ü �����ڷ� ���� */
	jmSD_SpatialDBBlob = 1,
	/*! \~korean  \brief WKB(Well Known Binary) */
	jmSD_WKB,
	/*! \~korean  \brief WKT(Well Known Text) */
	jmSD_WKT,
	/*! \~korean  \brief ArcSDE ���� */
	jmSD_ArcSDE,
	/*! \~korean  \brief Geomedia ���� */
	jmSD_Geomedia,
	/*! \~korean  \brief Smallworld ���� */
	jmSD_Smallworld
} SpatialDataTypeEnum;

/*! \~korean
\brief ���� OpenAPI ���� ���� */
typedef enum WebServerTypeEnum
{
	/*! \~korean  \brief ���� */
	jmOA_GOOGLEMAP = 1,
	/*! \~korean  \brief ���� */
	jmOA_YAHOOMAP = 2,
	/*! \~korean  \brief ����ũ�μ���Ʈ ������ */
	jmOA_BINGMAP = 3,
	/*! \~korean  \brief ���̿��� 2D */
	jmOA_VWORLD_2D = 4,
	/*! \~korean  \brief ���̿��� 3D */
	jmOA_VWORLD_3D = 5,
	/*! \~korean  \brief ���̹� ���� */
	jmOA_NAVERMAP = 6,
	/*! \~korean  \brief ���� ���� */
	jmOA_DAUMMAP = 7,
	/*! \~korean  \brief KT ���� */
	jmOA_KTMAP = 8,
	/*! \~korean  \brief ArcGIS Online Service */
	jmOA_AGS = 9,
	/*! \~korean  \brief ���� (tms) */
	jmOA_JOYMAP = 10
} WebServerTypeEnum;

/*! \~korean
\brief ������ü�� ���/���ؽ� ������ ���� �ֺ� ����� ������ü�� ���� �̵� ���� ����*/
typedef enum TopoSyncMoveEnum 
{
	/*! \~korean  \brief �����̵� ���� */
	jmTS_None			= 0x000,
	/*! \~korean  \brief �ɺ��̵��� �ɺ��̵� */
	jmTS_Symbol2Symbol	= 0x001, 
	/*! \~korean  \brief �ɺ��̵��� ���� �����̵� */
	jmTS_Symbol2Node	= 0x002,
	/*! \~korean  \brief �ɺ��̵��� ������ �̵� */
	jmTS_Symbol2Vertex	= 0x004,
	/*! \~korean  \brief ���γ��� �̵��� �ɺ��̵� */
	jmTS_Node2Symbol	= 0x008,
	/*! \~korean  \brief ���γ��� �̵��� ���� �����̵� */
	jmTS_Node2Node		= 0x010,
	/*! \~korean  \brief ���γ��� �̵��� ������ �̵� */
	jmTS_Node2Vertex	= 0x020,
	/*! \~korean  \brief ������ �̵��� �ɺ��̵� */
	jmTS_Vertex2Symbol	= 0x040,
	/*! \~korean  \brief ������ �̵��� ���γ��� �̵� */
	jmTS_Vertex2Node	= 0x080,
	/*! \~korean  \brief ������ �̵��� ������ �̵� */
	jmTS_Vertex2Vertex	= 0x100,
	/*! \~korean  \brief �ɺ�, ���γ���/������ �켱 �̵� */
	jmTS_ComplexSymbolVertexStand = 0x1b7
} TopoSyncMoveEnum;

/*! \~korean
\brief ��ġ ���� ����(3��3��) */
typedef enum AlignPositionEnum
{
	/*! \~korean  \brief ���� �ϴ�(�⺻) */
	jmAP_None = 0,
	/*! \~korean  \brief ���� ��� */
	jmAP_TopLeft = 1,
	/*! \~korean  \brief ��� ��� */
	jmAP_TopCenter,
	/*! \~korean  \brief ������ ��� */
	jmAP_TopRight,
	/*! \~korean  \brief ���� �߾� */
	jmAP_CenterLeft,
	/*! \~korean  \brief ���߾� */
	jmAP_CenterCenter,
	/*! \~korean  \brief ������ �߾� */
	jmAP_CenterRight,
	/*! \~korean  \brief ���� �ϴ� */
	jmAP_BottomLeft,
	/*! \~korean  \brief ��� �ϴ� */
	jmAP_BottomCenter,
	/*! \~korean  \brief ������ �ϴ� */
	jmAP_BottomRight
} AlignPositionEnum;

/*! \~korean
\brief ��Ʈ ���� */
typedef enum ChartTypeEnum
{
	/*! \~korean  \brief ���� �� �������� �����͸� �� ��(���� ��)�� ������ ��Ÿ���� ���� �� ��Ʈ */
	jmCT_LINE = 0,
	jmCT_AREA,
	/*! \~korean  \brief ��(bar)���·� ��Ÿ���� ��Ʈ �Ǵ� ������ ��Ʈ */
	jmCT_BAR,
	jmCT_FLOATINGBAR,
	jmCT_HILOCLOSE,
	jmCT_COMBO_LINE_BAR,
	jmCT_COMBO_HLC_BAR,
	jmCT_COMBO_LINE_AREA,
	jmCT_COMBO_LINE_LINE,
	jmCT_COMBO_HLC_AREA,
	jmCT_3DHILOCLOSE,
	jmCT_3DCOMBO_LINE_BAR,
	jmCT_3DCOMBO_LINE_AREA,
	jmCT_3DCOMBO_LINE_LINE,
	jmCT_3DCOMBO_HLC_BAR,
	jmCT_3DCOMBO_HLC_AREA,
	jmCT_3DBAR,
	jmCT_3DFLOATINGBAR,
	jmCT_3DAREA,
	jmCT_3DLINE,
	jmCT_3DPIE,
	jmCT_2DPIE
} ChartTypeEnum;

/*! \~korean
\brief 3D ���� ��ü ���� */
typedef enum Draw3DTypeEnum
{
	/*! \~korean  \brief 2D ���� ��ü�� 3D ��ü �ڵ����� */
	jm3DT_Auto = 0,
	/*! \~korean  \brief 2D ���� ��ü */
	jm3DT_Geometry = 1,
	/*! \~korean  \brief �ڽ� ��ü */
	jm3DT_Box = 2,
	/*! \~korean  \brief ���� ��ü */
	jm3DT_Sphere = 3,
	/*! \~korean  \brief ������ ��ü */
	jm3DT_Cylinder = 4,
	/*! \~korean  \brief ĸ�� ��ü */
	jm3DT_Capsule = 5,
	/*! \~korean  \brief ���� ��ü */
	jm3DT_Cone = 6,
	/*! \~korean  \brief �ٰ��� ��ü */
	jm3DT_Polygon = 7
} Draw3DTypeEnum;

/*! \~korean
\brief ���콺 ��ư ���� */
typedef enum MouseButtonTypeEnum
{
	/*! \~korean  \brief ���� */
	jmMB_NoButton = 0,
	/*! \~korean  \brief ���� ��ư */
	jmMB_LeftButton = 1,
	/*! \~korean  \brief ������ ��ư */
	jmMB_RightButton = 2,
	/*! \~korean  \brief �߰� ��ư */
	jmMB_MidButton = 4, 
	/*! \~korean  \brief �� ��ư */
	jmMB_WheelButton = 8
} MouseButtonTypeEnum;

/*! \~korean
\brief �ִϸ��̼� �˰��� ���� */
typedef enum TransitionModeEnum
{
	jmTR_LINEAR = 0,
	jmTR_SINE = 1,
	jmTR_QUINT = 2,
	jmTR_QUART = 3,
	jmTR_QUAD = 4,
	jmTR_EXPO = 5,
	jmTR_ELASTIC = 6,
	jmTR_CUBIC = 7,
	jmTR_CIRC = 8,
	jmTR_BOUNCE = 9,
	jmTR_BACK = 10
} TransitionModeEnum;

/*! \~korean
\brief �ִϸ��̼� �ð� ���� */
/*! \~english
\brief Animator Timing Mode */
typedef enum TimingModeEnum
{
	jmTI_EASE_IN = 0,
	jmTI_EASE_OUT = 1,
	jmTI_EASE_IN_OUT = 2
} TimingModeEnum;

/*! \~korean
\brief �ִϸ��̼� �ݺ� ���� */
/*! \~english
\brief Animator Repeat Mode */
typedef enum RepeatModeEnum
{
	jmRP_RESTART = 0,
	jmRP_REVERSE = 1
} RepeatModeEnum;

/*! \~korean
\brief ������ü �� ���� ���� */
typedef enum PointLocationEnum
{
	/*! \~korean  \brief ������ */
	jmPL_StartNode = 0x01,
	/*! \~korean  \brief ���� */
	jmPL_EndNode = 0x02,
	/*! \~korean  \brief ����, ���� */
	jmPL_Node = 0x03,
	/*! \~korean  \brief �߰���(����, ���� ����) */
	jmPL_Vertex = 0x04,
	/*! \~korean  \brief ����� */
	jmPL_All = 0x07
} PointLocationEnum;

/*! \~korean
\brief �پ��� Ŀ������ �ڷ���. �׸��� Ŀ�������� ��� ��� �ڷ��� */
/*! \~english
\brief Storage type for values in a dimension */
// GDALDataType
typedef enum SampleDimensionTypeEnum
{
	/*! \~korean  \brief ���� ���ϴ� �ڷ��� */
	jmSDT_Unknown = 0,
	/*! \~korean  \brief 1����Ʈ�� */
	jmSDT_Byte,
	/*! \~korean  \brief unsigned 16(2����Ʈ)�� */
	jmSDT_UInt16,
	/*! \~korean  \brief signed 16(2����Ʈ)�� */
	jmSDT_Int16,
	/*! \~korean  \brief unsigned 32(4����Ʈ)�� */
	jmSDT_UInt32,
	/*! \~korean  \brief signed 16(4����Ʈ)�� */
	jmSDT_Int32,
	/*! \~korean  \brief float (4����Ʈ)�� */
	jmSDT_Float32,
	/*! \~korean  \brief double (8����Ʈ)�� */
	jmSDT_Float64,
	jmSDT_CInt16,
	jmSDT_CInt32,
	jmSDT_CFloat32,
	jmSDT_CFloat64,
} SampleDimensionTypeEnum;

/*! \~korean
\brief ��尡 � �÷� �� ���п� �ش�Ǵ����� ��Ÿ����. */
/*! \~english
\brief ColorInterpretation expresses what the color model is corresponding to the band. */
// GDALColorInterp
typedef enum ColorInterpretationEnum
{
  	/*! \~korean  \brief ���� �÷� �� ���а� ���� ����. */
  	/*! \~english \brief Undefined band. It is not related to color model entry. */
	jmCI_Undefined = 0,
  	/*! \~korean  \brief ������ ������ Lookup���̺��� �̿��Ͽ� ǥ���ȴ�. */
  	/*! \~english \brief Gray index. The color of data is expressed by Lookup table. */
	jmCI_GrayIndex,
  	/*! \~korean  \brief ������ ������ �÷� ���̺��� �̿��Ͽ� ǥ���ȴ�. */
  	/*! \~english \brief Color index. The color of data is expressed by color table. */
	jmCI_PaletteIndex,

  	/*! \~korean  \brief ������ RGB �÷� �� ������Ʈ�� �ش��ϰ�, AlphaBand�� ������ ���� �������� ���� ���� �ִ�. */
  	/*! \~english \brief The Red color band in RGB color model component. AlphaBand can be or cannot be exist. */
	jmCI_RedBand,
  	/*! \~korean  \brief ������ RGB �÷� �� ������Ʈ�� �ش��ϰ�, AlphaBand�� ������ ���� �������� ���� ���� �ִ�. */
  	/*! \~english \brief The Green color band in RGB color model component. AlphaBand can be or cannot be exist. */
	jmCI_GreenBand,
  	/*! \~korean  \brief ������ RGB �÷� �� ������Ʈ�� �ش��ϰ�, AlphaBand�� ������ ���� �������� ���� ���� �ִ�. */
  	/*! \~english \brief The Blue color band in RGB color model component. AlphaBand can be or cannot be exist. */
	jmCI_BlueBand,
  	/*! \~korean  \brief  */
  	/*! \~english \brief  */
	jmCI_AlphaBand,

  	/*! \~korean  \brief ������ HSL �÷� �𵨿� �ش��Ѵ�. */
  	/*! \~english \brief The Hue band in HSL color model. */
	jmCI_HueBand,
  	/*! \~korean  \brief ������ HSL �÷� �𵨿� �ش��Ѵ�. */
  	/*! \~english \brief The Saturation band in HSL color model. */
	jmCI_SaturationBand,
  	/*! \~korean  \brief ������ HSL �÷� �𵨿� �ش��Ѵ�. */
  	/*! \~english \brief The Lightness band in HSL color model. */
	jmCI_LightnessBand,
  	/*! \~korean  \brief ������ CMYK �÷� �𵨿� �ش��Ѵ�. */
  	/*! \~english \brief The Cyan band in CMYK color model. */
	jmCI_CyanBand,
  	/*! \~korean  \brief ������ CMYK �÷� �𵨿� �ش��Ѵ�. */
  	/*! \~english \brief The Magenta band in CMYK color model. */
	jmCI_MagentaBand, 
  	/*! \~korean  \brief ������ CMYK �÷� �𵨿� �ش��Ѵ�. */
  	/*! \~english \brief The Yellow band in CMYK color model.*/
	jmCI_YellowBand, 
  	/*! \~korean  \brief ������ CMYK �÷� �𵨿� �ش��Ѵ�. */
  	/*! \~english \brief The Black band in CMYK color model. */
	jmCI_BlackBand, 
	
	jmCI_YCbCr_YBand,
	jmCI_YCbCr_CbBand,
	jmCI_YCbCr_CrBand
} ColorInterpretationEnum;

/*! \~korean
\brief Ŀ������ �÷� �ȷ�Ʈ�� �������� ������ Ŀ�������� ���ؼ��� �÷��ȷ�Ʈ ������ ��ȿ�� */
/*! \~english
\brief PaletteInterpretationEnum is a coverage color pallet. The color pallet value is only valid on some coverages which has integer values. */
// GDALPaletteInterp
typedef enum PaletteInterpretationEnum
{
  	/*! \~korean  \brief ����� ���� ���´�. 0�� �������̰� 255�� ����̴� */
  	/*! \~english \brief Gray color entry has 2 kinds of value, that is Black and White. The range of color value is 0 to 255. If the value is 0 then that is black, and if 255 then white. */
	jmPI_Gray,
  	/*! \~korean  \brief ����, ���, �Ķ� 3������ ���� ���´�. �� ���� ������ 0���� 255�̸� �̶�, 0�� ����� ���� 255�̸� �ִ� ��ϰ��� ���´�. */
  	/*! \~english \brief RGB color entry has 3 kinds of value, that is Red, Green, and Blue. The range of each color value is 0 to 255. If the value is 0, then the contrast value is not exist, and if 255, the contrast value is maximized. */
	jmPI_RGB,
  	/*! \~korean  \brief Cyan, Magenta, Yellow, Black�� 4���� ���� ���´�. �� ���� ������ 0���� 255�̸�, 0�϶��� ��ϰ��� ����, 255�϶� �ִ� ��ϰ��� ���´�. */
  	/*! \~english \brief CMYK color entry has 4 kinds of value, that is Cyan, Magenta, Yellow, and Black. The range of each color value is 0 to 255. If the value is 0, then the contrast value is not exist, and if 255, the contrast value is maximized. */
	jmPI_CMYK,
  	/*! \~korean  \brief ����(Hue), ä��(Saturation), ���(Lightness) 3�� ���� ���´�. ������ 0���� 360������ ���� ����, ä���� 0���� 100������ ���� ���´�. �� ��, ä������ 0�̸� ����� 0�̰�, 100�̸� �ִ��� ��ϰ��� ���´�. ���� 0���� 100������ ���� ���´�. */
  	/*! \~english \brief HLS color entry has 3 kinds of value. HLS color model means Hue/Saturation/Lightness of the color. The range of Hue value is 0 to 360, Saturation value is 0 to 100, and Lightness value is 0 to 100. (If the saturation value is 0, the contrast is 0, and if 100, the contrast is maximized.) */
	jmPI_HLS,
	jmPI_YCbCr
} PaletteInterpretationEnum;

/*! \~korean
\brief 3���� ���ñ� �м� ���� */
typedef enum SightModeEnum
{
	jmIM_LinearLine = 0,
	jmIM_RadialLine,
	jmIM_PolyhedralLine
} SightModeEnum;

/*! \~korean
\brief �Ķ���� �ڷ��� Ÿ�� ���� */
typedef enum VariantTypeEnum
{
	jmVT_None = 0,
	jmVT_Bool,
	jmVT_Int,
	jmVT_Short,
	jmVT_Long,
	jmVT_Float,
	jmVT_Double,
	jmVT_String,
	jmVT_Handle
} VariantTypeEnum;

/*! \~korean
\brief ������ ȿ��ó�� Ÿ�� ���� */
typedef enum FilterTypeEnum 
{
	/*! \~korean  \brief �������� ���� ȿ�� */
	jmFT_Unknown = 0,
	/*! \~korean  \brief �׷��� ������ ȿ�� */
	jmFT_GRAYSCALE,
	/*! \~korean  \brief ���Ǿ� ȿ��(���� ä���� ���� �׸��� ȿ��) */
	jmFT_SEPIA,
	/*! \~korean  \brief ä�� ȿ�� */
	jmFT_SATURATE,
	/*! \~korean  \brief ���� ȿ�� */
	jmFT_HUE_ROTATE,
	/*! \~korean  \brief ���� ȿ�� */
	jmFT_INVERT,
	/*! \~korean  \brief ��� ȿ�� */
	jmFT_BRIGHTNESS,
	/*! \~korean  \brief ��ϴ�� ȿ�� */
	jmFT_CONTRAST,
	/*! \~korean  \brief ���� ȿ�� */
	jmFT_OPACITY,
	/*! \~korean  \brief �� ȿ�� */
	jmFT_BLUR,
	/*! \~korean  \brief �׸��� ȿ�� */
	jmFT_DROP_SHADOW,
	/*! \~korean  \brief ���� �ý��� Ȱ�� */
	jmFT_FILTER_TYPE_LAST = jmFT_DROP_SHADOW
} FilterTypeEnum;

/*! \~korean
\brief ����̹� ���� ��� */
typedef enum AccessModeEnum 
{
	/*! \~korean  \brief ���� */
	jmAM_Open = 0x01,
	/*! \~korean  \brief ���� */
	jmAM_Create = 0x02,
	/*! \~korean  \brief ������� */
	jmAM_CreateCopy = 0x04,
	/*! \~korean  \brief ���� */
	jmAM_Delete = 0x08
} AccessModeEnum;

/*! \~korean
\brief �ý��� �ɺ� */
typedef enum SystemSymbolEnum 
{
	jmSym_DistanceLine,     // distance line
	jmSym_MeasureText,     // distance/area text
	jmSym_MeasureBText,    // distance/area text background
	jmSym_AreaLine,     // area boundary
	jmSym_MeasureVertex,      // dist/area vertex
	jmSym_ZoomLine,     // zoomrect line/bound
	jmSym_SnapLine,     // snap, selected flag object
	jmSym_MovingGeom,      // default moving object boundary
	jmSym_TempGeom,     // default geometry
	jmSym_MagnifyBox,		// Magnify Box
	jmSym_TooltipText,	// tooltip text 
	jmSym_TooltipBox,	// tooltip box
	jmSym_SnapGrid,	// snapgrid
	jmSym_Count
} SystemSymbolEnum;

#endif //_SG_FEATUREENUM_H_INCLUDED
