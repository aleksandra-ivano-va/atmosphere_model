#ifndef ATMOSPHERE_H
#define ATMOSPHERE_H

#include <vector>

// Структура для хранения результатов расчета
struct AtmosParams {
    double T;    // Температура, К
    double P;    // Давление, Па
    double ro;  // Плотность, кг/м3
    double a;    // Скорость звука, м/с
    double g;    // Ускорение свободного падения, м/с2
    double M;    // Молярная масса
    double n;
    double nu;
};

class Atmosphere {
public:
    Atmosphere();

    // Основной метод для получения всех параметров по геометрической высоте h
    AtmosParams getParams(double h) const;

private:
    // Константы модели
    static constexpr double r = 6356767.0;
    static constexpr double g0 = 9.80665;
    static constexpr double Mc = 28.964420;
    static constexpr double R = 287.053;
    static constexpr double R_zv = 8314.32;
    static constexpr double x = 1.4;
    static constexpr double Na = 602.257E+24;
    static constexpr double beta_S = 1.458E-6;
    static constexpr double S = 110.4;

    // Вспомогательные методы
    double M_high(double h) const;
    double find_h(double H) const;
    double find_H(double h) const;

    // Табличные данные (инициализируются в .cpp)
    static const double H0[22];
    static const double T0[22];
    static const double Tm0[22];
    static const double b[22];
    static const double bm[22];
    static const double P0[22];
    
    // Данные для высоких слоев
    static const double h_hi0[10];
    static const double A[10][5];
    static const double m[10];
    static const double h_hi00[7];
    static const double B[7][4];
};

#endif
