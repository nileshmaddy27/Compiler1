if(lang==="C" || lang==="CPP")
    {
        if(inputRadio==="true"){
            var envData={OS: "windows", cmd:"g++", options:{timeout:10000}};
        
            compiler.compileCPPWithInput(envData, code, input, function(data){
                if(data.error)
                {
                    res.send(data.error);

                }
                else{
                    res.send(data.output);
                }
            });
        }
        else{
            var envData={OS: "windows", cmd: "g++", options:{timeout:10000}};
            compiler.compileCPP(envData, code, function(data){
                res.send(data);
                //data.error
                //data.output=output value
            });
            
        }
    }