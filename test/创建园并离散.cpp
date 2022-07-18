////¥¥Ω®3d‘≤£¨≤¢¿Î…¢
//const Standard_Real resRadius = pNewPara[6];
//gp_Pnt cent(pNewPara[3], pNewPara[4], pNewPara[5]);
//gp_Dir dir(pNewPara[0], pNewPara[1], pNewPara[2]);
//
//gp_Ax2 anAxis(cent, dir);
//Handle(Geom_Circle) Circle3d = new Geom_Circle(anAxis, resRadius);
//GeomAdaptor_Curve GAC(Circle3d);
//
//Standard_Real abscissa = 0.05;
//GCPnts_UniformAbscissa UA(GAC, abscissa);
//
//std::vector<pointPos>Contour3d;
//int n = UA.NbPoints();
//if (UA.IsDone())
//{
//	for (int i = 1; i <= n; i++)
//	{
//		gp_Pnt gp;
//		Circle3d->D0(UA.Parameter(i), gp);
//		pointPos pnt(gp.X(), gp.Y(), gp.Z());
//		Contour3d.push_back(pnt);
//	}
//}