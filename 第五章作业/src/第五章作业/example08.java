package ��������ҵ;

import java.util.Properties;
import java.util.Set;

public class example08 {
public static void main(String[] args) {
	Properties pro = System.getProperties();
	System.out.println(pro);//���ص�ǰ��ϵͳ����
	Set<String> set = pro.stringPropertyNames();
	for (String key:set)
	{
		String value = System.getProperty(key);
		System.out.println(key+"->"+value);
	}
}
}
