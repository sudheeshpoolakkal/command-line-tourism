// Tourism

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// defining structure


struct place
{
    char tag[30];
    char title[40];
    char destinations[60];
    char age_range[30];
    char country_region[70];
    char travel_style[70];
    char operated_in[30];
    char operator[30];
    char tour_length[20];
    char price_per_day[30];
    char amount[20];
};

int main()
{
    
    //defining array for places
    char places[4][8][100];


     // Access and modify elements in the array
     // inputing values to india
    strcpy(places[0][0], "Manali");
    strcpy(places[0][1], "Ajanta and Ellora Caves - Maharashtra");
    strcpy(places[0][2], "Lucknow");
    strcpy(places[0][3], "Shimla");
    strcpy(places[0][4], "Kerala");
    strcpy(places[0][5], "Taj Mahal");
    strcpy(places[0][6], "Mysore");
    strcpy(places[0][7], "Tropical Goa");
    

    // inputing values to norway
    
    strcpy(places[1][0], "Bergen");
    strcpy(places[1][1], "Lofoten Islands");
    strcpy(places[1][2], "Pulpit Rock");
    strcpy(places[1][3], "Oslo");
    strcpy(places[1][4], "Drammen");
    strcpy(places[1][5], "Molde");
    strcpy(places[1][6], "Tromsø");
    strcpy(places[1][7], "Stavanger");


    //Inputing places to USA
    
    strcpy(places[2][0], "Yellowstone National Park");
    strcpy(places[2][1], "Yosemite National Park");
    strcpy(places[2][2], "Philadelphia Museum");
    strcpy(places[2][3], "Niagara Falls");
    strcpy(places[2][4], "Hoover Dam");
    strcpy(places[2][5], "Golden Gate Bridge");
    strcpy(places[2][6], "Las Vegas Strip");
    strcpy(places[2][7], "Waikiki");


    //Inputing places to Canada
    
    strcpy(places[3][0], "Stanley Park");
    strcpy(places[3][1], "CN Tower");
    strcpy(places[3][2], "Butchart Gardens");
    strcpy(places[3][3], "Royal Ontario Museum");
    strcpy(places[3][4], "Whistler Blackcomb");
    strcpy(places[3][5], "High Park");
    strcpy(places[3][6], "Ottawa");
    strcpy(places[3][7], "Vancouver");
    
    //dynamically ALLOCATED the variable details
    struct place *details = (struct place *)malloc(40 * sizeof(struct place));
    
    
   //storing values to first location
   
   details[0] = (struct place){
        "Experience the Magic of Manali",
        "Enchanting Manali: Gateway to the Himalayas",
        "Manali Town, Solang Valley, Rohtang Pass, Old Manali, Manikaran, Kasol, Naggar",
        "Suitable for all age groups",
        "Himachal Pradesh, India",
        "Adventure, Nature Exploration, Cultural Immersion, Relaxation",
        "English, Hindi",
        "Indus Travels",
        "7 days",
        "$150",
        "$800",
    };
     details[1] = (struct place){
    "Journey Through Ancient Rock-cut Marvels",
    "Ajanta and Ellora Caves: Maharashtra's Architectural Wonders",
    "Ajanta Caves and Ellora Caves",
    "Suitable for all age groups",
    "Maharashtra, India",
    "Cultural Heritage, Art and History Exploration, Spiritual and Architectural Insight",
    "English, Hindi, Marathi",
    "Maharashtra Tourism Development Corporation (MTDC) or other local tour operators",
    "2-3 days",
    "₹3,500 to ₹10,500 per person",
 };
 
 details[2] = (struct place){
    "Discover the Elegance of Awadh",
    "Lucknow: The City of Nawabs",
    "Bara Imambara, Chota Imambara, Rumi Darwaza, Lucknow Residency, Hazratganj",
    "Suitable for all age groups",
    "Uttar Pradesh, India",
    "Cultural Exploration, Culinary Delights, Historical Wonders",
    "English, Hindi, Urdu",
    "Royal Journeys",
    "3-4 days",
    "₹2,500 to ₹7,000 per person",
};
 details[3] = (struct place){
    "Discover the Elegance of Awadh",
    "Lucknow: The City of Nawabs",
    "Bara Imambara, Chota Imambara, Rumi Darwaza, Lucknow Residency, Hazratganj",
    "Suitable for all age groups",
    "Uttar Pradesh, India",
    "Cultural Exploration, Culinary Delights, Historical Wonders",
    "English, Hindi, Urdu",
    "Royal Journeys",
    "3-4 days",
    "₹2,500 to ₹7,000 per person",
};

details[4] = (struct place){"Escape to the Queen of Hills",
    "Shimla: Where Nature Meets Heritage",
    "The Ridge, Mall Road, Jakhoo Temple, Kufri, Shimla Toy Train",
    "Suitable for all age groups",
    "Himachal Pradesh, India",
    "Nature Retreat, Adventure Activities, Cultural Exploration",
    "English, Hindi",
    "Himalayan Odyssey Tours",
    "4-5 days",
    "₹3,000 to ₹8,000 per person",
};

details[5] = (struct place){
    "Experience God's Own Country",
    "Kerala: Backwaters, Beaches, and Culture",
    "Kochi, Alleppey, Munnar, Thiruvananthapuram, Thekkady",
    "Suitable for all age groups",
    "Kerala, India",
    "Nature Retreat, Houseboat Cruises, Cultural Exploration",
    "English, Malayalam",
    "Southern Escapes Tours",
    "6-7 days",
    "₹4,500 to ₹12,000 per person",
}; 
details[6] = (struct place){
  "Discover the Symbol of Eternal Love",
    "Taj Mahal: A Monument to Romance",
    "Taj Mahal, Agra Fort, Mehtab Bagh, Fatehpur Sikri",
    "Suitable for all age groups",
    "Uttar Pradesh, India",
    "Historical Exploration, Cultural Immersion",
    "English, Hindi, Urdu",
    "Eternal Experiences Travel",
    "1-2 days",
    "₹1,500 to ₹5,000 per person",
};  
details[7] = (struct place){
    "Explore the Royal City",
    "Mysore: Where Heritage Meets Modernity",
    "Mysore Palace, Chamundi Hill, Brindavan Gardens, St. Philomena's Church",
    "Suitable for all age groups",
    "Karnataka, India",
    "Cultural Heritage, Nature Exploration, Religious Landmarks",
    "English, Kannada",
    "Sapphire Voyages",
    "2-3 days",
    "₹2,000 to ₹6,000 per person",
};

details[8] = (struct place){
    "Experience the Beach Paradise",
    "Goa: Where Sun, Sand, and Culture Meet",
    "Calangute Beach, Baga Beach, Old Goa, Dudhsagar Waterfalls, Anjuna Beach",
    "Suitable for all age groups",
    "Goa, India",
    "Beach Retreat, Water Sports, Cultural Immersion",
    "English, Konkani",
    "Coastal Escapades Tours",
    "4-6 days",
    "₹3,500 to ₹9,000 per person",
};
	
	details[10] = (struct place){
    "Discover Norway's Hidden Gem",
    "Bergen: The Gateway to the Fjords",
    "Bryggen, Fløibanen Funicular, Fish Market, Troldhaugen",
    "Suitable for all age groups",
    "Hordaland, Norway",
    "Scenic Fjord Exploration, Cultural Immersion",
    "English, Norwegian",
    "Nordic Adventures",
    "3-4 days",
    "NOK 3,500 to NOK 10,000 per person",
};
		
		details[11] = (struct place){
    "Experience Arctic Wonders",
    "Lofoten Islands: A Polar Paradise",
    "Reine, Henningsvær, Nusfjord, Northern Lights",
    "Suitable for all age groups",
    "Nordland, Norway",
    "Nature Exploration, Northern Lights Hunting",
    "English, Norwegian",
    "Arctic Expeditions",
    "5-7 days",
    "NOK 5,000 to NOK 15,000 per person",
};
			
			details[12] = (struct place){
    "Hike to the Edge of the World",
    "Pulpit Rock: A Thrilling Cliff Adventure",
    "Preikestolen (Pulpit Rock), Lysefjord, Stavanger",
    "Suitable for adventurers and hikers",
    "Rogaland, Norway",
    "Hiking and Adventure",
    "English, Norwegian",
    "Fjord Explorers",
    "1 day",
    "NOK 2,000 to NOK 5,000 per person",
};
				
				details[13] = (struct place){
    "Experience Nordic Elegance",
    "Oslo: The Capital of Norway",
    "Vigeland Park, Viking Ship Museum, Oslo Opera House, Royal Palace",
    "Suitable for all age groups",
    "Oslo, Norway",
    "Cultural Exploration, Art and History",
    "English, Norwegian",
    "Nordic Journeys",
    "2-3 days",
    "NOK 2,500 to NOK 7,000 per person",
};
					
				details[14] = (struct place)	{
    "Unveil the Roses of the Fjords",
    "Molde: The City of Roses",
    "Molde International Jazz Festival, Molde Cathedral, Molde Panorama",
    "Suitable for all age groups",
    "Møre og Romsdal, Norway",
    "Cultural Festivals, Scenic Views",
    "English, Norwegian",
    "Fjord Rose Tours",
    "2-3 days",
    "NOK 2,000 to NOK 6,000 per person",
};
						
					details[15] = (struct place){
    "Chase the Northern Lights",
    "Tromsø: Arctic Adventures Await",
    "Northern Lights, Arctic Wildlife, Tromsø Ice Domes",
    "Suitable for adventurers and wildlife enthusiasts",
    "Troms, Norway",
    "Northern Lights Tours, Arctic Wildlife Safaris",
    "English, Norwegian",
    "Arctic Sky Expeditions",
    "4-6 days",
    "NOK 4,000 to NOK 12,000 per person",
};
							
							details[16] = (struct place){
    "Discover the Fjords and History",
    "Stavanger: Fjords and Viking Tales",
    "Norwegian Petroleum Museum, Stavanger Cathedral, Stavanger Harbor",
    "Suitable for all age groups",
    "Rogaland, Norway",
    "Cultural History, Maritime Heritage",
    "English, Norwegian",
    "Viking Voyages",
    "2-4 days",
    "NOK 2,500 to NOK 8,000 per person",
};
								
								
									details[17] = (struct place){
    "Explore the Wild Wonders",
    "Yellowstone National Park: America's First National Park",
    "Old Faithful, Grand Prismatic Spring, Mammoth Hot Springs, Bison and Wildlife",
    "Suitable for all age groups",
    "Wyoming, Montana, and Idaho, USA",
    "Nature Exploration, Wildlife Watching, Geothermal Marvels",
    "English",
    "Wilderness Expeditions",
    "3-5 days",
    "$500 to $1,500 per person",
};
									
									
									details[18] = (struct place){
    "Discover the Majestic Sierras",
    "Yosemite National Park: A Natural Paradise",
    "Yosemite Valley, Half Dome, El Capitan, Bridalveil Fall",
    "Suitable for all age groups",
    "California, USA",
    "Nature Exploration, Hiking, Waterfalls",
    "English",
    "Sierra Adventure Tours",
    "2-4 days",
    "$300 to $1,000 per person",
};
										
										
										details[19] = (struct place){
    "Art and History Unveiled",
    "Philadelphia Museum: The Heart of American Culture",
    "Liberty Bell, Independence Hall, The Rocky Steps, Art Collections",
    "Suitable for all age groups",
    "Pennsylvania, USA",
    "Cultural Exploration, Art and History",
    "English",
    "Liberty Cultural Tours",
    "1-2 days",
    "$100 to $300 per person",
};
											
										details[20] = (struct place){
    "Art and History Unveiled",
    "Philadelphia Museum: The Heart of American Culture",
    "Liberty Bell, Independence Hall, The Rocky Steps, Art Collections",
    "Suitable for all age groups",
    "Pennsylvania, USA",
    "Cultural Exploration, Art and History",
    "English",
    "Liberty Cultural Tours",
    "1-2 days",
    "$100 to $300 per person",
};
												
												details[21] = (struct place){
    "Engineering Marvel by the Desert",
    "Hoover Dam: Taming the Colorado River",
    "Dam Tours, Powerplant Visits, Lake Mead, Colorado River Cruises",
    "Suitable for all age groups",
    "Nevada and Arizona, USA",
    "Engineering Marvel Exploration, River Cruises",
    "English",
    "Desert Engineering Tours",
    "1 day",
    "$50 to $150 per person",
};
													
													details[22] = (struct place){
    "Iconic Landmark of the Bay Area",
    "Golden Gate Bridge: A San Francisco Classic",
    "Bridge Walks, Viewpoints, Marin Headlands, Bay Cruises",
    "Suitable for all age groups",
    "California, USA",
    "Scenic Beauty, Photography, Bay Cruises",
    "English",
    "Bay City Tours",
    "1 day",
    "$50 to $200 per person",
},
														
								details[23] = (struct place)						{
    "Vegas Entertainment Extravaganza",
    "Las Vegas Strip: The Entertainment Capital of the World",
    "Casinos, Shows, Nightlife, Dining, Shopping",
    "Suitable for adults and nightlife enthusiasts",
    "Nevada, USA",
    "Nightlife, Entertainment, Casino Hopping",
    "English",
    "Viva Las Vegas Tours",
    "2-3 days",
    "$200 to $800 per person",
};
															
															details[24] = (struct place){
    "Relax in Paradise",
    "Waikiki: A Beach Lover's Dream",
    "Waikiki Beach, Diamond Head, Hula Shows, Surfing",
    "Suitable for all age groups",
    "Hawaii, USA",
    "Beach Retreat, Water Sports, Cultural Shows",
    "English, Hawaiian",
    "Island Getaways Tours",
    "4-6 days",
    "$500 to $1,500 per person",
};
																
																details[25] = (struct place){
    "Explore Vancouver's Natural Jewel",
    "Stanley Park: A Green Oasis in the City",
    "Seawall, Totem Poles, Prospect Point, Vancouver Aquarium",
    "Suitable for all age groups",
    "British Columbia, Canada",
    "Nature Exploration, Seaside Walks, Wildlife Viewing",
    "English",
    "Pacific Explorer Tours",
    "1-2 days",
    "CAD 100 to CAD 300 per person",
};
																	
																	details[26] = (struct place){
    "Touch the Sky",
    "CN Tower: Toronto's Tallest Icon",
    "Observation Deck, Glass Floor, SkyPod, EdgeWalk",
    "Suitable for all age groups",
    "Ontario, Canada",
    "Panoramic Views, Thrilling Experiences",
    "English, French",
    "City Heights Adventures",
    "1 day",
    "CAD 75 to CAD 250 per person",
};
																		
  details[27] = (struct place){
    "Blooms and Beauty",
    "Butchart Gardens: A Floral Paradise",
    "Rose Garden, Sunken Garden, Japanese Garden, Concerts",
    "Suitable for all age groups",
    "British Columbia, Canada",
    "Botanical Exploration, Garden Walks",
    "English",
    "Garden Enchantment Tours",
    "1 day",
    "CAD 50 to CAD 150 per person",
};

details[28] = (struct place){
    "Journey Through Time",
    "Royal Ontario Museum: Canada's Premier Museum",
    "Dinosaur Exhibits, Art Collections, Cultural Artifacts",
    "Suitable for all age groups",
    "Ontario, Canada",
    "Art and History Exploration, Cultural Heritage",
    "English, French",
    "Canadian Heritage Tours",
    "1-2 days",
    "CAD 50 to CAD 200 per person",
};
	
	details[29] = (struct place){
    "Winter Wonderland",
    "Whistler Blackcomb: North America's Premier Ski Resort",
    "Skiing, Snowboarding, Snowshoeing, Mountain Biking",
    "Suitable for adventurers and winter sports enthusiasts",
    "British Columbia, Canada",
    "Skiing and Snow Sports, Mountain Adventures",
    "English",
    "Snowscape Expeditions",
    "2-4 days",
    "CAD 300 to CAD 1,000 per person",
};
		/*details[30] = (struct place{
    "Urban Nature Retreat",
    "High Park: Toronto's Green Escape",
    "Cherry Blossoms, Grenadier Pond, Zoo, Nature Trails",
    "Suitable for all age groups",
    "Ontario, Canada",
    "Nature Walks, Picnics, Wildlife Watching",
    "English, French",
    "Metropolitan Getaways",
    "1 day",
    "CAD 25 to CAD 100 per person",
};			details[31] = (struct place{
    "Canada's Capital Experience",
    "Ottawa: History and Culture in the Capital",
    "Parliament Hill, Rideau Canal, National Museums, Festivals",
    "Suitable for all age groups",
    "Ontario and Quebec, Canada",
    "Cultural Exploration, Festivals, Sightseeing",
    "English, French",
    "Capital Discoveries Tours",
    "2-3 days",
    "CAD 150 to CAD 500 per person",
}; 
				details[32] = (struct place{
    "Pacific Coast Paradise",
    "Vancouver: Where Nature and Culture Coexist",
    "Granville Island, Gastown, Grouse Mountain, Capilano Suspension Bridge",
    "Suitable for all age groups",
    "British Columbia, Canada",
    "Cultural Exploration, Outdoor Adventures, City Sights",
    "English",
    "West Coast Expeditions",
    "3-5 days",
    "CAD 250 to CAD 800 per person",
};
*/

printf("Welcome to the start of your incredible travel adventure! Your journey commences right here. Join us as we embark on a global exploration together! \n");

    


    return 0;
}
