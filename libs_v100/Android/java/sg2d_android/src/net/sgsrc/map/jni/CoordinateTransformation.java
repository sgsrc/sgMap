/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.7
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package net.sgsrc.map.jni;

public class CoordinateTransformation {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected CoordinateTransformation(long cPtr, boolean cMemoryOwn) {
    if (cPtr == 0)
        throw new RuntimeException();
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }
  
  public static long getCPtr(CoordinateTransformation obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        jniJNI.delete_CoordinateTransformation(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  private Object parentReference;

  protected static long getCPtrAndDisown(CoordinateTransformation obj) {
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
    if (obj instanceof CoordinateTransformation)
      equal = (((CoordinateTransformation)obj).swigCPtr == this.swigCPtr);
    return equal;
  }

  public int hashCode() {
     return (int)swigCPtr;
  }


  public CoordinateTransformation(SpatialReference src, SpatialReference dst) {
    this(jniJNI.new_CoordinateTransformation(SpatialReference.getCPtr(src), src, SpatialReference.getCPtr(dst), dst), true);
  }

  public void TransformPoint(double[] inout) {
    jniJNI.CoordinateTransformation_TransformPoint__SWIG_0(swigCPtr, this, inout);
  }

  public void TransformPoint(double[] argout, double x, double y, double z) {
    jniJNI.CoordinateTransformation_TransformPoint__SWIG_1(swigCPtr, this, argout, x, y, z);
  }

  public void TransformPoint(double[] argout, double x, double y) {
    jniJNI.CoordinateTransformation_TransformPoint__SWIG_2(swigCPtr, this, argout, x, y);
  }

  public void TransformPoints(double[][] nCount) {
    jniJNI.CoordinateTransformation_TransformPoints(swigCPtr, this, nCount);
  }

}
