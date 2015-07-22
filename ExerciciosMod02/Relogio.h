#pragma once
class Relogio
{
public:
	Relogio();
	Relogio(unsigned int hora, unsigned int minuto, unsigned int segundo);
	~Relogio();

	void setHora(unsigned int hora);
	unsigned int getHora();

	void setMinuto(unsigned int minuto);
	unsigned int getMinuto();

	void setSegundo(unsigned int segundo);
	unsigned int getSegundo();

private:
	unsigned int hora;
	unsigned int minuto;
	unsigned int segundo;

};

