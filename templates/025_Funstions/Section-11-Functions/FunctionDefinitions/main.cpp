// Section 11
// Function Definitions
// Area of Circle and Volume of a Cylinder
? ios..

u.. s..

co.. do.. pi {3.14159};

do.. calc_area_circle(do.. radius) {
    r_ pi * radius * radius;
}

do.. calc_volume_cylinder(do.. radius, do.. height) {
//    return pi * radius * radius * height;
    r_ calc_area_circle(radius) * height;
}

v.. area_circle
    do.. radius{};
    c.. __ "\nEnter the radius of the circle: ";
    ci. __ radius;
    c.. __ "The area of a circle with radius " __ radius __ " is " __ calc_area_circle(radius) __ e..
}

v.. volume_cylinder
    do.. radius {};
    do.. height {};
    c.. __ "\nEnter the radius of the cylinder: ";
    ci. __ radius;
    c.. __ "\nEnter the height of the cylinder: ";
    ci. __ height;
    
    c.. __ "The volume of a cylinder with radius " __ radius __ " and height " __ height __ " is " __ calc_volume_cylinder(radius, height) __ e..
}

in. main
    
    area_circle();
    area_circle();
    volume_cylinder();
    
    r_ 0;
}

