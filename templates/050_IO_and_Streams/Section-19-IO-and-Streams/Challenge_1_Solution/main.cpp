// Section 19
// 012_Challenge 1 Solution
// Formatting output
? ios..
? iom..
? ve..
? st..

struct City {
    std::string name;
    long population;
    do.. cost;
};

// Assume each country has at least 1 city
struct Country {
    std::string name;
    std::ve..<City> cities;
};

struct Tours {
    std::string title;
    std::ve..<Country> countries;
};

v.. ruler
    std::c.. __ "\n1234567890123456789012345678901234567890123456789012345678901234567890\n" __ std::e..
}
in. main()
{
      Tours tours
        { "Tour Ticket Prices from Miami",
            {
                {
                    "Colombia", { 
                        { "Bogota", 8778000, 400.98 },
                        { "Cali", 2401000, 424.12 },
                        { "Medellin", 2464000, 350.98 },
                        { "Cartagena", 972000, 345.34 } 
                    },
                },
                {
                    "Brazil", { 
                        { "Rio De Janiero", 13500000, 567.45 },
                        { "Sao Paulo", 11310000, 975.45 },
                        { "Salvador", 18234000, 855.99 }
                    },
                },
                {
                    "Chile", { 
                        { "Valdivia", 260000, 569.12 }, 
                        { "Santiago", 7040000, 520.00 }
                },
            },
                { "Argentina", { 
                    { "Buenos Aires", 3010000, 723.77 } 
                } 
            },
        }
    };

    co.. in. total_width   {70};
    co.. in. field1_width {20};    // Country name
    co.. in. field2_width {20};    // City name
    co.. in. field3_width {15};    // Population
    co.. in. field4_width {15};    // Cost
    
    // Display the Report title header centered in width of total_width
    // You could make this a function for practice

    ruler();
    in. title_length = tours.title.length();
    std::c.. __ std::setw((total_width  - title_length )/ 2) __ "" __ tours.title __ std::e..
    std::c.. __ std::e..
    std::c.. __ std::setw(field1_width) __ std::left __ "Country"
                   __ std::setw(field2_width) __ std::left __ "City"
                   __ std::setw(field3_width) __ std::right __ "Population"
                   __ std::setw(field4_width) __ std::right __ "Price"
                   __ std::e..

    std::c.. __ std::setw(total_width)
                   __ std::setfill('-')
                   __ ""
                   __ std::e..   // display total_width dashes

    std::c.. __ std::setfill(' '); // reset setfill to blank spaces
    std::c.. __ std::setprecision(2) __ std::fixed;                // for displaying the cost with 2 decimal digits
    
    // Note the use of the conditional operator to display the country name or "" for the first country
    
    ___(Country country : tours.countries) {
        ___ (size_t i = 0; i<country.cities.s..; ++i) {
            std::c.. __ std::setw(field1_width) __ std::left __  ((i __ 0) ? country.name : "") // conditional operator
                           __ std::setw(field2_width) __ std::left __ country.cities.at(i).name
                           __ std::setw(field3_width) __ std::right__ country.cities.at(i).population
                           __ std::setw(field4_width) __ std::right __ country.cities.at(i).cost
                           __ std::e..
        }
    }
    
    std::c.. __ std::endl __ std::e..
    r_ 0;
}
