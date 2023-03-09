package classtest21;

import java.util.*;


/*
 * 
 * Create a method that accepts a character array and count the number of times each
 *  character is present in the array. Add how many times each character is present 
 *  to a hash map with the character as key and the repetitions count as value
Method Name 	countCharacter 
Method Description 	Count the number of occurrence of each character in a Character array 
Argument 	char[] 
Return Type 	map 
Logic 	Count the number of times each character appears in the array. Add the details into a hash map with character as key and count as value. 
Example: 
{‘A’,’P’,’P’,’L’,’E’} 
Output: Will be hashmap with the following contents{‘A’:1,’P’:2,’L’:1,’E’:1} 
 */
//Java program to count frequencies of
//characters in string using Hashmap

class Pro2 {
	static Map<Character, Integer> characterCount(String inputString)//ShivamSii
	{
		HashMap<Character, Integer> charCountMap = new HashMap<Character, Integer>();
		char[] strArray = inputString.toCharArray();//ShivamSii
		for (char c : strArray) {
			if (charCountMap.containsKey(c)) {
				charCountMap.put(c, charCountMap.get(c) + 1);
			}
			else {
				charCountMap.put(c, 1);
			}
		}
		return charCountMap;
	}

	// Driver Code
	public static void main(String[] args)
	{
		String str = "ShivamSii";
		System.out.println(Pro2.characterCount(str));
	}
}