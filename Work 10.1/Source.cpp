#include <iostream>
#include <string>

using namespace std;

class Home {
private:
	string address;
	string nameOwner;
public:
	Home() : address("Unknouwn ADDRESS"), nameOwner("Unknouwn OWNER") {};
	Home(string address, string nameOwner) : address(address), nameOwner(nameOwner) {};
	~Home() {};

	string get_address() { return address; };
	void set_address(string address) { this->address = address; };

	string get_nameOwner() { return nameOwner; };
	void set_nameOwner(string nameOwner) { this->nameOwner = nameOwner; };

	string convert_to_string() { return "Address: " + address + ", Owner: " + nameOwner; };
};

class Device {
private:
	string name;
	double length;//длина
	double height;//высота
	double width;//ширина
	double weight; //вес
public:
	Device() : name("Unknouwn NAME"), length(0), height(0), width(0), weight(0) {};
	Device(string name, double length, double height, double width, double weight) :
		name(name), length(length), height(height), width(width), weight(weight) {};
	~Device() {};

	string get_name() { return name; };
	void set_name(string name) { this->name = name; };

	double get_length() { return length; };
	void set_length(double length) { this->length = length; };

	double get_height() { return height; };
	void set_height(double height) { this->height = height; };

	double get_width() { return width; };
	void set_width(double width) { this->width = width; };

	double get_weight() { return weight; };
	void set_weight(double weight) { this->weight = weight; };

	string convert_to_string() {
		return "Name: " + name + ", length: " + to_string(length) + ", height: " + to_string(height) +
			", width: " + to_string(width) + ", weight: " + to_string(weight);
	};
};


class ElectricalAppliance : public Device {
private:
	double voltage; //напряжение 
	double capacity; //емкость 
	double consumption; //потребление 
public:
	ElectricalAppliance() :
		Device("Unknouwn NAME", 0, 0, 0, 0), voltage(0), capacity(0), consumption(0) {};
	ElectricalAppliance(string name, double length, double height, double width, double weight, double voltage, double capacity, double consumption) :
		Device(name, length, height, width, weight), voltage(voltage), capacity(capacity), consumption(consumption) {};
	~ElectricalAppliance() {};


	double get_voltage() { return voltage; };
	void set_voltage(double voltage) { this->voltage = voltage; };

	double get_capacity() { return capacity; };
	void set_capacity(double capacity) { this->capacity = capacity; };

	double get_consumption() { return consumption; };
	void set_consumption(double consumption) { this->consumption = consumption; };

	string convert_to_string_electric() {
		return convert_to_string() + ", voltage: " + to_string(voltage) + ", capacity: " + to_string(capacity) + ", consumption: " + to_string(consumption);
	}
};
class MechanicalDevice : public Device {
private:
	int countGears;//количество зубчатых колес
	string typeSpring;// тип пружины
	double partsLength;// длина  деталей
	double partsWidth;//  ширина деталей
public:
	MechanicalDevice();
	MechanicalDevice(string name, double length, double height, double width, double weight, int countGears, string typeSpring, double partsLength, double partsWidth) : Device(name, length, height, width, weight),
		countGears(countGears), typeSpring(typeSpring), partsLength(partsLength), partsWidth(partsWidth) {}; 
	~MechanicalDevice() {};

	int get_countGears() { return countGears; };	
	void set_countGears(int countGears) { this->countGears = countGears; };	

	string get_typeSpring() { return typeSpring; };
	void set_typeSpring(int typeSpring) { this->typeSpring = typeSpring; };

	double get_partsLength() { return partsLength; };
	void set_partsLength(int partsLength) { this->partsLength = partsLength; };
	double get_partsWidth() { return partsWidth; };
	void set_partsWidth(int partsWidth) { this->partsWidth = partsWidth; };
	
	string convert_to_string_mechanical() {
		return convert_to_string() + ", countGears: " + to_string(countGears) + ", typeSpring: " + typeSpring + ", parts Length: " + to_string(partsLength) + ", parts Width: " + to_string(partsWidth);
	}
};

int main() {

	return 0;
}