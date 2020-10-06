#include <stdio.h>
#include <iostream.h>

#define TRUE    1
#define FALSE   0




class Complexe
{
	friend ostream& operator<< (ostream&, const Complexe&);
	friend istream& operator>> (istream&, const Complexe&);


	int reel, imaginaire;


public:


	Complexe(int);
	Complexe(int, int);
	~Complexe();

	void operator +(const Complexe&);
	void operator -(const Complexe&);
	void operator *(const Complexe&);
	void operator /(const Complexe&);


	bool operator==(const Complexe&);
	bool operator!=(const Complexe&);

	Complexe operator- ();


	Complexe& operator*= (const Complexe&);
	Complexe& operator-= (const Complexe&);
	Complexe& operator+= (const Complexe&);
	Complexe& operator/= (const Complexe&);
};

Complexe::Complexe(int nombre)
{
	reel = nombre;
	imaginaire = 0;
}

Complexe::Complexe(int re, int im)
{
	reel = re;
	imaginaire = im;
}

Complexe::~Complexe()
{

}


void Complexe::operator +(const Complexe& nombre)
{
	reel += nombre.reel;
	imaginaire += nombre.imaginaire;
}

void Complexe::operator -(const Complexe& nombre)
{
	reel -= nombre.reel;
	imaginaire -= nombre.imaginaire;
}

void Complexe::operator *(const Complexe& nombre)
{
	reel *= nombre.reel;
	imaginaire *= nombre.imaginaire;
}

void Complexe::operator /(const Complexe& nombre)
{
	reel /= nombre.reel;
	imaginaire /= nombre.imaginaire;
}






bool Complexe::operator ==(const Complexe& nombre)
{
	if((nombre.reel == reel) && (nombre.imaginaire == imaginaire))
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}


bool Complexe::operator !=(const Complexe& nombre)
{
	if((nombre.reel != reel) && (nombre.imaginaire != imaginaire))
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}



Complexe Complexe::operator- ()
{
	reel = -reel;
	imaginaire = -imaginaire;

	return *this;
}






Complexe& Complexe::operator*=(const Complexe& nombre)
{
    reel = reel*nombre.reel;
    imaginaire = imaginaire*nombre.imaginaire;

    return *this;
}

Complexe& Complexe::operator-=(const Complexe& nombre)
{
    reel = reel-nombre.reel;
    imaginaire = imaginaire-nombre.imaginaire;

    return *this;
}

Complexe& Complexe::operator+=(const Complexe& nombre)
{
    reel = reel+nombre.reel;
    imaginaire = imaginaire+nombre.imaginaire;

    return *this;
}

Complexe& Complexe::operator/=(const Complexe& nombre)
{
    reel = reel/nombre.reel;
    imaginaire = imaginaire/nombre.imaginaire;

    return *this;
}



ostream& operator<< (ostream& ostr,  const Complexe& nombre)
{
	return ostr << nombre.reel << nombre.imaginaire;
}


istream& operator>> (istream& istr,  const Complexe& nombre)
{
	return istr >> nombre.reel >> nombre.imaginaire;
}








int main(void)
{






	return TRUE;
}