/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.7
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package net.sgsrc.map.jni;

public class FeatureTypeStyleRule {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected FeatureTypeStyleRule(long cPtr, boolean cMemoryOwn) {
    if (cPtr == 0)
        throw new RuntimeException();
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }
  
  public static long getCPtr(FeatureTypeStyleRule obj) {
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

  protected static long getCPtrAndDisown(FeatureTypeStyleRule obj) {
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
    if (obj instanceof FeatureTypeStyleRule)
      equal = (((FeatureTypeStyleRule)obj).swigCPtr == this.swigCPtr);
    return equal;
  }

  public int hashCode() {
     return (int)swigCPtr;
  }


  public FeatureTypeStyleRule Clone() {
    long cPtr = jniJNI.FeatureTypeStyleRule_Clone(swigCPtr, this);
    return (cPtr == 0) ? null : new FeatureTypeStyleRule(cPtr, false);
  }

  public String GetTitle() {
    return jniJNI.FeatureTypeStyleRule_GetTitle(swigCPtr, this);
  }

  public void SetTitle(String val) {
    jniJNI.FeatureTypeStyleRule_SetTitle(swigCPtr, this, val);
  }

  public String GetFilter() {
    return jniJNI.FeatureTypeStyleRule_GetFilter(swigCPtr, this);
  }

  public void SetFilter(String pszVal) {
    jniJNI.FeatureTypeStyleRule_SetFilter(swigCPtr, this, pszVal);
  }

  public double GetMinScaleDenominator() {
    return jniJNI.FeatureTypeStyleRule_GetMinScaleDenominator(swigCPtr, this);
  }

  public double GetMaxScaleDenominator() {
    return jniJNI.FeatureTypeStyleRule_GetMaxScaleDenominator(swigCPtr, this);
  }

  public void SetMinScaleDenominator(double val) {
    jniJNI.FeatureTypeStyleRule_SetMinScaleDenominator(swigCPtr, this, val);
  }

  public void SetMaxScaleDenominator(double val) {
    jniJNI.FeatureTypeStyleRule_SetMaxScaleDenominator(swigCPtr, this, val);
  }

  public Symbolizer GetSymbolizer() {
    long cPtr = jniJNI.FeatureTypeStyleRule_GetSymbolizer(swigCPtr, this);
    return (cPtr == 0) ? null : new Symbolizer(cPtr, false);
  }

  public void SetSymbolizer(Symbolizer style) {
    jniJNI.FeatureTypeStyleRule_SetSymbolizer(swigCPtr, this, Symbolizer.getCPtr(style), style);
  }

  public int IsValidFilter(FeatureType defn, Feature feature) {
    return jniJNI.FeatureTypeStyleRule_IsValidFilter(swigCPtr, this, FeatureType.getCPtr(defn), defn, Feature.getCPtr(feature), feature);
  }

}
