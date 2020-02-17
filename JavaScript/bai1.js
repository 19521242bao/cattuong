function amendTheSentence(s){
    
	var a='';
	a+=s[0];
	for (let i = 1; i < s.length; i++)
		if (s[i] >= 'A' && s[i] <= 'Z')
		{
			
			a+=' '+s[i];
		}
		else
		{
			a+=s[i];
		}
	var b=a.toLowerCase();
    return b;
}
