//
// File generated by C:\Fermi\cygwin\home\Owner\root_working\code\root.stl\bin\rootcint.exe at Thu Jun 27 21:04:19 2002.
// Do NOT change. Changes will be lost next time file is generated
//

#include "RConfig.h"
#if 1 && !defined(R__ACCESS_IN_SYMBOL)
//Break the privacy of classes -- Disabled for the moment
#define private public
#define protected public
#endif

#include "FooDict.h"
#include "TClass.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;

#include "RtypesImp.h"

namespace ROOT {
   namespace Shadow {
   } // Of namespace ROOT::Shadow
} // Of namespace ROOT

namespace ROOT {
   void Foo_ShowMembers(void *obj, TMemberInspector &R__insp, char *R__parent);
   TClass *Foo_IsA(const void*);

   // Function generating the singleton Type initializer
   TGenericClassInfo *GenerateInitInstance(const Foo*)
   {
      Foo *ptr = 0;
      static ROOT::TGenericClassInfo 
         instance("Foo",Foo::Class_Version(),"Foo.h",15,
                  typeid(Foo), DefineBehavior(ptr, ptr),
                  &::Foo::Dictionary, 4);
      return &instance;
   }
   // Static variable to force the class initialization
   static ROOT::TGenericClassInfo *_R__UNIQUE_(Init)
      = GenerateInitInstance((const Foo*)0x0);

}

//______________________________________________________________________________
// Static variable to hold class pointer
TClass *Foo::fgIsA = 0;

//______________________________________________________________________________
const char *Foo::Class_Name()
{
   // Return the class name for Foo.
   return "Foo";
}

//______________________________________________________________________________
const char *Foo::ImplFileName()
{
   return ROOT::GenerateInitInstance((const Foo*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Foo::ImplFileLine()
{
   return ROOT::GenerateInitInstance((const Foo*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
void Foo::Dictionary()
{
   fgIsA = ROOT::GenerateInitInstance((const Foo*)0x0)->GetClass();
}

//______________________________________________________________________________
TClass *Foo::Class()
{
   if (!fgIsA) fgIsA = ROOT::GenerateInitInstance((const Foo*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
void Foo::Streamer(TBuffer &R__b)
{
   // Stream an object of class Foo.

   if (R__b.IsReading()) {
      Foo::Class()->ReadBuffer(R__b, this);
   } else {
      Foo::Class()->WriteBuffer(R__b, this);
   }
}

//______________________________________________________________________________
void Foo::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
      // Inspect the data members of an object of class Foo.

   TClass *R__cl = Foo::IsA();
      Int_t R__ncp = strlen(R__parent);
      if (R__ncp || R__cl || R__insp.IsA()) { }
      R__insp.Inspect(R__cl, R__parent, "fFoo", &fFoo);
      TObject::ShowMembers(R__insp, R__parent);
}

/********************************************************
* FooDict.cxx
********************************************************/

#ifdef G__MEMTEST
#undef malloc
#undef free
#endif

extern "C" void G__cpp_reset_tagtableFooDict();

extern "C" void G__set_cpp_environmentFooDict() {
  G__add_compiledheader("TROOT.h");
  G__add_compiledheader("TMemberInspector.h");
  G__add_compiledheader("Foo.h");
  G__cpp_reset_tagtableFooDict();
}
class G__FooDictdOcxx_tag {};

void* operator new(size_t size,G__FooDictdOcxx_tag* p) {
  if(p && G__PVOID!=G__getgvp()) return((void*)p);
#ifndef G__ROOT
  return(malloc(size));
#else
  return(::operator new(size));
#endif
}

/* dummy, for exception */
#ifdef G__EH_DUMMY_DELETE
void operator delete(void *p,G__FooDictdOcxx_tag* x) {
  if((long)p==G__getgvp() && G__PVOID!=G__getgvp()) return;
#ifndef G__ROOT
  free(p);
#else
  ::operator delete(p);
#endif
}
#endif

static void G__operator_delete(void *p) {
  if((long)p==G__getgvp() && G__PVOID!=G__getgvp()) return;
#ifndef G__ROOT
  free(p);
#else
  ::operator delete(p);
#endif
}

void G__DELDMY_FooDictdOcxx() { G__operator_delete(0); }

extern "C" int G__cpp_dllrevFooDict() { return(30051515); }

/*********************************************************
* Member function Interface Method
*********************************************************/

/* Foo */
static int G__Foo_Foo_0_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   Foo *p=NULL;
   if(G__getaryconstruct()) p=new Foo[G__getaryconstruct()];
   else                    p=new Foo;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__FooDictLN_Foo);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__Foo_Foo_1_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   Foo *p=NULL;
      p = new Foo((Int_t)G__int(libp->para[0]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__FooDictLN_Foo);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__Foo_Foo_2_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   Foo *p=NULL;
      p = new Foo(*(Foo*)libp->para[0].ref);
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__FooDictLN_Foo);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__Foo_SetFoo_4_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((Foo*)(G__getstructoffset()))->SetFoo((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((Foo*)(G__getstructoffset()))->SetFoo();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__Foo_GetFoo_5_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((const Foo*)(G__getstructoffset()))->GetFoo());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__Foo_Print_6_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((const Foo*)(G__getstructoffset()))->Print((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((const Foo*)(G__getstructoffset()))->Print();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__Foo_Class_7_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((Foo*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__Foo_Class_Name_8_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((Foo*)(G__getstructoffset()))->Class_Name());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__Foo_Class_Version_9_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((Foo*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__Foo_Dictionary_0_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((Foo*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__Foo_IsA_1_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((const Foo*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__Foo_ShowMembers_2_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((Foo*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__Foo_Streamer_3_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((Foo*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__Foo_StreamerNVirtual_4_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((Foo*)(G__getstructoffset()))->StreamerNVirtual(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__Foo_DeclFileName_5_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((Foo*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__Foo_DeclFileLine_6_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((Foo*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__Foo_ImplFileName_7_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((Foo*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__Foo_ImplFileLine_8_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((Foo*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
typedef Foo G__TFoo;
static int G__Foo_wAFoo_9_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   if(0==G__getstructoffset()) return(1);
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (Foo *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (Foo *)((G__getstructoffset())+sizeof(Foo)*i);
   else  delete (Foo *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* Setting up global function */

/*********************************************************
* Member function Stub
*********************************************************/

/* Foo */

/*********************************************************
* Global function Stub
*********************************************************/

/*********************************************************
* Get size of pointer to member function
*********************************************************/
class G__Sizep2memfuncFooDict {
 public:
  G__Sizep2memfuncFooDict() {p=&G__Sizep2memfuncFooDict::sizep2memfunc;}
    size_t sizep2memfunc() { return(sizeof(p)); }
  private:
    size_t (G__Sizep2memfuncFooDict::*p)();
};

size_t G__get_sizep2memfuncFooDict()
{
  G__Sizep2memfuncFooDict a;
  G__setsizep2memfunc((int)a.sizep2memfunc());
  return((size_t)a.sizep2memfunc());
}


/*********************************************************
* virtual base class offset calculation interface
*********************************************************/

   /* Setting up class inheritance */

/*********************************************************
* Inheritance information setup/
*********************************************************/
extern "C" void G__cpp_setup_inheritanceFooDict() {

   /* Setting up class inheritance */
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__FooDictLN_Foo))) {
     Foo *G__Lderived;
     G__Lderived=(Foo*)0x1000;
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__FooDictLN_Foo),G__get_linked_tagnum(&G__FooDictLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
   }
}

/*********************************************************
* typedef information setup/
*********************************************************/
extern "C" void G__cpp_setup_typetableFooDict() {

   /* Setting up typedef entry */
   G__search_typename2("Char_t",99,-1,0,
-1);
   G__setnewtype(-1,"Signed Character 1 byte (char)",0);
   G__search_typename2("UChar_t",98,-1,0,
-1);
   G__setnewtype(-1,"Unsigned Character 1 byte (unsigned char)",0);
   G__search_typename2("Short_t",115,-1,0,
-1);
   G__setnewtype(-1,"Signed Short integer 2 bytes (short)",0);
   G__search_typename2("UShort_t",114,-1,0,
-1);
   G__setnewtype(-1,"Unsigned Short integer 2 bytes (unsigned short)",0);
   G__search_typename2("Int_t",105,-1,0,
-1);
   G__setnewtype(-1,"Signed integer 4 bytes (int)",0);
   G__search_typename2("UInt_t",104,-1,0,
-1);
   G__setnewtype(-1,"Unsigned integer 4 bytes (unsigned int)",0);
   G__search_typename2("Seek_t",105,-1,0,
-1);
   G__setnewtype(-1,"File pointer (int)",0);
   G__search_typename2("Long_t",108,-1,0,
-1);
   G__setnewtype(-1,"Signed long integer 4 bytes (long)",0);
   G__search_typename2("ULong_t",107,-1,0,
-1);
   G__setnewtype(-1,"Unsigned long integer 4 bytes (unsigned long)",0);
   G__search_typename2("Float_t",102,-1,0,
-1);
   G__setnewtype(-1,"Float 4 bytes (float)",0);
   G__search_typename2("Double_t",100,-1,0,
-1);
   G__setnewtype(-1,"Float 8 bytes (double)",0);
   G__search_typename2("Text_t",99,-1,0,
-1);
   G__setnewtype(-1,"General string (char)",0);
   G__search_typename2("Bool_t",103,-1,0,
-1);
   G__setnewtype(-1,"Boolean (0=false, 1=true) (bool)",0);
   G__search_typename2("Byte_t",98,-1,0,
-1);
   G__setnewtype(-1,"Byte (8 bits) (unsigned char)",0);
   G__search_typename2("Version_t",115,-1,0,
-1);
   G__setnewtype(-1,"Class version identifier (short)",0);
   G__search_typename2("Option_t",99,-1,0,
-1);
   G__setnewtype(-1,"Option string (const char)",0);
   G__search_typename2("Ssiz_t",105,-1,0,
-1);
   G__setnewtype(-1,"String size (int)",0);
   G__search_typename2("Real_t",102,-1,0,
-1);
   G__setnewtype(-1,"TVector and TMatrix element type (float)",0);
   G__search_typename2("Streamer_t",89,-1,0,
-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("VoidFuncPtr_t",89,-1,0,
-1);
   G__setnewtype(-1,"pointer to void function",0);
   G__search_typename2("ShowMembersFunc_t",89,-1,0,
-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("IsAFunc_t",81,-1,0,
-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("FreeHookFun_t",89,-1,0,
-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("ReAllocFun_t",81,-1,0,
-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("ReAllocCFun_t",81,-1,0,
-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("Axis_t",100,-1,0,
-1);
   G__setnewtype(-1,"Axis values type (double)",0);
   G__search_typename2("Stat_t",100,-1,0,
-1);
   G__setnewtype(-1,"Statistics type (double)",0);
}

/*********************************************************
* Data Member information setup/
*********************************************************/

   /* Setting up class,struct,union tag member variable */

   /* Foo */
static void G__setup_memvarFoo(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__FooDictLN_Foo));
   { Foo *p; p=(Foo*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,4,"fFoo=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__FooDictLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}

extern "C" void G__cpp_setup_memvarFooDict() {
}
/***********************************************************
************************************************************
************************************************************
************************************************************
************************************************************
************************************************************
************************************************************
***********************************************************/

/*********************************************************
* Member function information setup for each class
*********************************************************/
static void G__setup_memfuncFoo(void) {
   /* Foo */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__FooDictLN_Foo));
   G__memfunc_setup("Foo",292,G__Foo_Foo_0_0,105,G__get_linked_tagnum(&G__FooDictLN_Foo),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Foo",292,G__Foo_Foo_1_0,105,G__get_linked_tagnum(&G__FooDictLN_Foo),-1,0,1,1,1,0,"i - 'Int_t' 0 - foo",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Foo",292,G__Foo_Foo_2_0,105,G__get_linked_tagnum(&G__FooDictLN_Foo),-1,0,1,1,1,0,"u 'Foo' - 11 - foo",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetFoo",592,G__Foo_SetFoo_4_0,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 0 foo",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetFoo",580,G__Foo_GetFoo_5_0,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Print",525,G__Foo_Print_6_0,121,-1,-1,0,1,1,1,8,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Class",502,G__Foo_Class_7_0,85,G__get_linked_tagnum(&G__FooDictLN_TClass),-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Name",982,G__Foo_Class_Name_8_0,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__Foo_Class_Version_9_0,115,-1,G__defined_typename("Version_t"),0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__Foo_Dictionary_0_1,121,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__Foo_IsA_1_1,85,G__get_linked_tagnum(&G__FooDictLN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__Foo_ShowMembers_2_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__Foo_Streamer_3_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("StreamerNVirtual",1656,G__Foo_StreamerNVirtual_4_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileName",1145,G__Foo_DeclFileName_5_1,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__Foo_DeclFileLine_6_1,105,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__Foo_ImplFileName_7_1,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__Foo_ImplFileLine_8_1,105,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~Foo",418,G__Foo_wAFoo_9_1,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}


/*********************************************************
* Member function information setup
*********************************************************/
extern "C" void G__cpp_setup_memfuncFooDict() {
}

/*********************************************************
* Global variable information setup for each class
*********************************************************/
static void G__cpp_setup_global0() {

   /* Setting up global variables */
   G__resetplocal();

}

static void G__cpp_setup_global1() {

   G__resetglobalenv();
}
extern "C" void G__cpp_setup_globalFooDict() {
  G__cpp_setup_global0();
  G__cpp_setup_global1();
}

/*********************************************************
* Global function information setup for each class
*********************************************************/
static void G__cpp_setup_func0() {
   G__lastifuncposition();

}

static void G__cpp_setup_func1() {

   G__resetifuncposition();
}

extern "C" void G__cpp_setup_funcFooDict() {
  G__cpp_setup_func0();
  G__cpp_setup_func1();
}

/*********************************************************
* Class,struct,union,enum tag information setup
*********************************************************/
/* Setup class/struct taginfo */
G__linked_taginfo G__FooDictLN_TClass = { "TClass" , 99 , -1 };
G__linked_taginfo G__FooDictLN_TObject = { "TObject" , 99 , -1 };
G__linked_taginfo G__FooDictLN_Foo = { "Foo" , 99 , -1 };

/* Reset class/struct taginfo */
extern "C" void G__cpp_reset_tagtableFooDict() {
  G__FooDictLN_TClass.tagnum = -1 ;
  G__FooDictLN_TObject.tagnum = -1 ;
  G__FooDictLN_Foo.tagnum = -1 ;
}


extern "C" void G__cpp_setup_tagtableFooDict() {

   /* Setting up class,struct,union tag entry */
   G__tagtable_setup(G__get_linked_tagnum(&G__FooDictLN_Foo),sizeof(Foo),-1,292608,"DOCUMENT ME",G__setup_memvarFoo,G__setup_memfuncFoo);
}
extern "C" void G__cpp_setupFooDict(void) {
  G__check_setup_version(30051515,"G__cpp_setupFooDict()");
  G__set_cpp_environmentFooDict();
  G__cpp_setup_tagtableFooDict();

  G__cpp_setup_inheritanceFooDict();

  G__cpp_setup_typetableFooDict();

  G__cpp_setup_memvarFooDict();

  G__cpp_setup_memfuncFooDict();
  G__cpp_setup_globalFooDict();
  G__cpp_setup_funcFooDict();

   if(0==G__getsizep2memfunc()) G__get_sizep2memfuncFooDict();
  return;
}
class G__cpp_setup_initFooDict {
  public:
    G__cpp_setup_initFooDict() { G__add_setup_func("FooDict",(G__incsetup)(&G__cpp_setupFooDict)); G__call_setup_funcs(); }
   ~G__cpp_setup_initFooDict() { G__remove_setup_func("FooDict"); }
};
G__cpp_setup_initFooDict G__cpp_setup_initializerFooDict;

