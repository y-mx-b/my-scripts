#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef int bool;
#define true    1
#define false   0

int returnRandom(int upper) {
  unsigned int randval;
  FILE *f;
  f = fopen("/dev/random", "r");
  fread(&randval, sizeof(randval), 1, f);
  fclose(f);

  return (randval%upper + 1);
}

int main(int argc, char *argv[]) {
  int prompt;
  enum { COMMON_APP, RUTGERS } mode = COMMON_APP;
  size_t optind;
  for (optind = 1; optind < argc && argv[optind][0] == '-'; optind++) {
    switch(argv[optind][1]) {
    case 'c': mode = COMMON_APP; break;
    case 'r': mode = RUTGERS; break;
    default:
        fprintf(stderr, "Usage: %s [-cr]\n", argv[0]);
        exit(EXIT_FAILURE);
    }
  }
  argv += optind;

  srand(time(0));

  if (mode == COMMON_APP) {
    prompt = returnRandom(7);
    printf("Common App Prompt Number %d\n", prompt);
    switch (prompt) {
      case 1:
        printf("Some students have a background, identity, interest, or talent that is so meaningful they believe their application would be incomplete without it. If this sounds like you, then please share your story.\n");
        break;
      case 2:
        printf("The lessons we take from obstacles we encounter can be fundamental to later success. Recount a time when you faced a challenge, setback, or failure. How did it affect you, and what did you learn from the experience.\n");
        break;
      case 3:
        printf("Reflect on a time when you questioned or challenged a belief or idea. What prompted your thinking? What was the outcome?");
        break;
      case 4:
        printf("Reflect on something that someone has done for you that has made you happy or thankful in a surprising way. How has this gratitude affected or motivated you?");
        break;
      case 5:
        printf("Describe an accomplishment, event, or realization that sparked a period of personal growth and a new understanding of yourself or others.");
        break;
      case 6:
        printf("Describe a topic, idea, or concept you find so engaging that it makes you lose all track of time. Why does it captivate you? What or who do you turn to when you want to learn more?");
        break;
      case 7:
        printf("Share an essay on any topic of your choice. It can be one you've already written, one that responds to a different prompt, or one of your own design.");
        break;
      default:
        printf("you done messed up");
        break;
    }
  } else if (mode == RUTGERS) {
    prompt = returnRandom(5);
    printf("not yet dumb");
  }
  return 0;
}

