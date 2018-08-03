/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.7
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package net.sgsrc.map.jni;

public class GraphicRectangle extends Graphic {
  private long swigCPtr;

  protected GraphicRectangle(long cPtr, boolean cMemoryOwn) {
    super(jniJNI.GraphicRectangle_SWIGUpcast(cPtr), cMemoryOwn);
    swigCPtr = cPtr;
  }

  protected static long getCPtr(GraphicRectangle obj) {
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

  protected static long getCPtrAndDisown(GraphicRectangle obj) {
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
    if (obj instanceof GraphicRectangle)
      equal = (((GraphicRectangle)obj).swigCPtr == this.swigCPtr);
    return equal;
  }

  public int hashCode() {
     return (int)swigCPtr;
  }


  public void SetCenter(float x, float y) {
    jniJNI.GraphicRectangle_SetCenter(swigCPtr, this, x, y);
  }

  public void GetCenter(SWIGTYPE_p_float x, SWIGTYPE_p_float y) {
    jniJNI.GraphicRectangle_GetCenter(swigCPtr, this, SWIGTYPE_p_float.getCPtr(x), SWIGTYPE_p_float.getCPtr(y));
  }

  public void SetWidth(float w) {
    jniJNI.GraphicRectangle_SetWidth(swigCPtr, this, w);
  }

  public float GetWidth() {
    return jniJNI.GraphicRectangle_GetWidth(swigCPtr, this);
  }

  public void SetHeight(float h) {
    jniJNI.GraphicRectangle_SetHeight(swigCPtr, this, h);
  }

  public float GetHeight() {
    return jniJNI.GraphicRectangle_GetHeight(swigCPtr, this);
  }

  public boolean IsAllowingRotation() {
    return jniJNI.GraphicRectangle_IsAllowingRotation(swigCPtr, this);
  }

  public void SetAllowingRotation(boolean a) {
    jniJNI.GraphicRectangle_SetAllowingRotation(swigCPtr, this, a);
  }

  public boolean IsAllowingExtentsChang() {
    return jniJNI.GraphicRectangle_IsAllowingExtentsChang(swigCPtr, this);
  }

  public void SetAllowingExtentsChang(boolean a) {
    jniJNI.GraphicRectangle_SetAllowingExtentsChang(swigCPtr, this, a);
  }

  public float GetRoundX() {
    return jniJNI.GraphicRectangle_GetRoundX(swigCPtr, this);
  }

  public void SetRoundX(float x) {
    jniJNI.GraphicRectangle_SetRoundX(swigCPtr, this, x);
  }

  public float GetRoundY() {
    return jniJNI.GraphicRectangle_GetRoundY(swigCPtr, this);
  }

  public void SetRoundY(float y) {
    jniJNI.GraphicRectangle_SetRoundY(swigCPtr, this, y);
  }

}
