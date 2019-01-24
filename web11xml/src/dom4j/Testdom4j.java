package dom4j;

import java.util.List;

import org.dom4j.Document;
import org.dom4j.DocumentException;
import org.dom4j.Element;
import org.dom4j.io.SAXReader;
import org.junit.Test;

public class Testdom4j {

	@Test
	public void testReadSchema() {
		//1,��ý�����
		SAXReader saxReader = new SAXReader();
		//2,���document�ĵ�����
		try {
			Document doc = saxReader.read("src/XSD/Schena.xml");
		//3,��ȡ��Ԫ��
			Element ele = doc.getRootElement();
			System.out.println(ele.getName());//��ø�Ԫ�ص�name
			System.out.println(ele.attributeValue("version"));//��ȡ��Ԫ�ص�����ֵ
		//4,��ȡ��Ԫ���µ���Ԫ��
			List<Element> childElement = ele.elements();
		//5,������Ԫ��--->���������Ľڵ�����ͬ�ġ�
			for (Element element:childElement) {
				if("servlet".equals(element.getName()))
				{
					
				}
			}
		} catch (DocumentException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		
	}
	
}
