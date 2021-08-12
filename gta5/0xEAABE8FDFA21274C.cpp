// offroad_races.ysc @ L9992
void func_211(struct<3> Param0)
{
  EVENT::REMOVE_ALL_SHOCKING_EVENTS(false);
  MISC::CLEAR_AREA(Param0, 100f, true, false, false, false);
  MISC::CLEAR_AREA_OF_PEDS(Param0, 100f, 0);
  MISC::CLEAR_AREA_OF_VEHICLES(Param0, 100f, false, false, false, false, false, false);
  MISC::CLEAR_AREA_OF_PROJECTILES(Param0, (100f * 5f), 0);
  FIRE::STOP_FIRE_IN_RANGE(Param0, 100f);
}