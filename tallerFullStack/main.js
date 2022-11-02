
import { Coche, Comida as Co } from "./Dest.mjs";

//console.log("Hola mundo");

// ************** VARIABLES ************** \\
// Test, Number, Boolean, function, Object
// var, let (estas se pueden modificar)
// const (no se modifica)

{
	var x = 5;
}
{
	console.log(x);
}

// ************** FUNCIONES ************** \\
// Explícitas
// Anónimas (esta no tiene nombre, no se declara como funcion
// y )

function suma(n1, n2){
	return n1 + n2;
}

let resultado = suma(5, 3);

console.log(resultado);

//otra forma:
const S = function suma(n1, n2){
	return n1 + n2;
}

let resultado2 = S(5, 3);

console.log(resultado2);

//anima:
const R = (n1, n2) => {
	return n1 - n2;
}
console.log(R(10,2));



// ************** OBJETOS ************** \\
let Persona ={
	name: "Emmanuel",
	age: 28,
	amigos: ["Paula", "Dan", "Miguel"],
	mascota: {
		name: "micha",
		age: 3,
		toys: ["pelota", "hueso"],
	},
	run: function run(km) {
		console.log(`${this.name} corrió ${km} kilómetros`);
	},
//	walk: (km) => {
//		console.log(`${this.name} caminó ${km} kilómetros`);
//	},
};

console.log(Persona["name"]);
//otra forma:
console.log(Persona.name);
//puedo usar variables de forma que lo puedo automatizar:
let clave = "age";
console.log(Persona[clave]);
console.log(Persona.clave);//esto no lo puedo usar

console.log(Persona.amigos);
console.log(Persona.amigos[0]);

//objeto dentro de objeto (mascota)
console.log(Persona.mascota.age);
console.log(Persona.mascota.toys[0]);

//función:
Persona.run(5);
//Persona.walk(3);


let Escuela = {
	name: "42",
	direccion: "ronda",
	antiguedad: 20,
};

let Salon = {
	alumnos: 20,
	profe: "javier",
	...Escuela, //con esto añado las variables de Escuela a Salon
	//de esta forma ya no existe Escuela
	//sin los ... simplemente Escuela sería un objeto dentro de objeto
};

console.log(Salon);



// ************** ARRAYS ************** \\
// Un montón de funciones explicadas:
// w3schools.com/jsref/jsref_obj_array.asp
let arr1 = [1, 2, 3, 4, 5];

function multImp(num, idx) {
	console.log(num * 2);
	//si quiero saber el indice tengo que añadir la variable de entrada idx y:
	console.log(`El indice ${idx} tiene el valor ${num * 2}`);
	return num * 2; // esto lo necesito para almacenar la info
}

// FUNCION MAP:
arr1.map(multImp); //ejecuta una aplicación sobre cada elemento de un array (no lo edita)
//si quiero guardar esa info:
let arr2 = arr1.map(multImp);
console.log(arr2);

let arr3 = arr2.map((num) => {
	return num * num;
});
console.log(arr3);

// FUNCION FILTER:
let arr4 = arr1.filter((num) => {
	return num % 2 == 0;
});
console.log(arr4);


const [valor1, valor2, ...valor3] = arr1;

console.log(valor1);
console.log(valor2);
console.log(valor3);


// ************** DESTRUCTURING ************** \\
// Se usa para entender ficheros que no programamos nosotros
// Primero creamos Dest.mjs
// El destructuring coge solo la info de las variables que necesito
let { name, age } = Persona;

console.log(name);
console.log(age);

//console.log(Coche);
//console.log(Co);

const calentarHorno() {
	setTimeout(() => {
		console.log("Calentar pizza");
	}, 3000);
};

async function DiaNormal() {
	calentarHorno();
	console.log("Limpiar");
	console.log("Ver tele");
};

DiaNormal();


