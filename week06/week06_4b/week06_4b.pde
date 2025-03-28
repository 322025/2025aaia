//week06_4b_array_x_y_int_N_for_mousePressed_recycle_for_k
//從week06_4a延伸過來，利用for(int k=i;k<N-1;k++)回收資料
void setup() {
  size(600, 400);//開啟400x400的視窗
}
float []x=new float[100];
float []y=new float[100];
int N=0;
void draw() {
  background(#C0FFEE);
  for(int i=0;i<N;i++){
    ellipse(x[i], y[i], 8, 8);
    y[i]+=2;
    if(y[i]>400){
    for(int k=i;k<N-1;k++){
      x[k]=x[k+1];
      y[k]=y[k+1];
    }
    N--;
    }
 println(N);
}
}
void  mousePressed() {
  x[N]=mouseX;
  y[N]=mouseY;
  N++;
}
