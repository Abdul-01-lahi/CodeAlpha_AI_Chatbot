#include <iostream>
#include <string>
#include <map>

std::map<std::string, std::string> responses = {
    {"hello", "Hello! How can I assist you today?"},
    {"how are you", "I'm just a computer program, but I'm doing well. How can I help you?"},
    {"bye", "Goodbye! Have a great day."},
    {"what's your name", "I'm just a chatbot, so I don't have a name. You can call me ChatBot."},
    {"tell me a joke", "Why don't scientists trust atoms? Because they make up everything!"},
    {"ohh", "Yes that's true"},
    {"who created you", "I was created by a team of developers."},
    {"what's the meaning of life", "The meaning of life is a philosophical question. It's different for everyone."},
    {"how's the weather", "I'm sorry, I don't have access to real-time weather information."},
    {"where do you live", "I exist in the digital realm, so you can find me wherever you have an internet connection."},
    {"how do you define happiness", "Happiness is a complex and subjective emotion, but it's often described as a state of well-being, contentment, and joy."},
    {"tell me a famous quote", "Here's a quote by Albert Einstein: 'Imagination is more important than knowledge.'"},
    {"what's the meaning of life", "The meaning of life is a profound philosophical question with various interpretations. Some find meaning in personal relationships, accomplishments, or spiritual beliefs."},
    {"tell me a joke", "Why did the scarecrow win an award? Because he was outstanding in his field!"},
    {"who painted the Mona Lisa", "The Mona Lisa was painted by the Italian artist Leonardo da Vinci."},
    {"what's the population of New York City", "As of the latest data, the population of New York City is over 8 million people."},
    {"tell me a fun animal fact", "Did you know that octopuses have three hearts? Two pump blood to the gills, and one pumps it to the rest of the body."},
    {"what's the fastest land animal", "The cheetah is the fastest land animal, capable of running at speeds of up to 70 miles per hour (112 kilometers per hour)."},
    {"who's the father of modern physics", "Albert Einstein is often regarded as the father of modern physics due to his groundbreaking work in the theory of relativity."},
    {"what's the most spoken language in the world", "Mandarin Chinese is the most spoken language in the world in terms of the number of native speakers."},
    {"tell me about space exploration", "Space exploration is the discovery and exploration of celestial structures in outer space. It has led to incredible discoveries about our universe."},
    {"what's the meaning of 'carpe diem'", "The Latin phrase 'carpe diem' translates to 'seize the day,' encouraging people to make the most of the present moment."},
    {"who's the author of 'To Kill a Mockingbird'", "Harper Lee is the author of the classic novel 'To Kill a Mockingbird.'"},
    {"tell me a historical fact", "In 1969, humans landed on the moon during NASA's Apollo 11 mission, marking a historic achievement in space exploration."},
    {"what's the largest desert in the world", "The largest desert in the world is the Antarctic Desert, followed by the Arctic Desert."},
    {"who's the first woman in space", "Valentina Tereshkova, a Soviet cosmonaut, became the first woman in space in 1963."},
    {"tell me a famous speech", "Martin Luther King Jr.'s 'I Have a Dream' speech is one of the most famous and impactful speeches in history."},
    {"what's the highest-grossing movie of all time", "As of now, the highest-grossing movie of all time is 'Avatar' by James Cameron."},
    {"who's the inventor of the World Wide Web", "Sir Tim Berners-Lee is credited with inventing the World Wide Web."},
    {"tell me about the Great Wall of China", "The Great Wall of China is a series of fortifications built to protect against invasions. It's a UNESCO World Heritage site and spans over 13,000 miles."},
    {"what's the currency of Japan", "The currency of Japan is the Japanese Yen (JPY)."},
    {"who's the famous detective created by Arthur Conan Doyle", "Sherlock Holmes is the famous detective created by Arthur Conan Doyle."},
    {"tell me a cooking tip", "When baking, use room-temperature eggs and butter for better results in your recipes."},
    {"what's the largest ocean in the world", "The Pacific Ocean is the largest ocean in the world, covering more area than all the landmasses combined."},
    {"who's the author of '1984'", "George Orwell is the author of the dystopian novel '1984.'"},
    {"tell me about renewable energy", "Renewable energy sources include solar, wind, and hydroelectric power, which can be harnessed to reduce the reliance on fossil fuels."},
    {"what's the smallest planet in our solar system", "Mercury is the smallest planet in our solar system."},
    {"who's the famous physicist known for the theory of relativity", "Albert Einstein is the famous physicist known for the theory of relativity."},
    {"who won the last World Series", "The last World Series was won by the Atlanta Braves."},
    {"tell me a fun fact", "Did you know that honey never spoils? Archaeologists have found pots of honey in ancient Egyptian tombs that are over 3,000 years old and still perfectly edible."},
    {"what's the capital of France", "The capital of France is Paris."},
    {"what's your favorite color", "I don't have personal preferences, but I think all colors are beautiful."},
    {"recommend a good book", "I recommend 'The Hitchhiker's Guide to the Galaxy' by Douglas Adams. It's a hilarious science fiction classic."},
    {"how tall is Mount Everest", "Mount Everest, the highest mountain in the world, stands at 29,032 feet (8,849 meters) above sea level."},
    {"what's the largest planet in our solar system", "Jupiter is the largest planet in our solar system."},
    {"what's the meaning of AI", "AI stands for Artificial Intelligence, which refers to the simulation of human intelligence in machines."},
    {"tell me a riddle", "Sure! What has keys but can't open locks?"},
    {"who's your favorite musician", "I don't have personal favorites, but I can suggest listening to Beethoven for classical music or The Beatles for rock."},
    {"how far is the moon from Earth", "The average distance to the moon is about 238,855 miles (384,400 kilometers)."},
    {"tell me a science joke", "Why do biologists look forward to casual Fridays? Because they're allowed to wear genes to work!"},
    {"what's the first programming language", "The first high-level programming language is considered to be Fortran, developed in the 1950s."},
    {"recommend a movie", "I recommend watching 'The Shawshank Redemption.' It's a classic film with a powerful story."},
    {"what's the largest mammal on Earth", "The blue whale is the largest mammal on Earth, and it's also the largest animal to have ever existed."},
    {"how does photosynthesis work", "Photosynthesis is the process by which plants convert sunlight into energy using chlorophyll and release oxygen as a byproduct."},
    {"tell me a travel tip", "When traveling, always carry a power bank to keep your devices charged, and don't forget to pack a universal adapter for different power outlets."},
    {"what's the national flower of Japan", "The cherry blossom, or sakura, is the national flower of Japan and holds cultural significance."},
    {"who wrote 'Romeo and Juliet'", "William Shakespeare wrote the famous play 'Romeo and Juliet.'"},
    {"what's your favorite food", "I don't eat, but I've heard that pizza and chocolate are popular choices for many people."},
    // Add more responses here
};

std::string getResponse(const std::string& input) {
    for (const auto& entry : responses) {
        if (input.find(entry.first) != std::string::npos) {
            return entry.second;
        }
    }
    return "I'm not sure how to respond to that.";
}

int main() {
    std::string user_input;

    std::cout << "Chatbot: Hello! How can I assist you today?" << std::endl;

    while (true) {
        std::cout << "You: ";
        std::getline(std::cin, user_input);

        if (user_input == "exit") {
            std::cout << "Chatbot: Goodbye!" << std::endl;
            break;
        }

        std::string response = getResponse(user_input);
        std::cout << "Chatbot: " << response << std::endl;

    }

    return 0;
}
