cmake_minimum_required(VERSION 3.12)
project(Observer)

set(CMAKE_CXX_STANDARD 14)

add_executable(Observer main.cpp ASubject.cpp ASubject.h DummyProduct.cpp DummyProduct.h IObserver.h SocialMedia.cpp SocialMedia.h)