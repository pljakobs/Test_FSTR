class classA{
public:
	classA(){};
	~classA(){};
	void print(){
		Serial.println("---- class A printing ----");
		Serial.println(fileMap["config/pinconfig.json"]);
	};
};
