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
 * Main routine
 *
 * @file beehive_main.cc
 * @author Menglong TAN <tanmenglong@gmail.com>
 * @date Wed Jan  8 23:55:34 2014
 *
 **/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <getopt.h>
#include <signal.h>

#include "beehive_env.h"

static void
usage(const char *program_name) {
  printf("usage: %s conf_file\n", program_name);
}

/*
static int
optint(const char *key, int opt) {
  const char * str = NULL; //skynet_getenv(key);
  if (str == NULL) {
    char tmp[20];
    sprintf(tmp, "%d", opt);
    return opt;
  }
  return (int)strtol(str, NULL, 10);
}

static const char *
optstring(const char *key,const char * opt) {
  const char * str = NULL; //skynet_getenv(key);
  if (str == NULL) {
    return opt;
  }
  return str;
}
*/

int
sigign() {
  struct sigaction sa;
  sa.sa_handler = SIG_IGN;
  sigaction(SIGPIPE, &sa, 0);
  return 0;
}

int main(int argc, char *argv[]) {
  const char * config_file = "config";
  if (argc > 1) {
    config_file = argv[1];
  } else {
    usage(argv[0]);
    exit(1);
  }

  beehive_env_init();

  sigign();

  beehive_env_free();

  return 0;
}

/* vim: set expandtab shiftwidth=2 tabstop=2: */
