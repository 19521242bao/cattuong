function numberDifferent(a){

    dem={};
    for(let i=0;i<a.length;i++)
   {
    if(!dem.hasOwnProperty(a[i]))
      dem[a[i]]=1;
    else
      dem[a[i]]++;
  }
    var obj=Object.keys(dem);
    var cout=0;
    for(let i=1;i<obj.length;i++)
      if(dem[obj[0]]==dem[obj[i]])
          cout++;
     if(cout==0)
        return obj[0];
      for(let i=1;i<obj.length;i++)
        if(dem[obj[0]]!=dem[obj[i]])
          return obj[i];
  }
  