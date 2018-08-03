/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.7
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package net.sgsrc.map.jni;

public class MapEvent extends Event {
  private long swigCPtr;

  protected MapEvent(long cPtr, boolean cMemoryOwn) {
    super(jniJNI.MapEvent_SWIGUpcast(cPtr), cMemoryOwn);
    swigCPtr = cPtr;
  }

  protected static long getCPtr(MapEvent obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        jniJNI.delete_MapEvent(swigCPtr);
      }
      swigCPtr = 0;
    }
    super.delete();
  }

  protected void swigDirectorDisconnect() {
    swigCMemOwn = false;
    delete();
  }

  public void swigReleaseOwnership() {
    swigCMemOwn = false;
    jniJNI.MapEvent_change_ownership(this, swigCPtr, false);
  }

  public void swigTakeOwnership() {
    swigCMemOwn = true;
    jniJNI.MapEvent_change_ownership(this, swigCPtr, true);
  }

  private Object parentReference;

  protected static long getCPtrAndDisown(MapEvent obj) {
    if (obj != null)
    {
        obj.swigCMemOwn= false;
        obj.parentReference = null;
    }
    return getCPtr(obj);
  }

  /* Ensure that the GC doesn't collect any parent instance set from Java */
  protected void addReference(Object reference) {
    parentReference = reference;
  }

  public boolean equals(Object obj) {
    boolean equal = false;
    if (obj instanceof MapEvent)
      equal = (((MapEvent)obj).swigCPtr == this.swigCPtr);
    return equal;
  }

  public int hashCode() {
     return (int)swigCPtr;
  }


  public MapEvent() {
    this(jniJNI.new_MapEvent(), true);
    jniJNI.MapEvent_director_connect(this, swigCPtr, swigCMemOwn, true);
  }

  public void Draw() {
    if (getClass() == MapEvent.class) jniJNI.MapEvent_Draw(swigCPtr, this); else jniJNI.MapEvent_DrawSwigExplicitMapEvent(swigCPtr, this);
  }

  public void Drawed() {
    if (getClass() == MapEvent.class) jniJNI.MapEvent_Drawed(swigCPtr, this); else jniJNI.MapEvent_DrawedSwigExplicitMapEvent(swigCPtr, this);
  }

  public void Paint() {
    if (getClass() == MapEvent.class) jniJNI.MapEvent_Paint(swigCPtr, this); else jniJNI.MapEvent_PaintSwigExplicitMapEvent(swigCPtr, this);
  }

  public void Snap(int eScreenMode, Feature poFeature, Geometry poGeometry, int nVertexIdx, int eSnapType) {
    if (getClass() == MapEvent.class) jniJNI.MapEvent_Snap(swigCPtr, this, eScreenMode, Feature.getCPtr(poFeature), poFeature, Geometry.getCPtr(poGeometry), poGeometry, nVertexIdx, eSnapType); else jniJNI.MapEvent_SnapSwigExplicitMapEvent(swigCPtr, this, eScreenMode, Feature.getCPtr(poFeature), poFeature, Geometry.getCPtr(poGeometry), poGeometry, nVertexIdx, eSnapType);
  }

  public void Snaped(int eScreenMode, Feature poFeature, Geometry poGeometry, int nVertexIdx, int eSnapType) {
    if (getClass() == MapEvent.class) jniJNI.MapEvent_Snaped(swigCPtr, this, eScreenMode, Feature.getCPtr(poFeature), poFeature, Geometry.getCPtr(poGeometry), poGeometry, nVertexIdx, eSnapType); else jniJNI.MapEvent_SnapedSwigExplicitMapEvent(swigCPtr, this, eScreenMode, Feature.getCPtr(poFeature), poFeature, Geometry.getCPtr(poGeometry), poGeometry, nVertexIdx, eSnapType);
  }

  public void SnapOut() {
    if (getClass() == MapEvent.class) jniJNI.MapEvent_SnapOut(swigCPtr, this); else jniJNI.MapEvent_SnapOutSwigExplicitMapEvent(swigCPtr, this);
  }

  public void FeatureOver(Feature poFeature, Geometry poGeometry, AnnotationLabel poText) {
    if (getClass() == MapEvent.class) jniJNI.MapEvent_FeatureOver(swigCPtr, this, Feature.getCPtr(poFeature), poFeature, Geometry.getCPtr(poGeometry), poGeometry, AnnotationLabel.getCPtr(poText), poText); else jniJNI.MapEvent_FeatureOverSwigExplicitMapEvent(swigCPtr, this, Feature.getCPtr(poFeature), poFeature, Geometry.getCPtr(poGeometry), poGeometry, AnnotationLabel.getCPtr(poText), poText);
  }

  public void FeatureOut(Feature poFeature, Geometry poGeometry, AnnotationLabel poText) {
    if (getClass() == MapEvent.class) jniJNI.MapEvent_FeatureOut(swigCPtr, this, Feature.getCPtr(poFeature), poFeature, Geometry.getCPtr(poGeometry), poGeometry, AnnotationLabel.getCPtr(poText), poText); else jniJNI.MapEvent_FeatureOutSwigExplicitMapEvent(swigCPtr, this, Feature.getCPtr(poFeature), poFeature, Geometry.getCPtr(poGeometry), poGeometry, AnnotationLabel.getCPtr(poText), poText);
  }

  public void Click(int x, int y) {
    if (getClass() == MapEvent.class) jniJNI.MapEvent_Click(swigCPtr, this, x, y); else jniJNI.MapEvent_ClickSwigExplicitMapEvent(swigCPtr, this, x, y);
  }

  public void RightClick(int x, int y) {
    if (getClass() == MapEvent.class) jniJNI.MapEvent_RightClick(swigCPtr, this, x, y); else jniJNI.MapEvent_RightClickSwigExplicitMapEvent(swigCPtr, this, x, y);
  }

  public void DoubleClick(int x, int y) {
    if (getClass() == MapEvent.class) jniJNI.MapEvent_DoubleClick(swigCPtr, this, x, y); else jniJNI.MapEvent_DoubleClickSwigExplicitMapEvent(swigCPtr, this, x, y);
  }

  public void TouchMove(int x, int y) {
    if (getClass() == MapEvent.class) jniJNI.MapEvent_TouchMove(swigCPtr, this, x, y); else jniJNI.MapEvent_TouchMoveSwigExplicitMapEvent(swigCPtr, this, x, y);
  }

  public void TouchUp(int type, int x, int y) {
    if (getClass() == MapEvent.class) jniJNI.MapEvent_TouchUp(swigCPtr, this, type, x, y); else jniJNI.MapEvent_TouchUpSwigExplicitMapEvent(swigCPtr, this, type, x, y);
  }

  public void TouchDown(int type, int x, int y) {
    if (getClass() == MapEvent.class) jniJNI.MapEvent_TouchDown(swigCPtr, this, type, x, y); else jniJNI.MapEvent_TouchDownSwigExplicitMapEvent(swigCPtr, this, type, x, y);
  }

  public void LongClick(int x, int y) {
    if (getClass() == MapEvent.class) jniJNI.MapEvent_LongClick(swigCPtr, this, x, y); else jniJNI.MapEvent_LongClickSwigExplicitMapEvent(swigCPtr, this, x, y);
  }

  public void MapMove() {
    if (getClass() == MapEvent.class) jniJNI.MapEvent_MapMove(swigCPtr, this); else jniJNI.MapEvent_MapMoveSwigExplicitMapEvent(swigCPtr, this);
  }

  public void MapMoved() {
    if (getClass() == MapEvent.class) jniJNI.MapEvent_MapMoved(swigCPtr, this); else jniJNI.MapEvent_MapMovedSwigExplicitMapEvent(swigCPtr, this);
  }

  public void MapExtendChange() {
    if (getClass() == MapEvent.class) jniJNI.MapEvent_MapExtendChange(swigCPtr, this); else jniJNI.MapEvent_MapExtendChangeSwigExplicitMapEvent(swigCPtr, this);
  }

  public void MapExtendChanged() {
    if (getClass() == MapEvent.class) jniJNI.MapEvent_MapExtendChanged(swigCPtr, this); else jniJNI.MapEvent_MapExtendChangedSwigExplicitMapEvent(swigCPtr, this);
  }

  public void MapReSized(int width, int height) {
    if (getClass() == MapEvent.class) jniJNI.MapEvent_MapReSized(swigCPtr, this, width, height); else jniJNI.MapEvent_MapReSizedSwigExplicitMapEvent(swigCPtr, this, width, height);
  }

  public void SensorAdded(int arg0) {
    if (getClass() == MapEvent.class) jniJNI.MapEvent_SensorAdded(swigCPtr, this, arg0); else jniJNI.MapEvent_SensorAddedSwigExplicitMapEvent(swigCPtr, this, arg0);
  }

  public void SensorRemoved(int arg0) {
    if (getClass() == MapEvent.class) jniJNI.MapEvent_SensorRemoved(swigCPtr, this, arg0); else jniJNI.MapEvent_SensorRemovedSwigExplicitMapEvent(swigCPtr, this, arg0);
  }

  public void Exported() {
    if (getClass() == MapEvent.class) jniJNI.MapEvent_Exported(swigCPtr, this); else jniJNI.MapEvent_ExportedSwigExplicitMapEvent(swigCPtr, this);
  }

  public void Printed() {
    if (getClass() == MapEvent.class) jniJNI.MapEvent_Printed(swigCPtr, this); else jniJNI.MapEvent_PrintedSwigExplicitMapEvent(swigCPtr, this);
  }

  public void ScreenModeChanged(int eScreenModeH) {
    if (getClass() == MapEvent.class) jniJNI.MapEvent_ScreenModeChanged(swigCPtr, this, eScreenModeH); else jniJNI.MapEvent_ScreenModeChangedSwigExplicitMapEvent(swigCPtr, this, eScreenModeH);
  }

  public void SelectModeChanged(int eSelectModeH) {
    if (getClass() == MapEvent.class) jniJNI.MapEvent_SelectModeChanged(swigCPtr, this, eSelectModeH); else jniJNI.MapEvent_SelectModeChangedSwigExplicitMapEvent(swigCPtr, this, eSelectModeH);
  }

  public void SnapModeChanged() {
    if (getClass() == MapEvent.class) jniJNI.MapEvent_SnapModeChanged(swigCPtr, this); else jniJNI.MapEvent_SnapModeChangedSwigExplicitMapEvent(swigCPtr, this);
  }

  public void MapControlChanged(int nCtrl) {
    if (getClass() == MapEvent.class) jniJNI.MapEvent_MapControlChanged(swigCPtr, this, nCtrl); else jniJNI.MapEvent_MapControlChangedSwigExplicitMapEvent(swigCPtr, this, nCtrl);
  }

  public void SyncMoveModeChanged() {
    if (getClass() == MapEvent.class) jniJNI.MapEvent_SyncMoveModeChanged(swigCPtr, this); else jniJNI.MapEvent_SyncMoveModeChangedSwigExplicitMapEvent(swigCPtr, this);
  }

  public void Feature3DSelected(FeatureLayer poFeature, int nFID) {
    if (getClass() == MapEvent.class) jniJNI.MapEvent_Feature3DSelected(swigCPtr, this, FeatureLayer.getCPtr(poFeature), poFeature, nFID); else jniJNI.MapEvent_Feature3DSelectedSwigExplicitMapEvent(swigCPtr, this, FeatureLayer.getCPtr(poFeature), poFeature, nFID);
  }

  public void Feature3DDeSelected() {
    if (getClass() == MapEvent.class) jniJNI.MapEvent_Feature3DDeSelected(swigCPtr, this); else jniJNI.MapEvent_Feature3DDeSelectedSwigExplicitMapEvent(swigCPtr, this);
  }

}
