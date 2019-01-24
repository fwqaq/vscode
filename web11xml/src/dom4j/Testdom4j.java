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
		//1,获得解析器
		SAXReader saxReader = new SAXReader();
		//2,获得document文档对象
		try {
			Document doc = saxReader.read("src/XSD/Schena.xml");
		//3,获取根元素
			Element ele = doc.getRootElement();
			System.out.println(ele.getName());//获得根元素的name
			System.out.println(ele.attributeValue("version"));//获取根元素的属性值
		//4,获取根元素下的子元素
			List<Element> childElement = ele.elements();
		//5,遍历子元素--->跟遍历树的节点是相同的。
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
