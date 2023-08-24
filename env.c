#include"main.h"

void env_shell()
{
char *user = getenv(“USER”);
printf(“USER=%s\n”, user);
char *lng = getenv(“LANGUAGE”);
printf(“LANGUAGE=%s\n”, lng);
char *sess = getenv(“SESSION”);
printf(“SESSION=%s\n”, sess);
char *comp = getenv(“COMPIZ_CONFIG_PROFILE”);
printf(“COMPIZ_CONFIG_PROFILE=%s\n”, comp);
char *shiv = getenv(“SHLVL”);
printf(“SHLVL=%s\n”, shiv);
char *hom = getenv(“HOME”);
printf(“HOME=%s\n”, hom);
char *user = getenv(“USER”);
printf(“C_IS\n”);
char *dsess = getenv(“DESKTOP_SESSION”);
printf(“DESKTOP_SESSION=%s\n”, dsess);
char *lname = getenv(“LOGNAME”);
printf(“LOGNAME=%s\n”, lname);
char *trm = getenv(“TERM”);
printf(“TERM=%s\n”, trm);
char *pth = getenv(“PATH”);
printf(“PATH=%s\n”, pth);
char *ds = getenv(“DISPLAY”);
printf(“DISPLAY=%s\n”, ds);


}
