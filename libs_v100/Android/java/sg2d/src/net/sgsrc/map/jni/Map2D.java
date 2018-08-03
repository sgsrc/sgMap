/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.7
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package net.sgsrc.map.jni;

import java.io.Serializable;

public class Map2D extends Canvas implements Serializable {
  private long swigCPtr;

  protected Map2D(long cPtr, boolean cMemoryOwn) {
    super(jniJNI.Map2D_SWIGUpcast(cPtr), cMemoryOwn);
    swigCPtr = cPtr;
  }

  protected static long getCPtr(Map2D obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        throw new UnsupportedOperationException("C++ destructor does not have public access");
      }
      swigCPtr = 0;
    }
    super.delete();
  }

	private static final long serialVersionUID = 1624384951160401876L;

  public void Initialize(int handle) {
    jniJNI.Map2D_Initialize(swigCPtr, this, handle);
  }

  public void ReSize(int x, int y, int width, int height) {
    jniJNI.Map2D_ReSize(swigCPtr, this, x, y, width, height);
  }

  public void SetFeatureCanvas(FeatureCanvas h) {
    jniJNI.Map2D_SetFeatureCanvas(swigCPtr, this, FeatureCanvas.getCPtr(h), h);
  }

  public FeatureCanvas GetFeatureCavnas() {
    long cPtr = jniJNI.Map2D_GetFeatureCavnas(swigCPtr, this);
    return (cPtr == 0) ? null : new FeatureCanvas(cPtr, false);
  }

  public void SetScreenMode(int h) {
    jniJNI.Map2D_SetScreenMode(swigCPtr, this, h);
  }

  public int GetScreenMode() {
    return jniJNI.Map2D_GetScreenMode(swigCPtr, this);
  }

  public void SetSelectMode(int h) {
    jniJNI.Map2D_SetSelectMode(swigCPtr, this, h);
  }

  public int GetSelectMode() {
    return jniJNI.Map2D_GetSelectMode(swigCPtr, this);
  }

  public void SetSnapMode(int newVal) {
    jniJNI.Map2D_SetSnapMode(swigCPtr, this, newVal);
  }

  public int GetSnapMode() {
    return jniJNI.Map2D_GetSnapMode(swigCPtr, this);
  }

  public void SetVisibleSmallGeometry(boolean newVal) {
    jniJNI.Map2D_SetVisibleSmallGeometry(swigCPtr, this, newVal);
  }

  public boolean GetVisibleSmallGeometry() {
    return jniJNI.Map2D_GetVisibleSmallGeometry(swigCPtr, this);
  }

  public int GetVisibleSelectedVertexNumber() {
    return jniJNI.Map2D_GetVisibleSelectedVertexNumber(swigCPtr, this);
  }

  public void SetVisibleSelectedVertexNumber(int nNum) {
    jniJNI.Map2D_SetVisibleSelectedVertexNumber(swigCPtr, this, nNum);
  }

  public boolean GetVisibleMagnifier() {
    return jniJNI.Map2D_GetVisibleMagnifier(swigCPtr, this);
  }

  public void SetVisibleMagnifier(boolean newVal) {
    jniJNI.Map2D_SetVisibleMagnifier(swigCPtr, this, newVal);
  }

  public int GetMagnifierPixelSize() {
    return jniJNI.Map2D_GetMagnifierPixelSize(swigCPtr, this);
  }

  public void SetMagnifierPixelSize(int nSize) {
    jniJNI.Map2D_SetMagnifierPixelSize(swigCPtr, this, nSize);
  }

  public float GetMagnifierScale() {
    return jniJNI.Map2D_GetMagnifierScale(swigCPtr, this);
  }

  public void SetMagnifierScale(float newVal) {
    jniJNI.Map2D_SetMagnifierScale(swigCPtr, this, newVal);
  }

  public double GetRatioZoomScale() {
    return jniJNI.Map2D_GetRatioZoomScale(swigCPtr, this);
  }

  public void SetRatioZoomScale(double newVal) {
    jniJNI.Map2D_SetRatioZoomScale(swigCPtr, this, newVal);
  }

  public void GetMeasureLineStd(SWIGTYPE_p_double x, SWIGTYPE_p_double y) {
    jniJNI.Map2D_GetMeasureLineStd(swigCPtr, this, SWIGTYPE_p_double.getCPtr(x), SWIGTYPE_p_double.getCPtr(y));
  }

  public void SetMeasureLineStd(double x, double y) {
    jniJNI.Map2D_SetMeasureLineStd(swigCPtr, this, x, y);
  }

  public double GetMeasureLineStdLength() {
    return jniJNI.Map2D_GetMeasureLineStdLength(swigCPtr, this);
  }

  public void SetMeasureLineStdLength(double newVal) {
    jniJNI.Map2D_SetMeasureLineStdLength(swigCPtr, this, newVal);
  }

  public void GetMeasureLineSubUnitNum(SWIGTYPE_p_int sub1, SWIGTYPE_p_int sub2) {
    jniJNI.Map2D_GetMeasureLineSubUnitNum(swigCPtr, this, SWIGTYPE_p_int.getCPtr(sub1), SWIGTYPE_p_int.getCPtr(sub2));
  }

  public void SetMeasureLineSubUnitNum(int sub1, int sub2) {
    jniJNI.Map2D_SetMeasureLineSubUnitNum(swigCPtr, this, sub1, sub2);
  }

  public int GetMeasureLineShowType() {
    return jniJNI.Map2D_GetMeasureLineShowType(swigCPtr, this);
  }

  public void SetMeasureLineShowType(int newVal) {
    jniJNI.Map2D_SetMeasureLineShowType(swigCPtr, this, newVal);
  }

  public void GetScaleBarRelativePos(SWIGTYPE_p_double x, SWIGTYPE_p_double y) {
    jniJNI.Map2D_GetScaleBarRelativePos(swigCPtr, this, SWIGTYPE_p_double.getCPtr(x), SWIGTYPE_p_double.getCPtr(y));
  }

  public void SetScaleBarRelativePos(double x, double y) {
    jniJNI.Map2D_SetScaleBarRelativePos(swigCPtr, this, x, y);
  }

  public int GetScaleBarShowType() {
    return jniJNI.Map2D_GetScaleBarShowType(swigCPtr, this);
  }

  public void SetScaleBarShowType(int eType) {
    jniJNI.Map2D_SetScaleBarShowType(swigCPtr, this, eType);
  }

  public void SetMapControlImageFromFileName(int eCtlType, String strFileName) {
    jniJNI.Map2D_SetMapControlImageFromFileName(swigCPtr, this, eCtlType, strFileName);
  }

  public void ZoomAll() {
    jniJNI.Map2D_ZoomAll(swigCPtr, this);
  }

  public void ZoomRect(double minX, double minY, double maxX, double maxY) {
    jniJNI.Map2D_ZoomRect(swigCPtr, this, minX, minY, maxX, maxY);
  }

  public void ZoomFeature(Feature poFt) {
    jniJNI.Map2D_ZoomFeature(swigCPtr, this, Feature.getCPtr(poFt), poFt);
  }

  public void ZoomToFeatureCollection(FeatureCollection poFtCol) {
    jniJNI.Map2D_ZoomToFeatureCollection(swigCPtr, this, FeatureCollection.getCPtr(poFtCol), poFtCol);
  }

  public void ZoomToSelectedFeatures() {
    jniJNI.Map2D_ZoomToSelectedFeatures(swigCPtr, this);
  }

  public void ZoomGPS(double zoomScale) {
    jniJNI.Map2D_ZoomGPS(swigCPtr, this, zoomScale);
  }

  public void ZoomPrevious() {
    jniJNI.Map2D_ZoomPrevious(swigCPtr, this);
  }

  public void ZoomNext() {
    jniJNI.Map2D_ZoomNext(swigCPtr, this);
  }

  public void DeviceToWorld(float fx, float fy, double[] pdx, double[] pdy) {
    jniJNI.Map2D_DeviceToWorld(swigCPtr, this, fx, fy, pdx, pdy);
  }

  public double GetXDeviceToWorld(float fx, float fy) {
    return jniJNI.Map2D_GetXDeviceToWorld(swigCPtr, this, fx, fy);
  }

  public double GetYDeviceToWorld(double dx, double dy) {
    return jniJNI.Map2D_GetYDeviceToWorld(swigCPtr, this, dx, dy);
  }

  public void DeviceToWorldZ(float fx, float fy, double[] z) {
    jniJNI.Map2D_DeviceToWorldZ(swigCPtr, this, fx, fy, z);
  }

  public void WorldToDevice(double dx, double dy, SWIGTYPE_p_float pfx, SWIGTYPE_p_float pfy) {
    jniJNI.Map2D_WorldToDevice(swigCPtr, this, dx, dy, SWIGTYPE_p_float.getCPtr(pfx), SWIGTYPE_p_float.getCPtr(pfy));
  }

  public float GetXWorldToDevice(double dx, double dy) {
    return jniJNI.Map2D_GetXWorldToDevice(swigCPtr, this, dx, dy);
  }

  public float GetYWorldToDevice(double dx, double dy) {
    return jniJNI.Map2D_GetYWorldToDevice(swigCPtr, this, dx, dy);
  }

  public boolean ExportImage(int nFileType, String pVal) {
    return jniJNI.Map2D_ExportImage(swigCPtr, this, nFileType, pVal);
  }

  public boolean ExportScreenImage(String pVal, int nPosX, int nPosY, int nNumPixelWidth, int nNumPixelHeight) {
    return jniJNI.Map2D_ExportScreenImage(swigCPtr, this, pVal, nPosX, nPosY, nNumPixelWidth, nNumPixelHeight);
  }

  public boolean ExportImageToWorld(String pszVal, int nNumPixelWidth, int nNumPixelHeight, double dlMinX, double dlMinY, double dlMaxX, double dlMaxY) {
    return jniJNI.Map2D_ExportImageToWorld(swigCPtr, this, pszVal, nNumPixelWidth, nNumPixelHeight, dlMinX, dlMinY, dlMaxX, dlMaxY);
  }

  public void ExportToClipboard(boolean bOriginal) {
    jniJNI.Map2D_ExportToClipboard(swigCPtr, this, bOriginal);
  }

  public LineSymbolizer GetLabelLineSymbolizer() {
    long cPtr = jniJNI.Map2D_GetLabelLineSymbolizer(swigCPtr, this);
    return (cPtr == 0) ? null : new LineSymbolizer(cPtr, false);
  }

  public void ZoomIn() {
    jniJNI.Map2D_ZoomIn(swigCPtr, this);
  }

  public void ZoomOut() {
    jniJNI.Map2D_ZoomOut(swigCPtr, this);
  }

  public void ZoomCenter(double x, double y) {
    jniJNI.Map2D_ZoomCenter(swigCPtr, this, x, y);
  }

  public void Invalidate() {
    jniJNI.Map2D_Invalidate(swigCPtr, this);
  }

  public void SetBackColor(int rgb) {
    jniJNI.Map2D_SetBackColor(swigCPtr, this, rgb);
  }

  public int GetBackColor() {
    return jniJNI.Map2D_GetBackColor(swigCPtr, this);
  }

  public double GetScale(int bPixcelUnit) {
    return jniJNI.Map2D_GetScale(swigCPtr, this, bPixcelUnit);
  }

  public void SetScale(double newVal, int bPixcelUnit) {
    jniJNI.Map2D_SetScale(swigCPtr, this, newVal, bPixcelUnit);
  }

  public short GetRotate() {
    return jniJNI.Map2D_GetRotate(swigCPtr, this);
  }

  public void SetRotate(short newVal) {
    jniJNI.Map2D_SetRotate(swigCPtr, this, newVal);
  }

  public short GetSmallPixelSize() {
    return jniJNI.Map2D_GetSmallPixelSize(swigCPtr, this);
  }

  public void SetSmallPixelSize(short newVal) {
    jniJNI.Map2D_SetSmallPixelSize(swigCPtr, this, newVal);
  }

  public void SetPointOnSurface(boolean b) {
    jniJNI.Map2D_SetPointOnSurface(swigCPtr, this, b);
  }

  public boolean GetPointOnSurface() {
    return jniJNI.Map2D_GetPointOnSurface(swigCPtr, this);
  }

  public int GetAutoScale() {
    return jniJNI.Map2D_GetAutoScale(swigCPtr, this);
  }

  public void SetAutoScale(int nScale) {
    jniJNI.Map2D_SetAutoScale(swigCPtr, this, nScale);
  }

  public void SetOverlapLabel(boolean b) {
    jniJNI.Map2D_SetOverlapLabel(swigCPtr, this, b);
  }

  public boolean GetOverlapLabel() {
    return jniJNI.Map2D_GetOverlapLabel(swigCPtr, this);
  }

  public void SetFlickerSelected(boolean b) {
    jniJNI.Map2D_SetFlickerSelected(swigCPtr, this, b);
  }

  public boolean GetFlickerSelected() {
    return jniJNI.Map2D_GetFlickerSelected(swigCPtr, this);
  }

  public boolean GetAntiAlias() {
    return jniJNI.Map2D_GetAntiAlias(swigCPtr, this);
  }

  public void SetAntiAlias(boolean bVisible) {
    jniJNI.Map2D_SetAntiAlias(swigCPtr, this, bVisible);
  }

  public double GetMinZoomScaleDenominator() {
    return jniJNI.Map2D_GetMinZoomScaleDenominator(swigCPtr, this);
  }

  public void SetMinZoomScaleDenominator(double newVal) {
    jniJNI.Map2D_SetMinZoomScaleDenominator(swigCPtr, this, newVal);
  }

  public double GetMaxZoomScaleDenominator() {
    return jniJNI.Map2D_GetMaxZoomScaleDenominator(swigCPtr, this);
  }

  public void SetMaxZoomScaleDenominator(double newVal) {
    jniJNI.Map2D_SetMaxZoomScaleDenominator(swigCPtr, this, newVal);
  }

  public boolean GetFillBrush() {
    return jniJNI.Map2D_GetFillBrush(swigCPtr, this);
  }

  public void SetFillBrush(boolean bVal) {
    jniJNI.Map2D_SetFillBrush(swigCPtr, this, bVal);
  }

  public int GetSnapGrid() {
    return jniJNI.Map2D_GetSnapGrid(swigCPtr, this);
  }

  public void SetSnapGrid(int newVal) {
    jniJNI.Map2D_SetSnapGrid(swigCPtr, this, newVal);
  }

  public int GetSyncMoveMode() {
    return jniJNI.Map2D_GetSyncMoveMode(swigCPtr, this);
  }

  public void SetSyncMoveMode(int newVal) {
    jniJNI.Map2D_SetSyncMoveMode(swigCPtr, this, newVal);
  }

  public void AnimateSelectedFeatureCollection() {
    jniJNI.Map2D_AnimateSelectedFeatureCollection(swigCPtr, this);
  }

  public void SetSelectedSymbolizer(Symbolizer shadow) {
    jniJNI.Map2D_SetSelectedSymbolizer(swigCPtr, this, Symbolizer.getCPtr(shadow), shadow);
  }

  public void SetSelectedSymbolizerFromString(String pszVal) {
    jniJNI.Map2D_SetSelectedSymbolizerFromString(swigCPtr, this, pszVal);
  }

  public void SetSelectedVertexSymbolizer(Symbolizer shadow) {
    jniJNI.Map2D_SetSelectedVertexSymbolizer(swigCPtr, this, Symbolizer.getCPtr(shadow), shadow);
  }

  public void SetSelectedVertexSymbolizerFromString(String pszVal) {
    jniJNI.Map2D_SetSelectedVertexSymbolizerFromString(swigCPtr, this, pszVal);
  }

  public void SetScaleBarSymbolizer(Symbolizer shadow) {
    jniJNI.Map2D_SetScaleBarSymbolizer(swigCPtr, this, Symbolizer.getCPtr(shadow), shadow);
  }

  public void SetScaleBarSymbolizerFromString(String pszVal) {
    jniJNI.Map2D_SetScaleBarSymbolizerFromString(swigCPtr, this, pszVal);
  }

  public void SetSystemSymbolizerFromString(int type, String pszVal) {
    jniJNI.Map2D_SetSystemSymbolizerFromString(swigCPtr, this, type, pszVal);
  }

  public void SetKeyEnable(int key, int enable) {
    jniJNI.Map2D_SetKeyEnable(swigCPtr, this, key, enable);
  }

  public void SetMouseButtonEnable(int key, int enable) {
    jniJNI.Map2D_SetMouseButtonEnable(swigCPtr, this, key, enable);
  }

  public void SetDrawProgressEnable(int enable) {
    jniJNI.Map2D_SetDrawProgressEnable(swigCPtr, this, enable);
  }

  public void BoundingBox(double[] dlMinX, double[] dlMinY, double[] dlMaxX, double[] dlMaxY) {
    jniJNI.Map2D_BoundingBox(swigCPtr, this, dlMinX, dlMinY, dlMaxX, dlMaxY);
  }

  public double GetMinXBoundingBox() {
    return jniJNI.Map2D_GetMinXBoundingBox(swigCPtr, this);
  }

  public double GetMinYBoundingBox() {
    return jniJNI.Map2D_GetMinYBoundingBox(swigCPtr, this);
  }

  public double GetMaxXBoundingBox() {
    return jniJNI.Map2D_GetMaxXBoundingBox(swigCPtr, this);
  }

  public double GetMaxYBoundingBox() {
    return jniJNI.Map2D_GetMaxYBoundingBox(swigCPtr, this);
  }

  public void MouseMove(int nFlags, int x, int y, int owner) {
    jniJNI.Map2D_MouseMove(swigCPtr, this, nFlags, x, y, owner);
  }

  public void LButtonDown(int nFlags, int x, int y, int owner) {
    jniJNI.Map2D_LButtonDown(swigCPtr, this, nFlags, x, y, owner);
  }

  public void LButtonUp(int nFlags, int x, int y, int owner) {
    jniJNI.Map2D_LButtonUp(swigCPtr, this, nFlags, x, y, owner);
  }

  public void KeyDown(int nChar, int nRepCnt, int nFlags) {
    jniJNI.Map2D_KeyDown(swigCPtr, this, nChar, nRepCnt, nFlags);
  }

  public void KeyUp(int nChar, int nRepCnt, int nFlags) {
    jniJNI.Map2D_KeyUp(swigCPtr, this, nChar, nRepCnt, nFlags);
  }

  public void RButtonDown(int nFlags, int x, int y, int owner) {
    jniJNI.Map2D_RButtonDown(swigCPtr, this, nFlags, x, y, owner);
  }

  public void RButtonUp(int nFlags, int x, int y, int owner) {
    jniJNI.Map2D_RButtonUp(swigCPtr, this, nFlags, x, y, owner);
  }

  public void MButtonDown(int nFlags, int x, int y, int owner) {
    jniJNI.Map2D_MButtonDown(swigCPtr, this, nFlags, x, y, owner);
  }

  public void MButtonUp(int nFlags, int x, int y, int owner) {
    jniJNI.Map2D_MButtonUp(swigCPtr, this, nFlags, x, y, owner);
  }

  public void DblClick(int nFlags, int x, int y, int owner) {
    jniJNI.Map2D_DblClick(swigCPtr, this, nFlags, x, y, owner);
  }

  public void Destroy() {
    jniJNI.Map2D_Destroy(swigCPtr, this);
  }

  public void DrawingGeometryAddPoint(double dx, double dy) {
    jniJNI.Map2D_DrawingGeometryAddPoint(swigCPtr, this, dx, dy);
  }

  public void DrawingGeometryAddGPSPoint() {
    jniJNI.Map2D_DrawingGeometryAddGPSPoint(swigCPtr, this);
  }

  public void DrawingGeometryRemovePoint(int nIndex) {
    jniJNI.Map2D_DrawingGeometryRemovePoint(swigCPtr, this, nIndex);
  }

  public void DrawingGeometrySetPoint(int nIndex, double dx, double dy) {
    jniJNI.Map2D_DrawingGeometrySetPoint(swigCPtr, this, nIndex, dx, dy);
  }

  public void DrawingGeometryGetPoint(int nIndex, SWIGTYPE_p_double dx, SWIGTYPE_p_double dy) {
    jniJNI.Map2D_DrawingGeometryGetPoint(swigCPtr, this, nIndex, SWIGTYPE_p_double.getCPtr(dx), SWIGTYPE_p_double.getCPtr(dy));
  }

  public void DrawingGeometryComplete() {
    jniJNI.Map2D_DrawingGeometryComplete(swigCPtr, this);
  }

  public int DrawingGeometrySize() {
    return jniJNI.Map2D_DrawingGeometrySize(swigCPtr, this);
  }

  public PrintLayoutWidget ShowPrintLayoutWidget(String pszTitle) {
    long cPtr = jniJNI.Map2D_ShowPrintLayoutWidget(swigCPtr, this, pszTitle);
    return (cPtr == 0) ? null : new PrintLayoutWidget(cPtr, false);
  }

  public boolean GetUseDrawThread() {
    return jniJNI.Map2D_GetUseDrawThread(swigCPtr, this);
  }

  public void SetUseDrawThread(boolean bVal) {
    jniJNI.Map2D_SetUseDrawThread(swigCPtr, this, bVal);
  }

  public void SetMouseCursor(int eCurType, String pszFileName, int clrTransparent, int xHotspot, int yHotspot) {
    jniJNI.Map2D_SetMouseCursor(swigCPtr, this, eCurType, pszFileName, clrTransparent, xHotspot, yHotspot);
  }

  public boolean GetTransparentBackColor() {
    return jniJNI.Map2D_GetTransparentBackColor(swigCPtr, this);
  }

  public void SetTransparentBackColor(boolean bVal) {
    jniJNI.Map2D_SetTransparentBackColor(swigCPtr, this, bVal);
  }

  public void AddControl(long id, UserDefinedWidget pUDBox) {
    jniJNI.Map2D_AddControl(swigCPtr, this, id, UserDefinedWidget.getCPtr(pUDBox), pUDBox);
  }

  public void RemoveControl(long id) {
    jniJNI.Map2D_RemoveControl(swigCPtr, this, id);
  }

  public void RemoveAllControl() {
    jniJNI.Map2D_RemoveAllControl(swigCPtr, this);
  }

}
