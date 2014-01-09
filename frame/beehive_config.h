/* -*- encoding: utf-8; indent-tabs-mode: nil -*- */

/***************************************************************
 *
 * Copyright (c) 2014, Menglong TAN <tanmenglong@gmail.com>
 *
 * This program is free software; you can redistribute it
 * and/or modify it under the terms of the GPL licence
 *
 **************************************************************/

#ifndef _BEEHIVE_CONFIG_H_
#define _BEEHIVE_CONFIG_H_

/**
 * 
 *
 * @file beehive_config.h
 * @author Menglong TAN <tanmenglong@gmail.com>
 * @date Thu Jan  9 10:35:30 2014
 *
 **/

struct beehive_config {
  int thread;
  const char * ip;
  int port;
  const char * logger;
};

#endif /* _BEEHIVE_CONFIG_H_ */

/* vim: set expandtab shiftwidth=2 tabstop=2: */
