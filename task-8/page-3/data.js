// Returns a json data for chart 
// The data tells about the sale of particular pizza on a random day

function getRandomJson() {
    var cdata = [{
        "_id": "585b544f5c86b6c8537c34d6",
        "pizza": "Pepperoni",
        "sold": Math.floor(Math.random() * (100 - 20 + 1)) + 20,
    }, {/* w w  w . d  em o  2s .c o m*/
        "_id": "585b54505c86b6c8537c34d7",
        "pizza": "Farmhouse",
        "sold": Math.floor(Math.random() * (80 - 1 + 1)) + 1,
    }, {
        "_id": "585b54515c86b6c8537c34d8",
        "pizza": "Veggie Paradise",
        "sold": Math.floor(Math.random() * (90 - 20 + 1)) + 20,
    }, {
        "_id": "585b54525c86b6c8537c34d9",
        "pizza": "Peppy Panner",
        "sold": Math.floor(Math.random() * (50 - 40 + 1)) + 40,
    }, {
        "_id": "585b54535c86b6c8537c34da",
        "pizza": "VEGGIE PARADISE",
        "sold": Math.floor(Math.random() * (85 - 20 + 1)) + 20,
    }];
    return cdata;
}

const grj= getRandomJson();
const soldarr=[];
const namearr=[];



function pizzaName(){
    for( i=0;i<grj.length;i++)
    {
        x= grj[i].pizza;
        namearr.push(x);
    }
}


function pizzaSold(){
    for( i=0;i<grj.length;i++)
    {
        x= grj[i].sold;
        soldarr.push(x);
    }
}


function theChart() {

  var ctx = document.getElementById('myChart');
  var myChart= new Chart(ctx, {
      type: 'pie',
      data: {
          labels: namearr,
          datasets: [{
              label: 'Sold',
              data: soldarr,
              backgroundColor:[
                  'rgb(255, 99, 132)',
                  'rgb(54, 162, 235)',
                  'rgb(255, 205, 86)',
                  'rgb(255, 255, 255)',
                  'rgb(81, 177, 11)',
              ],
          }]

      },
  });
}
