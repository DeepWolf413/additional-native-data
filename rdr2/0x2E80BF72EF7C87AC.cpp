// beat_horse_race.ysc @ L10229
void func_238()
{
  if (ENTITY::IS_ENTITY_AT_COORD(iLocal_411, 2817.42f, 457.66f, 55.66f, 5f, 5f, 15f, false, true, 0) && iLocal_1030 == 0)
  {
    iLocal_1030 = 1;
    GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_beat_horse_race_bridge_smk", 2814.21f, 452.12f, 63.7f, 0f, 0f, 0f, 1f, false, false, false);
  }
}