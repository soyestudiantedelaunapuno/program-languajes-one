Algoritmo Calcular_IMC
	Definir estatura, peso, imc Como Real
	
	Escribir "Ingrese el Valor del Peso: "
	Leer peso
	Escribir "Ingrese el Valor de la Estatura: "
	Leer estatura
	imc = peso / (estatura * estatura)
	
	Escribir "Tu Indice de Masa Corporal es: ", imc
	
	Si imc < 18.5 Entonces
		Escribir "Tu Categoria es Bajo"
	SiNo
		Si imc >= 18.5 Y imc <= 24.9 Entonces
			Escribir "Tu Peso es Normal"
		SiNo
			Si imc >= 25.0 Y imc <= 29.9 Entonces
				Escribir "Tienes Sobrepeso"
			SiNo
				Si imc >= 30.0 Y imc <= 34.9 Entonces
					Escribir "Tienes Obesidad Tipo I"
				SiNo
					Si imc >= 35.0 Y imc <= 39.9 Entonces
						Escribir "Tienes Obesidad Tipo II"
				    SiNo
						Si imc >= 40.0 Entonces
							Escribir "Tienes Obesidad Tipo III"
						SiNo
							Escribir "No hay Datos Numericos"
						FINSI	
					FINSI		
				FINSI			
			FINSI			
		FINSI		
	FinSi
FinAlgoritmo
