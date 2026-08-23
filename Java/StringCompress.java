
class StringCompress {
    
    public static int compress(char[] chars) {
        // compress consecutive letters into a string, store in input char array
        // compare last char to current char
        // if equal, count increments
        // if not, chars[++idx] = count, chars[++idx] = current, last = current
        // if last element, chars[++idx] = count;
        // return ++idx
        
        int count = 1;
        int idx = 0;
        int last = chars[0]; // suppose that chars[0] is already modified, next is the count
        
        for (int i = 1; i < chars.length; i++) {
            char current = chars[i];
            if (current == last) {
                count++;
            }
            else {
                // append the count for numbers
                if (count > 9) {
                    char[] counts = String.valueOf(count).toCharArray();
                    for (char n: counts) chars[++idx] = n;
                }
                else if (count > 1) chars[++idx] = (char) (count + '0'); 
                chars[++idx] = current;
                last = current;
                count = 1;
            }
            if (i == chars.length - 1) {
                if (count > 9) {
                    char[] counts = String.valueOf(count).toCharArray();
                    for (char n: counts) chars[++idx] = n;
                }
                else if (count > 1) chars[++idx] = (char) (count + '0');
            }
        }

        return ++idx;
    }

    public static void main(String[] args) {
       // ["a","a","b","b","c","c","c"]
        //char[] cs = {'a','b','c','c','c','c','c','c','c','c','c','c','c','c','c','c','c','c','c'};
        char[] cs = {'a', 'b', 'c'};
        System.out.println(compress(cs));
    }

}
