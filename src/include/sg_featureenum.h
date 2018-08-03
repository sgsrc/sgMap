#ifndef _SG_FEATUREENUM_H_INCLUDED
#define _SG_FEATUREENUM_H_INCLUDED

/*! \~english \brief 3D camera sight move type */
/*! \~korean \brief 3D 카메라 시선 이동 종류 */
typedef enum {
	/*! \~english \brief Move camera around target point */
	/*! \~korean  \brief 목표점을 중심으로 카메라가 이동 */
	jmCM3_Focal = 0,
	/*! \~english \brief Moves the target point around the current camera position */
	/*! \~korean  \brief 카메라 현재 위치를 중심으로 목표점이 이동 */
	jmCM3_Eye
} Camera3DModeEnum;

/*! \~english \brief 3D layer type */
/*! \~korean \brief 3D 레이어의 종류 */
typedef enum {
	/*! \~english \brief default layer */
	/*! \~korean  \brief 일반 레이어 */
	jmLT3_Default = 0,
	/*! \~english \brief terrain layer */
	/*! \~korean  \brief 등고 레이어 */
	jmLT3_Terrain,
	/*! \~english \brief mask layer */
	/*! \~korean  \brief 마스크 레이어 */
	jmLT3_Mask,
	/*! \~english \brief model layer */
	/*! \~korean  \brief 모델(공간 객체) 레이어 */
	jmLT3_Model,
	/*! \~english \brief image layer */
	/*! \~korean  \brief 이미지(등고 객체의 색상) 레이어 */
	jmLT3_Image,
	/*! \~english \brief elevation layer */
	/*! \~korean  \brief 등고 레이어 */
	jmLT3_Elevation
} LayerType3DEnum;

/*! \~english \brief Tab GUI object's tap position type */
/*! \~korean \brief 탭 GUI 객체의 Tap 위치 종류 */
typedef enum {
	/*! \~english \brief north (screen top) */
	/*! \~korean  \brief 북쪽(화면 위쪽) */
	jmTP_North = 0,
	/*! \~english \brief south (screen bottom) */
	/*! \~korean  \brief 남쪽(화면 아래쪽) */
	jmTP_South, 
	/*! \~english \brief west (screen left) */
	/*! \~korean  \brief 서쪽(화면 왼쪽) */
	jmTP_West, 
	/*! \~english \brief east (screen right) */
	/*! \~korean  \brief 동쪽(화면 오른쪽) */
	jmTP_East
} TapPositionEnum;

/*! \~english \brief Docking GUI object's docking position type */
/*! \~korean
\brief 도킹 GUI 객체의 도킹 위치 종류 */
typedef enum {
	/*! \~english \brief do not */
	/*! \~korean  \brief 없음 */
	jmDA_No		= 0,
	/*! \~english \brief Left */
	/*! \~korean  \brief 왼쪽 */
	jmDA_Left	= 0x1,
	/*! \~english \brief Right */
	/*! \~korean  \brief 오른쪽 */
	jmDA_Right	= 0x2,
	/*! \~english \brief Top */
	/*! \~korean  \brief 위쪽 */
	jmDA_Top	= 0x4,
	/*! \~english \brief Bottom */
	/*! \~korean  \brief 아래쪽 */
	jmDA_Bottom	= 0x8,
	/*! \~english \brief Overlap in the center */
	/*! \~korean  \brief 중앙에 겹치기 */
	jmDA_Central= 0x10,
	/*! \~english \brief Anywhere */
	/*! \~korean  \brief 위 모든 위치 */
	jmDA_All	= 0xf
} DockAreaEnum;

/*! \~english \brief Docking GUI object's style type */
/*! \~korean \brief 도킹 GUI 객체의 스타일 종류 */
typedef enum {
	/*! \~english \brief Do not */
	/*! \~korean  \brief 없음 */
	jmDF_NoFeatures			= 0x00,
	/*! \~english \brief Closeable style */
	/*! \~korean  \brief 닫기 기능 */
	jmDF_Closable			= 0x01,	
	/*! \~english \brief Movable style */
	/*! \~korean  \brief 이동 기능 */
	jmDF_Movable			= 0x02,	
	/*! \~english \brief Floatable style */
	/*! \~korean  \brief 평평한 스타일 */
	jmDF_Floatable			= 0x04,
	/*! \~english \brief Vertial titlebar style */
	/*! \~korean  \brief 수직 타이틀바 스타일 */
	jmDF_VerticalTitleBar	= 0x08,	
	/*! \~english \brief Image mask style */
	/*! \~korean  \brief 마스크 스타일 */
	jmDF_FeatureMask		= 0x0f,	
	/*! \~english \brief Default style */
	/*! \~korean  \brief 일반 스타일 */
	jmDF_AllFeature			= jmDF_Closable | jmDF_Movable | jmDF_Floatable,	
	/*! \~english \brief Reserved style */
	jmDF_Reserved			= 0xff
} DockFeatureEnum;

/*! \~english \brief Canvas type */
/*! \~korean \brief 캔버스 객체 종류 */
typedef enum {
	/*! \~english \brief Unknown */
	/*! \~korean  \brief 없음 */
	jmCT_NULL = 0,
	/*! \~english \brief 2D map */
	/*! \~korean  \brief 2D 지도 */
	jmCT_2D,
	/*! \~english \brief graphic map */
	/*! \~korean  \brief 그래픽 객체 지도 */
	jmCT_GRAPHIC,
	/*! \~english \brief 3D map */
	/*! \~korean  \brief 3D 지도 */
	jmCT_3D,
	/*! \~english \brief 3D earth map */
	/*! \~korean  \brief 구형 3D 지도 */
	jmCT_EARTH,
	/*! \~english \brief 3D AR map */
	/*! \~korean  \brief 증강 3D 지도 */
	jmCT_AR
} CanvasTypeEnum;

/*! \~english \brief Map Toolbar type */
/*! \~korean \brief 툴바 객체 종류 */
typedef enum {
	/*! \~english \brief Default edit toolbar */
	/*! \~korean  \brief 공간 객체 일반편집 툴바 */
	jmTB_MapDiz = 0,
	/*! \~english \brief Map view toolbar */
	/*! \~korean  \brief 지도 표시 툴바 */
	jmTB_MapNav,
	/*! \~english \brief Select toolbar */
	/*! \~korean  \brief 공간 객체 선택 툴바 */
	jmTB_MapSelect,
	/*! \~english \brief Measure toolbar */
	/*! \~korean  \brief 측정 툴바 */
	jmTB_MapMeasure,
	/*! \~english \brief Geometry edit toolbar */
	/*! \~korean  \brief 공간 객체 편집 툴바 */
	jmTB_Edit,
	/*! \~english \brief Geometry vertex edit toolbar */
	/*! \~korean  \brief 공간 객체 점편집 툴바 */
	jmTB_EditVertex,
	/*! \~english \brief Map zoom toolbar */
	/*! \~korean  \brief 지도 확대/축소 툴바 */
	jmTB_View,
	/*! \~english \brief Layer control toolbar */
	/*! \~korean  \brief 레이어 추가 툴바 */
	jmTB_LayerAdd,
	/*! \~english \brief Vector geoprocessing toolbar */
	/*! \~korean  \brief 벡터 공간 연산 툴바 */
	jmTB_VectorGeomProcess,
	/*! \~english \brief Vector processing toolbar */
	/*! \~korean  \brief 벡터 연산 툴바 */
	jmTB_VectorProcess,
	/*! \~english \brief Raster processing toolbar */
	/*! \~korean  \brief 래스터 연산 툴바 */
	jmTB_RasterProcess,
	/*! \~english \brief Snap toolbar */
	/*! \~korean  \brief 스냅 상태 제어 툴바 */
	jmTB_SnapProperties,
	/*! \~english \brief Printview file toolbar */
	/*! \~korean  \brief 출력창 내 파일 툴바 */
	jmTB_PrintFile,
	/*! \~english \brief Printview export toolbar */
	/*! \~korean  \brief 출력창 내 내보내기 툴바 */
	jmTB_PrintExport,
	/*! \~english \brief Printview zoom toolbar */
	/*! \~korean  \brief 출력창 내 보기 툴바 */
	jmTB_PrintView,
	/*! \~english \brief Printview layout toolbar */
	/*! \~korean  \brief 출력창 레이아웃 툴바 */
	jmTB_PrintLayout,
	/*! \~english \brief Printview item toolbar */
	/*! \~korean  \brief 출력창 내 객체 추가 툴바 */
	jmTB_PrintItem,
	jmTB_End
} ToolBarTypeEnum;

/*! \~english \brief Input geometry type */
/*! \~korean \brief 입력 툴바 객체 내 입력 객체 종류 */
typedef enum {
	/*! \~english \brief Point/Symbol */
	/*! \~korean  \brief 점/심볼 */
	jmAC_Point = 0,
	/*! \~english \brief Line(linestring) */
	/*! \~korean  \brief 선 */
	jmAC_Line,
	/*! \~english \brief Freedraw line */
	/*! \~korean  \brief 자유선 */
	jmAC_Free,
	/*! \~english \brief Circle */
	/*! \~korean  \brief 원/타원 */
	jmAC_Circle,
	/*! \~english \brief Rectange */
	/*! \~korean  \brief 사각형 */
	jmAC_Rectangle,
	/*! \~english \brief Polygon */
	/*! \~korean  \brief 다각형 */
	jmAC_Polygon,
	jmAC_End
} EditActionTypeEnum;

/*! \~english \brief Newwork algorithm type */
/*! \~korean \brief 네트워크 분석 알고리즘 종류 */
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
/*! \~korean \brief 다이어그램 종류 */
typedef enum DiagramTypeEnum
{
	/*! \~english \brief Chart */
	/*! \~korean  \brief 차트 */
	jmRT_Chart = 0x0001,
	/*! \~english \brief Graph */
	/*! \~korean  \brief 그래프 */
	jmRT_Graph = 0x0002,
	/*! \~english \brief User defined type (external object) */
	/*! \~korean  \brief 사용자 정의 외부 객체 */
	jmRT_UserDefine = 0x0004
} DiagramTypeEnum;

/*! \~english \brief Graph type */
/*! \~korean \brief 그래프 종류 */
typedef enum GraphTypeEnum
{
	/*! \~korean  \brief 다트 */
	jmGT_dot = 0x0001,	
	jmGT_dotty = 0x0002,	
	jmGT_lefty = 0x0003,
	jmGT_neato = 0x0004
} GraphTypeEnum;

/*! \~english \brief Volume start z type */
/*! \~korean \brief 체적 위치 종류 */
typedef enum VolumeTypeEnum
{
	/*! \~english \brief Above the standard point */
	/*! \~korean  \brief 기준 위쪽 */
	jmVT_Above,
	/*! \~english \brief Below the standard point */
	/*! \~korean  \brief 기준 아래쪽 */
	jmVT_Below
} VolumeTypeEnum;

/*! \~english \brief Raster color palette type */
/*! \~korean \brief 래스터 색상 선정 알고리 종류 */
typedef enum GridColorTypeEnum
{
	/*! \~english \brief Interpolated color */
	/*! \~korean  \brief 보간된 색상 */
	jmGC_Interpolated,
	/*! \~english \brief Discrete palette type */
	/*! \~korean  \brief 이산 색상 */
	jmGC_Discrete,
	/*! \~english \brief Exact palette type */
	/*! \~korean  \brief 동일한 색상 */
	jmGC_Exact
} GridColorTypeEnum;

/*! \~korean
\brief 채색 방법 */
typedef enum FeatureTypeStyleEnum
{
	/*! \~korean  \brief 기본 색상 */
	jmFS_Default = 0x0001,
	/*! \~korean  \brief 래스터 색상 리스트 기반 */
	jmFS_GridRamp = 0x0002,
	/*! \~korean  \brief 래스터 Pseudo 알고리즘 기반 */
	jmFS_GridPseudo = 0x0003,
	/*! \~korean  \brief 래스터 FreakOut 알고리즘 기반 */
	jmFS_GridFreakOut = 0x0004,
	/*! \~korean  \brief 래스터 기본 색상 기반 */
	jmFS_GridDefault = 0x0005
} FeatureTypeStyleEnum;

/*! \~korean
\brief 그래픽 표식 종류 */
typedef enum SymbolizerTypeEnum
{
	/*! \~korean  \brief 일반 */
	jmSL_Default = 0,
	/*! \~korean  \brief 선 */
	jmSL_Line = 1,
	/*! \~korean  \brief 채우기 */
	jmSL_Polygon = 2,
	/*! \~korean  \brief 점/심볼 */
	jmSL_Point = 3,
	/*! \~korean  \brief 문자 */
	jmSL_Label  = 4
} SymbolizerTypeEnum;

/*! \~korean
\brief 시스템 내부 리소스 종류 */
typedef enum SystemResourceEnum
{
	/*! \~korean  \brief 내부 리소스 참고 */
	jmRS_StartBuffer = 512,
	/*! \~korean  \brief 설정 안됨 */
	jmRS_Default	= 0x0000,
	/*! \~korean  \brief 로고 */
	jmRS_Logo		= 0x0001,
	/*! \~korean  \brief GPS 위치 */
	jmRS_Location	= 0x0002,
	/*! \~korean  \brief 방위 */
	jmRS_Compass	= 0x0004,
	/*! \~korean  \brief 스케일바 */
	jmRS_ScaleBar	= 0x0008,
	/*! \~korean  \brief 스케일 문자 */
	jmRS_Scale		= 0x0080,
	/*! \~korean  \brief 인덱스지도 객체 GUI */
	jmRS_IndexMapWidget = 0x0010,
	/*! \~korean  \brief 내부 지도 제어 객체 GUI */
	jmRS_MapCtrlWidget	= 0x0020,
	/*! \~korean  \brief 지도 확대축소 레벨 객체 GUI */
	jmRS_ZoomLevelWidget = 0x0040,
	/*! \~korean  \brief 방향센서 제어 버튼 객체 GUI */
	jmRS_MotionBtn		= 0x0100,
	/*! \~korean  \brief 위치센서 제어 버튼 객체 GUI */
	jmRS_LocationBtn	= 0x0200
} SystemResourceEnum;

/*! \~korean
\brief 시스템 키보드 키 종류 */
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
\brief 센서 종류 */
typedef enum SensorTypeEnum
{
	/*! \~korean  \brief 위치 센서 */
	jmSR_Location = 0,
	/*! \~korean  \brief 방향 센서 */
	jmSR_Motion,
	/*! \~korean  \brief 카메라 센서 */
	jmSR_Video,
} SensorTypeEnum;

/*! \~korean
\brief 위치 센서 종류 */
typedef enum LocationSensorTypeEnum
{
	/*! \~korean  \brief 알지 못함 */
	jmLSR_Unknown = 0,
	/*! \~korean  \brief NMEA 방식 */
	jmLSR_NMEA,
	/*! \~korean  \brief RTK 방식 */
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
\brief 트랜잭션 종류 */
typedef enum TransactionEnum 
{
	/*! \~korean  \brief 자동 저장 */
	jmTN_AutoCommit = 0,
	/*! \~korean  \brief 수동 저장 */
	jmTN_ManualCommit = 1,
	/*! \~korean  \brief 저장 안함 */
	jmTN_UnBind = 2
} TransactionEnum;

/*! \~korean
\brief 웹서비스 지도 유형 */
typedef enum WebServiceTypeEnum
{
	/*! \~korean  \brief 기본값 */
	jmWS_Default = 0,
	/*! \~korean  \brief OpenAPI 지도 */
	jmWS_OpenAPI = 1,
	/*! \~korean  \brief WMS 지도 */
	jmWS_WMS = 4,
	/*! \~korean  \brief WFS 지도 */
	jmWS_WFS = 5,
	/*! \~korean  \brief GWFS(Server를 통한 확장WFS) 지도 */
	jmWS_GWFS = 6,
	/*! \~korean  \brief LTM(Level Tiled Map) 지도 */
	jmWS_LTM = 7
} WebServiceTypeEnum;

/*! \~korean
\brief 화면의 현재 동작 모드 */
typedef enum ScreenModeEnum
{
	/*! \~korean  \brief 내부 화면 모드 참고 */
	jmSM_StartBuffer = 1024,
	/*! \~korean  \brief 초기 모드 */
	jmSM_NullMode = 0,
	/*! \~korean  \brief 점, 사각영역으로 선택 */
	jmSM_SelectMode = 1,
	/*! \~korean  \brief 선에 접하는 객체 선택 */
	jmSM_SelectPolylineMode = 3,
	/*! \~korean  \brief 다각형 내부 또는 접하는 객체 선택 */
	jmSM_SelectPolygonMode = 4,
	/*! \~korean  \brief 선택된 공간 객체 내부로 선택 */
	jmSM_SelectGeometryMode = 5,
	/*! \~korean  \brief 원, 타원 내부로 선택 */
	jmSM_SelectCircleMode = 6,
	/*! \~korean  \brief 원, 타원 내부로 선택(객체 유지) */
	jmSM_SelectKeepCircleMode = 7,
	/*! \~korean  \brief 화면 확대 실행 */
	jmSM_ZoomInMode = 11,
	/*! \~korean  \brief 화면 영역 확대 모드 */
	jmSM_ZoomInAreaMode = 12,
	/*! \~korean  \brief 화면 축소 실행 */
	jmSM_ZoomOutMode = 13,
	/*! \~korean  \brief 화면 영역 축소 모드 */
	jmSM_ZoomOutAreaMode = 14,
	/*! \~korean  \brief 화면 이동 모드 */
	jmSM_PanningMode = 15,
	/*! \~korean  \brief 점, 심볼 입력 모드 */
	jmSM_InsertSymbolMode = 21,
	/*! \~korean  \brief 문자 입력 모드 */
	jmSM_InsertTextMode = 23,
	/*! \~korean  \brief 다각선 입력 모드 */
	jmSM_InsertPolylineMode = 24,
	/*! \~korean  \brief 다각형 입력 모드 */
	jmSM_InsertPolygonMode = 25,
	/*! \~korean  \brief 원, 타원 입력 모드 */
	jmSM_InsertCircleMode = 26,
	/*! \~korean  \brief 자유선 입력 모드 */
	jmSM_InsertFreelineMode = 27,
	/*! \~korean  \brief 사각형 입력 모드 */
	jmSM_InsertRectangleMode = 28,
	/*! \~korean  \brief 다각형 내 내부 다각형 입력 모드 */
	jmSM_InsertRingMode = 29,
	/*! \~korean  \brief 거리 측정 모드 */
	jmSM_DistanceMode = 32,
	/*! \~korean  \brief 면적 측정 모드 */
	jmSM_AreaMode = 33,
	/*! \~korean  \brief 임의 점 입력 모드(출발점/도착점 등) */
	jmSM_SingPostMode = 34,
	/*! \~korean  \brief 노드, 버텍스 이동 모드 */
	jmSM_EditVertexMoveMode = 41,
	/*! \~korean  \brief 버텍스 삭제 모드 */
	jmSM_EditVertexDeleteMode = 42,
	/*! \~korean  \brief 버텍스 추가 모드 */
	jmSM_EditVertexAddMode = 43,
	/*! \~korean  \brief 공간 객체 이동 모드 */
	jmSM_EditMoveMode = 44,
	/*! \~korean  \brief 공간 객체 삭제 모드 */
	jmSM_EditDeleteMode = 45,
	/*! \~korean  \brief 공간 객체 복사 모드 */
	jmSM_EditCopyMode = 46,
	/*! \~korean  \brief 공간 객체 회전 모드 */
	jmSM_EditRotateMode = 47,
	/*! \~korean  \brief 공간 객체의 처음 선택한 객체를 다음 선택한 객체까지 연장시키는 모드 */
	jmSM_EditExtendMode = 48,
	/*! \~korean  \brief 공간 객체의 처음 선택한 객체의 일부를 다음 선택한 객체를 기준으로 잘라내는 모드 */
	jmSM_EditTrimMode = 49,
	/*! \~korean  \brief 공간 객체 크기 변경 모드 */
	jmSM_EditScaleMode = 51,
	/*! \~korean  \brief 잘라내기 위한 기준 라인을 그려 해당 기준 객체를 활용하여 걸치는 모든 공간 객체를 잘라내는 모드 */
	jmSM_EditBreakMode = 52,
	/*! \~korean  \brief 선택된 공간객체를 기준으로 걸치는 모든 공간 객체를 잘라내는 모드 */
	jmSM_EditBreakGeometryMode = 53,
	/*! \~korean  \brief 다각형 내부 다각형 삭제 모드 */
	jmSM_EditDeleteRingMode = 54,
	/*! \~korean  \brief 부피 측정 모드 */
	jmSM_VolumeMode = 55,
	/*! \~korean  \brief 단면도 측정 모드 */
	jmSM_TerrainProfileMode = 56,
	/*! \~korean  \brief 가시권 분석 모드 */
	jmSM_SightMode = 57,
	/*! \~korean  \brief Z점 그리드 보기 모드 */
	jmSM_PointGridMode = 58,
	jmSM_End = 59,
	/*internal mode*/
	/*! \~korean  \brief 주석 위치 이동 모드(내부 사용) */
	jmSM_AnnotationMove = 101,
	/*! \~korean  \brief 화면 자동(마우스 이동에 따라) 이동 모드(내부 사용) */
	jmSM_AutoPanningMode = 102,
	/*! \~korean  \brief 주석 회전 모드(내부 사용) */
	jmSM_AnnotationRotate = 103,
	/*! \~korean  \brief 주석 끝점 이동 모드(내부 사용) */
	jmSM_AnnotationEndMove = 104
} ScreenModeEnum;

/*! \~korean
\brief Map2D에서 마우스로 공간 객체를 그려서 생성하거나 이동, 변경시 좌표의 입력을 도와주는 기능으로 마우스의 위치를 기준으로 관련된 공간 객체의 주요 부분에 표시하고 해당 좌표 정보를 활용할 수 있도록 하는 기능(이하, 스냅)
\brief 공간 객체 검색 대상 스냅 모드 */
typedef enum SnapModeEnum
{
	/*! \~korean  \brief 스냅 기능을 취하지 않음 */
	jmNM_NullPoint = 0x0000,
	/*! \~korean  \brief 끝, 중간점(노드/버텍스) */
	jmNM_EndPoint = 0x0001,
	/*! \~korean  \brief 라인의 중간점 */
	jmNM_MidPoint = 0x0002,
	/*! \~korean  \brief 라인에서 가장 가까운 점 */
	jmNM_NearestPoint = 0x0004,
	/*! \~korean  \brief 객체간 교차점 */
	jmNM_IntersectPoint = 0x0008,
	/*! \~korean  \brief 직각 교차점 */
	jmNM_PerpendicularPoint = 0x0010,
	/*! \~korean  \brief 수직, 수평 교차점 */
	jmNM_OrthoPoint = 0x0020,
	/*! \~korean  \brief 연장선상 가장 가까운 점 */
	jmNM_ExtensionPoint = 0x0040,
	/*! \~korean  \brief 폴리곤, 원의 중심점 */
	jmNM_CenterPoint = 0x0080,
	/*! \~korean  \brief 스케일 변경시 변경 중심점(내부에서만 사용) */
	jmNM_ScalePoint = 0x0100,
	/*! \~korean  \brief 회전시 회전 중심점(내부에서만 사용) */
	jmNM_RotatePoint = 0x0200,
	/*! \~korean  \brief GPS 장치에서 들어오는 GPS 현재 위치 */
	jmNM_GPSPoint = 0x0400,
	jmNM_Geometry = 0x00ff,
	jmNM_END = 0x00800
} SnapModeEnum;

/*! \~korean
\brief 마우스 커서 종류*/
typedef enum CursorEnum
{
	/*! \~korean  \brief 기본 화살표 */
	jmCS_Null = 0,
	/*! \~korean  \brief 버텍스(점) 이동 */
	jmCS_VertexMove = 1,
	/*! \~korean  \brief 버텍스(점) 삭제 */
	jmCS_VertexDelete = 2,
	/*! \~korean  \brief 버텍스(점) 추가 */
	jmCS_VertexAdd = 3,
	/*! \~korean  \brief 주석 회전 */
	jmCS_AnnoRotate = 4,
	/*! \~korean  \brief 주석 끝점 이동 */
	jmCS_AnnoEndMove = 5,
	/*! \~korean  \brief 주석 이동 */
	jmCS_AnnoMove = 6,
	/*! \~korean  \brief 지도 확대 */
	jmCS_MapZoomIn = 7,
	/*! \~korean  \brief 지도 축소 */
	jmCS_MapZoomOut = 8,
	/*! \~korean  \brief 지도 이동 */
	jmCS_MapZoomPan = 9,
	/*! \~korean  \brief 객체 그리기(입력) */
	jmCS_MapInsert = 10,
	/*! \~korean  \brief 객체 선택 */
	jmCS_MapSelectObject = 11,
	/*! \~korean  \brief 객체 분할 */
	jmCS_EditTrim = 12,
	/*! \~korean  \brief 객체 끝점 늘리기(확장) */
	jmCS_EditExtend = 13,
	/*! \~korean  \brief 객체 잘라내기 */
	jmCS_EditBreak = 14,
	/*! \~korean  \brief 시스템 내부 사용 */
	jmCS_End = 15
} CursorEnum;

/*! \~korean
\brief 공간 객체의 구체적인 종류
\brief 2.5차원은 모든 좌표에 Z 값이 존재하지 않고 공간 객체에 하나의 Z좌표만을 가진 공간 정보를 의미함*/
typedef enum GeometryTypeEnum
{
	/*! \~korean  \brief 알지 못하는 타입 */
	jmGT_Unknown = 0,
	/*! \~korean  \brief 점 */
	jmGT_Point = 1,
	/*! \~korean  \brief 다각선 */
	jmGT_LineString = 2,
	/*! \~korean  \brief 다각형(내부에 여러개 다각형을 포함함) */
	jmGT_Polygon = 3,
	/*! \~korean  \brief 다중 점 */
	jmGT_MultiPoint = 4,
	/*! \~korean  \brief 다중 다각선 */
	jmGT_MultiLineString = 5,
	/*! \~korean  \brief 다중 다각형 */
	jmGT_MultiPolygon = 6,
	/*! \~korean  \brief 다중 공간 객체 집합 */
	jmGT_GeometryCollection = 7,
	/*! \~korean  \brief 선언되지 않은 타입 */
	jmGT_None = 100,
	/*! \~korean  \brief 처음과 마지막점이 동일한 다각선(폐합선) = 다각형 */
	jmGT_LinearRing = 101,
	/*! \~korean  \brief 2.5차원 점 */
	jmGT_Point25D = 0x80000001,
	/*! \~korean  \brief 2.5차원 다각선 */
	jmGT_LineString25D = 0x80000002,
	/*! \~korean  \brief 2.5차원 다각형 */
	jmGT_Polygon25D = 0x80000003,
	/*! \~korean  \brief 2.5차원 다중 점 */
	jmGT_MultiPoint25D = 0x80000004,
	/*! \~korean  \brief 2.5차원 다중 다각선 */
	jmGT_MultiLineString25D = 0x80000005,
	/*! \~korean  \brief 2.5차원 다중 다각형 */
	jmGT_MultiPolygon25D = 0x80000006,
	/*! \~korean  \brief 2.5차원 다중 공간 객체 집합 */
	jmGT_GeometryCollection25D = 0x80000007
} GeometryTypeEnum;

/*! \~korean
\brief 검색(hitting) 객체의 종류 */
typedef enum HitObjectTypeEnum
{
	/*! \~korean  \brief 알지 못하는 타입 */
	jmHT_Unknown = 0,
	/*! \~korean  \brief 모든 타입 */
	jmHT_All = 15,
	/*! \~korean  \brief 공간 객체 타입 */
	jmHT_Geometry = 0x01,
	/*! \~korean  \brief 주석 인출선 타입 */
	jmHT_AnnoLine = 0x02,
	/*! \~korean  \brief 라벨 주석 타입 */
	jmHT_AnnoLabel = 0x04,
	/*! \~korean  \brief 속성 주석 타입 */
	jmHT_AttrLabel = 0x08
} HitObjectTypeEnum;

/*! \~korean
\brief 주석 종류 */
typedef enum LabelTypeEnum
{
	/*! \~korean  \brief 텍스트 주석(점 객체에 주석 존재) */
	jmLT_SymbolLabel = jmHT_Geometry,
	/*! \~korean  \brief 툴팁 주석 */
	jmLT_TipLabel = 0x02,
	/*! \~korean  \brief 속성 긴(장)주석 */
	jmLT_AttrLabel = jmHT_AttrLabel,
	/*! \~korean  \brief 속성 단(짧은)주석 */
	jmLT_AttrShortLabel = 0x10,	
	/*! \~korean  \brief 라벨 주석 */
	jmLT_AnnoLabel = jmHT_AnnoLabel
} LabelTypeEnum;

/*! \~korean
\brief 속성주석 위치 종류 */
typedef enum LabelPositionTypeEnum
{
	/*! \~korean  \brief 공간객체의 MBR 의 중심점 기준(가장 빠름) */
	jmLP_GeoMBRCenter,
	/*! \~korean  \brief 공간객체와 지도의 교차 MBR의 중심점 기준(주석의 위치가 이동됨) */
	jmLP_GeoMapInterMBRCenter,
	/*! \~korean  \brief 다중 객체의 경우 첫번째 공간객체의 중심점 기준 */
	jmLP_GeoFirstCenter,
	/*! \~korean  \brief 다중 객체의 경우 첫번째 공간객체의 면의 중심점 기준 */
	jmLP_GeoFirstPointOnSurface
} LabelPositionTypeEnum;

/*! \~korean
\brief 공간연산 종류 */
typedef enum SpatialOperatorEnum
{
	/*! \~korean  \brief 교집합 */
	jmSO_Intersects = 0,
	/*! \~korean  \brief 동일 */
	jmSO_Equals = 1,
	/*! \~korean  \brief 비접촉 */
	jmSO_Disjoint = 2,
	/*! \~korean  \brief 접촉 */
	jmSO_Touches = 3,
	/*! \~korean  \brief 횡단 */
	jmSO_Crosses = 4,
	/*! \~korean  \brief 포함되는지 여부 */
	jmSO_Within = 5,
	/*! \~korean  \brief 포함하는지 여부 */
	jmSO_Contains = 6,
	/*! \~korean  \brief 겹침 */
	jmSO_Overlaps = 7,
} SpatialOperatorEnum;

/*! \~korean
\brief 위치센서로부터 위치가 이동하는 경우 이동 방향으로 Map2D 화면의 자동회전 여부 */
typedef enum MapRotateEnum
{	
	/*! \~korean  \brief 화면 고정(위치 정보 회전) */
	jmME_FixRotate = 0,
	/*! \~korean  \brief 화면 회전(위치 정보 고정) */
	jmME_AutoRotate = 1
} MapRotateEnum;

/*! \~korean
\brief 위치센서로부터 위치가 이동되고 있는 경우 지도 화면의 자동 이동 여부 */
typedef enum MapMoveEnum
{	
	/*! \~korean  \brief 수동 이동(자동 이동 없음) */
	jmMM_ManuMove = 0,
	/*! \~korean  \brief 센서 위치로 자동 이동 */
	jmMM_AutoMove = 1,
	/*! \~korean  \brief 센서 위치로 1회만 이동 */
	jmMM_OneOnlyMove = 2 
} MapMoveEnum;

/*! \~korean
\brief 다각선의 시작, 끝점의 모양 */
typedef enum LineCapEnum
{
	/*! \~korean  \brief 일직선 형태의 끝 모양 */
	jmLC_Flat             = 0,
	/*! \~korean  \brief 정사각형 형태의 선 끝 모양 */
	jmLC_Square           = 1,
	/*! \~korean  \brief 둥근 선 끝 모양 */
	jmLC_Round            = 2,
	/*! \~korean  \brief 삼각형 선 끝 모양 */
	jmLC_Triangle         = 3,
	/*! \~korean  \brief 모양 없음 */
	jmLC_NoAnchor         = 0x10,
	/*! \~korean  \brief 정사각형 형태의 돌출선 끝 모양 */
	jmLC_SquareAnchor     = 0x11,
	/*! \~korean  \brief 둥근 원 형태의 돌출선 끝 모양 */
	jmLC_RoundAnchor      = 0x12,
	/*! \~korean  \brief 마름모 형태의 돌출선 끝 모양 */
	jmLC_DiamondAnchor    = 0x13,
	/*! \~korean  \brief 화살표 형태의 돌출선 끝 모양 */
	jmLC_ArrowAnchor      = 0x14, 
	/*! \~korean  \brief 화살표1 형태의 돌출선 끝 모양 */
	jmLC_ArrowAnchor1     = 0x15, 
	/*! \~korean  \brief 화살표2 형태의 돌출선 끝 모양 */
	jmLC_ArrowAnchor2     = 0x16, ///< 화살표2 모양의 앵커를 지정
	/*! \~korean  \brief 사용자 지정 돌출선 끝 모양 */
	jmLC_Custom           = 0xff,
	/*! \~korean  \brief 선 끝 모양이 돌출 모양인지 여부를 검사하는 데 사용되는 마스크를 지정 */
	jmLC_AnchorMask       = 0xf0
} LineCapEnum;

/*! \~korean
\brief 선과 선이 만나는 지점의 모양 */
typedef enum LineJoinEnum 
{
	/*! \~korean  \brief 부드러운 원형 호 모양 */
	jmLJ_Round = 1,
	/*! \~korean  \brief 부드러운 날카로운 모퉁이나 클리핑된 모퉁이 모양 */
	jmLJ_Mitre = 2,
	/*! \~korean  \brief 대각선 모퉁이 모양 */
	jmLJ_Bevel = 3
} LineJoinEnum;

/*! \~korean
\brief 자주 사용되는 공간 자료의 저장 종류(포맷) */
typedef enum FileFormatEnum 
{
	/*! \~korean  \brief BMP 파일 */
	jmFF_IMG_BMP = 1,
	/*! \~korean  \brief GIF 파일 */
	jmFF_IMG_GIF = 2,
	/*! \~korean  \brief JPEG 파일 */
	jmFF_IMG_JPG = 3,
	/*! \~korean  \brief PNG 파일 */
	jmFF_IMG_PNG = 4,
	/*! \~korean  \brief TIF 파일 */
	jmFF_IMG_TIF = 5,
	/*! \~korean  \brief 알지 못하는 이미지 파일 */
	jmFF_IMG_UNKNOWN = 10,
	/*! \~korean  \brief SHP 파일 (ESRI사의 GIS 파일 포맷) */
	jmFF_GIS_SHP = 11,
	/*! \~korean  \brief DXF 파일 (AutoDesk사의 CAD 파일 포맷) */
	jmFF_GIS_DXF = 12,
	/*! \~korean  \brief DWG 파일 (AutoDesk사의 CAD 파일 포맷) */
	jmFF_GIS_DWG = 13,
	/*! \~korean  \brief DGN 파일 (Bentley사의 CAD 파일 포맷) */
	jmFF_GIS_DGN = 14,
	/*! \~korean  \brief KML 파일 (Google사의 GIS 파일 포맷) */
	jmFF_GIS_KML = 15,
	/*! \~korean  \brief GML 파일 (OGC 표준 GIS XML 포맷) */
	jmFF_GIS_GML = 16,
	/*! \~korean  \brief TAB 파일 (MapInfo사의 GIS 파일 포맷) */
	jmFF_GIS_TAB = 17,
	/*! \~korean  \brief JSON 파일 (웹 JSON GIS 파일 포맷) */
	jmFF_GIS_GEOJSON = 18,
	/*! \~korean  \brief GPX 파일 */
	jmFF_GIS_GPX = 19,
	/*! \~korean  \brief S57 파일 (해양 표준 GIS 파일 포맷) */
	jmFF_GIS_S57 = 21,
	/*! \~korean  \brief CSV 파일 (아스키파일 포맷) */
	jmFF_GIS_CSV = 22,
	/*! \~korean  \brief Oracle 데이터베이스 */
	jmFF_DB_ORACLE = 31,
	/*! \~korean  \brief DB2 데이터베이스 */
	jmFF_DB_DB2,
	/*! \~korean  \brief Informix 데이터베이스 */
	jmFF_DB_INFORMIX,
	/*! \~korean  \brief SQLServer 데이터베이스 */
	jmFF_DB_SQLSERVER,
	/*! \~korean  \brief MySQL 데이터베이스 */
	jmFF_DB_MYSQL,
	/*! \~korean  \brief PostGIS 데이터베이스 */
	jmFF_DB_POSTGIS,
	/*! \~korean  \brief 알티베이스 데이터베이스 */
	jmFF_DB_Altibase,
	/*! \~korean  \brief 티베로 데이터베이스 */
	jmFF_DB_Tibero,
	/*! \~korean  \brief 제우스 데이터베이스 */
	jmFF_DB_ZEUS,
	/*! \~korean  \brief 카이로스 데이터베이스 */
	jmFF_DB_Kairos,
	/*! \~korean  \brief CUBRID 데이터베이스 */
	jmFF_DB_CUBRID,
	/*! \~korean  \brief 일반 RDBMS 데이터베이스 */
	jmFF_DB_RDBMS
} FileFormatEnum;

/*! \~korean
\brief 점 표현의 구체적인 종류 */
typedef enum SymbolTypeEnum	
{
	/*! \~korean  \brief 알려지지 않음(1~50 : system defined symbol) */
	jmST_Unknown	= 0,
	/*! \~korean  \brief 공간 객체 기반 벡터 */
	jmST_Vector		= 51,
	/*! \~korean  \brief 이미지 데이터 */
	jmST_Image		= 52
} SymbolTypeEnum;

/*! \~korean
\brief 편집 종류 */
typedef enum EditedTypeEnum
{
	/*! \~korean  \brief 편집 안됨 */
	jmET_Null = 0,
	/*! \~korean  \brief 추가 */
	jmET_Insert = 1,
	/*! \~korean  \brief 삭제 */
	jmET_Delete = 2,
	/*! \~korean  \brief 변경 */
	jmET_Update = 3
} EditedTypeEnum;

/*! \~korean
\brief 데이터베이스에 저장된 공간데이터 유형 */
typedef enum SpatialDataTypeEnum
{
	/*! \~korean  \brief DBMS 자체 공간자료 유형 */
	jmSD_SpatialDBBlob = 1,
	/*! \~korean  \brief WKB(Well Known Binary) */
	jmSD_WKB,
	/*! \~korean  \brief WKT(Well Known Text) */
	jmSD_WKT,
	/*! \~korean  \brief ArcSDE 블럽형 */
	jmSD_ArcSDE,
	/*! \~korean  \brief Geomedia 블럽형 */
	jmSD_Geomedia,
	/*! \~korean  \brief Smallworld 블럽형 */
	jmSD_Smallworld
} SpatialDataTypeEnum;

/*! \~korean
\brief 지도 OpenAPI 서버 종류 */
typedef enum WebServerTypeEnum
{
	/*! \~korean  \brief 구글 */
	jmOA_GOOGLEMAP = 1,
	/*! \~korean  \brief 야후 */
	jmOA_YAHOOMAP = 2,
	/*! \~korean  \brief 마이크로소프트 빙지도 */
	jmOA_BINGMAP = 3,
	/*! \~korean  \brief 브이월드 2D */
	jmOA_VWORLD_2D = 4,
	/*! \~korean  \brief 브이월드 3D */
	jmOA_VWORLD_3D = 5,
	/*! \~korean  \brief 네이버 포털 */
	jmOA_NAVERMAP = 6,
	/*! \~korean  \brief 다음 포털 */
	jmOA_DAUMMAP = 7,
	/*! \~korean  \brief KT 포털 */
	jmOA_KTMAP = 8,
	/*! \~korean  \brief ArcGIS Online Service */
	jmOA_AGS = 9,
	/*! \~korean  \brief 서버 (tms) */
	jmOA_JOYMAP = 10
} WebServerTypeEnum;

/*! \~korean
\brief 공간객체의 노드/버텍스 편집에 따른 주변 연결된 공간객체의 동시 이동 조건 종류*/
typedef enum TopoSyncMoveEnum 
{
	/*! \~korean  \brief 동시이동 없음 */
	jmTS_None			= 0x000,
	/*! \~korean  \brief 심볼이동시 심볼이동 */
	jmTS_Symbol2Symbol	= 0x001, 
	/*! \~korean  \brief 심볼이동시 라인 끝점이동 */
	jmTS_Symbol2Node	= 0x002,
	/*! \~korean  \brief 심볼이동시 라인점 이동 */
	jmTS_Symbol2Vertex	= 0x004,
	/*! \~korean  \brief 라인끝점 이동시 심볼이동 */
	jmTS_Node2Symbol	= 0x008,
	/*! \~korean  \brief 라인끝점 이동시 라인 끝점이동 */
	jmTS_Node2Node		= 0x010,
	/*! \~korean  \brief 라인끝점 이동시 라인점 이동 */
	jmTS_Node2Vertex	= 0x020,
	/*! \~korean  \brief 라인점 이동시 심볼이동 */
	jmTS_Vertex2Symbol	= 0x040,
	/*! \~korean  \brief 라인점 이동시 라인끝점 이동 */
	jmTS_Vertex2Node	= 0x080,
	/*! \~korean  \brief 라인점 이동시 라인점 이동 */
	jmTS_Vertex2Vertex	= 0x100,
	/*! \~korean  \brief 심볼, 라인끝점/라인점 우선 이동 */
	jmTS_ComplexSymbolVertexStand = 0x1b7
} TopoSyncMoveEnum;

/*! \~korean
\brief 위치 정렬 종류(3행3열) */
typedef enum AlignPositionEnum
{
	/*! \~korean  \brief 왼쪽 하단(기본) */
	jmAP_None = 0,
	/*! \~korean  \brief 왼쪽 상단 */
	jmAP_TopLeft = 1,
	/*! \~korean  \brief 가운데 상단 */
	jmAP_TopCenter,
	/*! \~korean  \brief 오른쪽 상단 */
	jmAP_TopRight,
	/*! \~korean  \brief 왼쪽 중앙 */
	jmAP_CenterLeft,
	/*! \~korean  \brief 정중앙 */
	jmAP_CenterCenter,
	/*! \~korean  \brief 오른쪽 중앙 */
	jmAP_CenterRight,
	/*! \~korean  \brief 왼쪽 하단 */
	jmAP_BottomLeft,
	/*! \~korean  \brief 가운데 하단 */
	jmAP_BottomCenter,
	/*! \~korean  \brief 오른쪽 하단 */
	jmAP_BottomRight
} AlignPositionEnum;

/*! \~korean
\brief 차트 종류 */
typedef enum ChartTypeEnum
{
	/*! \~korean  \brief 가로 축 기준으로 데이터를 값 축(세로 축)에 선으로 나타내는 꺽은 선 차트 */
	jmCT_LINE = 0,
	jmCT_AREA,
	/*! \~korean  \brief 바(bar)형태로 나타내는 간트 또는 막대형 차트 */
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
\brief 3D 공간 객체 종류 */
typedef enum Draw3DTypeEnum
{
	/*! \~korean  \brief 2D 공간 객체별 3D 객체 자동설정 */
	jm3DT_Auto = 0,
	/*! \~korean  \brief 2D 공간 객체 */
	jm3DT_Geometry = 1,
	/*! \~korean  \brief 박스 객체 */
	jm3DT_Box = 2,
	/*! \~korean  \brief 구형 객체 */
	jm3DT_Sphere = 3,
	/*! \~korean  \brief 원통형 객체 */
	jm3DT_Cylinder = 4,
	/*! \~korean  \brief 캡슐 객체 */
	jm3DT_Capsule = 5,
	/*! \~korean  \brief 콘형 객체 */
	jm3DT_Cone = 6,
	/*! \~korean  \brief 다각형 객체 */
	jm3DT_Polygon = 7
} Draw3DTypeEnum;

/*! \~korean
\brief 마우스 버튼 종류 */
typedef enum MouseButtonTypeEnum
{
	/*! \~korean  \brief 없음 */
	jmMB_NoButton = 0,
	/*! \~korean  \brief 왼쪽 버튼 */
	jmMB_LeftButton = 1,
	/*! \~korean  \brief 오른쪽 버튼 */
	jmMB_RightButton = 2,
	/*! \~korean  \brief 중간 버튼 */
	jmMB_MidButton = 4, 
	/*! \~korean  \brief 휠 버튼 */
	jmMB_WheelButton = 8
} MouseButtonTypeEnum;

/*! \~korean
\brief 애니매이션 알고리즘 종류 */
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
\brief 애니메이션 시간 종류 */
/*! \~english
\brief Animator Timing Mode */
typedef enum TimingModeEnum
{
	jmTI_EASE_IN = 0,
	jmTI_EASE_OUT = 1,
	jmTI_EASE_IN_OUT = 2
} TimingModeEnum;

/*! \~korean
\brief 애니메이션 반복 종류 */
/*! \~english
\brief Animator Repeat Mode */
typedef enum RepeatModeEnum
{
	jmRP_RESTART = 0,
	jmRP_REVERSE = 1
} RepeatModeEnum;

/*! \~korean
\brief 공간객체 내 점의 종류 */
typedef enum PointLocationEnum
{
	/*! \~korean  \brief 시작점 */
	jmPL_StartNode = 0x01,
	/*! \~korean  \brief 끝점 */
	jmPL_EndNode = 0x02,
	/*! \~korean  \brief 시작, 끝점 */
	jmPL_Node = 0x03,
	/*! \~korean  \brief 중간점(시작, 끝점 제외) */
	jmPL_Vertex = 0x04,
	/*! \~korean  \brief 모든점 */
	jmPL_All = 0x07
} PointLocationEnum;

/*! \~korean
\brief 다양한 커버리지 자료형. 그리드 커버리지의 경우 밴드 자료형 */
/*! \~english
\brief Storage type for values in a dimension */
// GDALDataType
typedef enum SampleDimensionTypeEnum
{
	/*! \~korean  \brief 알지 못하는 자료형 */
	jmSDT_Unknown = 0,
	/*! \~korean  \brief 1바이트형 */
	jmSDT_Byte,
	/*! \~korean  \brief unsigned 16(2바이트)형 */
	jmSDT_UInt16,
	/*! \~korean  \brief signed 16(2바이트)형 */
	jmSDT_Int16,
	/*! \~korean  \brief unsigned 32(4바이트)형 */
	jmSDT_UInt32,
	/*! \~korean  \brief signed 16(4바이트)형 */
	jmSDT_Int32,
	/*! \~korean  \brief float (4바이트)형 */
	jmSDT_Float32,
	/*! \~korean  \brief double (8바이트)형 */
	jmSDT_Float64,
	jmSDT_CInt16,
	jmSDT_CInt32,
	jmSDT_CFloat32,
	jmSDT_CFloat64,
} SampleDimensionTypeEnum;

/*! \~korean
\brief 밴드가 어떤 컬러 모델 성분에 해당되는지를 나타낸다. */
/*! \~english
\brief ColorInterpretation expresses what the color model is corresponding to the band. */
// GDALColorInterp
typedef enum ColorInterpretationEnum
{
  	/*! \~korean  \brief 밴드는 컬러 모델 성분과 관계 없음. */
  	/*! \~english \brief Undefined band. It is not related to color model entry. */
	jmCI_Undefined = 0,
  	/*! \~korean  \brief 데이터 색상은 Lookup테이블을 이용하여 표현된다. */
  	/*! \~english \brief Gray index. The color of data is expressed by Lookup table. */
	jmCI_GrayIndex,
  	/*! \~korean  \brief 데이터 색상은 컬러 테이블을 이용하여 표현된다. */
  	/*! \~english \brief Color index. The color of data is expressed by color table. */
	jmCI_PaletteIndex,

  	/*! \~korean  \brief 밴드들은 RGB 컬러 모델 컴포넌트에 해당하고, AlphaBand는 존재할 수도 존재하지 않을 수도 있다. */
  	/*! \~english \brief The Red color band in RGB color model component. AlphaBand can be or cannot be exist. */
	jmCI_RedBand,
  	/*! \~korean  \brief 밴드들은 RGB 컬러 모델 컴포넌트에 해당하고, AlphaBand는 존재할 수도 존재하지 않을 수도 있다. */
  	/*! \~english \brief The Green color band in RGB color model component. AlphaBand can be or cannot be exist. */
	jmCI_GreenBand,
  	/*! \~korean  \brief 밴드들은 RGB 컬러 모델 컴포넌트에 해당하고, AlphaBand는 존재할 수도 존재하지 않을 수도 있다. */
  	/*! \~english \brief The Blue color band in RGB color model component. AlphaBand can be or cannot be exist. */
	jmCI_BlueBand,
  	/*! \~korean  \brief  */
  	/*! \~english \brief  */
	jmCI_AlphaBand,

  	/*! \~korean  \brief 밴드들은 HSL 컬러 모델에 해당한다. */
  	/*! \~english \brief The Hue band in HSL color model. */
	jmCI_HueBand,
  	/*! \~korean  \brief 밴드들은 HSL 컬러 모델에 해당한다. */
  	/*! \~english \brief The Saturation band in HSL color model. */
	jmCI_SaturationBand,
  	/*! \~korean  \brief 밴드들은 HSL 컬러 모델에 해당한다. */
  	/*! \~english \brief The Lightness band in HSL color model. */
	jmCI_LightnessBand,
  	/*! \~korean  \brief 밴드들은 CMYK 컬러 모델에 해당한다. */
  	/*! \~english \brief The Cyan band in CMYK color model. */
	jmCI_CyanBand,
  	/*! \~korean  \brief 밴드들은 CMYK 컬러 모델에 해당한다. */
  	/*! \~english \brief The Magenta band in CMYK color model. */
	jmCI_MagentaBand, 
  	/*! \~korean  \brief 밴드들은 CMYK 컬러 모델에 해당한다. */
  	/*! \~english \brief The Yellow band in CMYK color model.*/
	jmCI_YellowBand, 
  	/*! \~korean  \brief 밴드들은 CMYK 컬러 모델에 해당한다. */
  	/*! \~english \brief The Black band in CMYK color model. */
	jmCI_BlackBand, 
	
	jmCI_YCbCr_YBand,
	jmCI_YCbCr_CbBand,
	jmCI_YCbCr_CrBand
} ColorInterpretationEnum;

/*! \~korean
\brief 커버리지 컬러 팔레트로 정수값을 가지는 커버리지에 대해서만 컬러팔레트 정보가 유효함 */
/*! \~english
\brief PaletteInterpretationEnum is a coverage color pallet. The color pallet value is only valid on some coverages which has integer values. */
// GDALPaletteInterp
typedef enum PaletteInterpretationEnum
{
  	/*! \~korean  \brief 흑백의 값을 갖는다. 0이 검정색이고 255가 흰색이다 */
  	/*! \~english \brief Gray color entry has 2 kinds of value, that is Black and White. The range of color value is 0 to 255. If the value is 0 then that is black, and if 255 then white. */
	jmPI_Gray,
  	/*! \~korean  \brief 빨강, 녹색, 파랑 3가지의 값을 갖는다. 각 값의 범위는 0에서 255이며 이때, 0은 명암이 없고 255이면 최대 명암값을 갖는다. */
  	/*! \~english \brief RGB color entry has 3 kinds of value, that is Red, Green, and Blue. The range of each color value is 0 to 255. If the value is 0, then the contrast value is not exist, and if 255, the contrast value is maximized. */
	jmPI_RGB,
  	/*! \~korean  \brief Cyan, Magenta, Yellow, Black의 4가지 값을 갖는다. 각 값의 범위는 0에서 255이며, 0일때는 명암값이 없고, 255일때 최대 명암값을 갖는다. */
  	/*! \~english \brief CMYK color entry has 4 kinds of value, that is Cyan, Magenta, Yellow, and Black. The range of each color value is 0 to 255. If the value is 0, then the contrast value is not exist, and if 255, the contrast value is maximized. */
	jmPI_CMYK,
  	/*! \~korean  \brief 색상(Hue), 채도(Saturation), 밝기(Lightness) 3개 값을 갖는다. 색상은 0에서 360까지의 값을 갖고, 채도는 0에서 100까지의 값을 갖는다. 이 때, 채도값이 0이면 명암이 0이고, 100이면 최대의 명암값을 갖는다. 밝기는 0에서 100까지의 값을 갖는다. */
  	/*! \~english \brief HLS color entry has 3 kinds of value. HLS color model means Hue/Saturation/Lightness of the color. The range of Hue value is 0 to 360, Saturation value is 0 to 100, and Lightness value is 0 to 100. (If the saturation value is 0, the contrast is 0, and if 100, the contrast is maximized.) */
	jmPI_HLS,
	jmPI_YCbCr
} PaletteInterpretationEnum;

/*! \~korean
\brief 3차원 가시권 분석 종류 */
typedef enum SightModeEnum
{
	jmIM_LinearLine = 0,
	jmIM_RadialLine,
	jmIM_PolyhedralLine
} SightModeEnum;

/*! \~korean
\brief 파라메터 자료형 타입 종류 */
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
\brief 래스터 효과처리 타입 종류 */
typedef enum FilterTypeEnum 
{
	/*! \~korean  \brief 설정되지 않은 효과 */
	jmFT_Unknown = 0,
	/*! \~korean  \brief 그레이 스케일 효과 */
	jmFT_GRAYSCALE,
	/*! \~korean  \brief 세피아 효과(낮은 채도의 갈색 그림자 효과) */
	jmFT_SEPIA,
	/*! \~korean  \brief 채도 효과 */
	jmFT_SATURATE,
	/*! \~korean  \brief 각도 효과 */
	jmFT_HUE_ROTATE,
	/*! \~korean  \brief 반전 효과 */
	jmFT_INVERT,
	/*! \~korean  \brief 밝기 효과 */
	jmFT_BRIGHTNESS,
	/*! \~korean  \brief 명암대비 효과 */
	jmFT_CONTRAST,
	/*! \~korean  \brief 투명도 효과 */
	jmFT_OPACITY,
	/*! \~korean  \brief 블러 효과 */
	jmFT_BLUR,
	/*! \~korean  \brief 그림자 효과 */
	jmFT_DROP_SHADOW,
	/*! \~korean  \brief 내부 시스템 활용 */
	jmFT_FILTER_TYPE_LAST = jmFT_DROP_SHADOW
} FilterTypeEnum;

/*! \~korean
\brief 드라이버 접근 모드 */
typedef enum AccessModeEnum 
{
	/*! \~korean  \brief 열기 */
	jmAM_Open = 0x01,
	/*! \~korean  \brief 생성 */
	jmAM_Create = 0x02,
	/*! \~korean  \brief 복사생성 */
	jmAM_CreateCopy = 0x04,
	/*! \~korean  \brief 삭제 */
	jmAM_Delete = 0x08
} AccessModeEnum;

/*! \~korean
\brief 시스템 심볼 */
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
