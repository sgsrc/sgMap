/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.7
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package net.sgsrc.map.jni;

public class GraphicPolygon extends Graphic {
  private long swigCPtr;

  protected GraphicPolygon(long cPtr, boolean cMemoryOwn) {
    super(jniJNI.GraphicPolygon_SWIGUpcast(cPtr), cMemoryOwn);
    swigCPtr = cPtr;
  }

  protected static long getCPtr(GraphicPolygon obj) {
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

  private Object parentReference;

  protected static long getCPtrAndDisown(GraphicPolygon obj) {
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
    if (obj instanceof GraphicPolygon)
      equal = (((GraphicPolygon)obj).swigCPtr == this.swigCPtr);
    return equal;
  }

  public int hashCode() {
     return (int)swigCPtr;
  }


  public void GetExteriorPoint(int index, SWIGTYPE_p_float x, SWIGTYPE_p_float y) {
    jniJNI.GraphicPolygon_GetExteriorPoint(swigCPtr, this, index, SWIGTYPE_p_float.getCPtr(x), SWIGTYPE_p_float.getCPtr(y));
  }

  public void AddExteriorPoint(float x, float y) {
    jniJNI.GraphicPolygon_AddExteriorPoint(swigCPtr, this, x, y);
  }

  public void InsertExteriorPoint(int index, float x, float y) {
    jniJNI.GraphicPolygon_InsertExteriorPoint(swigCPtr, this, index, x, y);
  }

  public void SetExteriorPoint(int index, float x, float y) {
    jniJNI.GraphicPolygon_SetExteriorPoint(swigCPtr, this, index, x, y);
  }

  public void RemoveExteriorPoint(int index) {
    jniJNI.GraphicPolygon_RemoveExteriorPoint(swigCPtr, this, index);
  }

  public int GetNumExteriorPoints() {
    return jniJNI.GraphicPolygon_GetNumExteriorPoints(swigCPtr, this);
  }

  public void GetInteriorPoint(int index, int interiorRingIndex, SWIGTYPE_p_float x, SWIGTYPE_p_float y) {
    jniJNI.GraphicPolygon_GetInteriorPoint(swigCPtr, this, index, interiorRingIndex, SWIGTYPE_p_float.getCPtr(x), SWIGTYPE_p_float.getCPtr(y));
  }

  public void AddInteriorPoint(int interiorRingIndex, float x, float y) {
    jniJNI.GraphicPolygon_AddInteriorPoint(swigCPtr, this, interiorRingIndex, x, y);
  }

  public void InsertInteriorPoint(int index, int interiorRingIndex, float x, float y) {
    jniJNI.GraphicPolygon_InsertInteriorPoint(swigCPtr, this, index, interiorRingIndex, x, y);
  }

  public void SetInteriorPoint(int index, int interiorRingIndex, float x, float y) {
    jniJNI.GraphicPolygon_SetInteriorPoint(swigCPtr, this, index, interiorRingIndex, x, y);
  }

  public void RemoveInteriorPoint(int index, int interiorRingIndex) {
    jniJNI.GraphicPolygon_RemoveInteriorPoint(swigCPtr, this, index, interiorRingIndex);
  }

  public int GetNumInteriorPoints(int interiorRingIndex) {
    return jniJNI.GraphicPolygon_GetNumInteriorPoints(swigCPtr, this, interiorRingIndex);
  }

  public void RemoveInteriorRing(int interiorRingIndex) {
    jniJNI.GraphicPolygon_RemoveInteriorRing(swigCPtr, this, interiorRingIndex);
  }

  public int GetNumInteriorRings() {
    return jniJNI.GraphicPolygon_GetNumInteriorRings(swigCPtr, this);
  }

  public void SetPathType(int pathType) {
    jniJNI.GraphicPolygon_SetPathType(swigCPtr, this, pathType);
  }

  public int GetPathType() {
    return jniJNI.GraphicPolygon_GetPathType(swigCPtr, this);
  }

  public void SetAllowingNewVertices(boolean newValue) {
    jniJNI.GraphicPolygon_SetAllowingNewVertices(swigCPtr, this, newValue);
  }

  public boolean IsAllowingNewVertices() {
    return jniJNI.GraphicPolygon_IsAllowingNewVertices(swigCPtr, this);
  }

}
