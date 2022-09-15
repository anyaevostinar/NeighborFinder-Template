#include "emp/web/Animate.hpp"
#include "emp/web/web.hpp"

emp::web::Document doc{"target"};

class NFAnimator : public emp::web::Animate {

};

NFAnimator animator;

int main() {
    animator.Step();
}