import 'package:flutter/material.dart';
import 'package:introduction_screen/introduction_screen.dart';
import 'package:dots_indicator/dots_indicator.dart';


List<PageViewModel> getPages() {
  return[
    PageViewModel(
      title: "YOGA SURGE",
      bodyWidget: Column(
        children : <Text>[
          Text("Welcome to yoga world\n",style: TextStyle(fontSize: 20.0),),
          Text("Inhale the future,exhale the past"),
        ]
      ),
      image: Center(child: Image.asset("asset/page1.png")),
    ),
    PageViewModel(
      title: "Healthy Freaky Exercises",
      body: "Letting go is the hardest asana.",
      image: Center(child: Image.asset("asset/page2.png")),
    ),
    PageViewModel(
      title: "Cycling",
      body: "You cannot always control what goes on outside.But you can always control what goes on inside.",
      image: Center(child: Image.asset("asset/page3.png")),
    ),
    PageViewModel(
      title: "Meditation",
      body: "The longest journey of any person is the journey inward.",
      image: Center(child: Image.asset("asset/page4.png")),
    ),
  ];
}




