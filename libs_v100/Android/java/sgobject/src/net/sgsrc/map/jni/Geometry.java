/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.7
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package net.sgsrc.map.jni;

import net.joymap.jni.GeometryNative;
import net.joymap.jni.SpatialReference;
import net.joymap.jni.CoordinateTransformation;

public class Geometry implements Cloneable {
  private long swigCPtr;
  private GeometryNative nativeObject;

  protected Geometry(long cPtr, boolean cMemoryOwn) {
    if (cPtr == 0)
        throw new RuntimeException();
    swigCPtr = cPtr;
    if (cMemoryOwn)
        nativeObject = new GeometryNative(this, cPtr);
  }
  
  public static long getCPtr(Geometry obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  public void delete() 
   {
      if (nativeObject != null)
      {
        nativeObject.delete();
        nativeObject = null;
      }
   }


  private Object parentReference;

  protected static long getCPtrAndDisown(Geometry obj) {
    if (obj != null)
    {
        if (obj.nativeObject == null)
            throw new RuntimeException("Cannot disown an object that was not owned...");
        obj.nativeObject.dontDisposeNativeResources();
        obj.nativeObject = null;
        obj.parentReference = null;
    }
    return getCPtr(obj);
  }

  /* Ensure that the GC doesn't collect any parent instance set from Java */
  protected void addReference(Object reference) {
    parentReference = reference;
  }

  public int hashCode() {
     return (int)swigCPtr;
  }

  public Object clone()
  {
      return Clone();
  }

  public double[] GetPoint_2D(int iPoint)
  {
      double[] coords = new double[2];
      GetPoint_2D(iPoint, coords);
      return coords;
  }

  public double[] GetPoint(int iPoint)
  {
      double[] coords = new double[3];
      GetPoint(iPoint, coords);
      return coords;
  }

  public static Geometry CreateFromWkt(String wkt)
  {
      return jni.CreateGeometryFromWkt(wkt);
  }

  public static Geometry CreateFromWkb(byte[] wkb)
  {
      return jni.CreateGeometryFromWkb(wkb);
  }

  public static Geometry CreateFromGML(String gml)
  {
      return jni.CreateGeometryFromGML(gml);
  }

  /*public static Geometry CreateFromJson(String json)
  {
      return jni.CreateGeometryFromJson(json);
  }*/

  public int ExportToWkb(byte[] wkbArray, int byte_order)
  {
      if (wkbArray == null)
          throw new NullPointerException();
      byte[] srcArray = ExportToWkb(byte_order);
      if (wkbArray.length < srcArray.length)
          throw new RuntimeException("Array too small");

      System.arraycopy( srcArray, 0, wkbArray, 0, srcArray.length );

      return 0;
  }


  public void Destroy() {
    jniJNI.Geometry_Destroy(swigCPtr, this);
  }

  public int ExportToWkt(String[] argout) {
    return jniJNI.Geometry_ExportToWkt__SWIG_0(swigCPtr, this, argout);
  }

  public byte[] ExportToWkb(int byte_order) {
    return jniJNI.Geometry_ExportToWkb__SWIG_0(swigCPtr, this, byte_order);
  }

  public byte[] ExportToWkb() {
    return jniJNI.Geometry_ExportToWkb__SWIG_1(swigCPtr, this);
  }

  public String ExportToGML(java.util.Vector options) {
    return jniJNI.Geometry_ExportToGML__SWIG_0(swigCPtr, this, options);
  }

  public String ExportToGML() {
    return jniJNI.Geometry_ExportToGML__SWIG_1(swigCPtr, this);
  }

  public String ExportToKML(String altitude_mode) {
    return jniJNI.Geometry_ExportToKML__SWIG_0(swigCPtr, this, altitude_mode);
  }

  public String ExportToKML() {
    return jniJNI.Geometry_ExportToKML__SWIG_1(swigCPtr, this);
  }

  public int AddGeometryDirectly(Geometry other_disown) {
    int ret = jniJNI.Geometry_AddGeometryDirectly(swigCPtr, this, Geometry.getCPtrAndDisown(other_disown), other_disown);
    if (other_disown != null)
        other_disown.addReference(this);
    return ret;
  }

  public int AddGeometry(Geometry other) {
    return jniJNI.Geometry_AddGeometry(swigCPtr, this, Geometry.getCPtr(other), other);
  }

  public int GetCoordinateDimension() {
    return jniJNI.Geometry_GetCoordinateDimension(swigCPtr, this);
  }

  public void SetCoordinateDimension(int dimension) {
    jniJNI.Geometry_SetCoordinateDimension(swigCPtr, this, dimension);
  }

  public int GetDimension() {
    return jniJNI.Geometry_GetDimension(swigCPtr, this);
  }

  public SpatialReference GetSpatialReference() {
    long cPtr = jniJNI.Geometry_GetSpatialReference(swigCPtr, this);
    return (cPtr == 0) ? null : new SpatialReference(cPtr, true);
  }

  public void SetReference(SpatialReference reference) {
    jniJNI.Geometry_SetReference(swigCPtr, this, SpatialReference.getCPtr(reference), reference);
  }

  public boolean IsEmpty() {
    return jniJNI.Geometry_IsEmpty(swigCPtr, this);
  }

  public boolean IsSimple() {
    return jniJNI.Geometry_IsSimple(swigCPtr, this);
  }

  public int GetGeometryType() {
    return jniJNI.Geometry_GetGeometryType(swigCPtr, this);
  }

  public String GetGeometryName() {
    return jniJNI.Geometry_GetGeometryName(swigCPtr, this);
  }

  public void SetEmpty() {
    jniJNI.Geometry_SetEmpty(swigCPtr, this);
  }

  public Geometry Clone() {
    long cPtr = jniJNI.Geometry_Clone(swigCPtr, this);
    return (cPtr == 0) ? null : new Geometry(cPtr, true);
  }

  public Geometry Project(SpatialReference srs) {
    long cPtr = jniJNI.Geometry_Project(swigCPtr, this, SpatialReference.getCPtr(srs), srs);
    return (cPtr == 0) ? null : new Geometry(cPtr, false);
  }

  public void Extent2D(SWIGTYPE_p_double minx, SWIGTYPE_p_double miny, SWIGTYPE_p_double maxx, SWIGTYPE_p_double maxy) {
    jniJNI.Geometry_Extent2D(swigCPtr, this, SWIGTYPE_p_double.getCPtr(minx), SWIGTYPE_p_double.getCPtr(miny), SWIGTYPE_p_double.getCPtr(maxx), SWIGTYPE_p_double.getCPtr(maxy));
  }

  public boolean IsValid() {
    return jniJNI.Geometry_IsValid(swigCPtr, this);
  }

  public void ImportFromWKB(SWIGTYPE_p_unsigned_char wkb) {
    jniJNI.Geometry_ImportFromWKB(swigCPtr, this, SWIGTYPE_p_unsigned_char.getCPtr(wkb));
  }

  public void ImportFromWKT(String wkt) {
    jniJNI.Geometry_ImportFromWKT(swigCPtr, this, wkt);
  }

  public boolean Equals(Geometry other) {
    return jniJNI.Geometry_Equals(swigCPtr, this, Geometry.getCPtr(other), other);
  }

  public boolean Touches(Geometry other) {
    return jniJNI.Geometry_Touches(swigCPtr, this, Geometry.getCPtr(other), other);
  }

  public boolean Contains(Geometry other) {
    return jniJNI.Geometry_Contains(swigCPtr, this, Geometry.getCPtr(other), other);
  }

  public boolean Within(Geometry other) {
    return jniJNI.Geometry_Within(swigCPtr, this, Geometry.getCPtr(other), other);
  }

  public boolean Disjoint(Geometry other) {
    return jniJNI.Geometry_Disjoint(swigCPtr, this, Geometry.getCPtr(other), other);
  }

  public boolean Crosses(Geometry other) {
    return jniJNI.Geometry_Crosses(swigCPtr, this, Geometry.getCPtr(other), other);
  }

  public boolean Overlaps(Geometry other) {
    return jniJNI.Geometry_Overlaps(swigCPtr, this, Geometry.getCPtr(other), other);
  }

  public boolean Intersects(Geometry other) {
    return jniJNI.Geometry_Intersects(swigCPtr, this, Geometry.getCPtr(other), other);
  }

  public int Relate(Geometry other, String relate) {
    return jniJNI.Geometry_Relate(swigCPtr, this, Geometry.getCPtr(other), other, relate);
  }

  public double Distance(Geometry other) {
    return jniJNI.Geometry_Distance(swigCPtr, this, Geometry.getCPtr(other), other);
  }

  public Geometry Boundary() {
    long cPtr = jniJNI.Geometry_Boundary(swigCPtr, this);
    return (cPtr == 0) ? null : new Geometry(cPtr, true);
  }

  public Geometry GetBoundary() {
    long cPtr = jniJNI.Geometry_GetBoundary(swigCPtr, this);
    return (cPtr == 0) ? null : new Geometry(cPtr, true);
  }

  public Geometry Buffer(double distance, int quadsecs) {
    long cPtr = jniJNI.Geometry_Buffer__SWIG_0(swigCPtr, this, distance, quadsecs);
    return (cPtr == 0) ? null : new Geometry(cPtr, true);
  }

  public Geometry Buffer(double distance) {
    long cPtr = jniJNI.Geometry_Buffer__SWIG_1(swigCPtr, this, distance);
    return (cPtr == 0) ? null : new Geometry(cPtr, true);
  }

  public Geometry ConvexHull() {
    long cPtr = jniJNI.Geometry_ConvexHull(swigCPtr, this);
    return (cPtr == 0) ? null : new Geometry(cPtr, true);
  }

  public Geometry Intersection(Geometry other) {
    long cPtr = jniJNI.Geometry_Intersection(swigCPtr, this, Geometry.getCPtr(other), other);
    return (cPtr == 0) ? null : new Geometry(cPtr, true);
  }

  public Geometry Union(Geometry other) {
    long cPtr = jniJNI.Geometry_Union(swigCPtr, this, Geometry.getCPtr(other), other);
    return (cPtr == 0) ? null : new Geometry(cPtr, true);
  }

  public Geometry Difference(Geometry other) {
    long cPtr = jniJNI.Geometry_Difference(swigCPtr, this, Geometry.getCPtr(other), other);
    return (cPtr == 0) ? null : new Geometry(cPtr, true);
  }

  public Geometry SymDifference(Geometry other) {
    long cPtr = jniJNI.Geometry_SymDifference(swigCPtr, this, Geometry.getCPtr(other), other);
    return (cPtr == 0) ? null : new Geometry(cPtr, true);
  }

  public Geometry SymmetricDifference(Geometry other) {
    long cPtr = jniJNI.Geometry_SymmetricDifference(swigCPtr, this, Geometry.getCPtr(other), other);
    return (cPtr == 0) ? null : new Geometry(cPtr, true);
  }

  public Geometry MoveDistance(double dlLenX, double dlLenY) {
    long cPtr = jniJNI.Geometry_MoveDistance(swigCPtr, this, dlLenX, dlLenY);
    return (cPtr == 0) ? null : new Geometry(cPtr, false);
  }

  public Geometry MoveAngle(double dlLength, long nAngle) {
    long cPtr = jniJNI.Geometry_MoveAngle(swigCPtr, this, dlLength, nAngle);
    return (cPtr == 0) ? null : new Geometry(cPtr, false);
  }

  public Geometry Rotate(double dlStandX, double dlStandY, long nAngle) {
    long cPtr = jniJNI.Geometry_Rotate(swigCPtr, this, dlStandX, dlStandY, nAngle);
    return (cPtr == 0) ? null : new Geometry(cPtr, false);
  }

  public Geometry Scale(double dlStandX, double dlStandY, double dlSX, double dlSY) {
    long cPtr = jniJNI.Geometry_Scale(swigCPtr, this, dlStandX, dlStandY, dlSX, dlSY);
    return (cPtr == 0) ? null : new Geometry(cPtr, false);
  }

  public double HausdorffDistance(Geometry other) {
    return jniJNI.Geometry_HausdorffDistance(swigCPtr, this, Geometry.getCPtr(other), other);
  }

  public double HausdorffDistanceDensify(Geometry other, double densifyFrac) {
    return jniJNI.Geometry_HausdorffDistanceDensify(swigCPtr, this, Geometry.getCPtr(other), other, densifyFrac);
  }

  public Geometry UnionCascaded() {
    long cPtr = jniJNI.Geometry_UnionCascaded(swigCPtr, this);
    return (cPtr == 0) ? null : new Geometry(cPtr, true);
  }

  public Geometry Simplify(double tolerance) {
    long cPtr = jniJNI.Geometry_Simplify(swigCPtr, this, tolerance);
    return (cPtr == 0) ? null : new Geometry(cPtr, false);
  }

  public Geometry TopologyPreserveSimplify(double tolerance) {
    long cPtr = jniJNI.Geometry_TopologyPreserveSimplify(swigCPtr, this, tolerance);
    return (cPtr == 0) ? null : new Geometry(cPtr, false);
  }

  public Geometry Interpolate(double distance) {
    long cPtr = jniJNI.Geometry_Interpolate(swigCPtr, this, distance);
    return (cPtr == 0) ? null : new Geometry(cPtr, false);
  }

  public Geometry InterpolateNormalized(double dlRate) {
    long cPtr = jniJNI.Geometry_InterpolateNormalized(swigCPtr, this, dlRate);
    return (cPtr == 0) ? null : new Geometry(cPtr, false);
  }

  public Geometry BufferWithStyle(double width, int quadsegs, int endCapStyle, int joinStyle, double mitreLimit) {
    long cPtr = jniJNI.Geometry_BufferWithStyle(swigCPtr, this, width, quadsegs, endCapStyle, joinStyle, mitreLimit);
    return (cPtr == 0) ? null : new Geometry(cPtr, false);
  }

  public Geometry SingleSidedBuffer(double width, int quadsegs, int joinStyle, double mitreLimit, int bLeftSide) {
    long cPtr = jniJNI.Geometry_SingleSidedBuffer(swigCPtr, this, width, quadsegs, joinStyle, mitreLimit, bLeftSide);
    return (cPtr == 0) ? null : new Geometry(cPtr, false);
  }

  public Geometry NearestPoint(Geometry other) {
    long cPtr = jniJNI.Geometry_NearestPoint(swigCPtr, this, Geometry.getCPtr(other), other);
    return (cPtr == 0) ? null : new Geometry(cPtr, false);
  }

  public Geometry LineMerge() {
    long cPtr = jniJNI.Geometry_LineMerge(swigCPtr, this);
    return (cPtr == 0) ? null : new Geometry(cPtr, false);
  }

  public double GetX(int point) {
    return jniJNI.Geometry_GetX__SWIG_0(swigCPtr, this, point);
  }

  public double GetX() {
    return jniJNI.Geometry_GetX__SWIG_1(swigCPtr, this);
  }

  public double GetY(int point) {
    return jniJNI.Geometry_GetY__SWIG_0(swigCPtr, this, point);
  }

  public double GetY() {
    return jniJNI.Geometry_GetY__SWIG_1(swigCPtr, this);
  }

  public double GetZ(int point) {
    return jniJNI.Geometry_GetZ__SWIG_0(swigCPtr, this, point);
  }

  public double GetZ() {
    return jniJNI.Geometry_GetZ__SWIG_1(swigCPtr, this);
  }

  public void SetX(int index, double x) {
    jniJNI.Geometry_SetX(swigCPtr, this, index, x);
  }

  public void SetY(int index, double y) {
    jniJNI.Geometry_SetY(swigCPtr, this, index, y);
  }

  public void SetZ(int index, double z) {
    jniJNI.Geometry_SetZ(swigCPtr, this, index, z);
  }

  public void Coords(SWIGTYPE_p_double x, SWIGTYPE_p_double y) {
    jniJNI.Geometry_Coords(swigCPtr, this, SWIGTYPE_p_double.getCPtr(x), SWIGTYPE_p_double.getCPtr(y));
  }

  public double GetLength() {
    return jniJNI.Geometry_GetLength(swigCPtr, this);
  }

  public int IsClosed() {
    return jniJNI.Geometry_IsClosed(swigCPtr, this);
  }

  public Geometry StartPoint() {
    long cPtr = jniJNI.Geometry_StartPoint(swigCPtr, this);
    return (cPtr == 0) ? null : new Geometry(cPtr, false);
  }

  public Geometry EndPoint() {
    long cPtr = jniJNI.Geometry_EndPoint(swigCPtr, this);
    return (cPtr == 0) ? null : new Geometry(cPtr, false);
  }

  public Geometry Value(double distance) {
    long cPtr = jniJNI.Geometry_Value(swigCPtr, this, distance);
    return (cPtr == 0) ? null : new Geometry(cPtr, false);
  }

  public boolean IsRing() {
    return jniJNI.Geometry_IsRing(swigCPtr, this);
  }

  public boolean IsPointInRing(Geometry pt) {
    return jniJNI.Geometry_IsPointInRing(swigCPtr, this, Geometry.getCPtr(pt), pt);
  }

  public boolean IsPointOnRingBoundary(Geometry pt) {
    return jniJNI.Geometry_IsPointOnRingBoundary(swigCPtr, this, Geometry.getCPtr(pt), pt);
  }

  public int GetNumPoints() {
    return jniJNI.Geometry_GetNumPoints(swigCPtr, this);
  }

  public void GetPoint(int iPoint, double[] argout) {
    jniJNI.Geometry_GetPoint(swigCPtr, this, iPoint, argout);
  }

  public void GetPoint_2D(int iPoint, double[] argout) {
    jniJNI.Geometry_GetPoint_2D(swigCPtr, this, iPoint, argout);
  }

  public void SetPoint(int point, double x, double y, double z) {
    jniJNI.Geometry_SetPoint__SWIG_0(swigCPtr, this, point, x, y, z);
  }

  public void SetPoint(int point, double x, double y) {
    jniJNI.Geometry_SetPoint__SWIG_1(swigCPtr, this, point, x, y);
  }

  public void SetPoint_2D(int point, double x, double y) {
    jniJNI.Geometry_SetPoint_2D(swigCPtr, this, point, x, y);
  }

  public void AddPoint(double x, double y, double z) {
    jniJNI.Geometry_AddPoint__SWIG_0(swigCPtr, this, x, y, z);
  }

  public void AddPoint(double x, double y) {
    jniJNI.Geometry_AddPoint__SWIG_1(swigCPtr, this, x, y);
  }

  public void AddPoint_2D(double x, double y) {
    jniJNI.Geometry_AddPoint_2D(swigCPtr, this, x, y);
  }

  public void RemovePoint(int iPoint) {
    jniJNI.Geometry_RemovePoint(swigCPtr, this, iPoint);
  }

  public double GetArea() {
    return jniJNI.Geometry_GetArea(swigCPtr, this);
  }

  public Geometry PointOnSurface() {
    long cPtr = jniJNI.Geometry_PointOnSurface(swigCPtr, this);
    return (cPtr == 0) ? null : new Geometry(cPtr, false);
  }

  public int GetNumInteriorRings() {
    return jniJNI.Geometry_GetNumInteriorRings(swigCPtr, this);
  }

  public Geometry ExteriorRing() {
    long cPtr = jniJNI.Geometry_ExteriorRing(swigCPtr, this);
    return (cPtr == 0) ? null : new Geometry(cPtr, false);
  }

  public Geometry InteriorRing(int iRing) {
    long cPtr = jniJNI.Geometry_InteriorRing(swigCPtr, this, iRing);
    return (cPtr == 0) ? null : new Geometry(cPtr, false);
  }

  public boolean IsPointOnSurface(Geometry pt) {
    return jniJNI.Geometry_IsPointOnSurface(swigCPtr, this, Geometry.getCPtr(pt), pt);
  }

  public int GetNumGeometries() {
    return jniJNI.Geometry_GetNumGeometries(swigCPtr, this);
  }

  public int GetGeometryCount() {
    return jniJNI.Geometry_GetGeometryCount(swigCPtr, this);
  }

  public Geometry GetGeometry(int i) {
    long cPtr = jniJNI.Geometry_GetGeometry(swigCPtr, this, i);
    return (cPtr == 0) ? null : new Geometry(cPtr, false);
  }

  public void CloseRings() {
    jniJNI.Geometry_CloseRings(swigCPtr, this);
  }

  public void FlattenTo2D() {
    jniJNI.Geometry_FlattenTo2D(swigCPtr, this);
  }

  public void Segmentize(double dfMaxLength) {
    jniJNI.Geometry_Segmentize(swigCPtr, this, dfMaxLength);
  }

  public void GetEnvelope(double[] argout) {
    jniJNI.Geometry_GetEnvelope(swigCPtr, this, argout);
  }

  public int WkbSize() {
    return jniJNI.Geometry_WkbSize(swigCPtr, this);
  }

  public Geometry(int type, String wkt, byte[] nLen, String gml) {
    this(jniJNI.new_Geometry__SWIG_0(type, wkt, nLen, gml), true);
  }

  public Geometry(int type) {
    this(jniJNI.new_Geometry__SWIG_1(type), true);
  }

  public String ExportToWkt() {
    return jniJNI.Geometry_ExportToWkt__SWIG_1(swigCPtr, this);
  }

  public Geometry Centroid() {
    long cPtr = jniJNI.Geometry_Centroid(swigCPtr, this);
    return (cPtr == 0) ? null : new Geometry(cPtr, true);
  }

}
