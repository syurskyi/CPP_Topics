// Section 19
// 012_Challenge 1
// Formatting output
? ios..
? <iomanip>
? ve..
? <string>

struct City {
    std::string name;
    long population;
    do.. cost;
};

// Assume each country has at least 1 city
struct Country {
    std::string name;
    std::vector<City> cities;
};

struct Tours {
    std::string title;
    std::vector<Country> countries;
};

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

    // Unformatted display so you can see how to access the vector elements
    std::c.. __ tours.title __ std::e..
    for(auto country : tours.countries) {   // loop through the countries
        std::c.. __ country.name __ std::e..
        for(auto city : country.cities) {       // loop through the cities for each country
            std::c.. __ "\t" __ city.name
                          __ "\t" __ city.population
                          __ "\t" __ city.cost
                          __ std::e..
        }
    }

    std::c.. __ std::endl __ std::e..
    r_ 0;
}