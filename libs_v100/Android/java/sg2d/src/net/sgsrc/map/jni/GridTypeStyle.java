/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.7
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package net.sgsrc.map.jni;

public class GridTypeStyle extends FeatureTypeStyle {
  private long swigCPtr;

  protected GridTypeStyle(long cPtr, boolean cMemoryOwn) {
    super(jniJNI.GridTypeStyle_SWIGUpcast(cPtr), cMemoryOwn);
    swigCPtr = cPtr;
  }

  protected static long getCPtr(GridTypeStyle obj) {
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

  protected static long getCPtrAndDisown(GridTypeStyle obj) {
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
    if (obj instanceof GridTypeStyle)
      equal = (((GridTypeStyle)obj).swigCPtr == this.swigCPtr);
    return equal;
  }

  public int hashCode() {
     return (int)swigCPtr;
  }


  public GridTypeStyle CreateColorStyle(int eType) {
    long cPtr = jniJNI.GridTypeStyle_CreateColorStyle(swigCPtr, this, eType);
    return (cPtr == 0) ? null : new GridTypeStyle(cPtr, false);
  }

  public void Destroy() {
    jniJNI.GridTypeStyle_Destroy(swigCPtr, this);
  }

  public void AddRule(GridColorRampItem newItem) {
    jniJNI.GridTypeStyle_AddRule(swigCPtr, this, GridColorRampItem.getCPtr(newItem), newItem);
  }

  public void SetGridColorType(int eType) {
    jniJNI.GridTypeStyle_SetGridColorType(swigCPtr, this, eType);
  }

  public int GetGridColorType() {
    return jniJNI.GridTypeStyle_GetGridColorType(swigCPtr, this);
  }

  public double GetMaximumValue() {
    return jniJNI.GridTypeStyle_GetMaximumValue(swigCPtr, this);
  }

  public double GetMinimumValue() {
    return jniJNI.GridTypeStyle_GetMinimumValue(swigCPtr, this);
  }

  public double GetStandardDeviation() {
    return jniJNI.GridTypeStyle_GetStandardDeviation(swigCPtr, this);
  }

  public void SetMaximumValue(double max) {
    jniJNI.GridTypeStyle_SetMaximumValue(swigCPtr, this, max);
  }

  public void SetMinimumValue(double min) {
    jniJNI.GridTypeStyle_SetMinimumValue(swigCPtr, this, min);
  }

  public void SetStandardDeviation(double dev) {
    jniJNI.GridTypeStyle_SetStandardDeviation(swigCPtr, this, dev);
  }

  public int GetShadeColor(double val) {
    return jniJNI.GridTypeStyle_GetShadeColor(swigCPtr, this, val);
  }

  public int GetShadePaletteInterpretation() {
    return jniJNI.GridTypeStyle_GetShadePaletteInterpretation(swigCPtr, this);
  }

  public void SetShadePaletteInterpretation(int interp) {
    jniJNI.GridTypeStyle_SetShadePaletteInterpretation(swigCPtr, this, interp);
  }

  public void ShadeColorInterpretationRemoveAll() {
    jniJNI.GridTypeStyle_ShadeColorInterpretationRemoveAll(swigCPtr, this);
  }

  public void ShadeColorInterpretationAdd(int index, int crInterp) {
    jniJNI.GridTypeStyle_ShadeColorInterpretationAdd(swigCPtr, this, index, crInterp);
  }

  public int GetShadeColorInterpretationSize() {
    return jniJNI.GridTypeStyle_GetShadeColorInterpretationSize(swigCPtr, this);
  }

  public int GetShadeIndexByOrder(int order) {
    return jniJNI.GridTypeStyle_GetShadeIndexByOrder(swigCPtr, this, order);
  }

  public int ShadeColorInterpretationByOrder(int order) {
    return jniJNI.GridTypeStyle_ShadeColorInterpretationByOrder(swigCPtr, this, order);
  }

  public int GetShadeColorInterpretation(int bandindex) {
    return jniJNI.GridTypeStyle_GetShadeColorInterpretation(swigCPtr, this, bandindex);
  }

  public int GetShadeIndexByColorInterpretation(int eInterp) {
    return jniJNI.GridTypeStyle_GetShadeIndexByColorInterpretation(swigCPtr, this, eInterp);
  }

  public void SetEffectFilter(int eFilter, double amount) {
    jniJNI.GridTypeStyle_SetEffectFilter(swigCPtr, this, eFilter, amount);
  }

  public void RemoveEffectFilter(int eFilter) {
    jniJNI.GridTypeStyle_RemoveEffectFilter(swigCPtr, this, eFilter);
  }

  public void ClearEffectFilter() {
    jniJNI.GridTypeStyle_ClearEffectFilter(swigCPtr, this);
  }

  public double GetEffectFilter(int eFilter) {
    return jniJNI.GridTypeStyle_GetEffectFilter(swigCPtr, this, eFilter);
  }

}
