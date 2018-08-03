/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.7
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package net.sgsrc.map.jni;

public class FeatureAttributeTreeWidget extends Widget {
  private long swigCPtr;

  protected FeatureAttributeTreeWidget(long cPtr, boolean cMemoryOwn) {
    super(jniJNI.FeatureAttributeTreeWidget_SWIGUpcast(cPtr), cMemoryOwn);
    swigCPtr = cPtr;
  }

  protected static long getCPtr(FeatureAttributeTreeWidget obj) {
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

  protected static long getCPtrAndDisown(FeatureAttributeTreeWidget obj) {
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
    if (obj instanceof FeatureAttributeTreeWidget)
      equal = (((FeatureAttributeTreeWidget)obj).swigCPtr == this.swigCPtr);
    return equal;
  }

  public int hashCode() {
     return (int)swigCPtr;
  }


  public int IndexOfSelectedItem() {
    return jniJNI.FeatureAttributeTreeWidget_IndexOfSelectedItem(swigCPtr, this);
  }

  public boolean GetDisplayToolBar() {
    return jniJNI.FeatureAttributeTreeWidget_GetDisplayToolBar(swigCPtr, this);
  }

  public void SetDisplayToolBar(boolean bVal) {
    jniJNI.FeatureAttributeTreeWidget_SetDisplayToolBar(swigCPtr, this, bVal);
  }

  public void SetDisplayContextMenu(boolean bVal) {
    jniJNI.FeatureAttributeTreeWidget_SetDisplayContextMenu(swigCPtr, this, bVal);
  }

}
