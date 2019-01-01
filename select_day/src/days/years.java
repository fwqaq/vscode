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
   String []string = {"��","һ","��","��","��","��","��"};
   private TextField days[] = new TextField[35];
   private void setup()
   {
	   Panel top = new Panel();
	   top.setLayout(new FlowLayout());
	   top.add(year);
	   top.add(years);
	   top.add(month);
	   top.add(months);
	   Panel textGrid = new Panel();//�½�һ�������
		textGrid.setLayout(new GridLayout(6, 7));//�����������һ�����ֹ�������������һ��Gridlayout()�ڱ��������
		for (int i = 0; i < 7; i++) {
			textGrid.add(new Label(string[i]));//�����ĸ��ı���
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
    //���21���͵�ĳһ���µ����ڱ�,��2000��1��1��Ϊ��㣬����Ϊ����
    int years = years1;
    int month = months1;

  
    int startyear;
    int startmonth;
    int sumdays=0;//��2000��1��1�յ�����
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
    }//������ݵ�����
    
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
  }//�����·ݵ�����
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
}//�ж�һ���µ�����
int dayday=1;   
int [][]yuefen;
yuefen = new int[5][7]; //��ά����洢����
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
