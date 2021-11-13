import 'package:flutter/material.dart';
import 'package:introduction_screen/introduction_screen.dart';
import 'package:dots_indicator/dots_indicator.dart';
import 'pages.dart';

void main() => runApp(MaterialApp(
  theme: new ThemeData(scaffoldBackgroundColor:Color(0xFFD3C8C5)),
  home:HomeScreen(),
),
);

class HomeScreen extends StatelessWidget {
  gotoSecondActivity(BuildContext context){

    Navigator.push(
      context,
      MaterialPageRoute(builder: (context) => SecondScreen()),
    );
  }

  Widget build(BuildContext context) {
    return Scaffold(
        body: IntroductionScreen(
          showSkipButton: true,
          showDoneButton: true,
          showNextButton: true,
          next: Text("Next"),
          done: Text("Get Started"),
          skip: Text("Skip"),
          dotsDecorator: DotsDecorator(
            size: const Size.square(9.0),
            activeSize: const Size(18.0, 9.0),
            activeShape: RoundedRectangleBorder(borderRadius: BorderRadius.circular(5.0)),
            spacing: EdgeInsets.all(4),
          ),
          onDone: () { gotoSecondActivity(context);},
          pages: getPages(),
        )
    );
  }
}


class SecondScreen extends StatelessWidget {

  goBackToPreviousScreen(BuildContext context){

    Navigator.pop(context);

  }

  Widget build(BuildContext context) {
    return Scaffold(
      appBar:AppBar(
        title: Text("Welcome"),
      ),
      body: Column(
        children: <Widget>[
          Center(
          child: Image(image: AssetImage("asset/welcome.png")),
          ),
          Center(
            child: Text("Shiv Sanjay",style: TextStyle(fontSize: 30,fontWeight: FontWeight.bold)),
          ),
          Padding(
            padding: EdgeInsets.all(15),
            child: Text("Hello my name is Shiv Sanjay and I am from Thiruvananthapuram. I am 18 "
                "years old and I am a First year student of Amrita Vishwa Vidyapeetham "
                "in the BCA course.\nI have interests in the GNU/Linux system and FOSS projects"
                " in general. My favourite "
                " language is C++.",style: TextStyle(fontSize: 20),textAlign: TextAlign.justify,),
          ),
        ]
      ),
    );
  }
}