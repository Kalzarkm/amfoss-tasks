function but1() {
    localStorage.setItem("1","hello");
    localStorage.getItem("1");
}


function but3() {
    document.body.style.background ="red";
}

function but4() {
    window.location.reload(true);
}


function but2() {
    alert(new Date().toUTCString());
}



function but5() {
   var newWin= window.open("","","width=1000,height=1000");
    newWin.document.write("This is a new window");
}

function but6() {
    result= window.confirm("WARNING: Might Crash browser");
    if (result==true)
    {
        while(true){
            console.log("I did it\n");
        }
    }
}
