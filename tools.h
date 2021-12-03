void scalpel (double x_1, double y_1, double x_2, double y_2){
    std::cout << "cut between points  " << x_1 << " : " << y_1 << "  and  " << x_2 << " : " << y_2 << std::endl;
}

void hemostat (double x_1, double y_1){
    std::cout << "a clamp is made at point  " << x_1 << " : " << y_1  << std::endl;
}

void tweezers (double x_1, double y_1){
    std::cout << "clamped with tweezers at point  " << x_1 << " : " << y_1  << std::endl;
}

void suture  (double x_1, double y_1, double x_2, double y_2){
    std::cout << "sewn with a needle between points  " << x_1 << " : " << y_1 << "  and  " << x_2 << ":" << y_2 << std::endl;
}