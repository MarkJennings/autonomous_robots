// This file contains groups of people to test a Social Planner in various scenarios
// Current options:
//   1) TODO: navigating hallway with static people
//   2) TODO: joining conversation between static people
//   3) TODO: avoiding surprise effect with static, unseen person
//   4) TODO: passing by dynamic person in hallway
//   5) TODO: navigating crowded, dynamic space

#ifndef SCENARIOS_CS393R_HH
#define SCENARIOS_CS393R_HH

#include "human.h"

namespace navigation{

/* ------- Human Population ----- */
static human::Human Peter;
static human::Human Susan;
static human::Human Andrew;
static human::Human Joydeep;
static human::Human Tongrui;

struct Scenario{
  int identifier;
  std::string description;
  std::vector<human::Human*> population;
  std::vector<Eigen::Vector2f> human_locs;
  std::vector<float> human_angles;
  std::vector<bool> seen;
};

static Scenario Scene1({1, "Navigating hallway with static people",
	{ &Joydeep, &Tongrui },
	{ {-10,16},  {-4,21} },
	{  M_PI/2 ,  -M_PI/2 },
	{  true   ,   true   }
});

static Scenario Scene2({2, "Approaching a group of people from behind",
	{  &Susan ,  &Peter },
	{ {-37,9} , {-39,10}},
	{-3*M_PI/4, -M_PI/2 },
	{  true   ,  true   }
});

static Scenario Scene3({3, "Avoiding surprise effect with static, unseen person",
	{ &Andrew },
	{{-23.8, 14}},
	{M_PI},
	{false}
});

static Scenario Scene4({4, "Passing by dynamic person in hallway",
	{ &Andrew },
	{{16,8}},
	{M_PI},
	{true}
});



}//namespace navigation

#endif