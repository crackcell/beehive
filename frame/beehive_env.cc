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
 * @file beehive_env.cc
 * @author Menglong TAN <tanmenglong@gmail.com>
 * @date Thu Jan  9 17:03:35 2014
 *
 **/

#include <stdio.h>

#include "beehive_env.h"

struct beehive_env env;

bool
beehive_env_init() {
  env.dict = new (std::nothrow) beehive_env_hashmap;
  if (env.dict == NULL) {
    fprintf(stderr, "malloc env hashmap fail\n");
    return false;
  }
  return true;
}

void
beehive_env_free() {
  delete env.dict;
  env.dict = NULL;
}

const char *
beehive_getenv(const char *key) {
  beehive_env_hashmap::const_accessor a;
  if (false == env.dict->find(a, key)) {
    return NULL;
  }
  return a->second.c_str();
}

void
beehive_setenv(const char *key, const char *value) {
  beehive_env_hashmap::accessor a;
  env.dict->insert(a, key);
  a->second = value;
}

/* vim: set expandtab shiftwidth=2 tabstop=2: */
