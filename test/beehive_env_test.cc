/* -*- encoding: utf-8; indent-tabs-mode: nil -*- */

/***************************************************************
 *
 * Copyright (c) 2014, Tan Menglong <tanmenglong@gmail.com>
 *
 * This program is free software; you can redistribute it
 * and/or modify it under the terms of the GPL licence
 *
 **************************************************************/

/**
 * 
 *
 * @file beehive_env_test.cc
 * @author Menglong TAN <tanmenglong@gmail.com>
 * @date Thu Jan  9 11:41:52 2014
 *
 **/

#include <stdio.h>
#include <gtest/gtest.h>

#include <beehive_env.h>

TEST(beehive_env, init_and_free) {
  beehive_env_init();
  beehive_env_free();
}

/* vim: set expandtab shiftwidth=2 tabstop=2: */
