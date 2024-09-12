<header>
  <h1 align="center">SSL 🖥️</h1>
</header>
<main>
  <section>
    <h3 align="center">📍TP N°2 – Escáner</h3>
    <article>
      <details>
        <summary>Consignas</summary>
        <p>
          <strong>Trabajo Práctico Nº 2 – Escáner</strong><br>
          Hecho con Tabla de Transición
        </p>
        <p>
          <strong>1. Objetivos</strong><br>
          <strong>a.</strong> Armar un escáner para lenguaje mini.<br>
          <strong>b.</strong> Conocer a bajo nivel como trabaja un escáner.
        </p>
        <p>
          <strong>2. Temas</strong><br>
          <strong>a.</strong> Reconocedor léxico.<br>
          <strong>b.</strong> Autómatas finitos.
        </p>
        <p>
          <strong>3. Tareas</strong><br>
          <strong>a.</strong> Se pide armar un escáner para el lenguaje mini que es descripto en la documentación 
          adicional entregada junto con este enunciado. Para ello debe usar una tabla de transición y 
          basarse en el “seudocódigo para TT” de la presentación dada en clase.
          Se debe programar un archivo main que pruebe el escáner, llamándolo hasta que el token 
          devuelto sea FDT (EOF).
          El escáner debe trabajar contra stdin y stdout. Luego para probar podremos redireccionar el 
          archivo entrada.txt al flujo stdin. Se provee el archivo entrada.txt para que puedan 
          probar. Debería dar un salida similar a la mostrada en el archivo salida.txt
        </p>
        <details>
          <summary><strong>b.</strong> Programar usando los siguientes fuentes</summary>
          <details>
            <summary>1. main.c</summary>
            <p>llama al escáner hasta que este devuelve el token FDT. Con cada devolución 
            del escáner informa en stdout que token fue reconocido y el lexema correspondiente.</p>
          </details>
          <details>
            <summary>2. scanner.c</summary>
            <p>tiene el escáner propiamente dicho y sus funciones auxiliares, por ejemplo, 
            una que en base a un carácter devuelva el índice de la columna a usar en la tabla de 
            transición.</p>
          </details>
          <details>
            <summary>3. scanner.h</summary>
            <p>tiene la información necesaria que debe conocerse en otros fuentes para 
            utilizar el scanner.</p>
          </details>
        </details>
        <p>
          <strong>c.</strong> Arme antes de programar la documentación de la tabla de transición a usar, puede usar una 
          planilla y entregar ese archivo, o exportarlo a pdf o usar un procesador. Puede documentar 
          entregando en cualquier formato en tanto no utilice formatos propietarios.
        </p>
        <p>
          <strong>d.</strong> Puede usar un makefile si lo considera útil, pero no es requerido.
        </p>
        <p>
          <strong>e.</strong> Si bien un scanner no suele entregar tokens de error, en este caso si lo haremos de modo 
          que main sirva para probar todo.
        </p>
        <p>
          <strong>f.</strong> Siendo que este escáner lo hacemos “a mano” haremos algunas simplificaciones y cambios 
          con respecto a la documentación
        </p>
        <details>
          <summary>1. Para esta versión no hay comentarios que eliminar</summary>
        </details>
        <details>
          <summary>2. No reconoceremos las palabras reservadas, las mismas se informarán como 
          identificadores.</summary>
        </details>
        <details>
          <summary>3. Informaremos 3 tipos de errores</summary>
          <p><strong>i.</strong> Error común o general, tal como está en la documentación</p>
          <p><strong>ii.</strong> Error de asignación, separado en dos casos</p>
          <p><strong>1.</strong> Se leyó : pero luego no vino =</p>
          <p><strong>2.</strong> Aparece un = sin que inmediatamente antes se leyera :</p>
        </details>
      </details>
    </article>
  </section>
</main>
<footer>
  <details>
    <summary>Integrantes</summary>
    <ul>
      <li>Franco Pacheco</li>
      <li>Valentino Talotti</li>
      <li>Matías Zuran</li>
      <li>Gabriel Litwin Batista</li>
      <li>Facundo Di Marco</li>
    </ul>
  </details>
</footer>