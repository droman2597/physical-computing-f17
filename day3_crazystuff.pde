/*void setup() {
  size(600,600);
  background(400);
  frameRate(30);
}


void draw() {
  //fill(255);
  //noStroke();
  //ellipse(mouseX, mouseY, 20, 20); 
  strokeWeight(4);
  stroke(400,0,0);
  //line(300,300 ,mouseX, mouseY);
  background(random(255), random(255), random(200));
  fill( random(200), random(200), random(200) );
  ellipse(width/2, height/2, mouseX, mouseY);
}
//width, height, random  

*/
void setup() {
  size(600,600);
  stroke(255,255,0);
  strokeWeight(2);
}

void draw() {
  background(0);
  line (0, height/2, mouseX, mouseY);
  line (width/2, 0, mouseX, mouseY);
  line (height/5, 0, mouseX, mouseY);
  line (width/8, 0, mouseX, mouseY);
}