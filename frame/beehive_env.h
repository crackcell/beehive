/* -*- encoding: utf-8; indent-tabs-mode: nil -*- */

/***************************************************************
 *
 * Copyright (c) 2014, Menglong TAN <tanmenglong@gmail.com>
 *
 * This program is free software; you can redistribute it
 * and/or modify it under the terms of the GPL licence
 *
 **************************************************************/

#ifndef _BEEHIVE_ENV_H_
#define _BEEHIVE_ENV_H_

/**
 * 
 *
 * @file beehive_env.h
 * @author Menglong TAN <tanmenglong@gmail.com>
 * @date Thu Jan  9 16:41:07 2014
 *
 **/

#include <string>
#include <tbb/concurrent_hash_map.h>

typedef tbb::concurrent_hash_map<std::string, std::string> beehive_env_hashmap;

struct beehive_env {
  beehive_env_hashmap *dict;
};

extern struct beehive_env env;

bool beehive_env_init();
void beehive_env_free();

const char * beehive_getenv(const char *key);
void beehive_setenv(const char *key, const char *value);

#endif /* _BEEHIVE_ENV_H_ */

/* vim: set expandtab shiftwidth=2 tabstop=2: */
