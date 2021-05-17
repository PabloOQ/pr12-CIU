# Lab 12 CIU - Pong game

Esta práctica consiste en la combinación de lo aprendido en la asignatura Creando Interfaces de Usuario con conocimientos sobre programación con [Arduino](https://www.arduino.cc/). En concreto, debemos implementar la práctica del Pong realizada anteriormente con una placa arduino y un sensor de proximidad de forma que se pueda controlar una de las palas con el movimiento de la mano.

- [Christian García](https://github.com/Chgv99)
- [Pablo Morales](https://github.com/pablomoralesgomez)
- [Pablo Ortigosa](https://github.com/PabloOQ)

*Universidad de Las Palmas de Gran Canaria*

## Implementación

Para la realización de este proyecto, se requería el uso de una placa arduino junto con un sensor de proximidad proporcionado por la Universidad para añadir la funcionalidad de mover una de las palas del proyecto Pong en Processing con el movimiento de la mano.

Por esta razón, el proyecto se divide en dos partes

### Arduino



### Processing

El proyecto Pong en Processing recogerá los datos enviados desde la arduino. Hemos utilizado como base el Pong del compañero [Pablo Ortigosa](https://github.com/PabloOQ), dado que el código estaba bien organizado y la implementación del rebote era la más adecuada para un juego que se va a controlar con el movimiento de la mano.

Por ello, el código del Pong está dividido en varios archivos *.pde* (en el fichero processing):
- **pr12.pde:** El código principal. Realiza todos los cálculos.
- **ball.pde:** La clase de la pelota. Guarda la posición y la velocidad.
- **paddle.pde:** La clase de las palas. Guarda la posición de cada pala y si se está moviendo.
- **meanList.pde:** Una clase para almacenar los últimos valores de proximidad recibidos desde arduino. Evita en gran medida movimientos erráticos por ruido en el sensor.

## Control

Para controlar la pala izquierda utilizar 'w' y 's'.
Para controlar la pala derecha 'acercar' y 'alejar' la mano del sensor.

## Muestra

![Gif showing how it works](https://github.com/PabloOQ/pr12-CIU/blob/main/processing/pr12/winner.gif)

## References

The guide uploaded in the virtual classroom made by the teachers - Modesto and Daniel
