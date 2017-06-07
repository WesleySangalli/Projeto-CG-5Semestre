#include <glut.h>

GLfloat angle, fAspect;
GLfloat rotX, rotY;

void inicializa(void)
{
	GLfloat luzAmbiente[4] = { 0.2, 0.2, 0.2, 1.0 };
	GLfloat luzDifusa[4] = { 0.7, 0.7, 0.7, 1.0 }; // COR
	GLfloat luzEspecular[4] = { 1.0, 1.0, 1.0, 1.0 }; // BRILHO
	GLfloat posicaoLuz[4] = { 0.0, 50.0, 50.0, 1.0 };

	GLfloat especularidade[4] = { 1.0, 1.0, 1.0, 1.0 };
	GLint especMaterial = 60;

	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);

	glShadeModel(GL_SMOOTH);
	glMaterialfv(GL_FRONT, GL_SPECULAR, especularidade);
	glMateriali(GL_FRONT, GL_SHININESS, especMaterial);
	glLightModelfv(GL_LIGHT_MODEL_AMBIENT, luzAmbiente);

	glLightfv(GL_LIGHT0, GL_AMBIENT, luzAmbiente);
	glLightfv(GL_LIGHT0, GL_DIFFUSE, luzDifusa);
	glLightfv(GL_LIGHT0, GL_SPECULAR, luzEspecular);
	glLightfv(GL_LIGHT0, GL_POSITION, posicaoLuz);

	glEnable(GL_COLOR_MATERIAL);
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);
	glEnable(GL_DEPTH_TEST);

	angle = 80;
}

void Desenha(void) {
	/* Limpar todos os pixels */
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glRotatef(10.0f, rotX, rotY, 0.0f);


	glColor3f(0.25f, 0.63f, 0.86f);
	glPushMatrix();
	glScalef(10, 2, 2);
	glTranslatef(-2.0f, 0.0f, 0.0f);//x, y, z
	glutSolidCube(20);
	glPopMatrix();

	glColor3f(1.0f, 0.0f, 0.0f);
	glPushMatrix();
	glScalef(4, 4, 4);
	glTranslatef(28.0f, 0.0f, 0.0f);//x, y, z
	glutSolidCube(10);
	glPopMatrix();

	glColor3f(1.0f, 0.0f, 0.0f);
	glPushMatrix();
	glScalef(3, 3, 4);
	glTranslatef(46.0f, -3.0f, 0.0f);//x, y, z
	glutSolidCube(8);
	glPopMatrix();

	/*Chassi*/
	glColor3f(0.0f, 0.0f, 0.0f);
	glPushMatrix();
	glScalef(2, 2, 3);
	glTranslatef(42.0f, -1.8f, 0.0f);//x, y, z
	glutSolidCube(10);
	glPopMatrix();
	
	glColor3f(0.0f, 0.0f, 0.0f);
	glPushMatrix();
	glScalef(3, 1.4, 4);
	glTranslatef(41.2f, 10, 0.0f);//x, y, z
	glutSolidCube(6);
	glPopMatrix();

	glColor3f(0.30f, 0.30f, 0.30f);
	glPushMatrix();
	
	glTranslatef(88, 40, 20.0f);//x, y, z
	glRotatef(110, 1.0, 0.8, -0.7);
	gluCylinder(gluNewQuadric(), 3.0f, 3.0f, 60, 20, 20);
	glPopMatrix();

	glColor3f(0.64f, 0.64f, 0.64f);
	glPushMatrix();
	glScalef(3, 2.5, 3.6);
	glTranslatef(47.2f, -3, 0.0f);//x, y, z
	glutSolidCube(6);
	glPopMatrix();

	glColor3f(0.0f, 0.0f, 0.0f);
	glPushMatrix();
	glScalef(3.4, 2.5, 1);
	glTranslatef(32.3f, 4, 17.8f);//x, y, z
	glRotatef(90, 0.0, 1.0, 0.0);
	glutSolidCube(6);
	glPopMatrix();

	glColor3f(0.0f, 0.0f, 0.0f);
	glPushMatrix();
	glScalef(3.4, 2.5, 1);
	glTranslatef(32.3f, 4, -17.8f);//x, y, z
	glRotatef(90, 0.0, 1.0, 0.0);
	glutSolidCube(6);

	glPopMatrix();
	/*Rodas traseiras*/
	glColor3f(0.0f, 0.0f, 0.0f);
	glPushMatrix();
	glTranslatef(-90.0f, -32.4f, 15.0f);
	glutSolidTorus(7.7, 8, 20, 18);
	glPopMatrix();

	glColor3f(0.0f, 0.0f, 0.0f);
	glPushMatrix();
	glTranslatef(-60.0f, -32.4f, 15.0f);
	glutSolidTorus(7.7, 8, 20, 18);
	glPopMatrix();

	glColor3f(0.0f, 0.0f, 0.0f);
	glPushMatrix();
	glTranslatef(-90.0f, -32.4f, -15.0f);
	glutSolidTorus(7.7, 8, 20, 18);
	glPopMatrix();

	glColor3f(0.0f, 0.0f, 0.0f);
	glPushMatrix();
	glTranslatef(-60.0f, -32.4f, -15.0f);
	glutSolidTorus(7.7, 8, 20, 18);
	glPopMatrix();

	/*Rodas Dianteiras*/
	glColor3f(0.0f, 0.0f, 0.0f);
	glPushMatrix();
	glTranslatef(60.0f, -32.4f, 15.0f);
	glutSolidTorus(7.7, 8, 20, 18);
	glPopMatrix();

	glColor3f(0.0f, 0.0f, 0.0f);
	glPushMatrix();
	glTranslatef(30.0f, -32.4f, 15.0f);
	glutSolidTorus(7.7, 8, 20, 18);
	glPopMatrix();

	glColor3f(0.0f, 0.0f, 0.0f);
	glPushMatrix();
	glTranslatef(60.0f, -32.4f, -15.0f);
	glutSolidTorus(7.7, 8, 20, 18);
	glPopMatrix();

	glColor3f(0.0f, 0.0f, 0.0f);
	glPushMatrix();
	glTranslatef(30.0f, -32.4f, -15.0f);
	glutSolidTorus(7.7, 8, 20, 18);
	glPopMatrix();

	glColor3f(0.0f, 0.0f, 0.0f);
	glPushMatrix();
	glTranslatef(126.0f, -32.0f, 15.0f);
	glutSolidTorus(7.7, 7, 20, 18);
	glPopMatrix();

	glColor3f(0.0f, 0.0f, 0.0f);
	glPushMatrix();
	glTranslatef(126.0f, -32.0f, -15.0f);
	glutSolidTorus(7.7, 7, 20, 18);
	glPopMatrix();

	/*Farol*/

	glColor3f(1.0f, 0.69f, 0.39f);
	glPushMatrix();
	glScalef(2, 2, 3);
	glTranslatef(74.2, 0, 4.3f);//x, y, z
	glutSolidCube(2);
	glPopMatrix();

	glColor3f(1.0f, 0.69f, 0.39f);
	glPushMatrix();
	glScalef(2, 2, 3);
	glTranslatef(74.2, 0, -4.3f);//x, y, z
	glutSolidCube(2);
	glPopMatrix();


	glutSwapBuffers();
}

void EspecificaParametrosVisualizacao(void) {
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(angle, fAspect, 0.1, 500);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	gluLookAt(0, 80, 200, 0, 0, 0, 0, 1, 0);
}

void AlteraTamanhoJanela(GLsizei w, GLsizei h) {
	if (h == 0) h = 1;
	glViewport(0, 0, w, h);
	fAspect = (GLfloat)w / (GLfloat)h;

	EspecificaParametrosVisualizacao();
}

void GerenciaMouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON) {
		if (state == GLUT_DOWN) {
			if (angle >= 10) angle -= 5;
		}
	}
	if (button == GLUT_RIGHT_BUTTON) {
		if (state == GLUT_DOWN) {
			if (angle <= 130) angle += 5;
		}
	}
	EspecificaParametrosVisualizacao();
	glutPostRedisplay();
}

void GerenciaTeclado(unsigned char key, int x, int y) {
	if (key == 'a') {
		rotY = -1;
		rotX = 0;
	}
	else if (key == 'd') {
		rotY = 1;
		rotX = 0;
	}

	if (key == 'w') {
		rotX = -1;
		rotY = 0;
	}
	else if (key == 's') {
		rotX = 1;
		rotY = 0;
	}
	glutPostRedisplay();
}

int main(int argc, char** argv)
{
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(500, 500);
	glutCreateWindow("Visualização 3D");
	glutDisplayFunc(Desenha);
	glutReshapeFunc(AlteraTamanhoJanela);
	glutMouseFunc(GerenciaMouse);
	glutKeyboardFunc(GerenciaTeclado);
	inicializa();
	glutMainLoop();
}