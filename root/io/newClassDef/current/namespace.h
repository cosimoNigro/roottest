#include "TFile.h"
#include "vector"

class MyClass0 {
public:
  int a;
  class MyNestedClass {
  public:
    int b;
  };
};

namespace MySpace {

  class A : public TObject {
  public:
    int a;
    //    ClassDef(MySpace::A,1)
    ClassDef(A,1)
  };

  class MyClass : public TObject {
  public:
    int a;
    MyClass() {};
    MyClass(int a_) : a(a_) {};
#ifdef NESTING_PROBLEM_SOLVED
    std::vector<A> member;
#else
#ifdef R__GLOBALSTL
    vector<MySpace::A> member;
#else
    std::vector<MySpace::A> member;
#endif
#endif
    ClassDef(MyClass,1)
  };

} // end namespace

void namespace_driver();
void testNamespaceWrite();
