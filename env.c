#include"main.h"
void envo()
{
    char *path,*lang,*sess,*comp,*shlv,*home,*cis,*dsess,*lname,*trm,*usr,*dis;
    usr = getenv("USER");
    lang = getenv("LANGUAGE");
    sess = getenv("SESSION");
    comp = getenv("COMPIZ_CONFIG_PROFILE");
    shlv = getenv("SHLVL");
    home = getenv("HOME");
    cis = getenv("C_IS");
    dsess = getenv("DESKTOP_SESSION");
    lname = getenv("LOGNAME");
    trm = getenv("TERM");
    path = getenv("PATH");
    dis = getenv("DISPLAY");

    printf("USER=%s\n",usr);
    printf("lang=%s\n",lang);
    printf("sess=%s\n",sess);
    printf("comp=%s\n",comp);
    printf("SHLVL=%s\n",shlv);
    printf("HOME=%s\n",home);
    printf("C_IS=%s\n",cis);
    printf("DESKTOP_SESSION=%s\n",dsess);
    printf("LOGNAME=%s\n",lname);
    printf("TERM=%s\n",trm);
    printf("PATH=%s\n",path);
    printf("DISPLAY=%s\n",dis);

}
