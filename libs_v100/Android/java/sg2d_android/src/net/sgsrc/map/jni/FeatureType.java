/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.7
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package net.sgsrc.map.jni;

public class FeatureType {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected FeatureType(long cPtr, boolean cMemoryOwn) {
    if (cPtr == 0)
        throw new RuntimeException();
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }
  
  public static long getCPtr(FeatureType obj) {
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

  protected static long getCPtrAndDisown(FeatureType obj) {
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
    if (obj instanceof FeatureType)
      equal = (((FeatureType)obj).swigCPtr == this.swigCPtr);
    return equal;
  }

  public int hashCode() {
     return (int)swigCPtr;
  }


  public void Destroy() {
    jniJNI.FeatureType_Destroy(swigCPtr, this);
  }

  public FeatureType(String name_null_ok) {
    this(jniJNI.new_FeatureType__SWIG_0(name_null_ok), true);
  }

  public FeatureType() {
    this(jniJNI.new_FeatureType__SWIG_1(), true);
  }

  public String GetName() {
    return jniJNI.FeatureType_GetName(swigCPtr, this);
  }

  public void SetName(String pszName) {
    jniJNI.FeatureType_SetName(swigCPtr, this, pszName);
  }

  public String GetPreferredPrefix() {
    return jniJNI.FeatureType_GetPreferredPrefix(swigCPtr, this);
  }

  public void SetPreferredPrefix(String pszPrefix) {
    jniJNI.FeatureType_SetPreferredPrefix(swigCPtr, this, pszPrefix);
  }

  public int GetSize() {
    return jniJNI.FeatureType_GetSize(swigCPtr, this);
  }

  public int GetGeometryType() {
    return jniJNI.FeatureType_GetGeometryType(swigCPtr, this);
  }

  public void SetGeometryType(int geom_type) {
    jniJNI.FeatureType_SetGeometryType(swigCPtr, this, geom_type);
  }

  public FeatureAttributeDescriptor AttributeDescriptor(int i) {
    long cPtr = jniJNI.FeatureType_AttributeDescriptor(swigCPtr, this, i);
    return (cPtr == 0) ? null : new FeatureAttributeDescriptor(cPtr, false);
  }

  public FeatureAttributeDescriptor DefaultShapeAttribute() {
    long cPtr = jniJNI.FeatureType_DefaultShapeAttribute(swigCPtr, this);
    return (cPtr == 0) ? null : new FeatureAttributeDescriptor(cPtr, false);
  }

  public void Add(FeatureAttributeDescriptor defn) {
    jniJNI.FeatureType_Add(swigCPtr, this, FeatureAttributeDescriptor.getCPtr(defn), defn);
  }

  public boolean Remove(int idx) {
    return jniJNI.FeatureType_Remove(swigCPtr, this, idx);
  }

  public FeatureAttributeDescriptor SetAttribute(int idx, FeatureAttributeDescriptor defn) {
    long cPtr = jniJNI.FeatureType_SetAttribute(swigCPtr, this, idx, FeatureAttributeDescriptor.getCPtr(defn), defn);
    return (cPtr == 0) ? null : new FeatureAttributeDescriptor(cPtr, false);
  }

  public FeatureType Clone() {
    long cPtr = jniJNI.FeatureType_Clone(swigCPtr, this);
    return (cPtr == 0) ? null : new FeatureType(cPtr, false);
  }

  public int GetIndex(String pszName) {
    return jniJNI.FeatureType_GetIndex(swigCPtr, this, pszName);
  }

}
