/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.7
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package net.sgsrc.map.jni;

public class FeatureQuery {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected FeatureQuery(long cPtr, boolean cMemoryOwn) {
    if (cPtr == 0)
        throw new RuntimeException();
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }
  
  public static long getCPtr(FeatureQuery obj) {
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
  }

  private Object parentReference;

  protected static long getCPtrAndDisown(FeatureQuery obj) {
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
    if (obj instanceof FeatureQuery)
      equal = (((FeatureQuery)obj).swigCPtr == this.swigCPtr);
    return equal;
  }

  public int hashCode() {
     return (int)swigCPtr;
  }


  public short Compile(FeatureType h, String pszQuery) {
    return jniJNI.FeatureQuery_Compile(swigCPtr, this, FeatureType.getCPtr(h), h, pszQuery);
  }

  public short Evaluate(Feature h) {
    return jniJNI.FeatureQuery_Evaluate(swigCPtr, this, Feature.getCPtr(h), h);
  }

  public short SelectCompil(FeatureType h, String pszQuery) {
    return jniJNI.FeatureQuery_SelectCompil(swigCPtr, this, FeatureType.getCPtr(h), h, pszQuery);
  }

  public String GetAttributeAsString(Feature h, int index) {
    return jniJNI.FeatureQuery_GetAttributeAsString(swigCPtr, this, Feature.getCPtr(h), h, index);
  }

  public void Destroy() {
    jniJNI.FeatureQuery_Destroy(swigCPtr, this);
  }

}
