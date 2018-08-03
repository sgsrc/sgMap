/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.7
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package net.sgsrc.map.jni;

public class MapEarth extends Map3D {
  private long swigCPtr;

  protected MapEarth(long cPtr, boolean cMemoryOwn) {
    super(jniJNI.MapEarth_SWIGUpcast(cPtr), cMemoryOwn);
    swigCPtr = cPtr;
  }

  protected static long getCPtr(MapEarth obj) {
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

  protected static long getCPtrAndDisown(MapEarth obj) {
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
    if (obj instanceof MapEarth)
      equal = (((MapEarth)obj).swigCPtr == this.swigCPtr);
    return equal;
  }

  public int hashCode() {
     return (int)swigCPtr;
  }


  public void SetShadowEnable(int bEnable, int bPersp, int bParallel, float ambientBrightness) {
    jniJNI.MapEarth_SetShadowEnable(swigCPtr, this, bEnable, bPersp, bParallel, ambientBrightness);
  }

  public void GetShadowEnable(SWIGTYPE_p_int bEnable, SWIGTYPE_p_int bPersp, SWIGTYPE_p_int bParallel, SWIGTYPE_p_float ambientBrightness) {
    jniJNI.MapEarth_GetShadowEnable(swigCPtr, this, SWIGTYPE_p_int.getCPtr(bEnable), SWIGTYPE_p_int.getCPtr(bPersp), SWIGTYPE_p_int.getCPtr(bParallel), SWIGTYPE_p_float.getCPtr(ambientBrightness));
  }

  public void SetSkyDateTime(int bEnable, int year, int month, int day, int hour) {
    jniJNI.MapEarth_SetSkyDateTime(swigCPtr, this, bEnable, year, month, day, hour);
  }

  public void GetSkyDateTime(SWIGTYPE_p_int bEnable, SWIGTYPE_p_int year, SWIGTYPE_p_int month, SWIGTYPE_p_int day, SWIGTYPE_p_int hour) {
    jniJNI.MapEarth_GetSkyDateTime(swigCPtr, this, SWIGTYPE_p_int.getCPtr(bEnable), SWIGTYPE_p_int.getCPtr(year), SWIGTYPE_p_int.getCPtr(month), SWIGTYPE_p_int.getCPtr(day), SWIGTYPE_p_int.getCPtr(hour));
  }

  public void SetOceanEnable(int bEnable, String pszOptions) {
    jniJNI.MapEarth_SetOceanEnable(swigCPtr, this, bEnable, pszOptions);
  }

  public void GetOceanEnable(SWIGTYPE_p_int bEnable) {
    jniJNI.MapEarth_GetOceanEnable(swigCPtr, this, SWIGTYPE_p_int.getCPtr(bEnable));
  }

}
