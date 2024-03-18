This repo basically contains two ros packages aruco_interfaces and aruco_markers. 

aruco_interfaces is only for defining datatype of custom msg / service..

aruco_markers contains 3 nodes and 1 helper files..

  - infoserver --> Server node which takes image as input and returns back the coordinates of aruco markers present in the image.
    -  Also it opens a cv2 window in which the image is diplayed along with rectangles drawn over detected aruco markers.
   
  - rrtserver --> Server node which takes image, coordinates of aruco markers and parameters such as start point, goal point, iter limit, step size as input
    and returns the coordinates of the points presnt in found path.
      - Basically with the help of rrt.py helper file, rrtserver apply rrtalgorithm and plan a random path.
      - Also, it opens a cv2 window in which same is displayed along with the found path..
   
  - client --> Client node which send image to infoserver get coordinates and then send both to rrt server and prints all the recieved data.
    - To run client node use the following format -:
      ```bash
      ros2 run aruco_markers client path/to/video/or/image start_x start_y end_x end_y

  - To run server simply use..
    ```bash
    ros2 run aruco_markers infoserver
    ros2 run aruco_markers rrtserver
    
