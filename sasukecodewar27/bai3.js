function kthBiggestFrequency(a, k){
    dem={};
    for(let i=0;i<a.length;i++)
   {
    if(!dem.hasOwnProperty(a[i]))
      dem[a[i]]=1;
    else
      dem[a[i]]++;
  }
  
  var obj=Object.keys(dem);
 
   arr=[];
  
  
   for(let i=0;i<obj.length;i++)
     arr.push(dem[obj[i]]);
   arr.sort();
   arr.reverse();
  
   if(a.length==0||k<=0)
     return -1;
  


   var arr1=[];

    for(let i=0;i<arr.length;i++)
    {
       let s=arr[i];
        if (arr1.indexOf(s) === -1) {
            arr1.push(s);
    }
    }
var b=[]
      var cout=arr1[k-1];

   for(let i=0;i<obj.length;i++)
     if(dem[obj[i]]==cout)
     {
        b.push(obj[i]);
     }  
   for(let i=0;i<a.length;i++)
    for(let j=0;j<b.length;j++)
      if(a[i]==b[j])
        return a[i];
         


  return -1;
}