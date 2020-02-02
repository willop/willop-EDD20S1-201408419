# TDA "Moneda" informal

**Descripción:**
La aplicacion conciste en la creacion de un sistema de creacion de monedas las cuales seran destinadas
a distintos dueños, los cuales tambien realizaran transacciones para el traspaso de un dueño a otro a travéz
de este sistema.

**Operaciones:**
---------------
* Crear_moneda(apuntador,nombre_moneda,cantidad_moneda)	
	* Efecto: Crea un nodo con la informacion que obtiene el metodo.
* Estado_usuario(id:entero)
	* Efecto: Devuelve la informacion de cada dueño registrado en el sistema y la cantidad de monedas que posee.
* Transferencia_usuario(id_1,id_2,cantidad:entero)
	* Efecto: Se seleccionan dos dueños los cuales realizaran traspaso de n monedas de un dueño a otro.
* Transferencia_monedero(id_1,cantidad:entero)
	* Efecto: Se selecciona un dueño con el cual se realizara un traspaso de n monedas del monedero al dueño.
