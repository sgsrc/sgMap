/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.7
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package net.sgsrc.map.jni;

import net.joymap.jni.SpatialReference;

public class LayerSource {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected LayerSource(long cPtr, boolean cMemoryOwn) {
    if (cPtr == 0)
        throw new RuntimeException();
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }
  
  public static long getCPtr(LayerSource obj) {
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


  public boolean equals(Object obj) {
    boolean equal = false;
    if (obj instanceof LayerSource)
      equal = (((LayerSource)obj).swigCPtr == this.swigCPtr);
    return equal;
  }

  public int hashCode() {
     return (int)swigCPtr;
  }

  public Layer GetLayer(String layerName)
  {
      return GetLayerByName(layerName);
  }


  public void Destroy() {
    jniJNI.LayerSource_Destroy(swigCPtr, this);
  }

  public String GetIcon() {
    return jniJNI.LayerSource_GetIcon(swigCPtr, this);
  }

  public void SetIcon(String icon) {
    jniJNI.LayerSource_SetIcon(swigCPtr, this, icon);
  }

  public String GetDisplayName() {
    return jniJNI.LayerSource_GetDisplayName(swigCPtr, this);
  }

  public void SetDisplayName(String pDisplayName) {
    jniJNI.LayerSource_SetDisplayName(swigCPtr, this, pDisplayName);
  }

  public String GetDescription() {
    return jniJNI.LayerSource_GetDescription(swigCPtr, this);
  }

  public void SetDescription(String desc) {
    jniJNI.LayerSource_SetDescription(swigCPtr, this, desc);
  }

  public int GetSize() {
    return jniJNI.LayerSource_GetSize(swigCPtr, this);
  }

  public String GetDriverType() {
    return jniJNI.LayerSource_GetDriverType(swigCPtr, this);
  }

  public Layer GetLayerByIndex(int index) {
    long cPtr = jniJNI.LayerSource_GetLayerByIndex(swigCPtr, this, index);
    Layer ret = null;
    if (cPtr != 0) {
      ret = new Layer(cPtr, false);
      ret.addReference(this);
    }
    return ret;
  }

  public Layer GetLayer(int index) {
    long cPtr = jniJNI.LayerSource_GetLayer(swigCPtr, this, index);
    return (cPtr == 0) ? null : new Layer(cPtr, false);
  }

  public Layer GetLayerByName(String name) {
    long cPtr = jniJNI.LayerSource_GetLayerByName(swigCPtr, this, name);
    Layer ret = null;
    if (cPtr != 0) {
      ret = new Layer(cPtr, false);
      ret.addReference(this);
    }
    return ret;
  }

  public Layer CreateLayer(String name, SpatialReference srs, int geom_type, java.util.Vector options) {
    long cPtr = jniJNI.LayerSource_CreateLayer__SWIG_0(swigCPtr, this, name, SpatialReference.getCPtr(srs), srs, geom_type, options);
    Layer ret = null;
    if (cPtr != 0) {
      ret = new Layer(cPtr, false);
      ret.addReference(this);
    }
    return ret;
  }

  public Layer CreateLayer(String name, SpatialReference srs, int geom_type) {
    long cPtr = jniJNI.LayerSource_CreateLayer__SWIG_1(swigCPtr, this, name, SpatialReference.getCPtr(srs), srs, geom_type);
    Layer ret = null;
    if (cPtr != 0) {
      ret = new Layer(cPtr, false);
      ret.addReference(this);
    }
    return ret;
  }

  public Layer CreateLayer(String name, SpatialReference srs) {
    long cPtr = jniJNI.LayerSource_CreateLayer__SWIG_2(swigCPtr, this, name, SpatialReference.getCPtr(srs), srs);
    Layer ret = null;
    if (cPtr != 0) {
      ret = new Layer(cPtr, false);
      ret.addReference(this);
    }
    return ret;
  }

  public Layer CreateLayer(String name) {
    long cPtr = jniJNI.LayerSource_CreateLayer__SWIG_3(swigCPtr, this, name);
    Layer ret = null;
    if (cPtr != 0) {
      ret = new Layer(cPtr, false);
      ret.addReference(this);
    }
    return ret;
  }

  public Layer ExecuteSQL(String statement, Geometry spatialFilter, String dialect) {
    long cPtr = jniJNI.LayerSource_ExecuteSQL__SWIG_0(swigCPtr, this, statement, Geometry.getCPtr(spatialFilter), spatialFilter, dialect);
    Layer ret = null;
    if (cPtr != 0) {
      ret = new Layer(cPtr, false);
      ret.addReference(this);
    }
    return ret;
  }

  public Layer ExecuteSQL(String statement, Geometry spatialFilter) {
    long cPtr = jniJNI.LayerSource_ExecuteSQL__SWIG_1(swigCPtr, this, statement, Geometry.getCPtr(spatialFilter), spatialFilter);
    Layer ret = null;
    if (cPtr != 0) {
      ret = new Layer(cPtr, false);
      ret.addReference(this);
    }
    return ret;
  }

  public Layer ExecuteSQL(String statement) {
    long cPtr = jniJNI.LayerSource_ExecuteSQL__SWIG_2(swigCPtr, this, statement);
    Layer ret = null;
    if (cPtr != 0) {
      ret = new Layer(cPtr, false);
      ret.addReference(this);
    }
    return ret;
  }

  public int DeleteLayer(int index) {
    return jniJNI.LayerSource_DeleteLayer(swigCPtr, this, index);
  }

  public int RenameLayer(String fromname, String toname) {
    return jniJNI.LayerSource_RenameLayer(swigCPtr, this, fromname, toname);
  }

  public int GetLayerCount() {
    return jniJNI.LayerSource_GetLayerCount(swigCPtr, this);
  }

  public int GetAffectedCount() {
    return jniJNI.LayerSource_GetAffectedCount(swigCPtr, this);
  }

}
