Create directory ```Coordinates-Location``` using ```mkdir Coordinates-Location``` command then use ```cd Coordinates-Location``` command to enter into the directory. 

### North 
- Create directory ```North``` similarly/ and enter using ```cd North```.\
- Now create a text file ```NDegree.txt``` using ```vim NDegree.txt``` then find the solution and save and exit the file with ```wq```.\
- Similarly create a file called ```NMinutes.txt``` and find the answer and save and exit the file.\
- Now similarly create a file ```NSeconds``` input answers and save and exit the file.\
- Now create the file ```NorthCoordinate.txt``` using ```touch NorthCoordinate.txt``` and do ```cat >> NorthCoordinate.txt NDegree.txt NMinutes.txt NSeconds.txt``` to combine the files and save it to NorthCoordinate.txt./
- Now copy ```NorthCoordinate.txt``` and move it to ```Coordinate-Location``` directory using command ```cp NorthCoordinate.txt ../``` .
- Then delete ```NorthCoordinate.txt``` file using ```rm NorthCoordinate.txt```.\
- The move to ```Coordinate-Location``` directory using ```cd ..``` then do ```mv NorthCoordinate.txt North.txt``` to rename the file.

### East
- Create directory ```East``` using ```mkdir East ``` and enter the directory using ```cd East```
- Now create a text file ```EDegree.txt``` using ```vim EDegree.txt``` then find the solution and save and exit the file with ```wq```.\
- Similarly create a file called ```EMinutes.txt``` and find the answer and save and exit the file.\
- Now similarly create a file ```ESeconds``` input answers and save and exit the file.\
- Now create the file ```EastCoordinate.txt``` using ```touch EastCoordinate.txt``` and do ```cat >> EastCoordinate.txt EDegree.txt EMinutes.txt ESeconds.txt``` to combine the files and save it to EastCoordinate.txt./
-Now copy ```EastCoordinate.txt``` and move it to ```Coordinate-Location``` directory using command ```cp EastCoordinate.txt ../``` .
- Then delete ```EastCoordinate.txt``` file using ```rm EastCoordinate.txt```.\
- The move to ```Coordinate-Location``` directory using ```cd ..``` then do ```mv EastCoordinate.txt East.txt``` to rename the file.

### Conversion to GPS Coordinate 
-Make file ```Location-Coordinate.txt``` bu using ```touch Location-Coordinate.txt``` then do ```cat >> Location-Coordinate.txt North.txt East.txt``` to combine the files to ```Location-Coordinate.txt```.

### Git Commands Used
-```git init``` to initialise repository\
-```git add``` to make commit\
-```git push``` to push the file to the remote repository\
