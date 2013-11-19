#include<stdio.h>
#include<stdlib.h>

/*
このソースコードを短くしてください。元のコードと完全に等価である必要はありません。
付属のinput.txtを標準入力から読み込んで、出力結果がoutput.txtと一致してさえいればOKです。
実行テストは、http://ideone.com/のCコンパイラ(gcc-4.8.1)を用います。
ご提出の前に、正しく出力されることを確認しておいてください。

★注意
出力が正しければOKと書いてありますが、system関数を用いて外部プログラムを呼び出したり、
通信プログラム等によって不正に正解データを引き出すような、単純なコード短縮と異なる手法の
プログラムは評価の対象外となりますのでご注意ください。
*/

// プロトタイプ宣言
void spaghetti( int n, int* v );

/*
ideone.comで動けばよいので、エラー処理とかは書かなくて良いです。
とにかく省ける要素は省いてください。
*/
int main( int argc, char** argv )
{
  int n, i;
  int* v;
  
  scanf("%d\n", &n);
  v = (int*)malloc( sizeof(int)*n );
  
  for(i=0; i<n; i++){
    scanf("%d", &v[i] );
  }
  
  // わざわざ関数化せず、直に書いた方が短いよね！
  spaghetti( n, v );
  
  // 出力（読み込んだ順に出力するだけ）
  for(i=0; i<n; i++){
    printf("%d\n", v[i]);
  }
  
  free( v );
  
  return 0;
}

// スパゲティ・カラマッタリーノ
// テキトウニキッタッターノ・カタメタッターニャ
void spaghetti( int n, int* v )
{
L\
00\
:;i\
nt k\
=1;go\
to L09\
;L01:;v\
[n]+=1;g\
oto L06;L\
02:;v[n]+=\
1;goto L16;\
L03:;v[n]<<=\
1;goto L05;L0\
4:;v[n]+=1;got\
o L18;L05:;v[n]\
+=1;goto L17;L06\
:;v[n]<<=1;goto L\
08;L07:;v[n]+=1;go\
to L10;L08:;v[n]+=1\
;goto L15;L09:;if(--\
n<0)return;goto L13;L\
10:;v[n]<<=1;goto L11;\
L11:;v[n]+=1;goto L03;L\
12:;v[n]+=1;goto L14;L13\
:;v[n]<<=1;goto L01;L14:;\
v[n]<<=1;goto L04;L15:;v[n\
]<<=1;goto L12;L16:;v[n]<<=\
1;goto L07;L17:;spaghetti(n,\
v);goto L19;L18:;v[n]<<=1;got\
o L02;L19:;return;goto L00;;;;\
}

