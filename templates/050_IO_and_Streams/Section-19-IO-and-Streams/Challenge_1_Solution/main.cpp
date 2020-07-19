// Section 19
// 012_Challenge 1 Solution
// Formatting output
? ios..
? iom..
? ve..
? st..

st.. City {
    st. st..  name;
    long population;
    do.. cost;
};

// Assume each country has at least 1 city
st.. Country {
    st. st..  name;
    st. ve..<City> cities;
};

st.. Tours {
    st. st..  title;
    st. ve..<Country> countries;
};

v.. ruler
    st. c.. __ "\n1234567890123456789012345678901234567890123456789012345678901234567890\n" __ st. e..
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
    st. c.. __ st. setw((total_width  - title_length )/ 2) __ "" __ tours.title __ st. e..
    st. c.. __ st. e..
    st. c.. __ st. setw(field1_width) __ st. left __ "Country"
                   __ st. setw(field2_width) __ st. left __ "City"
                   __ st. setw(field3_width) __ st. right __ "Population"
                   __ st. setw(field4_width) __ st. right __ "Price"
                   __ st. e..

    st. c.. __ st. setw(total_width)
                   __ st. setfill('-')
                   __ ""
                   __ st. e..   // display total_width dashes

    st. c.. __ st. setfill(' '); // reset setfill to blank spaces
    st. c.. __ st. setprecision(2) __ st. fixed;                // for displaying the cost with 2 decimal digits
    
    // Note the use of the conditional operator to display the country name or "" for the first country
    
    ___(Country country : tours.countries) {
        ___ (size_t i = 0; i<country.cities.s..; ++i) {
            st. c.. __ st. setw(field1_width) __ st. left __  ((i __ 0) ? country.name : "") // conditional operator
                           __ st. setw(field2_width) __ st. left __ country.cities.at(i).name
                           __ st. setw(field3_width) __ st. right__ country.cities.at(i).population
                           __ st. setw(field4_width) __ st. right __ country.cities.at(i).cost
                           __ st. e..
        }
    }
    
    st. c.. __ st. endl __ st. e..
    r_ 0;
}
