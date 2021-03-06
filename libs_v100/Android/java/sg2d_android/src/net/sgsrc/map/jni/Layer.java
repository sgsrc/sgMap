/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.7
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package net.sgsrc.map.jni;

import net.joymap.jni.SpatialReference;

public class Layer {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected Layer(long cPtr, boolean cMemoryOwn) {
    if (cPtr == 0)
        throw new RuntimeException();
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }
  
  public static long getCPtr(Layer obj) {
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

  protected static long getCPtrAndDisown(Layer obj) {
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
    if (obj instanceof Layer)
      equal = (((Layer)obj).swigCPtr == this.swigCPtr);
    return equal;
  }

  public int hashCode() {
     return (int)swigCPtr;
  }
/*
  public double[] GetExtent(boolean force)
  {
      double[] argout = new double[4];
      try
      {
          GetExtent(argout, (force) ? 1 : 0);
          return argout;
      }
      catch(RuntimeException e)
      {
          return null;
      }
  }

  public double[] GetExtent()
  {
      return GetExtent(true);
  }
*/

  public void Destroy() {
    jniJNI.Layer_Destroy(swigCPtr, this);
  }

  public String GetName() {
    return jniJNI.Layer_GetName(swigCPtr, this);
  }

  public void SetName(String name) {
    jniJNI.Layer_SetName(swigCPtr, this, name);
  }

  public String GetTitle() {
    return jniJNI.Layer_GetTitle(swigCPtr, this);
  }

  public void SetTitle(String title) {
    jniJNI.Layer_SetTitle(swigCPtr, this, title);
  }

  public String GetAbstract() {
    return jniJNI.Layer_GetAbstract(swigCPtr, this);
  }

  public void SetAbstract(String arg0) {
    jniJNI.Layer_SetAbstract(swigCPtr, this, arg0);
  }

  public String GetSymbolizer() {
    return jniJNI.Layer_GetSymbolizer(swigCPtr, this);
  }

  public String GetSymbolizer3D(String pszVarName) {
    return jniJNI.Layer_GetSymbolizer3D(swigCPtr, this, pszVarName);
  }

  public void SetSymbolizer(String symbolizer) {
    jniJNI.Layer_SetSymbolizer(swigCPtr, this, symbolizer);
  }

  public SpatialReference GetSpatialReference() {
    long cPtr = jniJNI.Layer_GetSpatialReference(swigCPtr, this);
    return (cPtr == 0) ? null : new SpatialReference(cPtr, false);
  }

  public void SetSpatialReference(SpatialReference srs) {
    jniJNI.Layer_SetSpatialReference(swigCPtr, this, SpatialReference.getCPtr(srs), srs);
  }

  public int GetExtent(double[] argout, int force) {
    return jniJNI.Layer_GetExtent(swigCPtr, this, argout, force);
  }

  public double GetMinScaleDenominator() {
    return jniJNI.Layer_GetMinScaleDenominator(swigCPtr, this);
  }

  public void SetMinScaleDenominator(double minScale) {
    jniJNI.Layer_SetMinScaleDenominator(swigCPtr, this, minScale);
  }

  public double GetMaxScaleDenominator() {
    return jniJNI.Layer_GetMaxScaleDenominator(swigCPtr, this);
  }

  public void SetMaxScaleDenominator(double maxScale) {
    jniJNI.Layer_SetMaxScaleDenominator(swigCPtr, this, maxScale);
  }

  public double GetLabelMinScaleDenominator() {
    return jniJNI.Layer_GetLabelMinScaleDenominator(swigCPtr, this);
  }

  public void SetLabelMinScaleDenominator(double minScale) {
    jniJNI.Layer_SetLabelMinScaleDenominator(swigCPtr, this, minScale);
  }

  public double GetLabelMaxScaleDenominator() {
    return jniJNI.Layer_GetLabelMaxScaleDenominator(swigCPtr, this);
  }

  public void SetLabelMaxScaleDenominator(double maxScale) {
    jniJNI.Layer_SetLabelMaxScaleDenominator(swigCPtr, this, maxScale);
  }

  public boolean GetVisible() {
    return jniJNI.Layer_GetVisible(swigCPtr, this);
  }

  public void SetVisible(boolean bVisible) {
    jniJNI.Layer_SetVisible(swigCPtr, this, bVisible);
  }

  public boolean GetSelectable() {
    return jniJNI.Layer_GetSelectable(swigCPtr, this);
  }

  public void SetSelectable(boolean bSelect) {
    jniJNI.Layer_SetSelectable(swigCPtr, this, bSelect);
  }

  public int GetOrder() {
    return jniJNI.Layer_GetOrder(swigCPtr, this);
  }

  public String GetCategory() {
    return jniJNI.Layer_GetCategory(swigCPtr, this);
  }

  public void SetCategory(String category) {
    jniJNI.Layer_SetCategory(swigCPtr, this, category);
  }

  public String GetLayerID() {
    return jniJNI.Layer_GetLayerID(swigCPtr, this);
  }

  public String OGR_L_GetLabelText(int eType, Feature poFeature) {
    return jniJNI.Layer_OGR_L_GetLabelText(swigCPtr, this, eType, Feature.getCPtr(poFeature), poFeature);
  }

  public int GetPageSize() {
    return jniJNI.Layer_GetPageSize(swigCPtr, this);
  }

  public void SetPageSize(int size) {
    jniJNI.Layer_SetPageSize(swigCPtr, this, size);
  }

  public int GetAbsolutePage() {
    return jniJNI.Layer_GetAbsolutePage(swigCPtr, this);
  }

  public String GetLabelExpression() {
    return jniJNI.Layer_GetLabelExpression(swigCPtr, this);
  }

  public void SetLabelExpression(String expr) {
    jniJNI.Layer_SetLabelExpression(swigCPtr, this, expr);
  }

  public String GetShortLabelExpression() {
    return jniJNI.Layer_GetShortLabelExpression(swigCPtr, this);
  }

  public void SetShortLabelExpression(String expr) {
    jniJNI.Layer_SetShortLabelExpression(swigCPtr, this, expr);
  }

  public String GetToolTipExpression() {
    return jniJNI.Layer_GetToolTipExpression(swigCPtr, this);
  }

  public void SetToolTipExpression(String expr) {
    jniJNI.Layer_SetToolTipExpression(swigCPtr, this, expr);
  }

  public String GetAnnoLineAttribute() {
    return jniJNI.Layer_GetAnnoLineAttribute(swigCPtr, this);
  }

  public void SetAnnoLineAttribute(String attr) {
    jniJNI.Layer_SetAnnoLineAttribute(swigCPtr, this, attr);
  }

  public String GetAnnoVisibleAttribute() {
    return jniJNI.Layer_GetAnnoVisibleAttribute(swigCPtr, this);
  }

  public void SetAnnoVisibleAttribute(String attr) {
    jniJNI.Layer_SetAnnoVisibleAttribute(swigCPtr, this, attr);
  }

  public String GetAnnoLineVisibleAttribute() {
    return jniJNI.Layer_GetAnnoLineVisibleAttribute(swigCPtr, this);
  }

  public void SetAnnoLineVisibleAttribute(String attr) {
    jniJNI.Layer_SetAnnoLineVisibleAttribute(swigCPtr, this, attr);
  }

  public String GetStyleAttribute() {
    return jniJNI.Layer_GetStyleAttribute(swigCPtr, this);
  }

  public void SetStyleAttribute(String attr) {
    jniJNI.Layer_SetStyleAttribute(swigCPtr, this, attr);
  }

  public String GetAnnoXMLAttribute() {
    return jniJNI.Layer_GetAnnoXMLAttribute(swigCPtr, this);
  }

  public void SetAnnoXMLAttribute(String attr) {
    jniJNI.Layer_SetAnnoXMLAttribute(swigCPtr, this, attr);
  }

  public String GetReferGeometryLayerName() {
    return jniJNI.Layer_GetReferGeometryLayerName(swigCPtr, this);
  }

  public String GetGeometryColumn() {
    return jniJNI.Layer_GetGeometryColumn(swigCPtr, this);
  }

  public void SetGeometryColumn(String pVal) {
    jniJNI.Layer_SetGeometryColumn(swigCPtr, this, pVal);
  }

  public String GetFIDColumn() {
    return jniJNI.Layer_GetFIDColumn(swigCPtr, this);
  }

  public void SetFIDColumn(String pVal) {
    jniJNI.Layer_SetFIDColumn(swigCPtr, this, pVal);
  }

  public String GetMapIdxColumn() {
    return jniJNI.Layer_GetMapIdxColumn(swigCPtr, this);
  }

  public void SetMapIdxColumn(String pVal) {
    jniJNI.Layer_SetMapIdxColumn(swigCPtr, this, pVal);
  }

  public int GetMapIdxLevel() {
    return jniJNI.Layer_GetMapIdxLevel(swigCPtr, this);
  }

  public void SetMapIdxLevel(int lev) {
    jniJNI.Layer_SetMapIdxLevel(swigCPtr, this, lev);
  }

  public String GetNodeLayerName() {
    return jniJNI.Layer_GetNodeLayerName(swigCPtr, this);
  }

  public void SetNodeLayerName(String pVal) {
    jniJNI.Layer_SetNodeLayerName(swigCPtr, this, pVal);
  }

  public String GetNodeLayerStartIDColumn() {
    return jniJNI.Layer_GetNodeLayerStartIDColumn(swigCPtr, this);
  }

  public void SetNodeLayerStartIDColumn(String pVal) {
    jniJNI.Layer_SetNodeLayerStartIDColumn(swigCPtr, this, pVal);
  }

  public String GetNodeLayerEndIDColumn() {
    return jniJNI.Layer_GetNodeLayerEndIDColumn(swigCPtr, this);
  }

  public void SetNodeLayerEndIDColumn(String pVal) {
    jniJNI.Layer_SetNodeLayerEndIDColumn(swigCPtr, this, pVal);
  }

  public int SetAttributeFilter(String filter_string) {
    return jniJNI.Layer_SetAttributeFilter(swigCPtr, this, filter_string);
  }

  public FeatureType GetFeatureType() {
    long cPtr = jniJNI.Layer_GetFeatureType(swigCPtr, this);
    return (cPtr == 0) ? null : new FeatureType(cPtr, false);
  }

  public void SetFeatureType(FeatureType fttype) {
    jniJNI.Layer_SetFeatureType(swigCPtr, this, FeatureType.getCPtr(fttype), fttype);
  }

  public Parameters GetParameters() {
    long cPtr = jniJNI.Layer_GetParameters(swigCPtr, this);
    return (cPtr == 0) ? null : new Parameters(cPtr, false);
  }

  public void AddParameter(Parameter param) {
    jniJNI.Layer_AddParameter(swigCPtr, this, Parameter.getCPtr(param), param);
  }

  public int GetVisibleAuth() {
    return jniJNI.Layer_GetVisibleAuth(swigCPtr, this);
  }

  public void SetVisibleAuth(int auth) {
    jniJNI.Layer_SetVisibleAuth(swigCPtr, this, auth);
  }

  public int GetEditableAuth() {
    return jniJNI.Layer_GetEditableAuth(swigCPtr, this);
  }

  public void SetEditableAuth(int auth) {
    jniJNI.Layer_SetEditableAuth(swigCPtr, this, auth);
  }

  public FeatureTypeStyle GetFeatureTypeStyle() {
    long cPtr = jniJNI.Layer_GetFeatureTypeStyle(swigCPtr, this);
    return (cPtr == 0) ? null : new FeatureTypeStyle(cPtr, false);
  }

  public void SetFeatureTypeStyle(FeatureTypeStyle ftype) {
    jniJNI.Layer_SetFeatureTypeStyle(swigCPtr, this, FeatureTypeStyle.getCPtr(ftype), ftype);
  }

  public UserDefinedWidget Diagram() {
    long cPtr = jniJNI.Layer_Diagram(swigCPtr, this);
    return (cPtr == 0) ? null : new UserDefinedWidget(cPtr, false);
  }

  public void SetDiagram(UserDefinedWidget dia) {
    jniJNI.Layer_SetDiagram(swigCPtr, this, UserDefinedWidget.getCPtr(dia), dia);
  }

  public Feature GetNextFeature() {
    long cPtr = jniJNI.Layer_GetNextFeature(swigCPtr, this);
    return (cPtr == 0) ? null : new Feature(cPtr, true);
  }

  public void ResetReading() {
    jniJNI.Layer_ResetReading(swigCPtr, this);
  }

  public int GetGeomType() {
    return jniJNI.Layer_GetGeomType(swigCPtr, this);
  }

  public int SetFeature(Feature feature) {
    return jniJNI.Layer_SetFeature(swigCPtr, this, Feature.getCPtr(feature), feature);
  }

  public int DeleteFeature(int fid) {
    return jniJNI.Layer_DeleteFeature(swigCPtr, this, fid);
  }

  public int CreateFeature(Feature feature) {
    return jniJNI.Layer_CreateFeature(swigCPtr, this, Feature.getCPtr(feature), feature);
  }

  public FeatureType GetLayerDefn() {
    long cPtr = jniJNI.Layer_GetLayerDefn(swigCPtr, this);
    return (cPtr == 0) ? null : new FeatureType(cPtr, false);
  }

  public byte[] GetByteData() {
    return jniJNI.Layer_GetByteData(swigCPtr, this);
  }

  public boolean Export(LayerSource oLayerSrc, String pszDstName, java.util.Vector papszSelFields, boolean bAppend, int eGType, boolean bOverwrite, boolean bTransform, SpatialReference poSourceSRS, SpatialReference poOutputSRS, String pszFilter, int nMapIndex, String pszOptions) {
    return jniJNI.Layer_Export(swigCPtr, this, LayerSource.getCPtr(oLayerSrc), oLayerSrc, pszDstName, papszSelFields, bAppend, eGType, bOverwrite, bTransform, SpatialReference.getCPtr(poSourceSRS), poSourceSRS, SpatialReference.getCPtr(poOutputSRS), poOutputSRS, pszFilter, nMapIndex, pszOptions);
  }

  public void AddToFeatureLayer(FeatureLayer oFtLayer) {
    jniJNI.Layer_AddToFeatureLayer(swigCPtr, this, FeatureLayer.getCPtr(oFtLayer), oFtLayer);
  }

  public FeatureLayer GetFeatureLayer(LayerSource oLayerSrc) {
    long cPtr = jniJNI.Layer_GetFeatureLayer(swigCPtr, this, LayerSource.getCPtr(oLayerSrc), oLayerSrc);
    return (cPtr == 0) ? null : new FeatureLayer(cPtr, false);
  }

  public FeatureLayer CreateFeatureLayer(LayerSource oLayerSrc) {
    long cPtr = jniJNI.Layer_CreateFeatureLayer(swigCPtr, this, LayerSource.getCPtr(oLayerSrc), oLayerSrc);
    return (cPtr == 0) ? null : new FeatureLayer(cPtr, false);
  }

  public int GetLabelPosition() {
    return jniJNI.Layer_GetLabelPosition(swigCPtr, this);
  }

  public void SetLabelPosition(int ePos) {
    jniJNI.Layer_SetLabelPosition(swigCPtr, this, ePos);
  }

  public int AddAttribute(FeatureAttributeDescriptor poAttr) {
    return jniJNI.Layer_AddAttribute(swigCPtr, this, FeatureAttributeDescriptor.getCPtr(poAttr), poAttr);
  }

}
