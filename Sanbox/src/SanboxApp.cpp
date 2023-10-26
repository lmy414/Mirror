#include <Mirror.h>
class Sanbox : public Mirror::Application {

public:
	Sanbox() {

	}
	~Sanbox() {

	}
};

Mirror::Application* Mirror::CreateApplication() {
	return new Sanbox();

}


	