degF = input('请输入华氏温度 (°F): ');
degK = (degF - 32) * (5 / 9) + 273.15;
fprintf('%.2f °F 对应的绝对温度为: %.2f K\n', degF, degK);