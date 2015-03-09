#!/usr/bin/env python3
# -*- mode: python; coding: utf-8 -*-

APPNAME = 'olib'
VERSION = '0.1.0'

subdirs = ['http']

def options(opt):
    opt.recurse(subdirs)

def configure(conf):
    conf.recurse(subdirs)

def build(bld):
    bld.recurse(subdirs)
