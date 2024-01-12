// NOLINTBEGIN(*)

namespace {

// declaration
extern int a;

// definition and initialization
int a = 0;

}  // namespace

int main() {
  // declaration, definition and initialization
  int b = 0;

  // declared, defined, but not initialized
  // an interesting behavior will happen when you try to access this kind of
  // variables, do some research to extend your knowledge
  int c;

  return 0;
}

// NOLINTEND(*)
