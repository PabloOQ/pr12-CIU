# Lab 12 CIU - Pong game

Esta práctica consiste en la combinación de lo aprendido en la asignatura Creando Interfaces de Usuario con conocimientos sobre programación con [Arduino](https://www.arduino.cc/). En concreto, debemos implementar la práctica del Pong realizada anteriormente con una placa arduino y un sensor de proximidad de forma que se pueda controlar una de las palas con el movimiento de la mano.

[Pablo Ortigosa](https://github.com/PabloOQ) · [Pablo Morales](https://github.com/pablomoralesgomez) · [Christian García](https://github.com/Chgv99)

*Universidad de Las Palmas de Gran Canaria*

## Implementación

There are 3 files, a main class (pr1.pde) which is both the view and the controller, and 2 objects classes which are the model, these are ball.pde and paddle.pde. Inside pr1.pde the loop (draw) function has 4 parts:
* gifMethod() which, if it is the match point, records each frame before they update.
* logic() which updates the information of the score and the positions of each element, it also checks for the ball collisions.
* show() this is the view method, it displays each thing on the screen.
* finishRecord() this method finishes the recording of the gif and plays a sound when a player wins the match.

Finally to move the paddles use 'w' and 's' for the left player and 'o' and 'l' for the right player. 

## Final view

![Gif showing how it works](https://github.com/PabloOQ/pr12-CIU/blob/main/processing/pr12/winner.gif)

## References

The guide uploaded in the virtual classroom made by the teachers - Modesto and Daniel
