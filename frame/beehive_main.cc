/* -*- encoding: utf-8; indent-tabs-mode: nil -*- */

/***************************************************************
 *
 * Copyright (c) 2014, Menglong TAN <tanmenglong@gmail.com>
 *
 * This program is free software; you can redistribute it
 * and/or modify it under the terms of the GPL licence
 *
 **************************************************************/

/**
 * 
 *
 * @file beehive_main.cc
 * @author Menglong TAN <tanmenglong@gmail.com>
 * @date Wed Jan  8 23:55:34 2014
 *
 **/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>

/*
static int optint(const char *key, int opt) {
  const char * str = NULL; //skynet_getenv(key);
  if (str == NULL) {
    char tmp[20];
    sprintf(tmp,"%d",opt);
    //skynet_setenv(key, tmp);
    return opt;
  }
  return (int)strtol(str, NULL, 10);
}

static const char * optstring(const char *key,const char * opt) {
  const char * str = NULL; //skynet_getenv(key);
  if (str == NULL) {
    if (opt) {
      //skynet_setenv(key, opt);
    }
    return opt;
  }
  return str;
}
*/

int sigign() {
  struct sigaction sa;
  sa.sa_handler = SIG_IGN;
  sigaction(SIGPIPE, &sa, 0);
  return 0;
}

int main(int argc, char *argv[]) {
  const char * config_file = "config";
  if (argc > 1) {
    config_file = argv[1];
  }
  //skynet_env_init();

  sigign();

  return 0;
}

/* vim: set expandtab shiftwidth=2 tabstop=2: */
