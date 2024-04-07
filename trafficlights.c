#include <stdio.h>
#include <unistd.h>

// Define states of traffic lights
typedef enum {
    RED,
    YELLOW,
    GREEN
} TrafficLightState;

// Function to simulate traffic light behavior
void simulate_traffic_light() {
    TrafficLightState state = RED; // Initial state

    while (1) {
        switch (state) {
            case RED:
                printf("Traffic light: RED\n");
                sleep(10); // Time in seconds for red light
                state = GREEN;
                break;

            case YELLOW:
                printf("Traffic light: YELLOW\n");
                sleep(3); // Time in seconds for yellow light
                state = RED;
                break;

            case GREEN:
                printf("Traffic light: GREEN\n");
                sleep(10); // Time in seconds for green light
                state = YELLOW;
                break;
        }
    }
}

int main() {
    simulate_traffic_light();
    return 0;
}
