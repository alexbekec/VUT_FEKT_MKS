input = csvread('ntc.csv');

%% DELIC
U = 3.3;
R1 = 10E3;
R2 = input(:,2) * 1E3;
U2 = U * (R2 ./ (R1 + R2));

ADC = U2 * 1024 / U;
T = input(:,1);
P = polyfit(ADC,T,10);

ADC2 = 0:1023;
T2 = round(polyval(P,ADC2),1);
hold on,
plot(ADC2, T2, 'r');

dlmwrite('data.dlm', T2*10, ',');