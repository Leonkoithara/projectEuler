class Problem36 {
  private static boolean isPalin(String s) {
    String rev = new StringBuilder(s).reverse().toString();
    if(rev.equals(s))
      return true;
    return false;
  } 
  private static String bin(int num) {
    String binary = "";
    while(num>0) {
      binary = (num%2) + binary;
      num /= 2;
    }
    return binary;
  }
	private static int nextPalin(String s) {
		int i, j;
		int slen = s.length();

		StringBuilder half = new StringBuilder(s.substring(0, slen/2));
		StringBuilder rev = new StringBuilder(half.toString() + half.reverse().toString());

		if(slen%2==1)
			rev.insert(slen/2, s.charAt(slen/2));

		if(rev.toString().compareTo(s) > 0) {
			return Integer.parseInt(rev.toString());
		}
		else {
			if(slen%2==0) {
				if(rev.charAt(slen/2 - 1)==57){
					for(i=slen/2 - 1, j=slen/2; ;i--,j++) {
						if(rev.charAt(i)==57) {
							if(i==0) {
								rev.setLength(slen+1);
								rev.setCharAt(i, '1');
								rev.setCharAt(j, '0');
								rev.setCharAt(j+1, '1');
								break;
							}
							else{
								rev.setCharAt(i, '0');
								rev.setCharAt(j, '0');
							}
						}
						else {
							char ic = rev.charAt(i);
							ic += 1;
							char jc = rev.charAt(j);
							jc += 1;
							rev.setCharAt(i, ic);
							rev.setCharAt(j, jc);
							break;
						}
					}
				}
				else{
					char ic = rev.charAt(slen/2-1);
					ic += 1;
					char jc = rev.charAt(slen/2);
					jc += 1;
					rev.setCharAt(slen/2-1, ic);
					rev.setCharAt(slen/2, jc);
				}
			  return Integer.parseInt(rev.toString());
			}
			else {
        if(rev.toString().equals("9"))
          return Integer.parseInt("11");
				else if(rev.charAt(slen/2)==57){
					rev.setCharAt(slen/2,'0');
					for(i=slen/2-1, j=slen/2+1; ;i--,j++) {
						if(rev.charAt(i)==57) {
							if(i==0) {
								rev.setLength(slen+1);
								rev.setCharAt(i, '1');
								rev.setCharAt(j, '0');
								rev.setCharAt(j+1, '1');
								break;
							}
							else {
								rev.setCharAt(i, '0');
								rev.setCharAt(j, '0');
							}
						}
						else {
							char ic = rev.charAt(i);
							ic += 1;
							char jc = rev.charAt(j);
							jc += 1;
							rev.setCharAt(i, ic);
							rev.setCharAt(j, jc);
							break;
						}
					}
				}
				else{
					char sc = rev.charAt(slen/2);
					sc += 1;
			  	rev.setCharAt(slen/2, sc);
				}
				return Integer.parseInt(rev.toString());
			}
		}
	}
	public static void main(String[] args) {
    int i=1, sum=1;
    while(true) {
      i = nextPalin(Integer.toString(i));
      if(i<1000000) {
        if(isPalin(bin(i)))
          sum += i;
      }
      else
        break;
    }
    System.out.println(sum);
    System.exit(0);
	}
}
