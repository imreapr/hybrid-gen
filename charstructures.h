
struct charmap{
  char charID;
  char charcmb[5];
};

struct charmap a;
struct charmap b;
struct charmap c;
struct charmap d;
struct charmap e;
struct charmap f;
struct charmap g;
struct charmap h;
struct charmap i;
struct charmap j;
struct charmap k;
struct charmap l;
struct charmap m;
struct charmap n;
struct charmap o;
struct charmap p;
struct charmap q;
struct charmap r;
struct charmap s;
struct charmap t;
struct charmap u;
struct charmap v;
struct charmap w;
struct charmap x;
struct charmap y;
struct charmap z;
int init(void){
a.charID = 'a';
strcpy(a.charcmb,"aA@");

b.charID = 'b';
strcpy(b.charcmb,"bB3");

c.charID = 'c';
strcpy(c.charcmb,"cC(");

d.charID = 'd';
strcpy(d.charcmb,"dD");

e.charID = 'e';
strcpy(e.charcmb,"eE3");

f.charID = 'f';
strcpy(f.charcmb,"fF");

g.charID = 'g';
strcpy(g.charcmb,"gG");

h.charID = 'h';
strcpy(h.charcmb,"hH");

i.charID = 'i';
strcpy(i.charcmb,"iI1|");

j.charID = 'j';
strcpy(j.charcmb,"jJ");

k.charID = 'k';
strcpy(k.charcmb,"kK");

l.charID = 'l';
strcpy(l.charcmb,"lL|");

m.charID = 'm';
strcpy(m.charcmb,"mM");

n.charID = 'n';
strcpy(n.charcmb,"nN");

o.charID = 'o';
strcpy(o.charcmb,"oO0");

p.charID = 'p';
strcpy(p.charcmb,"pP");

q.charID = 'q';
strcpy(q.charcmb,"qQ");

r.charID = 'r';
strcpy(r.charcmb,"rR");

s.charID = 's';
strcpy(s.charcmb,"sS5");

t.charID = 't';
strcpy(t.charcmb,"tT+7");

u.charID = 'u';
strcpy(u.charcmb,"uU");

v.charID = 'v';
strcpy(v.charcmb,"vV");

w.charID = 'w';
strcpy(w.charcmb,"wW");

x.charID = 'x';
strcpy(x.charcmb,"xX");

y.charID = 'y';
strcpy(y.charcmb,"yY7");

z.charID = 'z';
strcpy(z.charcmb,"zZ2");

return 0;
}

// int search(char e){
//
//   switch (e) {
//
//
//     case a.charID:
//       // for(int i = 0; i < sizeof(a.charcmb);i++){
//       //     singleline[i] = a.charcmb[i];
//       //     fprintf(outpFile,"%s",singleline);
//       //    }
//       }
//       return 0;
//       }
