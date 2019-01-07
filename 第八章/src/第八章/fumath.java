package ╣з╟куб;

public class fumath {
  double shishu;
  double xushu;
  public void fumath()
  {
	   shishu = 0;
	   xushu = 0;   
  }
  public void fumath(double shishu1,double xushu1)
  {
	  shishu = shishu1;
	  xushu = xushu1;
  }
  public void put()
  {
	System.out.print(String.format("%.4f", shishu)+"+"+String.format("%.4f", xushu)+"j"); 
  }
}
