#pragma once
class Number
{
private:
	int* value;
public:
	Number(int value);
	Number(const Number& other);
	~Number();
	int GetValue() const;

	/*
	��������� �������������� ���������:
	���_������������_�������� operator����(������_���������)
	{
		���
	}
	*/
};

#pragma region �������������Ͳ ��������� (����� ������)
	//Number operator+() const;
	//Number operator-() const;
	//Number& operator--();
	//Number& operator++();
	//Number operator--(int);
	//Number operator++(int);
	//Number operator=(const Number&);
	//Number operator-(Number&&) noexept;!!!
	//Number operator=(int);
	//Number operator+(const Number&) const;
	//Number operator-(const Number&) const;
	//Number operator*(const Number&) const;
	//Number operator/(const Number&) const;
	//Number operator%(const Number&) const;
#pragma endregion

#pragma region �������������Ͳ ��������� (����� ����ֲ�)
	//friend Number operator+(const Number&) const;
	//friend Number operator-(const Number&) const;
	//friend Number& operator--(Number&);
	//friend Number& operator++(Number&);
	//friend Number operator--(Number&, int);
	//friend Number operator++(Number&, int);
	//friend Number operator+(const Number& number1, const Number& number2) const;
	//friend Number operator-(const Number& number1, const Number& number2) const;
	//friend Number operator*(const Number& number1, const Number& number2) const;
	//friend Number operator/(const Number& number1, const Number& number2) const;
	//friend Number operator%(const Number& number1, const Number& number2) const;
#pragma endregion