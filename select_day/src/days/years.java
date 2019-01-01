package aaa;
import java.awt.BorderLayout;
import java.awt.Button;
import java.awt.FlowLayout;
import java.awt.Frame;
import java.awt.GridLayout;
import java.awt.Label;
import java.awt.Panel;
import java.awt.TextField;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.WindowListener;
public class years extends Frame implements ActionListener{
   private Label year = new Label("year");
   private Label month = new Label("month");
   private Button start = new Button("select");
   private Button quit = new Button("quit");
   private TextField years = new TextField(5);
   private TextField months = new TextField(5);
   String []string = {"日","一","二","三","四","五","六"};
   private TextField days[] = new TextField[35];
   private void setup()
   {
	   Panel top = new Panel();
	   top.setLayout(new FlowLayout());
	   top.add(year);
	   top.add(years);
	   top.add(month);
	   top.add(months);
	   Panel textGrid = new Panel();//新建一个面板类
		textGrid.setLayout(new GridLayout(6, 7));//在面板中增加一个布局管理器，并增加一个Gridlayout()在表格中增加
		for (int i = 0; i < 7; i++) {
			textGrid.add(new Label(string[i]));//增加四个文本框
		}
		for (int i = 0; i < 35; i++) {
		    days[i] = new TextField(5);
		    textGrid.add(days[i]);
		}
		Panel button = new Panel();
		button.setLayout(new FlowLayout());
		button.add(start);
		button.add(quit);
		setLayout(new BorderLayout());
		add("North", top);
		add("Center", textGrid);
		add("South", button);
   }
   public years()
   {
	   setup();
	   quit.addActionListener(this);
	   start.addActionListener(this);
	 
	   pack();
	   show();
   }
	@Override
	public void actionPerformed(ActionEvent e) {
		// TODO Auto-generated method stub
		if(e.getSource()==quit)
			System.exit(0);
		if(e.getSource()==start)
		{
			
			String a = years.getText();
			int years1 = Integer.parseInt(a);
			String b = months.getText();
			int months1 = Integer.parseInt(b);
			input(years1,months1);
		}
		
	}
public void input(int years1,int months1)
{
	// TODO Auto-generated method stub
    //输出21世纪的某一个月的日期表,以2000年1月1日为起点，这天为周六
    int years = years1;
    int month = months1;

  
    int startyear;
    int startmonth;
    int sumdays=0;//到2000年1月1日的天数
    for(startyear=2000;startyear<years;startyear++)
    {
  	  if(startyear%4==0&&startyear%100!=0||startyear%400==0)
  	  {
  		  sumdays = sumdays + 366;
  	  }
  	  else 
  	  {
  		  sumdays = sumdays + 365;
  	  }
    }//计算年份的天数
    
  for(startmonth=1;startmonth<month;startmonth++)
  {
  	if(startmonth==1||startmonth==3||startmonth==5||startmonth==7||startmonth==8||startmonth==10||startmonth==12)
  	{
  		sumdays = sumdays + 31;
  	}
  	if(startmonth==4||startmonth==6||startmonth==9||startmonth==11)
  	{
  		sumdays = sumdays + 30;
  	}
  	if(startmonth==2&&(startyear%4==0&&startyear%100!=0||startyear%400==0))
  	{
  		sumdays = sumdays + 29;
  	}
  	if(startmonth==2&&(!(startyear%4==0&&startyear%100!=0||startyear%400==0)))
  	{
  		sumdays = sumdays + 28;
  	}
  }//计算月份的天数
  sumdays = sumdays + 1;
  int week;
  week = (sumdays+5) % 7;

  int exchange=0;
	if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
	{
		exchange = 31;
	}
	if(month==4||month==6||month==9||month==11)
	{
		exchange = 30;
	}
if(startyear%4==0&&startyear%100!=0||startyear%400==0&&month==2)
{
	exchange = 29;
}
if(!(startyear%4==0&&startyear%100!=0||startyear%400==0)&&month==2)
{
	exchange = 28;
}//判断一个月的天数
int dayday=1;   
int [][]yuefen;
yuefen = new int[5][7]; //二维数组存储数据
 for(int m = 0; m < 5; m++)
 {
	 for(int n = 0;n < 7&&week<7; n++)
         {  
	 if(m==0)
	 {
        yuefen[m][week] = dayday;
        week++;
        if(week==7)
           {
        	week=0;
           }
		     }
           else {
        	   yuefen[m][n] = dayday;
           }
         dayday++;
            if(dayday>exchange)
            {
        	   break;
             }
      }
 if(dayday>exchange)
 {
	 break;
 }
 }
 for(int a = 0; a < week; a++)
 {
	 yuefen[0][a]=0;
 }   
 String xx = "";
 for (int m = 0; m < 5; m++) {
	 for (int n = 0; n < 7; n++) {
		if(yuefen[m][n]!=0)
			xx = xx + yuefen[m][n]+" ";
	}
	
}
 String []aaa = xx.split(" ");
 int  j4 = 0;
   for(int m = 0,i=0; m < 5; m++)
	  {for(int n = 0;n<7;n++,i++)
           {
		  if(yuefen[m][n]==0)
			  days[i].setText("");
		  else
			  {
			  days[i].setText(aaa[j4]);
			  j4++;
			  }
           }
	  System.out.println();
	  }
}
			
public static void main(String[] args) {
	years a = new years();
}
}
